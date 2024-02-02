#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalBelongInfo.h"
#include "PalMapObjectBelongInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectBelongInfo : public FPalBelongInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid GroupID;
    
    PAL_API FPalMapObjectBelongInfo();
};

