#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalStageAreaVolume.generated.h"

class UDataLayerAsset;

UCLASS(Blueprintable)
class PAL_API APalStageAreaVolume : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataLayerAsset* RelatedDataLayerAsset;
    
public:
    APalStageAreaVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRelatedDataLayerAsset(UDataLayerAsset* DataLayerAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataLayerAsset* GetRelatedDataLayerAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FBox GetBoundingBox() const;
    
};

