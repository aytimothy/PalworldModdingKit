#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PalLocationRepInfo.h"
#include "FastPalLocationRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FFastPalLocationRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalLocationRepInfo> Items;
    
    PAL_API FFastPalLocationRepInfoArray();
};

