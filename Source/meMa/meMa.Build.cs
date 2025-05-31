// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class meMa : ModuleRules
{
	public meMa(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
