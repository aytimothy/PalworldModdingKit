#include "PalLimitVolumeBoxComponent.h"

UPalLimitVolumeBoxComponent::UPalLimitVolumeBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShapeBodySetup = NULL;
    this->LimitFlags = 0;
}


