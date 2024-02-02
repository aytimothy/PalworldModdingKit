#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalCharacter.h"
#include "PalCharacterOnCompleteInitializeParameterWrapper.generated.h"

class APalCharacter;

UCLASS(Blueprintable)
class UPalCharacterOnCompleteInitializeParameterWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalCharacter::FOnCompleteInitializeParameter OnCompleteInitializeParameterDelegate;
    
    UPalCharacterOnCompleteInitializeParameterWrapper();

    UFUNCTION(BlueprintCallable)
    void Broadcast(APalCharacter* Character) const;
    
};

