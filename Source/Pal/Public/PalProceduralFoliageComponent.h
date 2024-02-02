#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Foliage -ObjectName=ProceduralFoliageComponent -FallbackName=ProceduralFoliageComponent
#include "PalProceduralFoliageComponent.generated.h"

class UShapeComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalProceduralFoliageComponent : public UProceduralFoliageComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* SpawningShape;
    
public:
    UPalProceduralFoliageComponent(const FObjectInitializer& ObjectInitializer);

};

