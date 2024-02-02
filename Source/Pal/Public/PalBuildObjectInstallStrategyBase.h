#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalBuildObjectInstallStrategyBase.generated.h"

class APalBuildObject;

UCLASS(Abstract, Blueprintable)
class UPalBuildObjectInstallStrategyBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalBuildObject* TargetBuildObject;
    
public:
    UPalBuildObjectInstallStrategyBase();

};

