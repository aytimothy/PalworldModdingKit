#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalMapObjectWorldDisposer.generated.h"

class UPalMapObjectWorldDisposerBase;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectWorldDisposer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalMapObjectWorldDisposerBase*> WorldDisposers;
    
public:
    UPalMapObjectWorldDisposer();

};

