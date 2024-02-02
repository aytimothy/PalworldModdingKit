#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalOtomoAttackStopJudgeByBall.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalOtomoAttackStopJudgeByBall : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsProhibitAttack;
    
public:
    UPalOtomoAttackStopJudgeByBall();

};

