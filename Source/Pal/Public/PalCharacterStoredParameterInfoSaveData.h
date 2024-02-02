#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "GameDateTime.h"
#include "PalCharacterStoredParameterId.h"
#include "PalIndividualCharacterSaveParameterSaveData.h"
#include "PalCharacterStoredParameterInfoSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterStoredParameterInfoSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalCharacterStoredParameterId ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalIndividualCharacterSaveParameterSaveData SaveParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameDateTime StoredAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid LostPlayerUId;
    
    PAL_API FPalCharacterStoredParameterInfoSaveData();
};

