#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalMapObjectModelConnectIndex.h"
#include "PalMapObjectModelConnectInfoItem.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectModelConnectInfoItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ConnectToModelInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalMapObjectModelConnectIndex ConnectIndex;
    
    PAL_API FPalMapObjectModelConnectInfoItem();
};

