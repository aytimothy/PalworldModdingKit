#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalBaseCampPassiveEffectMapObjectInfo.h"
#include "PalBaseCampPassiveEffectBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UPalBaseCampPassiveEffectBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalBaseCampPassiveEffectMapObjectInfo> MapObjectInfoMapByMapObjectId;
    
public:
    UPalBaseCampPassiveEffectBase();

};

