#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIRequestID -FallbackName=AIRequestID
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EPathFollowingResult -FallbackName=EPathFollowingResult
#include "PalAIActionWorkerChildBase.h"
#include "PalAIActionWorkerApproachToWorkArea.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPalAIActionWorkerApproachToWorkArea : public UPalAIActionWorkerChildBase {
    GENERATED_BODY()
public:
    UPalAIActionWorkerApproachToWorkArea();

private:
    UFUNCTION(BlueprintCallable)
    void OnReceiveMoveCompleted(FAIRequestID AIRequestID, TEnumAsByte<EPathFollowingResult::Type> Result);
    
};

