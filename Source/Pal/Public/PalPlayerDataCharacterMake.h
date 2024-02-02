#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalPlayerDataCharacterMakeInfo.h"
#include "PalPlayerDataCharacterMake.generated.h"

UCLASS(Blueprintable)
class UPalPlayerDataCharacterMake : public UObject {
    GENERATED_BODY()
public:
    UPalPlayerDataCharacterMake();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FName GetRandomHeadMeshName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FName GetRandomHairMeshName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FName GetRandomBodyMeshName() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    void GetPresetMakeInfo(UObject* WorldContextObject, const FName& PresetName, FPalPlayerDataCharacterMakeInfo& OutMakeInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalPlayerDataCharacterMakeInfo GetMakeData() const;
    
};

