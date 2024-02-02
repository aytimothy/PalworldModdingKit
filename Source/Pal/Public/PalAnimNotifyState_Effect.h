#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraAnimNotifies -ObjectName=AnimNotifyState_TimedNiagaraEffect -FallbackName=AnimNotifyState_TimedNiagaraEffect
#include "PalAnimNotifyState_Effect.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class PAL_API UPalAnimNotifyState_Effect : public UAnimNotifyState_TimedNiagaraEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> UserParameterMap;
    
public:
    UPalAnimNotifyState_Effect();

};

