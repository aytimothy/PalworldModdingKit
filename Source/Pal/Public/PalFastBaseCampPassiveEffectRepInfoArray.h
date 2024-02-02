#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PalBaseCampPassiveEffectRepInfo.h"
#include "PalFastBaseCampPassiveEffectRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastBaseCampPassiveEffectRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalBaseCampPassiveEffectRepInfo> Items;
    
    PAL_API FPalFastBaseCampPassiveEffectRepInfoArray();
};

