#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "PalStageAreaInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalStageAreaInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBox BoundingBox;
    
    PAL_API FPalStageAreaInfo();
};

