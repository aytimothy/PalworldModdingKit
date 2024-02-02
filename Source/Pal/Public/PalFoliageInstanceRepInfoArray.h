#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PalFoliageInstanceRepInfo.h"
#include "PalFoliageInstanceRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFoliageInstanceRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalFoliageInstanceRepInfo> Items;
    
    PAL_API FPalFoliageInstanceRepInfoArray();
};

