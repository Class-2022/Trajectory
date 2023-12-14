// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyMainCharacter.generated.h"

UCLASS()
class MYTRAJECTORYGAME_API AMyMainCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    AMyMainCharacter();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    void SimulateProjectileTrajectory();

private:
    UPROPERTY(EditAnywhere, Category = "Projectile")
    float InitialSpeed = 1000.f;

    UPROPERTY(EditAnywhere, Category = "Projectile")
    float Gravity = -980.f;

    UPROPERTY(EditAnywhere, Category = "Projectile")
    int32 Precision = 20;

    void HandleProjectileCollision(const FVector& Start, const FVector& End);
    void DrawBounceLine(const FVector& Start, const FVector& End);
};

