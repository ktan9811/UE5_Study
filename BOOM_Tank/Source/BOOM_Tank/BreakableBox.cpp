// Fill out your copyright notice in the Description page of Project Settings.


#include "BreakableBox.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"

// Sets default values
ABreakableBox::ABreakableBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BoxMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));
	RootComponent = BoxMesh;
}

// Called when the game starts or when spawned
void ABreakableBox::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABreakableBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABreakableBox::HandleDesturction()
{
	if (DeathParticles) {
		UGameplayStatics::SpawnEmitterAtLocation(this, DeathParticles, GetActorLocation(), GetActorRotation());
	}
	Destroy();
}

