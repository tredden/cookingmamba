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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t2782302542  : public MonoBehaviour_t667441552
{
public:
	// System.Single GameController::bpm
	float ___bpm_2;
	// System.Single GameController::score
	float ___score_3;
	// UnityEngine.UI.Text GameController::scoreboard
	Text_t9039225 * ___scoreboard_4;
	// System.Single GameController::bps
	float ___bps_5;

public:
	inline static int32_t get_offset_of_bpm_2() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___bpm_2)); }
	inline float get_bpm_2() const { return ___bpm_2; }
	inline float* get_address_of_bpm_2() { return &___bpm_2; }
	inline void set_bpm_2(float value)
	{
		___bpm_2 = value;
	}

	inline static int32_t get_offset_of_score_3() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___score_3)); }
	inline float get_score_3() const { return ___score_3; }
	inline float* get_address_of_score_3() { return &___score_3; }
	inline void set_score_3(float value)
	{
		___score_3 = value;
	}

	inline static int32_t get_offset_of_scoreboard_4() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___scoreboard_4)); }
	inline Text_t9039225 * get_scoreboard_4() const { return ___scoreboard_4; }
	inline Text_t9039225 ** get_address_of_scoreboard_4() { return &___scoreboard_4; }
	inline void set_scoreboard_4(Text_t9039225 * value)
	{
		___scoreboard_4 = value;
		Il2CppCodeGenWriteBarrier(&___scoreboard_4, value);
	}

	inline static int32_t get_offset_of_bps_5() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___bps_5)); }
	inline float get_bps_5() const { return ___bps_5; }
	inline float* get_address_of_bps_5() { return &___bps_5; }
	inline void set_bps_5(float value)
	{
		___bps_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
