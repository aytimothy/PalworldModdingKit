#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalStageInstanceId.h"
#include "PalStagePlayerInfo.h"
#include "PalStageModelBase.generated.h"

class UPalStageModelBase;

UCLASS(Abstract, Blueprintable)
class PAL_API UPalStageModelBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalStageInstanceId InstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalStagePlayerInfo> PlayerInfos;
    
public:
    UPalStageModelBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnCompleteLoadStage_ServerInternal(UPalStageModelBase* TargetStageModel);
    
};

