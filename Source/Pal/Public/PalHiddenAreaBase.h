#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalHiddenAreaBase.generated.h"

class UPalProceduralFoliageComponent;

UCLASS(Abstract, Blueprintable)
class PAL_API APalHiddenAreaBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalProceduralFoliageComponent* ProceduralComponent;
    
    APalHiddenAreaBase(const FObjectInitializer& ObjectInitializer);

};

