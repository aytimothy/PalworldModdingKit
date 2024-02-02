#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraShakeBase -FallbackName=CameraShakeBase
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayCameras -ObjectName=FOscillator -FallbackName=FOscillator
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayCameras -ObjectName=ROscillator -FallbackName=ROscillator
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayCameras -ObjectName=VOscillator -FallbackName=VOscillator
#include "PalCameraShakeBase.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalCameraShakeBase : public UCameraShakeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CurveAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OscillationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OscillationBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OscillationBlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FROscillator RotOscillation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVOscillator LocOscillation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFOscillator FOVOscillation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float OscillatorTimeRemaining;
    
    UPalCameraShakeBase();

};

