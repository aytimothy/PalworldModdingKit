#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalBPClassDataRow.generated.h"

class APalCharacter;

USTRUCT(BlueprintType)
struct FPalBPClassDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalCharacter> BPClass;
    
    PAL_API FPalBPClassDataRow();
};

