#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalGameStateReplicatorBase.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPalGameStateReplicatorBase : public UObject {
    GENERATED_BODY()
public:
    UPalGameStateReplicatorBase();

};

