#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RenderTexture
struct RenderTexture_t1203146108_0;
// CardboardOnGUI/OnGUICallback
struct OnGUICallback_t732686323_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Color_388944582.h"

// CardboardOnGUI
struct  CardboardOnGUI_t_1235369375_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.Color CardboardOnGUI::background
	Color_t_388944582_0  ___background_4;
	// UnityEngine.RenderTexture CardboardOnGUI::guiScreen
	RenderTexture_t1203146108_0 * ___guiScreen_5;
};
struct CardboardOnGUI_t_1235369375_0_StaticFields{
	// System.Boolean CardboardOnGUI::okToDraw
	bool ___okToDraw_2;
	// System.Boolean CardboardOnGUI::isGUIVisible
	bool ___isGUIVisible_3;
	// CardboardOnGUI/OnGUICallback CardboardOnGUI::onGUICallback
	OnGUICallback_t732686323_0 * ___onGUICallback_6;
};
