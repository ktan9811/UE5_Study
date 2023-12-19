// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BOOM_Tank : ModuleRules
{
	public BOOM_Tank(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
