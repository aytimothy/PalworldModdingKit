#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalIndividualCharacterSlotsObserver.generated.h"

class UPalIndividualCharacterContainer;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterSlot;

UCLASS(Blueprintable)
class UPalIndividualCharacterSlotsObserver : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUpdateContainerDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateContainerDelegate OnUpdateContainerDelegate;
    
    UPalIndividualCharacterSlotsObserver();

    UFUNCTION(BlueprintCallable)
    void OnUpdateSlot(UPalIndividualCharacterSlot* Slot, UPalIndividualCharacterHandle* LastHandle);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateContainerSlots(UPalIndividualCharacterContainer* Container);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnUpdateContainerSize(UPalIndividualCharacterContainer* Container);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateContainer(UPalIndividualCharacterContainer* Container);
    
};

