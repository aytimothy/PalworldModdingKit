#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "PalQuestBlock.h"
#include "PalQuestBlock_BaseCampLevel.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock_BaseCampLevel : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequireLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NowBaseCampLevel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CheckTimerHandle;
    
public:
    UPalQuestBlock_BaseCampLevel();

private:
    UFUNCTION(BlueprintCallable)
    void OnTimer_CheckBaseCampLevel();
    
};

