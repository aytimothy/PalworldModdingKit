#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalGuildPalStorage.generated.h"

class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class UPalGuildPalStorage : public UObject {
    GENERATED_BODY()
public:
    UPalGuildPalStorage();

private:
    UFUNCTION(BlueprintCallable)
    void OnNotifiedRemovedCharacterFromPalBoxInServer(UPalIndividualCharacterHandle* Handle);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifiedObtainCharacterInServer(UPalIndividualCharacterHandle* Handle);
    
};

