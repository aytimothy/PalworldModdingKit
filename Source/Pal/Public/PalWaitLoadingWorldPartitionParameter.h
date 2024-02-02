#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EWorldPartitionRuntimeCellState -FallbackName=EWorldPartitionRuntimeCellState
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldPartitionStreamingQuerySource -FallbackName=WorldPartitionStreamingQuerySource
#include "PalWaitLoadingWorldPartitionParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalWaitLoadingWorldPartitionParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWorldPartitionStreamingQuerySource QuerySource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWorldPartitionRuntimeCellState CellState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InFirstDelayTime;
    
    PAL_API FPalWaitLoadingWorldPartitionParameter();
};

