#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PalFoliageInstallDataArray.h"
#include "PalFoliageInstallDataAssetByIFA.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalFoliageInstallDataAssetByIFA : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalFoliageInstallDataArray> InstallDataArrayMap;
    
public:
    UPalFoliageInstallDataAssetByIFA();

};

