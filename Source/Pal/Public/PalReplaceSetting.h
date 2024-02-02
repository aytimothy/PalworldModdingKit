#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalReplaceSetting.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UPalReplaceSetting : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> CharacterIDReplacer;
    
    UPalReplaceSetting();

};

