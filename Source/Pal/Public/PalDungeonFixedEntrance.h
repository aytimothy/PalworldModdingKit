#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "PalDungeonEntrance.h"
#include "PalLevelObjectInterface.h"
#include "Templates/SubclassOf.h"
#include "PalDungeonFixedEntrance.generated.h"

class APalNPCSpawnerBase;
class UDataLayerAsset;

UCLASS(Blueprintable)
class PAL_API APalDungeonFixedEntrance : public APalDungeonEntrance, public IPalLevelObjectInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    FGuid LevelObjectInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DungeonNameRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    UDataLayerAsset* DataLayerAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalNPCSpawnerBase> EnemySpawnerSoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    float RespawnCoolTimeMinutesAfterBossDefeated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalNPCSpawnerBase> EnemySpawnerClass;
    
public:
    APalDungeonFixedEntrance(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetLevelObjectInstanceId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<APalNPCSpawnerBase> GetEnemySpawnerSoftClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<APalNPCSpawnerBase> GetEnemySpawner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataLayerAsset* GetDataLayerAsset() const;
    

    // Fix for true pure virtual functions not being implemented
};

