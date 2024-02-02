#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalOptimizeParameter.h"
#include "PalOptimizeParameterSetting.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalOptimizeParameterSetting : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOptimizeParameter Parameter;
    
    UPalOptimizeParameterSetting();

};

