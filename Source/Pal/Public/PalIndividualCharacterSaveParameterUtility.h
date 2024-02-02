#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalIndividualCharacterSaveParameter.h"
#include "PalIndividualCharacterSaveParameterUtility.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPalIndividualCharacterSaveParameterUtility : public UObject {
    GENERATED_BODY()
public:
    UPalIndividualCharacterSaveParameterUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(const FPalIndividualCharacterSaveParameter& SaveParameter);
    
};

