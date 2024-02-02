#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalNPCTalkData.h"
#include "PalNPCTalkDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FPalNPCTalkDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalNPCTalkData> TalkData;
    
    PAL_API FPalNPCTalkDataTableRow();
};

