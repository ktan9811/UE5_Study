// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tower.generated.h"


 // 타워는 탱크가 사거리에 있을 떄 행동
 // 1. 탱크가 사거리에 들어오면
 // 2. 탱크 방향으로 회전
 // 3. 발포

UCLASS()
class BOOM_TANK_API ATower : public ABasePawn
{
	GENERATED_BODY()

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	class ATank* Tank;

	UPROPERTY(EditDefaultsOnly)
	float FireRange = 300.0f;
};
