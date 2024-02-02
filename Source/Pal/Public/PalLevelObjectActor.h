#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalLevelObjectInterface.h"
#include "PalLevelObjectActor.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API APalLevelObjectActor : public AActor, public IPalLevelObjectInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    FGuid LevelObjectInstanceId;
    
public:
    APalLevelObjectActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetLevelObjectInstanceId() const;
    

    // Fix for true pure virtual functions not being implemented
};

