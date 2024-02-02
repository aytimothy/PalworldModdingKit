#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalLongPressObject.generated.h"

UCLASS(Blueprintable)
class UPalLongPressObject : public UObject {
    GENERATED_BODY()
public:
    UPalLongPressObject();

private:
    UFUNCTION(BlueprintCallable)
    void ReleaseCallback();
    
    UFUNCTION(BlueprintCallable)
    void PressCallback();
    
    UFUNCTION(BlueprintCallable)
    void LongPressCallback();
    
};

