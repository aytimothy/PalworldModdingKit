#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalLocationBase.h"
#include "PalLocationPoint.generated.h"

UCLASS(Abstract, Blueprintable)
class UPalLocationPoint : public UPalLocationBase {
    GENERATED_BODY()
public:
    UPalLocationPoint();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableFastTravel() const;
    
    UFUNCTION(BlueprintCallable)
    void InvokeFastTravel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRotationZ() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuat GetRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLocationAndRotationZ(FVector& OutLocation, float& OutRotationZ) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocation() const;
    
};

