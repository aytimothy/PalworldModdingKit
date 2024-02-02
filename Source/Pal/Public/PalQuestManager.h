#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalQuestManager.generated.h"

class UDataTable;
class UPalCommonQuestRewardGiver;
class UPalQuestData;

UCLASS(Blueprintable)
class PAL_API UPalQuestManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatedAnyQuestDelegate, UPalQuestData*, UpdatedQuest);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompletedAnyQuestDelegate, UPalQuestData*, CompletedQuest);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdatedAnyQuestDelegate OnUpdatedQuestDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompletedAnyQuestDelegate OnCompletedQuestDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UPalQuestData*> OrderedQuestMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CompletedQuestNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* QuestDataSet;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalCommonQuestRewardGiver* CommonRewardGiver;
    
public:
    UPalQuestManager();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdatedQuest(UPalQuestData* UpdatedQuest);
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedQuest(UPalQuestData* CompletedQuest);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllQuestComplete();
    
};

