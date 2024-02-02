#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "PalAIActionBase.h"
#include "PalAIActionBaseCampSpawningForWorker.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalAIActionBaseCampSpawningForWorker : public UPalAIActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSimpleMulticastDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleMulticastDelegate OnLandedWorldStaticDelegate;
    
    UPalAIActionBaseCampSpawningForWorker();

private:
    UFUNCTION(BlueprintCallable)
    void OnLanded(const FHitResult& Hit);
    
};

