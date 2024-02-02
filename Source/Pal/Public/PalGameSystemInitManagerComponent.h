#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModularGameplay -ObjectName=GameStateComponent -FallbackName=GameStateComponent
#include "PalGameSystemInitSequenceSet.h"
#include "PalGameSystemInitManagerComponent.generated.h"

class UPalGameSystemInitProcessHandle;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalGameSystemInitManagerComponent : public UGameStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalGameSystemInitSequenceSet> InitSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentSequenceIndex;
    
public:
    UPalGameSystemInitManagerComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnChangeProcessState(UPalGameSystemInitProcessHandle* ChangedProcessHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeProcessProgressRate(UPalGameSystemInitProcessHandle* ChangedProcessHandle);
    
};

