// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Enemy_Dinosaur.generated.h"

UCLASS()
class NOWONBROTHERS_API AEnemy_Dinosaur : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AEnemy_Dinosaur();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//boxComp에 UBoxComponent 포인터 변수
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="EnemySettings")
	class UBoxComponent* boxComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="EnemySettings")
	class UStaticMeshComponent* meshComp;



};
