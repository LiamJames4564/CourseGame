// Fill out your copyright notice in the Description page of Project Settings.
#include "AConfigurablePickup.h"

// Sets default values
AAConfigurablePickup::AAConfigurablePickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

// Called when the game starts or when spawned
void AAConfigurablePickup::BeginPlay()
{
	Super::BeginPlay();
}

void AAConfigurablePickup::ValidateScore()
{
	if (ScoreValue < 0)
	{
		UE_LOGFMT(LogTemp, Display, "Invalid Charge Amount Inputed! Defaulting to 10");
		ScoreValue = 10;
	}
}

