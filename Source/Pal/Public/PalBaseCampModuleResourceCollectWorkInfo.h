#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalBaseCampModuleResourceCollectWorkInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampModuleResourceCollectWorkInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid WorkId;
    
    PAL_API FPalBaseCampModuleResourceCollectWorkInfo();
};

