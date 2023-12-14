// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

UCLASS()
class MYTRAJECTORYGAME_API AMyPlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    virtual void SetupInputComponent() override;

    void Turn(float Value);

    void LookUp(float Value);

    void MoveForward(float Value);

    void MoveRight(float Value);

    void DrawTrajectory(const FVector& StartLocation, const FVector& LaunchDirection, float TrajectoryLength);

    void SimulateTrajectory();
    void DrawTrajectory(const TArray<FVector>& TrajectoryPoints);
    void DrawTrajectory(const FVector& StartLocation, const FVector& EndLocation);
};

