#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalItemAndNum.h"
#include "PalBaseCampModuleTransportItemCharacterInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampModuleTransportItemCharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalItemAndNum> ItemInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CharacterLocation;
    
    PAL_API FPalBaseCampModuleTransportItemCharacterInfo();
};

