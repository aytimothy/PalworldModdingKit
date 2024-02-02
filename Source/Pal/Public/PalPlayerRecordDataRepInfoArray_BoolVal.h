#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PalPlayerRecordDataRepInfo_BoolVal.h"
#include "PalPlayerRecordDataRepInfoArray_BoolVal.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerRecordDataRepInfoArray_BoolVal : public FFastArraySerializer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalPlayerRecordDataRepInfo_BoolVal> Items;
    
public:
    PAL_API FPalPlayerRecordDataRepInfoArray_BoolVal();
};

