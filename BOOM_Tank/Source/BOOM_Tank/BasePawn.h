// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

// ��ũ�� �ͷ����� ���� �� ������ ���̽� ��
// ĸ�� + �ٵ� + �ͷ� + ź�� �����ʷ� ����
// �ͷ� ȸ��, ���� ����� ���� ��

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

private:											//ĸ�� + �ٵ� + �ͷ� + ź�ེ���ʰ� ���Ե�

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component", meta = (AllowPrivateAccess = "true"))
	class UCapsuleComponent* CapsuleComponent;		//CapsuleComponent ����

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* BaseMesh;					//BaseMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* TurretMesh;				//TurretMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component", meta = (AllowPrivateAccess = "true"))
	USceneComponent* ProjectileSpawnPoint;			//ProjectileSpawnPoint;


	UPROPERTY(EditAnyWhere, Category = "Combat")	//UClass ����
	TSubclassOf<class AProjectile> ProjectileClass;
};
