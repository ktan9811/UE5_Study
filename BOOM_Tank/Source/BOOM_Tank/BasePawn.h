// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

UCLASS()
class BOOM_TANK_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:											//Ä¸½¶ + ¹Ùµð + ÅÍ·¿ + Åº¾à½ºÆ÷³Ê°¡ Æ÷ÇÔµÊ
	UPROPERTY()
	class UCapsuleComponent* CapsuleComponent;		//CapsuleComponent »ý¼º

	UPROPERTY()
	UStaticMeshComponent* BaseMesh;					//BaseMesh;

	UPROPERTY()
	UStaticMeshComponent* TurretMesh;				//TurretMesh;

	UPROPERTY()
	USceneComponent* ProjectileSpawnPoint;			//ProjectileSpawnPoint;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
