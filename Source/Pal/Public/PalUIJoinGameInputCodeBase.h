#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=BlueprintSessionResult -FallbackName=BlueprintSessionResult
//CROSS-MODULE INCLUDE V2: -ModuleName=PocketpairUser -ObjectName=JoinSessionResultType -FallbackName=JoinSessionResultType
#include "PalUserWidgetOverlayUI.h"
#include "PalUIJoinGameInputCodeBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIJoinGameInputCodeBase : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CahcedInputInviteCode;
    
public:
    UPalUIJoinGameInputCodeBase();

protected:
    UFUNCTION(BlueprintCallable)
    void VerifyPassword(const FString& InputPassword);
    
    UFUNCTION(BlueprintCallable)
    void VerifyInviteCode(const FString& InputCode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotifyVerifyPassword(bool IsMatchPassword);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotifyVerifyInviteCode(bool IsValidCode, bool IsRequirePassword);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCompletedJoinSession(bool IsSuccess, JoinSessionResultType Type);
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedFindSessions(bool IsSuccess, const TArray<FBlueprintSessionResult>& Results, const FString& ErrorStr);
    
};

