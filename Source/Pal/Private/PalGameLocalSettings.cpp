#include "PalGameLocalSettings.h"

UPalGameLocalSettings::UPalGameLocalSettings() {
    this->GraphicsLevel = EPalOptionGraphicsLevel::None;
    this->DefaultGraphicsLevel = EPalOptionGraphicsLevel::None;
    this->bRunedBenchMark = false;
    this->bHasAppliedUserSetting = false;
    this->DedicatedServerName = TEXT("0D19B8224796EB3CB8D3669FD8D55037");
    this->AntiAliasingType = AAM_TSR;
    this->DLSSMode = UDLSSMode::Performance;
    this->GraphicsCommonQuality = 0;
}

bool UPalGameLocalSettings::RequireBenchMarkScalaBility() {
    return false;
}


