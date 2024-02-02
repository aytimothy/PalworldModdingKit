#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalAmbientSoundLineBase.generated.h"

class UAkComponent;
class UBoxComponent;
class UPalAmbientSoundLineObject;

UCLASS(Blueprintable)
class PAL_API APalAmbientSoundLineBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ActivateTrigger;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalAmbientSoundLineObject* AmbinetSoundLineObject;
    
public:
    APalAmbientSoundLineBase(const FObjectInitializer& ObjectInitializer);

};

