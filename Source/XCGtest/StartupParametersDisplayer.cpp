// Fill out your copyright notice in the Description page of Project Settings.


#include "StartupParametersDisplayer.h"
#include "Engine/Engine.h"

// Sets default values
AStartupParametersDisplayer::AStartupParametersDisplayer()
{
 	//Disable ticking
	PrimaryActorTick.bCanEverTick = false;
}

// Called when the game starts or when spawned
void AStartupParametersDisplayer::BeginPlay()
{
	Super::BeginPlay();

	const FString& StartupParameters = FCommandLine::Get();
	TArray<FString> Messages;
	Messages.Add("Launch arguments:");

	if (StartupParameters.IsEmpty()) {
		Messages.Add("NONE");
		Print(Messages);
		return;
	}

	TArray<FString> Parameters;
	StartupParameters.ParseIntoArray(Parameters, TEXT(" "), true);
	for (int i = 0; i < Parameters.Num(); i++) {
		Messages.Add(Parameters[i]);
	}

	Print(Messages);
}

//Print method to print array of string messages preservering the order
void AStartupParametersDisplayer::Print(const TArray<FString>& Messages)
{
	for (int i = 0; i < Messages.Num(); i++)
	{
		GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::White, Messages[i], false, FVector2D(1.5,1.5));
	}
}