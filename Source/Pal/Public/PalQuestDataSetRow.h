#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalQuestDataSetRow.generated.h"

class UPalQuestData;

USTRUCT(BlueprintType)
struct FPalQuestDataSetRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPalQuestData> QuestData;
    
    PAL_API FPalQuestDataSetRow();
};

