#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalPlayerDataInventoryInfo.h"
#include "PalPlayerDataStorage.generated.h"

class UPalItemContainerMultiHelper;
class UPalPlayerDataPalStorage;

UCLASS(Blueprintable)
class UPalPlayerDataStorage : public UObject {
    GENERATED_BODY()
public:
    UPalPlayerDataStorage();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalPlayerDataPalStorage* GetPalStorage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetInventoryInfo(FPalPlayerDataInventoryInfo& outInventoryInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalItemContainerMultiHelper* GetInventoryContainers();
    
};

