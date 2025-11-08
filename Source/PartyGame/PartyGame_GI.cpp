// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyGame_GI.h"
#include "steam/steam_api.h"
#include <Kismet/KismetSystemLibrary.h>

void UPartyGame_GI::Init()
{
	Super::Init();
	
	steamManager->InitSteam();
}

void UPartyGame_GI::SetAchievement(FString _id)
{
	if (!SteamUserStats())
	{
		UKismetSystemLibrary::PrintString(this, "CAN NOT GIVE THIS ACHIEVEMENT!", true, true, FLinearColor::Red, 100);
		return;
	}
	SteamUserStats()->SetAchievement(TCHAR_TO_ANSI(*_id));
}

void UPartyGame_GI::ClearAchievement(FString _id)
{
	if (!SteamUserStats())
	{
		UKismetSystemLibrary::PrintString(this, "CAN NOT CLEAR THIS ACHIEVEMENT!", true, true, FLinearColor::Red, 100);
		return;
	}
	SteamUserStats()->ClearAchievement(TCHAR_TO_ANSI(*_id));
}
