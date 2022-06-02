// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

//생성자
AMyActor::AMyActor()
{
 	//Tick 함수가 매 프레임 호출하도록 설정하는 코드
	PrimaryActorTick.bCanEverTick = true;

	//언리얼 로그 출력
	UE_LOG(LogTemp, Log, TEXT("Constructor"));
}


void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Log, TEXT("BeginPlay"));
}


void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(LogTemp, Log, TEXT("Tick"));
}

