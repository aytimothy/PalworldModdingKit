#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalQuestRewardGiver.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalQuestRewardGiver : public UObject {
    GENERATED_BODY()
public:
    UPalQuestRewardGiver();

    UFUNCTION(BlueprintCallable)
    void TakeReward();
    
};

