#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalMapObjectSpawnerSaveData.h"
#include "PalMapObjectSpawnerInStageSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectSpawnerInStageSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalMapObjectSpawnerSaveData> SpawnerDataMapByLevelObjectInstanceId;
    
    PAL_API FPalMapObjectSpawnerInStageSaveData();
};

