#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalGuildPlayerInfo.h"
#include "PalGuildPlayerInfoUtility.generated.h"

UCLASS(Blueprintable)
class UPalGuildPlayerInfoUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalGuildPlayerInfoUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(const FPalGuildPlayerInfo& PlayerInfo);
    
};

