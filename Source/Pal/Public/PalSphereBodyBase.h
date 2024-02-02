#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalSphereBodyBase.generated.h"

UCLASS(Blueprintable)
class APalSphereBodyBase : public AActor {
    GENERATED_BODY()
public:
    APalSphereBodyBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RPCDummy();
    
};

