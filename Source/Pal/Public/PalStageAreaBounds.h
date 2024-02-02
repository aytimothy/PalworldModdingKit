#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalStageAreaBounds.generated.h"

UCLASS(Blueprintable)
class PAL_API APalStageAreaBounds : public AActor {
    GENERATED_BODY()
public:
    APalStageAreaBounds(const FObjectInitializer& ObjectInitializer);

};

