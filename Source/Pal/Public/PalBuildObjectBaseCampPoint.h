#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "PalBuildObject.h"
#include "PalBuildObjectBaseCampPoint.generated.h"

UCLASS(Blueprintable)
class PAL_API APalBuildObjectBaseCampPoint : public APalBuildObject {
    GENERATED_BODY()
public:
    APalBuildObjectBaseCampPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform GetWorkerSpawnLocalTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform GetFastTravelLocalTransform() const;
    
};

