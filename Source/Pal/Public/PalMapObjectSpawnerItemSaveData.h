#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalMapObjectSpawnerItemSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectSpawnerItemSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NextLotteryGameTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid MapObjectInstanceId;
    
    PAL_API FPalMapObjectSpawnerItemSaveData();
};

