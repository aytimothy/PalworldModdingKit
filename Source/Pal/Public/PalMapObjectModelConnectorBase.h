#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalMapObjectModelConnectInfo.h"
#include "PalMapObjectModelConnectorBase.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API UPalMapObjectModelConnectorBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 SupportedLevel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalMapObjectModelConnectInfo ConnectInfoAnyPlace;
    
public:
    UPalMapObjectModelConnectorBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

