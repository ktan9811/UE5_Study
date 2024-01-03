// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BoomTankGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class BOOM_TANK_API ABoomTankGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	void ActorDied(AActor* DeadActor);

protected:
	virtual void BeginPlay();

private:
	class ATank* Tank;
	
};
