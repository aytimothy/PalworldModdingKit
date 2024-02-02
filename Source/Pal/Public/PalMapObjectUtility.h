#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EPalMapObjectOperationResult.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectUtility.generated.h"

class AActor;
class UMaterialInterface;
class UPrimitiveComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class UPalMapObjectUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalMapObjectUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TryGetItemVisualModelStaticMesh(TSubclassOf<AActor> actorClass, UStaticMesh*& OutStaticMesh, FTransform& OutComponentTransform, FVector& OutCenterOfMass, UMaterialInterface*& OutMaterialInterface);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPalMapObjectOperationResult ToMapObjectOperationResult(const int32 ResultIntValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPalMapObjectOperationResult SelectPriorityResult(EPalMapObjectOperationResult Result1, EPalMapObjectOperationResult Result2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString MapObjectOperationResultToString(const EPalMapObjectOperationResult Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsContainsCollisionProfiles(const UPrimitiveComponent* Component, const TArray<FName>& CollisionProfiles);
    
};

