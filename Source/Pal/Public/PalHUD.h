#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
#include "PalHUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class PAL_API APalHUD : public AHUD {
    GENERATED_BODY()
public:
    APalHUD(const FObjectInitializer& ObjectInitializer);

};

