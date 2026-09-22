// Fill out your copyright notice in the Description page of Project Settings.

#include "Beacon.h"
ABeacon::ABeacon()

{

    PrimaryActorTick.bCanEverTick = false;

}

void ABeacon::BeginPlay()

{

    Super::BeginPlay();


    Charge = FMath::Clamp(Charge, 0.0f, 100.0f);


    // Apply the initial appearance when the game starts.    OnChargeChanged(Charge);

}

void ABeacon::AddCharge(float Amount)

{

    const float NewCharge =

        FMath::Clamp(Charge + Amount, 0.0f, 100.0f);


    if (NewCharge != Charge)

    {

        Charge = NewCharge;

        OnChargeChanged(Charge);

    }

}
