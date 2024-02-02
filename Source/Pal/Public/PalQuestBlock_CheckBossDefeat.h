#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "EPalBossType.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_CheckBossDefeat.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock_CheckBossDefeat : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBossType CheckBossType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CheckTimerHandle;
    
public:
    UPalQuestBlock_CheckBossDefeat();

private:
    UFUNCTION(BlueprintCallable)
    void CheckFlag();
    
};

