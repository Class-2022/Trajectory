// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "MyMainCharacter.h"
#include "DrawDebugHelpers.h"

void AMyPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();
    InputComponent->BindAction("Fire", IE_Pressed, this, &AMyPlayerController::SimulateTrajectory);
    InputComponent->BindAxis("MoveForward", this, &AMyPlayerController::MoveForward);
    InputComponent->BindAxis("MoveRight", this, &AMyPlayerController::MoveRight);
    InputComponent->BindAxis("Turn", this, &AMyPlayerController::Turn);
    InputComponent->BindAxis("LookUp", this, &AMyPlayerController::LookUp);
    InputComponent->BindAxis("TurnRate", this, &AMyPlayerController::Turn);
    InputComponent->BindAxis("LookUpRate", this, &AMyPlayerController::LookUp);

    AMyMainCharacter* MyCharacter = Cast<AMyMainCharacter>(GetPawn());
    if (MyCharacter)
    {
        UE_LOG(LogTemp, Warning, TEXT("Player Controller Possessing: %s"), *MyCharacter->GetName());
    }
}

void AMyPlayerController::Turn(float Value)
{
    AMyMainCharacter* MyCharacter = Cast<AMyMainCharacter>(GetPawn());

    if (MyCharacter)
    {
        MyCharacter->AddControllerYawInput(Value * GetWorld()->GetDeltaSeconds() * 400.f);
    }
}

void AMyPlayerController::LookUp(float Value)
{
    AMyMainCharacter* MyCharacter = Cast<AMyMainCharacter>(GetPawn());

    if (MyCharacter)
    {
        MyCharacter->AddControllerPitchInput(Value * GetWorld()->GetDeltaSeconds() * 400.f);
        MyCharacter->AddControllerYawInput(Value * GetWorld()->GetDeltaSeconds() * 400.f);
    }
}

void AMyPlayerController::MoveForward(float Value)
{
    // Get the controlled character
    AMyMainCharacter* MyCharacter = Cast<AMyMainCharacter>(GetPawn());

    if (MyCharacter)
    {
        // Calculate the forward vector and apply movement
        FVector ForwardVector = MyCharacter->GetActorForwardVector();
        MyCharacter->AddMovementInput(ForwardVector, Value);
    }
}

void AMyPlayerController::MoveRight(float Value)
{
    // Get the controlled character
    AMyMainCharacter* MyCharacter = Cast<AMyMainCharacter>(GetPawn());

    if (MyCharacter)
    {
        // Calculate the right vector and apply movement
        FVector RightVector = MyCharacter->GetActorRightVector();
        MyCharacter->AddMovementInput(RightVector, Value);
    }
}

void AMyPlayerController::SimulateTrajectory()
{
    AMyMainCharacter* MyCharacter = Cast<AMyMainCharacter>(GetPawn());

    if (MyCharacter)
    {
        FVector StartLocation = MyCharacter->GetActorLocation();
        FVector LaunchDirection = MyCharacter->GetActorForwardVector();
        float InitialSpeed = 1500.f; // Adjust the initial speed as needed
        float Gravity = -980.f; // Unreal uses cm/s^2, adjust as needed
        float BounceFactor = 0.8f; // Adjust the bounce factor as needed
        int32 MaxBounces = 3; // Maximum number of bounces, adjust as needed

        TArray<FVector> TrajectoryPoints;

        // Simulate trajectory using projectile motion equations with bouncing
        FVector CurrentPoint = StartLocation;
        FVector PreviousDirection = LaunchDirection;

        for (int32 BounceCount = 0; BounceCount < MaxBounces; ++BounceCount)
        {
            for (float Time = 0; Time <= 5.f; Time += 0.1f) // Simulate for 5 seconds, adjust as needed
            {
                FVector NextPoint = CurrentPoint + PreviousDirection * (InitialSpeed * Time) +
                    FVector(0.f, 0.f, 0.5f * Gravity * FMath::Square(Time));

                // Check for collision and update trajectory if bounced
                FHitResult HitResult;
                FCollisionQueryParams CollisionParams;
                CollisionParams.AddIgnoredActor(MyCharacter);

                if (GetWorld()->LineTraceSingleByChannel(HitResult, CurrentPoint, NextPoint, ECC_Visibility, CollisionParams))
                {
                    // Handle bouncing by reflecting the direction vector
                    FVector HitNormal = HitResult.ImpactNormal;
                    PreviousDirection = FMath::GetReflectionVector(PreviousDirection, HitNormal);
                    CurrentPoint = HitResult.ImpactPoint + HitNormal * 10.f; // Move slightly away from the hit point

                    TrajectoryPoints.Add(CurrentPoint);

                    // Draw the trajectory
                    DrawTrajectory(TrajectoryPoints);
                }
                else
                {
                    TrajectoryPoints.Add(NextPoint);
                }
            }
        }
    }
}
void AMyPlayerController::DrawTrajectory(const TArray<FVector>& TrajectoryPoints)
{
    for (int32 i = 0; i < TrajectoryPoints.Num() - 1; ++i)
    {
        DrawDebugLine(GetWorld(), TrajectoryPoints[i], TrajectoryPoints[i + 1], FColor::Green, false, 1, 0, 1);
    }
}
