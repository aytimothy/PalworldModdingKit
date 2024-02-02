#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "PalWorkBase.h"
#include "PalWorkMonsterFarm.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalWorkMonsterFarm : public UPalWorkBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFloatInterval ActionIntervalSeconds;
    
public:
    UPalWorkMonsterFarm();

};

