#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// UnityEngine.UI.Text
struct Text_t9039225;
// GameController
struct GameController_t2782302542;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t3027308338;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pot
struct  Pot_t80437  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform Pot::ings
	Transform_t1659122786 * ___ings_2;
	// System.Int32[] Pot::tolerance
	Int32U5BU5D_t3230847821* ___tolerance_3;
	// UnityEngine.UI.Text Pot::text
	Text_t9039225 * ___text_4;
	// GameController Pot::main
	GameController_t2782302542 * ___main_5;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Pot::toCollect
	List_1_t3027308338 * ___toCollect_6;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Pot::toDrop
	List_1_t3027308338 * ___toDrop_7;
	// UnityEngine.Transform Pot::trans
	Transform_t1659122786 * ___trans_8;
	// System.Single Pot::score
	float ___score_9;

public:
	inline static int32_t get_offset_of_ings_2() { return static_cast<int32_t>(offsetof(Pot_t80437, ___ings_2)); }
	inline Transform_t1659122786 * get_ings_2() const { return ___ings_2; }
	inline Transform_t1659122786 ** get_address_of_ings_2() { return &___ings_2; }
	inline void set_ings_2(Transform_t1659122786 * value)
	{
		___ings_2 = value;
		Il2CppCodeGenWriteBarrier(&___ings_2, value);
	}

	inline static int32_t get_offset_of_tolerance_3() { return static_cast<int32_t>(offsetof(Pot_t80437, ___tolerance_3)); }
	inline Int32U5BU5D_t3230847821* get_tolerance_3() const { return ___tolerance_3; }
	inline Int32U5BU5D_t3230847821** get_address_of_tolerance_3() { return &___tolerance_3; }
	inline void set_tolerance_3(Int32U5BU5D_t3230847821* value)
	{
		___tolerance_3 = value;
		Il2CppCodeGenWriteBarrier(&___tolerance_3, value);
	}

	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(Pot_t80437, ___text_4)); }
	inline Text_t9039225 * get_text_4() const { return ___text_4; }
	inline Text_t9039225 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(Text_t9039225 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier(&___text_4, value);
	}

	inline static int32_t get_offset_of_main_5() { return static_cast<int32_t>(offsetof(Pot_t80437, ___main_5)); }
	inline GameController_t2782302542 * get_main_5() const { return ___main_5; }
	inline GameController_t2782302542 ** get_address_of_main_5() { return &___main_5; }
	inline void set_main_5(GameController_t2782302542 * value)
	{
		___main_5 = value;
		Il2CppCodeGenWriteBarrier(&___main_5, value);
	}

	inline static int32_t get_offset_of_toCollect_6() { return static_cast<int32_t>(offsetof(Pot_t80437, ___toCollect_6)); }
	inline List_1_t3027308338 * get_toCollect_6() const { return ___toCollect_6; }
	inline List_1_t3027308338 ** get_address_of_toCollect_6() { return &___toCollect_6; }
	inline void set_toCollect_6(List_1_t3027308338 * value)
	{
		___toCollect_6 = value;
		Il2CppCodeGenWriteBarrier(&___toCollect_6, value);
	}

	inline static int32_t get_offset_of_toDrop_7() { return static_cast<int32_t>(offsetof(Pot_t80437, ___toDrop_7)); }
	inline List_1_t3027308338 * get_toDrop_7() const { return ___toDrop_7; }
	inline List_1_t3027308338 ** get_address_of_toDrop_7() { return &___toDrop_7; }
	inline void set_toDrop_7(List_1_t3027308338 * value)
	{
		___toDrop_7 = value;
		Il2CppCodeGenWriteBarrier(&___toDrop_7, value);
	}

	inline static int32_t get_offset_of_trans_8() { return static_cast<int32_t>(offsetof(Pot_t80437, ___trans_8)); }
	inline Transform_t1659122786 * get_trans_8() const { return ___trans_8; }
	inline Transform_t1659122786 ** get_address_of_trans_8() { return &___trans_8; }
	inline void set_trans_8(Transform_t1659122786 * value)
	{
		___trans_8 = value;
		Il2CppCodeGenWriteBarrier(&___trans_8, value);
	}

	inline static int32_t get_offset_of_score_9() { return static_cast<int32_t>(offsetof(Pot_t80437, ___score_9)); }
	inline float get_score_9() const { return ___score_9; }
	inline float* get_address_of_score_9() { return &___score_9; }
	inline void set_score_9(float value)
	{
		___score_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
