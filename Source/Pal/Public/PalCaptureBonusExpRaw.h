#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalCaptureBonusExpRaw.generated.h"

USTRUCT(BlueprintType)
struct FPalCaptureBonusExpRaw : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BonusExp;
    
    PAL_API FPalCaptureBonusExpRaw();
};

