#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonActionWidget -FallbackName=CommonActionWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "PalUIActionWidgetBase.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalUIActionWidgetBase : public UCommonActionWidget {
    GENERATED_BODY()
public:
    UPalUIActionWidgetBase();

    UFUNCTION(BlueprintCallable)
    void OverrideImage(FSlateBrush OverrideBrush);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLocalizedDisplayText() const;
    
};

