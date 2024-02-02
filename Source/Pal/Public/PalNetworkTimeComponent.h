#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalNetworkTimeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkTimeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkTimeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Client, Reliable)
    void PreNightSkip_ToClient();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NightSkip_ToClient();
    
};

