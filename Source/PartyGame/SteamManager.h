// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SteamManager.generated.h"

/**
 * 
 */
UCLASS()
class PARTYGAME_API USteamManager : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable) void InitSteam();

};
