// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ServerLearn : ModuleRules
{
	public ServerLearn(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { 
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore", 
			"EnhancedInput",
            "UMG",
            "GameplayAbilities",
            "GameplayTags",
            "GameplayTasks",
            "AIModule",
			"NetCore",
      		"NavigationSystem",
      		"OnlineSubsystem",
			"OnlineSubsystemUtils"

		});
	}
}
