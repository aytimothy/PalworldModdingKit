#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalStaticItemDataManager.generated.h"

class UPalStaticItemDataAsset;

UCLASS(Blueprintable)
class PAL_API UPalStaticItemDataManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalStaticItemDataAsset* StaticItemDataAsset;
    
public:
    UPalStaticItemDataManager();

};

