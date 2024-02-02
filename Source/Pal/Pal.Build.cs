using UnrealBuildTool;

public class Pal : ModuleRules {
    public Pal(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "CommonGame",
            "CommonInput",
            "CommonUI",
            "Core",
            "CoreUObject",
            "DLSSBlueprint",
            "Engine",
            "Foliage",
            "GameplayCameras",
            "GameplayTags",
            "InputCore",
            "LevelSequence",
            "ModularGameplay",
            "NavigationSystem",
            "NetCore",
            "Niagara",
            "NiagaraAnimNotifies",
            "OnlineSubsystemUtils",
            "PhysicsCore",
            "PocketpairUser",
            "ReplicationGraph",
            "SignificanceManager",
            "SlateCore",
            "UMG",
        });
    }
}
