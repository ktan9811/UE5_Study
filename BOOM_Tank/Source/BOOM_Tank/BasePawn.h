// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

// 탱크와 터렛으로 구성 된 게임의 베이스 폰
// 캡슐 + 바디 + 터렛 + 탄약 스포너로 구성
// 터렛 회전, 발포 기능이 포함 됨

UCLASS()
class BOOM_TANK_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();

	void HandleDestruction();

protected:
	void RotateTurret(FVector LookAtTarget);
	void Fire();

private:											//캡슐 + 바디 + 터렛 + 탄약스포너가 포함됨

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component", meta = (AllowPrivateAccess = "true"))
	class UCapsuleComponent* CapsuleComponent;		//CapsuleComponent 생성

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* BaseMesh;					//BaseMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* TurretMesh;				//TurretMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component", meta = (AllowPrivateAccess = "true"))
	USceneComponent* ProjectileSpawnPoint;			//ProjectileSpawnPoint;


	UPROPERTY(EditAnyWhere, Category = "Combat")	//UClass 생성
	TSubclassOf<class AProjectile> ProjectileClass;
};
