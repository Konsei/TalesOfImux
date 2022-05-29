// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Main.h"
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ImuxSaveGame.generated.h"
/**
 * 
 */
UCLASS()
class TALESOFIMUX_API UImuxSaveGame : public USaveGame
{
	GENERATED_BODY()

public:

	UImuxSaveGame();

	UPROPERTY(VisibleAnywhere, Category = Basic)
	FCharacterStats CharacterStats;


	UPROPERTY(VisibleAnywhere, Category = Basic)
		FString SaveSlotName;

	UPROPERTY(VisibleAnywhere, Category = Basic)
		uint32 UserIndex;

};
