#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalWildDrinkWaterSpot.generated.h"

class AActor;

UCLASS(Blueprintable)
class PAL_API UPalWildDrinkWaterSpot : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsReserved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector SpotActorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector> PalGoalLocations;
    
public:
    UPalWildDrinkWaterSpot();

    UFUNCTION(BlueprintCallable)
    bool SetAssignPointToMember(TArray<AActor*> MemberList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetActorLocation();
    
};

