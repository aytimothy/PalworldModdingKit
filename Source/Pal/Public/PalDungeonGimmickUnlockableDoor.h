#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalDungeonGimmickUnlockableDoor.generated.h"

UCLASS(Blueprintable)
class PAL_API APalDungeonGimmickUnlockableDoor : public AActor {
    GENERATED_BODY()
public:
    APalDungeonGimmickUnlockableDoor(const FObjectInitializer& ObjectInitializer);

};

