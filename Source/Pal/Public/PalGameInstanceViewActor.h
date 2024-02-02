#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalGameInstanceViewActor.generated.h"

class UObject;

UCLASS(Blueprintable)
class APalGameInstanceViewActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> Target;
    
    APalGameInstanceViewActor(const FObjectInitializer& ObjectInitializer);

};

