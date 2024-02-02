#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectRespawnPointModel.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectRespawnPointModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid LocationId;
    
public:
    UPalMapObjectRespawnPointModel();

};

