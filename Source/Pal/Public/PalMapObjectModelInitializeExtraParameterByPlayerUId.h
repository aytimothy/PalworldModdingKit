#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterByPlayerUId.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectModelInitializeExtraParameterByPlayerUId : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ByPlayerUId;
    
    UPalMapObjectModelInitializeExtraParameterByPlayerUId();

};

