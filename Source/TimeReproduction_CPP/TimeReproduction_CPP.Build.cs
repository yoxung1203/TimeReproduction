// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TimeReproduction_CPP : ModuleRules
{
	public TimeReproduction_CPP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
