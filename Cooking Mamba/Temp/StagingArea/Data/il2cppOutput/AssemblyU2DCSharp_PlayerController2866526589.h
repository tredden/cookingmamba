#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text PlayerController::winText
	Text_t9039225 * ___winText_2;
	// UnityEngine.UI.Text PlayerController::countText
	Text_t9039225 * ___countText_3;
	// System.Single PlayerController::speed
	float ___speed_4;
	// System.Int32 PlayerController::count
	int32_t ___count_5;
	// UnityEngine.Rigidbody2D PlayerController::rb2d
	Rigidbody2D_t1743771669 * ___rb2d_6;

public:
	inline static int32_t get_offset_of_winText_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___winText_2)); }
	inline Text_t9039225 * get_winText_2() const { return ___winText_2; }
	inline Text_t9039225 ** get_address_of_winText_2() { return &___winText_2; }
	inline void set_winText_2(Text_t9039225 * value)
	{
		___winText_2 = value;
		Il2CppCodeGenWriteBarrier(&___winText_2, value);
	}

	inline static int32_t get_offset_of_countText_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___countText_3)); }
	inline Text_t9039225 * get_countText_3() const { return ___countText_3; }
	inline Text_t9039225 ** get_address_of_countText_3() { return &___countText_3; }
	inline void set_countText_3(Text_t9039225 * value)
	{
		___countText_3 = value;
		Il2CppCodeGenWriteBarrier(&___countText_3, value);
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___count_5)); }
	inline int32_t get_count_5() const { return ___count_5; }
	inline int32_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(int32_t value)
	{
		___count_5 = value;
	}

	inline static int32_t get_offset_of_rb2d_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___rb2d_6)); }
	inline Rigidbody2D_t1743771669 * get_rb2d_6() const { return ___rb2d_6; }
	inline Rigidbody2D_t1743771669 ** get_address_of_rb2d_6() { return &___rb2d_6; }
	inline void set_rb2d_6(Rigidbody2D_t1743771669 * value)
	{
		___rb2d_6 = value;
		Il2CppCodeGenWriteBarrier(&___rb2d_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
