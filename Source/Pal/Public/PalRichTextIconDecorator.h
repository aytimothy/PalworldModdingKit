#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=RichTextBlockImageDecorator -FallbackName=RichTextBlockImageDecorator
#include "PalRichTextIconDecorator.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class PAL_API UPalRichTextIconDecorator : public URichTextBlockImageDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ControlKeyIconData;
    
    UPalRichTextIconDecorator();

};

