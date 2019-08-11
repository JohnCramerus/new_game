// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class NewRPG_4_22_3EditorTarget : TargetRules
{
	public NewRPG_4_22_3EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("NewRPG_4_22_3");
	}
}
