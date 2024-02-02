#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalAISightJudgementType.h"
#include "Templates/SubclassOf.h"
#include "PalAISightResponsePreset.generated.h"

class APalCharacter;
class UPalAIActionBase;

UCLASS(Blueprintable)
class PAL_API UPalAISightResponsePreset : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFindDelegate, APalCharacter*, SelfCharacter, APalCharacter*, FoundCharacter);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalAISightJudgementType, TSubclassOf<UPalAIActionBase>> AIActionMap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFindDelegate AimedByPlayerDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalAISightJudgementType, FFindDelegate> DelegateMap;
    
    UPalAISightResponsePreset();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintDelegateSetup();
    
};

