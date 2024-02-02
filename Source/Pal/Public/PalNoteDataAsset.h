#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PalNoteDataAsset.generated.h"

class UPalNoteData;

UCLASS(Blueprintable)
class PAL_API UPalNoteDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UPalNoteData*> NoteDataMap;
    
    UPalNoteDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalNoteData* Find(const FName ID) const;
    
};

