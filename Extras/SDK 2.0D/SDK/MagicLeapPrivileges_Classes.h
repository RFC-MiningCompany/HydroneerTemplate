﻿#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0D
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMagicLeapPrivilegesFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool RequestPrivilegeAsync(MagicLeapPrivileges_EMagicLeapPrivilege Privilege, const class FScriptDelegate& ResultDelegate);
		bool RequestPrivilege(MagicLeapPrivileges_EMagicLeapPrivilege Privilege);
		bool CheckPrivilege(MagicLeapPrivileges_EMagicLeapPrivilege Privilege);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
