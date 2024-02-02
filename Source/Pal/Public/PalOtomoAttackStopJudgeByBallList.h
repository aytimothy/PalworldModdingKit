#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalOtomoAttackStopJudgeByBallList.generated.h"

class AActor;
class UPalOtomoAttackStopJudgeByBall;

UCLASS(Blueprintable)
class PAL_API UPalOtomoAttackStopJudgeByBallList : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalOtomoAttackStopJudgeByBall*> JudgeList;
    
public:
    UPalOtomoAttackStopJudgeByBallList();

    UFUNCTION(BlueprintCallable)
    void OnHitCaptureBall(AActor* Attacker);
    
};

