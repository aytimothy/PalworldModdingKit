#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalWorkProgressUtility.generated.h"

class UObject;

UCLASS(Blueprintable)
class UPalWorkProgressUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalWorkProgressUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float WorkAmountToManMonth(const UObject* WorldContextObject, const float WorkAmount);
    
};

