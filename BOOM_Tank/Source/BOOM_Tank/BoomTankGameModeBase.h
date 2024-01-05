// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BoomTankGameModeBase.generated.h"


// 기본 게임모드
// 게임 시작 시 Player에게 Tank 할당
// 시작시 N 초 후부터 조작이 가능하게
// 죽었을 시 컨트롤 불가능 하게



UCLASS()
class BOOM_TANK_API ABoomTankGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	void ActorDied(AActor* DeadActor);

protected:
	virtual void BeginPlay();

	UFUNCTION(BlueprintImplementableEvent)
	void StartGame();

private:
	class ATank* Tank;
	class ABoomTankPlayerController* BoomTankPlayerController;

	float StartDelay = 3.f;

	void HandleGameStart();
};
