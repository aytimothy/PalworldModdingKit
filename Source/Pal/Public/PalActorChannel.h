#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorChannel -FallbackName=ActorChannel
#include "PalActorChannel.generated.h"

UCLASS(Blueprintable, NonTransient)
class UPalActorChannel : public UActorChannel {
    GENERATED_BODY()
public:
    UPalActorChannel();

};

