#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>
struct Dictionary_2_t416935006_0;
// UnityEngine.RenderTexture
struct RenderTexture_t1203146108_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_W_68746357.h"
#include "UnityEngine_UnityEngine_LayerMask_1132430796.h"

// UnityStandardAssets.Water.Water
struct  Water_t_369027168_0  : public MonoBehaviour_t_92453903_0
{
	// UnityStandardAssets.Water.Water/WaterMode UnityStandardAssets.Water.Water::waterMode
	int32_t ___waterMode_2;
	// System.Boolean UnityStandardAssets.Water.Water::disablePixelLights
	bool ___disablePixelLights_3;
	// System.Int32 UnityStandardAssets.Water.Water::textureSize
	int32_t ___textureSize_4;
	// System.Single UnityStandardAssets.Water.Water::clipPlaneOffset
	float ___clipPlaneOffset_5;
	// UnityEngine.LayerMask UnityStandardAssets.Water.Water::reflectLayers
	LayerMask_t_1132430796_0  ___reflectLayers_6;
	// UnityEngine.LayerMask UnityStandardAssets.Water.Water::refractLayers
	LayerMask_t_1132430796_0  ___refractLayers_7;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera> UnityStandardAssets.Water.Water::m_ReflectionCameras
	Dictionary_2_t416935006_0 * ___m_ReflectionCameras_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera> UnityStandardAssets.Water.Water::m_RefractionCameras
	Dictionary_2_t416935006_0 * ___m_RefractionCameras_9;
	// UnityEngine.RenderTexture UnityStandardAssets.Water.Water::m_ReflectionTexture
	RenderTexture_t1203146108_0 * ___m_ReflectionTexture_10;
	// UnityEngine.RenderTexture UnityStandardAssets.Water.Water::m_RefractionTexture
	RenderTexture_t1203146108_0 * ___m_RefractionTexture_11;
	// UnityStandardAssets.Water.Water/WaterMode UnityStandardAssets.Water.Water::m_HardwareWaterSupport
	int32_t ___m_HardwareWaterSupport_12;
	// System.Int32 UnityStandardAssets.Water.Water::m_OldReflectionTextureSize
	int32_t ___m_OldReflectionTextureSize_13;
	// System.Int32 UnityStandardAssets.Water.Water::m_OldRefractionTextureSize
	int32_t ___m_OldRefractionTextureSize_14;
};
struct Water_t_369027168_0_StaticFields{
	// System.Boolean UnityStandardAssets.Water.Water::s_InsideWater
	bool ___s_InsideWater_15;
};
