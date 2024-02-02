#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalMapObjectConcreteModelModuleBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UPalMapObjectConcreteModelModuleBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTriggeredOnSpawnedReady;
    
public:
    UPalMapObjectConcreteModelModuleBase();

};

