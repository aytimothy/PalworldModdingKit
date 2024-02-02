#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "PalUIAimReticleMapObjectAssignableData.h"
#include "PalUserWidget.h"
#include "PalUIAimReticleBase.generated.h"

class UPalCharacterParameterComponent;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIAimReticleBase : public UPalUserWidget {
    GENERATED_BODY()
public:
    UPalUIAimReticleBase();

protected:
    UFUNCTION(BlueprintCallable)
    void TickDisplayOutline(const FHitResult& HitResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void IsAssignableToHitResult(const FHitResult& HitResult, UPalCharacterParameterComponent* checkCharacterParam, FPalUIAimReticleMapObjectAssignableData& outAssignableData);
    
};

