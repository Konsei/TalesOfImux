// Fill out your copyright notice in the Description page of Project Settings.


#include "ImuxSaveGame.h"


UImuxSaveGame::UImuxSaveGame()
{
	SaveSlotName = TEXT("TestSaveSlot");
	UserIndex = 0;

	CharacterStats.WeaponName = "";
	CharacterStats.LevelName = "";
}