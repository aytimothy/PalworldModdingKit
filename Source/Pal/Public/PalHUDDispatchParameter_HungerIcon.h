#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_HungerIcon.generated.h"

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_HungerIcon : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsExistFood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid BelongGroupId;
    
    UPalHUDDispatchParameter_HungerIcon();

};

