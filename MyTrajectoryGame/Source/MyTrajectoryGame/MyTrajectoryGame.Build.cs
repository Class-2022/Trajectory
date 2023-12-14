// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyTrajectoryGame : ModuleRules
{
	public MyTrajectoryGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
