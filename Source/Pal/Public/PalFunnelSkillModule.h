#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalFunnelSkillModule.generated.h"

class APalCharacter;
class APalFunnelCharacter;

UCLASS(Blueprintable)
class PAL_API UPalFunnelSkillModule : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalFunnelCharacter* FunnelCharacter;
    
public:
    UPalFunnelSkillModule();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldSetSkillAction() const;
    
    UFUNCTION(BlueprintCallable)
    void SetCharacter(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotifyFinishSkillAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalCharacter* GetCharacter() const;
    
};

