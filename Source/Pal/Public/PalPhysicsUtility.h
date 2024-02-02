#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalPhysicsUtility.generated.h"

class UActorComponent;

UCLASS(Blueprintable)
class UPalPhysicsUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalPhysicsUtility();

    UFUNCTION(BlueprintCallable)
    static void SetCanEverAffectNavigation(UActorComponent* Component, bool bAffect);
    
};

