#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalInvaderType.h"
#include "PalInvaderDatabaseRow.h"
#include "PalIncidentBroadcastParameter.generated.h"

class UPalBaseCampModel;

USTRUCT(BlueprintType)
struct FPalIncidentBroadcastParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalInvaderType InvaderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalBaseCampModel* TargetBaseCamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalInvaderDatabaseRow ChosenInvaderData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid GroupGuid;
    
    PAL_API FPalIncidentBroadcastParameter();
};

