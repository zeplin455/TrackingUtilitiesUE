// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CommonFunctions.generated.h"

/**
 * 
 */
UCLASS()
class TRACKINGUTILITIES_API UCommonFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Process")
	static void StartBackgroundProcess(const FString ExePath, const FString Args);
	
};
