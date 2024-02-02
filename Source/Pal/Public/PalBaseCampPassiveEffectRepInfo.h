#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "PalBaseCampPassiveEffectRepInfo.generated.h"

class UPalBaseCampPassiveEffectBase;

USTRUCT(BlueprintType)
struct FPalBaseCampPassiveEffectRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalBaseCampPassiveEffectBase* Effect;
    
    PAL_API FPalBaseCampPassiveEffectRepInfo();
};

