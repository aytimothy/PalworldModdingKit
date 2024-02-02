#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalBiomeType.h"
#include "PalInvaderStartPoint.generated.h"

UCLASS(Blueprintable)
class PAL_API APalInvaderStartPoint : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBiomeType BiomeType;
    
public:
    APalInvaderStartPoint(const FObjectInitializer& ObjectInitializer);

};

