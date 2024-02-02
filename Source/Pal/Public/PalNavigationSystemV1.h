#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationSystemV1 -FallbackName=NavigationSystemV1
#include "PalNavigationSystemV1.generated.h"

UCLASS(Blueprintable, NonTransient)
class UPalNavigationSystemV1 : public UNavigationSystemV1 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 UpdateInvokerCounter;
    
public:
    UPalNavigationSystemV1();

};

