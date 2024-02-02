#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalIncidentDynamicParameter.h"
#include "PalIncidentDynamicParameterInvader.generated.h"

UCLASS(Blueprintable)
class UPalIncidentDynamicParameterInvader : public UPalIncidentDynamicParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid TargetBaseCampId;
    
    UPalIncidentDynamicParameterInvader();

};

