#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalWorkAssign.h"
#include "PalWorkAssign_LevelObject.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalWorkAssign_LevelObject : public UPalWorkAssign {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid TargetMapObjectModelId;
    
public:
    UPalWorkAssign_LevelObject();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

