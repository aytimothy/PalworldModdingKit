#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalPlayerDamageCamShakeRegulator.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class PAL_API UPalPlayerDamageCamShakeRegulator : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DamageCameraShakeTable;
    
public:
    UPalPlayerDamageCamShakeRegulator();

};

