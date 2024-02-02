#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalGameSystemInitProcessHandle.generated.h"

class UPalGameSystemInitProcessHandle;

UCLASS(Blueprintable)
class UPalGameSystemInitProcessHandle : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalGameSystemInitProcessHandle*> ChildProcessHandles;
    
public:
    UPalGameSystemInitProcessHandle();

};

