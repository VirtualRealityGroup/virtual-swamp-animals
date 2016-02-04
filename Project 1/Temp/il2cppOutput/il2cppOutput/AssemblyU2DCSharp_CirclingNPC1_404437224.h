#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1584899523_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"

// CirclingNPC1
struct  CirclingNPC1_t_404437224_0  : public MonoBehaviour_t_92453903_0
{
	// System.Single CirclingNPC1::minRotationSpeed
	float ___minRotationSpeed_2;
	// System.Single CirclingNPC1::maxRotationSpeed
	float ___maxRotationSpeed_3;
	// System.Single CirclingNPC1::minMovementSpeed
	float ___minMovementSpeed_4;
	// System.Single CirclingNPC1::maxMovementSpeed
	float ___maxMovementSpeed_5;
	// System.Single CirclingNPC1::rotationSpeed
	float ___rotationSpeed_6;
	// System.Single CirclingNPC1::movementSpeed
	float ___movementSpeed_7;
	// UnityEngine.Transform CirclingNPC1::target
	Transform_t1584899523_0 * ___target_8;
	// UnityEngine.Quaternion CirclingNPC1::qTo
	Quaternion_t1989680039_0  ___qTo_9;
};
