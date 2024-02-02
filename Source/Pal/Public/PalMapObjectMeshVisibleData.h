#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
#include "PalMapObjectMeshVisibleData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectMeshVisibleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference MeshComponentRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibleHpPercentageThreshold;
    
    PAL_API FPalMapObjectMeshVisibleData();
};

