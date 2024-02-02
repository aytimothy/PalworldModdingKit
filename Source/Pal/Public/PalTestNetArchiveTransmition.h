#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalNetArchive.h"
#include "PalTestNetArchiveTransmition.generated.h"

UCLASS(Blueprintable)
class APalTestNetArchiveTransmition : public AActor {
    GENERATED_BODY()
public:
    APalTestNetArchiveTransmition(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SendTest();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRecieveTest(const FPalNetArchive& Ar);
    
};

