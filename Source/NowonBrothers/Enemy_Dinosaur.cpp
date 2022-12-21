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

	//�浹 �ڽ��� ����
	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));

	//�浹 �ڽ� ������Ʈ�� ��Ʈ ������Ʈ�� ����
	SetRootComponent(boxComp);

	//�ڽ� �ݸ����� ũ�⸦ ����*����*���� 
	boxComp->SetBoxExtent(FVector(50.0f, 50.0f, 70.0f));

	//�޽� ������Ʈ�� ����
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

