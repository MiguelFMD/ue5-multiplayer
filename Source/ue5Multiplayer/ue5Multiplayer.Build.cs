// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ue5Multiplayer : ModuleRules
{
	public ue5Multiplayer(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
