#include "PalMapObjectSpawnerBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

APalMapObjectSpawnerBase::APalMapObjectSpawnerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ProbabilityRespawn = 100;
    this->LotteryCoolTimeMinutes = 60.00f;
    this->LocateSphere = NULL;
}

void APalMapObjectSpawnerBase::OnWorldMapObjectSpawnableInServer() {
}


