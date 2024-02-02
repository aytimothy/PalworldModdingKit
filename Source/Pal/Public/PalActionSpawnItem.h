#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalActionBase.h"
#include "PalNetArchive.h"
#include "PalStaticItemIdAndNum.h"
#include "PalActionSpawnItem.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalActionSpawnItem : public UPalActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SpawnItemRotator;
    
public:
    UPalActionSpawnItem();

    UFUNCTION(BlueprintCallable)
    static void WriteBlackboard(UPARAM(Ref) FPalNetArchive& BlackboardRef, const FPalStaticItemIdAndNum& ItemInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnItemInServer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ReadBlackboard(FPalStaticItemIdAndNum& ItemInfo) const;
    
};

