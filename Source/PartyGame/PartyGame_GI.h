// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "SteamManager.h"
#include "PartyGame_GI.generated.h"

/**
 * 
 */
UCLASS()
class PARTYGAME_API UPartyGame_GI : public UGameInstance
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess)) USteamManager* steamManager = nullptr;
		
public:
	virtual void Init() override;

	UFUNCTION(BlueprintCallable) void SetAchievement(FString _id);
	UFUNCTION(BlueprintCallable) void ClearAchievement(FString _id);
};
