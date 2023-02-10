// Fill out your copyright notice in the Description page of Project Settings.


#include "PoseRecognition/HandPoseRecognition.h"

// Sets default values
AHandPoseRecognition::AHandPoseRecognition()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHandPoseRecognition::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHandPoseRecognition::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

