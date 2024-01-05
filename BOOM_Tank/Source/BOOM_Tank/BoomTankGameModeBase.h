// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BoomTankGameModeBase.generated.h"


// �⺻ ���Ӹ��
// ���� ���� �� Player���� Tank �Ҵ�
// ���۽� N �� �ĺ��� ������ �����ϰ�
// �׾��� �� ��Ʈ�� �Ұ��� �ϰ�



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
