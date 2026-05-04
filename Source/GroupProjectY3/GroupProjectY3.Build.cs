// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GroupProjectY3 : ModuleRules
{
	public GroupProjectY3(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"GroupProjectY3",
			"GroupProjectY3/Variant_Horror",
			"GroupProjectY3/Variant_Horror/UI",
			"GroupProjectY3/Variant_Shooter",
			"GroupProjectY3/Variant_Shooter/AI",
			"GroupProjectY3/Variant_Shooter/UI",
			"GroupProjectY3/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
