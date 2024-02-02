#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalNPCOneTalkRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FPalNPCOneTalkRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* OneTalkData;
    
    PAL_API FPalNPCOneTalkRow();
};

