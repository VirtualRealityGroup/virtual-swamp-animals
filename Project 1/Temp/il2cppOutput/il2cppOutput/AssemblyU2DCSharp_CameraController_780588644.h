#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// CameraController
struct  CameraController_t_780588644_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.GameObject CameraController::player
	GameObject_t_184308134_0 * ___player_2;
	// System.Single CameraController::offsetX
	float ___offsetX_3;
	// System.Single CameraController::offsetY
	float ___offsetY_4;
	// System.Single CameraController::offsetZ
	float ___offsetZ_5;
	// UnityEngine.Vector3 CameraController::offset
	Vector3_t_725341337_0  ___offset_6;
};
