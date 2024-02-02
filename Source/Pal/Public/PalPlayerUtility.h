#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PalItemSlotId.h"
#include "PalNetArchive.h"
#include "PalPlayerUtility.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalPlayerUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalPlayerUtility();

    UFUNCTION(BlueprintCallable)
    static void WritePlayerGrappling(UPARAM(Ref) FPalNetArchive& Blackboard, const FVector& HitLocatoin, const FVector& MoveEndLocation, const float& Speed);
    
    UFUNCTION(BlueprintCallable)
    static void WritePlayerFeedItemTo(UPARAM(Ref) FPalNetArchive& Blackboard, const FPalItemSlotId& itemSlotId, const int32& itemNum);
    
    UFUNCTION(BlueprintCallable)
    static void ReadPlayerGrappling(const FPalNetArchive& Blackboard, FVector& HitLocatoin, FVector& MoveEndLocation, float& Speed);
    
    UFUNCTION(BlueprintCallable)
    static void ReadPlayerFeedItemTo(const FPalNetArchive& Blackboard, FPalItemSlotId& itemSlotId, int32& itemNum);
    
};

