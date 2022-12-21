// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_Dinosaur.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AEnemy_Dinosaur::AEnemy_Dinosaur()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//충돌 박스를 생성
	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));

	//충돌 박스 컴포넌트를 루트 컴포넌트로 설정
	SetRootComponent(boxComp);

	//박스 콜리전의 크기를 가로*세로*높이 
	boxComp->SetBoxExtent(FVector(50.0f, 50.0f, 70.0f));

	//메쉬 컴포넌트를 생성
	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));

	meshComp->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AEnemy_Dinosaur::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemy_Dinosaur::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemy_Dinosaur::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

