#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalStageInstanceId.h"
#include "PalMapObjectModelInitializeExtraParameterSpawner.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectModelInitializeExtraParameterSpawner : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid OwnerSpawnerLevelObjectInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalStageInstanceId OwnerSpawnerStageInstanceId;
    
    UPalMapObjectModelInitializeExtraParameterSpawner();

};

