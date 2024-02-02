#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalBaseCampFunctionModuleBase.h"
#include "PalBaseCampModuleMedical.generated.h"

class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;

UCLASS(Blueprintable)
class UPalBaseCampModuleMedical : public UPalBaseCampFunctionModuleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> ReviveWorkIds;
    
public:
    UPalBaseCampModuleMedical();

protected:
    UFUNCTION(BlueprintCallable)
    void OnReviveCharacter_ServerInternal(UPalIndividualCharacterParameter* IndividualParameter);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRemovedWorkerInServer(UPalIndividualCharacterHandle* IndividualHandle);
    
};

