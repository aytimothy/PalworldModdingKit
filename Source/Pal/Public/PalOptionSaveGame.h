#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "PalOptionSaveData.h"
#include "PalOptionSaveGame.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalOptionSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOptionSaveData OptionSaveData;
    
    UPalOptionSaveGame();

};

