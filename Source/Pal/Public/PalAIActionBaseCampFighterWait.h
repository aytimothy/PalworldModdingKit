#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalAIActionBaseCampFighterChildBase.h"
#include "PalAIActionBaseCampFighterWait.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalAIActionBaseCampFighterWait : public UPalAIActionBaseCampFighterChildBase {
    GENERATED_BODY()
public:
    UPalAIActionBaseCampFighterWait();

protected:
    UFUNCTION(BlueprintCallable)
    bool TrySearchEnemy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetWaitLocation(FVector& Location);
    
};

