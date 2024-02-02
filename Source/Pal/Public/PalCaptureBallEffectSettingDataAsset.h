#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EPalSizeType.h"
#include "PalCaptureBallEffectSettingData.h"
#include "PalCaptureBallEffectSettingDataAsset.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalCaptureBallEffectSettingDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalSizeType, FPalCaptureBallEffectSettingData> EffectSettingDataArray;
    
    UPalCaptureBallEffectSettingDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalCaptureBallEffectSettingData GetEffectSettingData(const EPalSizeType PalSizeType) const;
    
};

