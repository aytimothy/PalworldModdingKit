#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalMapObjectDefenseType.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectDefenseModelBase.generated.h"

class APalMapObject;

UCLASS(Blueprintable)
class UPalMapObjectDefenseModelBase : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    UPalMapObjectDefenseModelBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetLauncherControlMapObject(APalMapObject*& OutMapObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalMapObjectDefenseType GetDefenseType() const;
    
};

