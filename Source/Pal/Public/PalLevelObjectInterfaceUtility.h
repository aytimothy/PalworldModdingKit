#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalLevelObjectInterfaceUtility.generated.h"

class IPalLevelObjectInterface;
class UPalLevelObjectInterface;

UCLASS(Blueprintable)
class UPalLevelObjectInterfaceUtility : public UObject {
    GENERATED_BODY()
public:
    UPalLevelObjectInterfaceUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGuid BP_GetLevelObjectInstanceId(TScriptInterface<IPalLevelObjectInterface> Target);
    
};

