#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalCoopSkillSearchResultParameter.h"
#include "PalCoopSkillSearchLocationRegister.generated.h"

UCLASS(Blueprintable)
class UPalCoopSkillSearchLocationRegister : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> RegisteredLocationIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, float> RegisteredLocationElapsedSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocationDisplayTimeSec;
    
public:
    UPalCoopSkillSearchLocationRegister();

    UFUNCTION(BlueprintCallable)
    void UnregisterMapObjectLocationsFromCompass(const FGuid& guiid);
    
    UFUNCTION(BlueprintCallable)
    void RegisterMapObjectLocationsToCompass(const FPalCoopSkillSearchResultParameter& ResultParameter);
    
};

