#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Foliage -ObjectName=FoliageType_InstancedStaticMesh -FallbackName=FoliageType_InstancedStaticMesh
#include "EPalFoliagePresetType.h"
#include "PalFoliageType_InstancedStaticMesh.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalFoliageType_InstancedStaticMesh : public UFoliageType_InstancedStaticMesh {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalFoliagePresetType PresetType;
    
public:
    UPalFoliageType_InstancedStaticMesh();

};

