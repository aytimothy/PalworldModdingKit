#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalIncidentParameterDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FPalIncidentParameterDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Option;
    
    PAL_API FPalIncidentParameterDataTableRow();
};

