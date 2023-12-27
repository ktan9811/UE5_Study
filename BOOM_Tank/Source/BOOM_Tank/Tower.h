// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tower.generated.h"


 // Ÿ���� ��ũ�� ��Ÿ��� ���� �� �ൿ
 // 1. ��ũ�� ��Ÿ��� ������
 // 2. ��ũ �������� �ͷ��� ȸ��
 // 3. ���� �ð����� ����

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
	class ATank* Tank;				//��ũ���� �Ÿ��� ���

	UPROPERTY(EditDefaultsOnly)
	float FireRange = 1000.0f;

	FTimerHandle FireRateTimerHandle;
	float FireRate = 2.0f;
	void CheckFireCondition();

	bool InFireRange();
};
