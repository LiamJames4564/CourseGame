// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Beacon.generated.h"

UCLASS()
class COURSEGAME_API ABeacon : public AActor
{

GENERATED_BODY()

public:

    ABeacon();


    UFUNCTION(BlueprintPure, Category = "Beacon")

    float GetCharge() const { return Charge; }


    UFUNCTION(BlueprintCallable, Category = "Beacon")

    void AddCharge(float Amount);

protected:

    virtual void BeginPlay() override;


    UFUNCTION(BlueprintImplementableEvent, Category = "Beacon")

    void OnChargeChanged(float NewCharge);

private:

    UPROPERTY(EditDefaultsOnly, Category = "Beacon",

        meta = (ClampMin = "0.0", ClampMax = "100.0"))

    float Charge = 0.0f;

};