#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "PalUserWidget.h"
#include "PalUIOffScreenLoupeBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIOffScreenLoupeBase : public UPalUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float displayDotBorder;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isWaitedClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isOverrideVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isRequestedDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility overrideVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector targetWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D projectedScreenPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D calcedScreenPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D widgetSize;
    
public:
    UPalUIOffScreenLoupeBase();

protected:
    UFUNCTION(BlueprintCallable)
    void SetOverrideVisibility(ESlateVisibility NewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void ResetOverrideVisibility();
    
    UFUNCTION(BlueprintCallable)
    void RequestHide();
    
    UFUNCTION(BlueprintCallable)
    void RequestDisplay();
    
    UFUNCTION(BlueprintCallable)
    void RequestClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestedClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnableLoupe();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetTargetWorldLocation(FVector& outVector);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetTargetWidgetSize(FVector2D& outVector);
    
    UFUNCTION(BlueprintCallable)
    void CloseSelf();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CalcScreenPosition();
    
};

