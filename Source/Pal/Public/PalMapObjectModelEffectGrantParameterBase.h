#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalMapObjectModelEffectGrantParameterBase.generated.h"

class UPalMapObjectModel;

UCLASS(Abstract, Blueprintable)
class PAL_API UPalMapObjectModelEffectGrantParameterBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalMapObjectModel* OwnerModel;
    
    UPalMapObjectModelEffectGrantParameterBase();

};

