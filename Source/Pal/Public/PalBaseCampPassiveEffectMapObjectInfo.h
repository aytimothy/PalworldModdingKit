#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalBaseCampPassiveEffectMapObjectInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampPassiveEffectMapObjectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> ConcreteModelInstanceIds;
    
    PAL_API FPalBaseCampPassiveEffectMapObjectInfo();
};

