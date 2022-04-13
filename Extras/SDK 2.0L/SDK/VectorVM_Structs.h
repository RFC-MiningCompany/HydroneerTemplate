#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0L
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum VectorVM.EVectorVMOp
	 */
	enum class EVectorVMOp : uint8_t
	{
		done                      = 0x0000000000000000,
		add                       = 0x0000000000000001,
		sub                       = 0x0000000000000002,
		mul                       = 0x0000000000000003,
		div                       = 0x0000000000000004,
		mad                       = 0x0000000000000005,
		lerp                      = 0x0000000000000006,
		rcp                       = 0x0000000000000007,
		rsq                       = 0x0000000000000008,
		sqrt                      = 0x0000000000000009,
		neg                       = 0x000000000000000A,
		abs                       = 0x000000000000000B,
		exp                       = 0x000000000000000C,
		exp2                      = 0x000000000000000D,
		log                       = 0x000000000000000E,
		log2                      = 0x000000000000000F,
		sin                       = 0x0000000000000010,
		cos                       = 0x0000000000000011,
		tan                       = 0x0000000000000012,
		asin                      = 0x0000000000000013,
		acos                      = 0x0000000000000014,
		atan                      = 0x0000000000000015,
		atan2                     = 0x0000000000000016,
		ceil                      = 0x0000000000000017,
		floor                     = 0x0000000000000018,
		fmod                      = 0x0000000000000019,
		frac                      = 0x000000000000001A,
		trunc                     = 0x000000000000001B,
		clamp                     = 0x000000000000001C,
		min                       = 0x000000000000001D,
		max                       = 0x000000000000001E,
		pow                       = 0x000000000000001F,
		round                     = 0x0000000000000020,
		sign                      = 0x0000000000000021,
		step                      = 0x0000000000000022,
		random                    = 0x0000000000000023,
		noise                     = 0x0000000000000024,
		cmplt                     = 0x0000000000000025,
		cmple                     = 0x0000000000000026,
		cmpgt                     = 0x0000000000000027,
		cmpge                     = 0x0000000000000028,
		cmpeq                     = 0x0000000000000029,
		cmpneq                    = 0x000000000000002A,
		select                    = 0x000000000000002B,
		addi                      = 0x000000000000002C,
		subi                      = 0x000000000000002D,
		muli                      = 0x000000000000002E,
		divi                      = 0x000000000000002F,
		clampi                    = 0x0000000000000030,
		mini                      = 0x0000000000000031,
		maxi                      = 0x0000000000000032,
		absi                      = 0x0000000000000033,
		negi                      = 0x0000000000000034,
		signi                     = 0x0000000000000035,
		randomi                   = 0x0000000000000036,
		cmplti                    = 0x0000000000000037,
		cmplei                    = 0x0000000000000038,
		cmpgti                    = 0x0000000000000039,
		cmpgei                    = 0x000000000000003A,
		cmpeqi                    = 0x000000000000003B,
		cmpneqi                   = 0x000000000000003C,
		bit_and                   = 0x000000000000003D,
		bit_or                    = 0x000000000000003E,
		bit_xor                   = 0x000000000000003F,
		bit_not                   = 0x0000000000000040,
		bit_lshift                = 0x0000000000000041,
		bit_rshift                = 0x0000000000000042,
		logic_and                 = 0x0000000000000043,
		logic_or                  = 0x0000000000000044,
		logic_xor                 = 0x0000000000000045,
		logic_not                 = 0x0000000000000046,
		f2i                       = 0x0000000000000047,
		i2f                       = 0x0000000000000048,
		f2b                       = 0x0000000000000049,
		b2f                       = 0x000000000000004A,
		i2b                       = 0x000000000000004B,
		b2i                       = 0x000000000000004C,
		inputdata_float           = 0x000000000000004D,
		inputdata_int32           = 0x000000000000004E,
		inputdata_half            = 0x000000000000004F,
		inputdata_noadvance_float = 0x0000000000000050,
		inputdata_noadvance_int32 = 0x0000000000000051,
		inputdata_noadvance_half  = 0x0000000000000052,
		outputdata_float          = 0x0000000000000053,
		outputdata_int32          = 0x0000000000000054,
		outputdata_half           = 0x0000000000000055,
		acquireindex              = 0x0000000000000056,
		external_func_call        = 0x0000000000000057,
		exec_index                = 0x0000000000000058,
		noise2D                   = 0x0000000000000059,
		noise3D                   = 0x000000000000005A,
		enter_stat_scope          = 0x000000000000005B,
		exit_stat_scope           = 0x000000000000005C,
		update_id                 = 0x000000000000005D,
		acquire_id                = 0x000000000000005E,
		NumOpcodes                = 0x000000000000005F
	};

	/**
	 * Enum VectorVM.EVectorVMOperandLocation
	 */
	enum class EVectorVMOperandLocation : uint8_t
	{
		Register = 0x0000000000000000,
		Constant = 0x0000000000000001,
		Num      = 0x0000000000000002,
		MAX      = 0x0000000000000003
	};

	/**
	 * Enum VectorVM.EVectorVMBaseTypes
	 */
	enum class EVectorVMBaseTypes : uint8_t
	{
		Float = 0x0000000000000000,
		Int   = 0x0000000000000001,
		Bool  = 0x0000000000000002,
		Num   = 0x0000000000000003,
		MAX   = 0x0000000000000004
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
