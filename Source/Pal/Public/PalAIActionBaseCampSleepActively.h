#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalAIActionBaseCampSleepActivelyMode.h"
#include "PalAIActionBaseCampBase.h"
#include "PalAIActionBaseCampSleepActivelyParameter.h"
#include "PalAIActionWorkerInterruptInterface.h"
#include "PalAIActionBaseCampSleepActively.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalAIActionBaseCampSleepActively : public UPalAIActionBaseCampBase, public IPalAIActionWorkerInterruptInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid ReservedBedModelInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalAIActionBaseCampSleepActivelyMode Mode;
    
public:
    UPalAIActionBaseCampSleepActively();

    UFUNCTION(BlueprintCallable)
    void SetParameter(const FPalAIActionBaseCampSleepActivelyParameter& Parameter);
    

    // Fix for true pure virtual functions not being implemented
};

