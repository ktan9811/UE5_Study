// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tank.generated.h"

// 1. 플레이어가 조작하는 탱크
// 2. 터렛과 바디가 따로 작동
// 3. WASD 입력을 받고 좌클릭으로 Fire 입력을 받음


UCLASS()
class BOOM_TANK_API ATank : public ABasePawn
{
	GENERATED_BODY()
	
public:
	ATank();
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component", meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArmComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component", meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

	UPROPERTY(EditAnyWhere, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float Speed = 100.f;

	UPROPERTY(EditAnyWhere, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float TurnRate = 10.f;


	void Move(float Val);
	void Turn(float Val);

	APlayerController* PlayerControllerRef;
};
