#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalAudioState.h"
#include "PalSpotAreaBase.generated.h"

class APalPlayerCharacter;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class PAL_API APalSpotAreaBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalAudioState AudioState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOverlappedLocalPlayer;
    
public:
    APalSpotAreaBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, APalPlayerCharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, APalPlayerCharacter* PlayerCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalAudioState GetAudioState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UPrimitiveComponent* GetAreaCollision() const;
    
};

