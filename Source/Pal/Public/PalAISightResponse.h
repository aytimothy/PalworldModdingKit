#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalAISightResponse.generated.h"

class UPalAISightResponsePreset;

UCLASS(Blueprintable)
class PAL_API UPalAISightResponse : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalAISightResponsePreset* SightResponsePreset;
    
public:
    UPalAISightResponse();

};

