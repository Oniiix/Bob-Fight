// Fill out your copyright notice in the Description page of Project Settings.


#include "SteamManager.h"
#include "steam/steam_api.h"
#include "Kismet/KismetSystemLibrary.h"
#include <Windows.h>
#include <cstdio>
#include <iostream>


void USteamManager::InitSteam()
{

    if (!SteamAPI_Init())
    {
        //LOG_W("ERROR");
        UE_LOG(LogTemp, Warning, TEXT("ERROR"))
            UKismetSystemLibrary::PrintString(this, "ERROR", true, true, FLinearColor::Red, 100);
    }
    if (SteamAPI_RestartAppIfNecessary(2906100))
    {
        //LOG_W("STEAM RESTART");
        UE_LOG(LogTemp,Warning,TEXT("STEAM RESTART"))
            UKismetSystemLibrary::PrintString(this, "STEAM RESTART", true, true, FLinearColor::Yellow, 100);
    }
    else
    {
        //LOG_W("STEAM CONNECT");
        UE_LOG(LogTemp, Warning, TEXT("STEAM CONNECT"))
            UKismetSystemLibrary::PrintString(this, "STEAM CONNECT", true, true, FLinearColor::Green, 100);
    }
}
