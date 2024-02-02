#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_PalBox.generated.h"

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_PalBox : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid BaseCampId;
    
    UPalHUDDispatchParameter_PalBox();

};

