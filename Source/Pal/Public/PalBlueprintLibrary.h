#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalInstanceID.h"
#include "PalBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class UPalBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_PalInstanceIDPalInstanceID(FPalInstanceID A, FPalInstanceID B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_PalInstanceIDPalInstanceID(FPalInstanceID A, FPalInstanceID B);
    
};

