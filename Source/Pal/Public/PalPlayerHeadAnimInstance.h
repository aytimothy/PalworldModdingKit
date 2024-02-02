#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "PalPlayerHeadAnimInstance.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable, NonTransient)
class PAL_API UPalPlayerHeadAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector PlayerEyeLocationRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector PlayerEyeLocationLeft;
    
public:
    UPalPlayerHeadAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetPlayerEyeLocation(USkeletalMesh* HeadMesh);
    
};

