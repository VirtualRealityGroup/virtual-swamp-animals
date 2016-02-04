#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Cardboard
struct Cardboard_t1550393659_0;
// CardboardHead
struct CardboardHead_t_732803653_0;
// UnityEngine.UI.Text
struct Text_t_204341102_0;
// UnityEngine.AudioClip
struct AudioClip_t719917725_0;
// UnityEngine.AudioSource
struct AudioSource_t812398632_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// POV_Movement
struct  POV_Movement_t_632299470_0  : public MonoBehaviour_t_92453903_0
{
	// System.Single POV_Movement::speed
	float ___speed_2;
	// System.Single POV_Movement::y_axis
	float ___y_axis_3;
	// Cardboard POV_Movement::cardB
	Cardboard_t1550393659_0 * ___cardB_4;
	// CardboardHead POV_Movement::head
	CardboardHead_t_732803653_0 * ___head_5;
	// UnityEngine.UI.Text POV_Movement::countText
	Text_t_204341102_0 * ___countText_6;
	// UnityEngine.UI.Text POV_Movement::winText
	Text_t_204341102_0 * ___winText_7;
	// UnityEngine.AudioClip POV_Movement::crunch1
	AudioClip_t719917725_0 * ___crunch1_8;
	// UnityEngine.AudioSource POV_Movement::crunchA
	AudioSource_t812398632_0 * ___crunchA_9;
	// System.Int32 POV_Movement::count
	int32_t ___count_10;
};
