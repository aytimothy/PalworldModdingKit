#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalLevelObjectInterface.h"
#include "PalMapObject.h"
#include "PalMapLevelObject.generated.h"

UCLASS(Blueprintable)
class PAL_API APalMapLevelObject : public APalMapObject, public IPalLevelObjectInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    FGuid LevelObjectInstanceId;
    
public:
    APalMapLevelObject(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetLevelObjectInstanceId() const;
    

    // Fix for true pure virtual functions not being implemented
};

