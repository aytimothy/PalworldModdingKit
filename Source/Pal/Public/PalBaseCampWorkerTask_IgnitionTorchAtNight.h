#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalBaseCampWorkerTaskBase.h"
#include "PalBaseCampWorkerTask_IgnitionTorchAtNight.generated.h"

class UPalMapObjectConcreteModelBase;

UCLASS(Blueprintable)
class PAL_API UPalBaseCampWorkerTask_IgnitionTorchAtNight : public UPalBaseCampWorkerTaskBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> TorchInstanceIds;
    
public:
    UPalBaseCampWorkerTask_IgnitionTorchAtNight();

private:
    UFUNCTION(BlueprintCallable)
    void OnNotAvailableMapObjectInServer(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION(BlueprintCallable)
    void OnAvailableMapObjectInServer(UPalMapObjectConcreteModelBase* ConcreteModel);
    
};

