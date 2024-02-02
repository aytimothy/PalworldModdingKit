#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalItemSlotPressType.h"
#include "PalUIBaseCampPartyModel.generated.h"

class UPalIndividualCharacterSlot;

UCLASS(Blueprintable)
class UPalUIBaseCampPartyModel : public UObject {
    GENERATED_BODY()
public:
    UPalUIBaseCampPartyModel();

    UFUNCTION(BlueprintCallable)
    void SelectHandleSlot(const int32 DisplayIndex, const EPalItemSlotPressType PressType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetSlotCountInPage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<UPalIndividualCharacterSlot*> GetCurrentPageSlots() const;
    
};

