#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalAutoDestroyActorHolder.generated.h"

class AActor;

UCLASS(Blueprintable)
class PAL_API UPalAutoDestroyActorHolder : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> HoldActors;
    
public:
    UPalAutoDestroyActorHolder();

    UFUNCTION(BlueprintCallable)
    void AddActor(AActor* TargetActor);
    
};

