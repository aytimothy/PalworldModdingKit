#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalWildPalDrinkWaterSpotProvider.generated.h"

class AActor;
class UPalWildDrinkWaterSpot;

UCLASS(Blueprintable)
class PAL_API UPalWildPalDrinkWaterSpotProvider : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalWildDrinkWaterSpot*> DrinkWaterSpotList;
    
public:
    UPalWildPalDrinkWaterSpotProvider();

    UFUNCTION(BlueprintCallable)
    bool RequestReservation(AActor* LeaderPal, FVector WildPalSpawnerCenter, int32 MemberNum, FGuid& OutSpotID);
    
    UFUNCTION(BlueprintCallable)
    UPalWildDrinkWaterSpot* FindSpot(FGuid SpotID);
    
    UFUNCTION(BlueprintCallable)
    void CancelReservation(FGuid SpotID);
    
    UFUNCTION(BlueprintCallable)
    void AddDrinkWaterSpot(FVector ActorLocation, TArray<FVector> GoalLocations);
    
};

