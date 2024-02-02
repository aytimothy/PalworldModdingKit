#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EAIRequestPriority -FallbackName=EAIRequestPriority
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EPalRequestSoftScriptPriorityAdd.h"
#include "PalAIActionBaseCampUtility.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalAIActionBaseCampUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalAIActionBaseCampUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EAIRequestPriority::Type> GetRequestSoftScriptPriority(const EPalRequestSoftScriptPriorityAdd AddPriority);
    
};

