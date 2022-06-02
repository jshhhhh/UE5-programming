// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class FIRSTCPP_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	/* 헤더 파일 : 클래스를 선언, 클래스에 속하는 변수와 함수의 원형을 선언하는 용도의 파일
	헤더 파일의 클래스에서는 함수의 원래 형태만 알려주기 때문에 함수의 내용이 없음 */
	
	//생성자 : 클래스의 객체가 생성될 때 한 번 호출되는 함수, 주로 생성된 액터의 프로퍼티(변수의 기본값)을 설정할 때 사용
	AMyActor();
protected:
	//액터가 배치된 월드에서 게임이 시작되거나 액터가 월드에 스폰되었을 때 한 번 호출되는 함수
	//게임플레이 로직을 초기화시키는 데 사용됨
	virtual void BeginPlay() override;

public:	
	/* Tick 함수 : 매 프레임마다 한 번씩 호출되는 함수
	//매개변수인 DeltaTime을 이용해서 Tick 함수가 지난 번에 호출된 이후로 얼마의 시간이 경과한 뒤에
	//다시 Tick 함수가 호출되었는지에 대한 시간을 전달받을 수 있음
	//액터가 활성화되어있는 동안 계속해서 호출되기 때문에 게임의 로직을 처리하는 기능을 구현하는 데 사용
	//지금 만드는 클래스에 매 프레임 호출되는 Tick 함수가 필요하지 않다면 함수를 제거해서 게임의 퍼포먼스를 상승시킬 수 있음
	//비활성화하기 위해서는 헤더 파일과 소스 파일에서 Tick 함수를 제거하고
	소스 파일의 생성자에서 PrimaryActorTick.bCanEverTick = true; 코드를 제거 */
	virtual void Tick(float DeltaTime) override;

};
