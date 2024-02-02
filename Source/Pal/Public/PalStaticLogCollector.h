#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalStaticLogCollector.generated.h"

class UPalLogManager;
class UPalPlayerDataStorage;

UCLASS(Blueprintable)
class PAL_API UPalStaticLogCollector : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid overInventoryWeightId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalLogManager* targetLogManager;
    
public:
    UPalStaticLogCollector();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RegisterLogCollectEvent_BP();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReadyPlayerInventoryData(UPalPlayerDataStorage* PlayerDataStorage);
    
    UFUNCTION(BlueprintCallable)
    void OnOverWeightInventory(float nowWeight);
    
    UFUNCTION(BlueprintCallable)
    void OnFixedWeightInventory(float nowWeight);
    
    UFUNCTION(BlueprintCallable)
    void OnEndedWorldAutoSave(bool IsSuccess);
    
};

