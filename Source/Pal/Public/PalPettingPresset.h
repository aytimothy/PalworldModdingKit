#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalPettingParameter.h"
#include "PalPettingPresset.generated.h"

class AActor;

UCLASS(Blueprintable)
class PAL_API UPalPettingPresset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalPettingParameter SmallPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalPettingParameter SmallMiddlePreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalPettingParameter MediumPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalPettingParameter LargePreset;
    
    UPalPettingPresset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistance(AActor* Pal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraHeight(AActor* Pal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraCenterDistance(AActor* Pal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraArmLength(AActor* Pal);
    
};

