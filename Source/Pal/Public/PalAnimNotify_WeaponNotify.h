#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EWeaponNotifyType.h"
#include "PalAnimNotify_WeaponNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UPalAnimNotify_WeaponNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponNotifyType WeaponNotifyType;
    
    UPalAnimNotify_WeaponNotify();

};

