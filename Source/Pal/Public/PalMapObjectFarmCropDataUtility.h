#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalMapObjectFarmCropData.h"
#include "PalStaticItemIdAndNum.h"
#include "PalMapObjectFarmCropDataUtility.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectFarmCropDataUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalMapObjectFarmCropDataUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MaterialInfos(const FPalMapObjectFarmCropData& Data, TArray<FPalStaticItemIdAndNum>& NewMaterialInfos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(FPalMapObjectFarmCropData& Data);
    
};

