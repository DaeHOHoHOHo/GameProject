// Fill out your copyright notice in the Description page of Project Settings.


#include "Fire.h"

// Sets default values
AFire::AFire()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFire::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFire::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

