#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalCoopSkillAssaultrifleModeCandidateLocation.generated.h"

USTRUCT(BlueprintType)
struct FPalCoopSkillAssaultrifleModeCandidateLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    PAL_API FPalCoopSkillAssaultrifleModeCandidateLocation();
};

