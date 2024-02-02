#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalIncidentBroadcastParameter.h"
#include "PalNetworkInvaderComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalNetworkInvaderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkInvaderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnInvaderStart(const FPalIncidentBroadcastParameter& Parameter);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnInvaderEnd(const FPalIncidentBroadcastParameter& Parameter);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnInvaderArrived(const FPalIncidentBroadcastParameter& Parameter);
    
};

