#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalFastMapObjectModelEffectRepInfoArray.h"
#include "PalMapObjectModelEffect.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectModelEffect : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalFastMapObjectModelEffectRepInfoArray RepInfoArray;
    
public:
    UPalMapObjectModelEffect();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

