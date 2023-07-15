// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class XCGtest : ModuleRules
{
	public XCGtest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
