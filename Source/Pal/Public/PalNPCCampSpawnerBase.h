#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalEnemyCampStatus.h"
#include "PalNPCCampSpawnerBase.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API APalNPCCampSpawnerBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CampSpawnerName;
    
    APalNPCCampSpawnerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcRemainRespawnTime(const FPalEnemyCampStatus& CampStatus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcRemainDespawnTime(const FPalEnemyCampStatus& CampStatus) const;
    
};

