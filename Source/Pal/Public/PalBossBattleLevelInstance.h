#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LevelInstance -FallbackName=LevelInstance
#include "EPalBossType.h"
#include "PalBossBattleLevelInstance.generated.h"

class APalCharacter;

UCLASS(Blueprintable)
class PAL_API APalBossBattleLevelInstance : public ALevelInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBossSpawnedDelegate, APalCharacter*, SpawnedCharacter);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBossSpawnedDelegate OnBossSpawnedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoaded;
    
public:
    APalBossBattleLevelInstance(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnBossSpawner(EPalBossType BossType, int32 JoinPlayerNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetBossLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FTransform GetSequencerTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FTransform GetPlayerStartTransform() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckLevelLoaded() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void BossSpawned(APalCharacter* SpawnedCharacter);
    
};

