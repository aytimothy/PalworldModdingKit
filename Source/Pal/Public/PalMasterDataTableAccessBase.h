#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalMasterDataTableAccessBase.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UPalMasterDataTableAccessBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
public:
    UPalMasterDataTableAccessBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetRowNames() const;
    
};

