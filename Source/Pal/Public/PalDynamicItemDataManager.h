#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalDynamicItemDisposeWaitNotifyInfo.h"
#include "PalDynamicItemId.h"
#include "PalDynamicItemDataManager.generated.h"

class UPalDynamicItemDataBase;

UCLASS(Blueprintable)
class UPalDynamicItemDataManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreateItemDelegate OnCreateItemInServerDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalDynamicItemId, UPalDynamicItemDataBase*> ItemDynamicDataMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DisposeReservedDynamicItemRemainingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DynamicItemDisposeReserveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalDynamicItemDisposeWaitNotifyInfo> DisposeDynamicItemIdRequestWaitInfoMap_ServerInternal;
    
public:
    UPalDynamicItemDataManager();

};

