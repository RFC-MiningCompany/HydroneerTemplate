#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0.2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct S_Character_Body.S_Character_Body
	 * Size -> 0x00E0
	 */
	struct FS_Character_Body
	{
	public:
		unsigned char                                              Chest_3_C8860477446937345FB66DA3FF9F62B1[0x28];          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Arms_5_E40D1B9A4EE8FD6DA74077B164450CB7[0x28];           // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Hips_7_42CA8EB446BDCDEB3848F0A950486834[0x28];           // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Legs_9_1F4997EB4B817BD6F068F6AA238DDF3F[0x28];           // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FText                                                Name_13_477B8FD64C0D8D412C6692B1E1E2EAB7;                // 0x00A0(0x0018) Edit, BlueprintVisible
		unsigned char                                              Icon_16_F3301C1A4AB57729BDB0C8935A11BA46[0x28];          // 0x00B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
