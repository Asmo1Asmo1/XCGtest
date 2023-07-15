// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StartupParametersDisplayer.generated.h"

UCLASS()
class XCGTEST_API AStartupParametersDisplayer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStartupParametersDisplayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void Print(const TArray<FString>& Messages);
};
