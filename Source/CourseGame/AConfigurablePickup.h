// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AConfigurablePickup.generated.h"

UCLASS()
class COURSEGAME_API AAConfigurablePickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAConfigurablePickup();

	UFUNCTION(BlueprintCallable, Category = "Pickup")

	void ValidateScore();

	UFUNCTION(BlueprintPure, Category = "Pickup")

	float GetValue() const { return ScoreValue; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:	
	UPROPERTY(EditInstanceOnly, Category = "Pickup")

	float ScoreValue = 0.0f;

};
