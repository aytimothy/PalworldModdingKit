#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PalStageModelRepInfo.h"
#include "PalFastStageModelRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastStageModelRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalStageModelRepInfo> Items;
    
    PAL_API FPalFastStageModelRepInfoArray();
};

