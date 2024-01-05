// Fill out your copyright notice in the Description page of Project Settings.


#include "BoomTankGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Tank.h"
#include "Tower.h"
#include "BoomTankPlayerController.h"
#include "TimerManager.h"

void ABoomTankGameModeBase::ActorDied(AActor* DeadActor)
{
	if (DeadActor == Tank) {
		Tank->HandleDestruction();
		if (BoomTankPlayerController)
		{
			BoomTankPlayerController->SetPlayerEnabledState(false);
		}
	}

	
	else if (ATower* DestroyedTower = Cast<ATower>(DeadActor)) {
		DestroyedTower->HandleDestruction();
	}
}

void ABoomTankGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	HandleGameStart();

}

void ABoomTankGameModeBase::HandleGameStart()
{
	Tank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));
	BoomTankPlayerController = Cast<ABoomTankPlayerController>(UGameplayStatics::GetPlayerController(this, 0));

	StartGame();

	if (BoomTankPlayerController)
	{
		BoomTankPlayerController->SetPlayerEnabledState(false);

		FTimerHandle PlayerEnableTimerHandle;
		FTimerDelegate PlayerEnableTimerDelegate = FTimerDelegate::CreateUObject(
			BoomTankPlayerController,
			&ABoomTankPlayerController::SetPlayerEnabledState,
			true
		);
		GetWorldTimerManager().SetTimer(
			PlayerEnableTimerHandle,
			PlayerEnableTimerDelegate,
			StartDelay,
			false
		);
	}
}
