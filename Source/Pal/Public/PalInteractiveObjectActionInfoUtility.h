#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalInteractiveObjectActionType.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveObjectActionBy.h"
#include "PalInteractiveObjectActionInfoSet.h"
#include "PalInteractiveObjectActionInfoUtility.generated.h"

UCLASS(Blueprintable)
class UPalInteractiveObjectActionInfoUtility : public UObject {
    GENERATED_BODY()
public:
    UPalInteractiveObjectActionInfoUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPalInteractiveObjectIndicatorType GetIndicatorType(const FPalInteractiveObjectActionInfoSet& ActionInfo, const EPalInteractiveObjectActionType ActionType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FPalInteractiveObjectActionBy CreateSituationInfo(const UObject* WorldContextObject);
    
};

