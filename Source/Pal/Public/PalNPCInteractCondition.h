#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalNPCInteractCondition.generated.h"

UCLASS(Blueprintable)
class UPalNPCInteractCondition : public UObject {
    GENERATED_BODY()
public:
    UPalNPCInteractCondition();

    UFUNCTION(BlueprintCallable)
    void SetResult(bool bResult);
    
};

