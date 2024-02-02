#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalDeathPenaltyList.h"
#include "PalDeathPenaltyManager.generated.h"

class APalPlayerCharacter;

UCLASS(Blueprintable)
class PAL_API UPalDeathPenaltyManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StageDeathPenaltyRayStartHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StageDeathPenaltyChestRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StageDeathPenaltySpaceWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StageDeathPenaltySpaceDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalDeathPenaltyList> DeathPenaMap;
    
public:
    UPalDeathPenaltyManager();

    UFUNCTION(BlueprintCallable)
    void DropDeathPenaltyChest(APalPlayerCharacter* Player);
    
};

