#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalUIPaldexDistributionLocationStruct.h"
#include "PalUIPaldexDistributionData.generated.h"

USTRUCT(BlueprintType)
struct FPalUIPaldexDistributionData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalUIPaldexDistributionLocationStruct dayTimeLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalUIPaldexDistributionLocationStruct nightTimeLocations;
    
    PAL_API FPalUIPaldexDistributionData();
};

