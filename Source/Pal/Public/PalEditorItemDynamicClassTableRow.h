#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Templates/SubclassOf.h"
#include "PalEditorItemDynamicClassTableRow.generated.h"

class UPalDynamicItemDataBase;

USTRUCT(BlueprintType)
struct FPalEditorItemDynamicClassTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalDynamicItemDataBase> DynamicClass;
    
    PAL_API FPalEditorItemDynamicClassTableRow();
};

