#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PalWorkAssignRepInfo.h"
#include "PalFastWorkAssignRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastWorkAssignRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalWorkAssignRepInfo> Items;
    
    PAL_API FPalFastWorkAssignRepInfoArray();
};

