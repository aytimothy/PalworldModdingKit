#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "EPalTutorialTriggerType.h"
#include "PalTutorialTriggerBase.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API UPalTutorialTriggerBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Checked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanTriggerMultiple;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TutorialMsgID;
    
    UPalTutorialTriggerBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalTutorialTriggerType GetType() const;
    
};

