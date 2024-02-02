#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalWorldObjectRecorderBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UPalWorldObjectRecorderBase : public UObject {
    GENERATED_BODY()
public:
    UPalWorldObjectRecorderBase();

};

