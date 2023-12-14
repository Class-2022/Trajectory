// Fill out your copyright notice in the Description page of Project Settings.


#include "MyMainCharacter.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"

AMyMainCharacter::AMyMainCharacter()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AMyMainCharacter::BeginPlay()
{
    Super::BeginPlay();
}

void AMyMainCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AMyMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AMyMainCharacter::SimulateProjectileTrajectory()
{
    APlayerController* PlayerController = Cast<APlayerController>(GetController());

    if (PlayerController)
    {
        FVector Start = GetActorLocation();
        FVector LaunchVelocity = GetActorForwardVector() * InitialSpeed;
        float TimeOfFlight = (2 * LaunchVelocity.Z) / -Gravity;
        float DeltaTime = TimeOfFlight / Precision;

        for (int32 i = 0; i <= Precision; ++i)
        {
            float Time = i * DeltaTime;
            FVector End = Start + LaunchVelocity * Time + 0.5f * FVector(0, 0, Gravity) * FMath::Square(Time);

            FHitResult HitResult;
            FCollisionQueryParams CollisionParams;
            CollisionParams.AddIgnoredActor(this);

            if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, CollisionParams))
            {
                HandleProjectileCollision(Start, HitResult.ImpactPoint);
                return;
            }

            DrawDebugLine(GetWorld(), Start, End, FColor::Green, false, 0, 0, 1);

            Start = End;
        }
    }
}

void AMyMainCharacter::HandleProjectileCollision(const FVector& Start, const FVector& End)
{
    DrawBounceLine(Start, End);
}

void AMyMainCharacter::DrawBounceLine(const FVector& Start, const FVector& End)
{
    DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 0, 0, 2);
}


