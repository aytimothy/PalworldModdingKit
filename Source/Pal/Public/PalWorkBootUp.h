#pragma once
#include "CoreMinimal.h"
#include "PalWorkBase.h"
#include "PalWorkBootUp.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalWorkBootUp : public UPalWorkBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMulticastDelegate OnBootUpInServerDelegate;
    
    UPalWorkBootUp();

};

