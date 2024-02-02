#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalLocationPointStatic.h"
#include "PalLocationPoint_Custom.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalLocationPoint_Custom : public UPalLocationPointStatic {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIconTypeChangedDelegate, int32, NewType);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIconTypeChangedDelegate OnIconTypeChanged;
    
    UPalLocationPoint_Custom();

    UFUNCTION(BlueprintCallable)
    void SetIconType(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetOwnerPlayerId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIconType() const;
    
};

