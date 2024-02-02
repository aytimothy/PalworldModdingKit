#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalMapObjectOperationResult.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalMapObjectSpawnerSingleBase.h"
#include "PalMapObjectSpawnerSimple.generated.h"

UCLASS(Blueprintable)
class PAL_API APalMapObjectSpawnerSimple : public APalMapObjectSpawnerSingleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_MapObjectData MapObjectId;
    
public:
    APalMapObjectSpawnerSimple(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnFinishedSpawningMapObjectModel(FGuid InstanceId, const EPalMapObjectOperationResult Result);
    
};

