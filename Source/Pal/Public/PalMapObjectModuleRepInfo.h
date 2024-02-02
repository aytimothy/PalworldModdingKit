#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "PalMapObjectModuleRepInfo.generated.h"

class UPalMapObjectConcreteModelModuleBase;

USTRUCT(BlueprintType)
struct FPalMapObjectModuleRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMapObjectConcreteModelModuleBase* Module;
    
    PAL_API FPalMapObjectModuleRepInfo();
};

