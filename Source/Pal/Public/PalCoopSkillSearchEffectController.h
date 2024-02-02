#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalCoopSkillSearchEffectController.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalCoopSkillSearchEffectController : public UObject {
    GENERATED_BODY()
public:
    UPalCoopSkillSearchEffectController();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start(const FVector& Origin, float RadiusFrom, float RadiusTo, float ExtRadiusPerSec);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsFinished() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void End();
    
};

