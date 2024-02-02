#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalAIControllerBaseCampStatus.generated.h"

class UPalBaseCampModel;

UCLASS(Blueprintable)
class UPalAIControllerBaseCampStatus : public UObject {
    GENERATED_BODY()
public:
    UPalAIControllerBaseCampStatus();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetBaseCampId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalBaseCampModel* GetBaseCamp() const;
    
};

