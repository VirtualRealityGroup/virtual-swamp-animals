﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Camera
struct Camera_t814710830_0;
// UnityEngine.RenderTexture
struct RenderTexture_t1203146108_0;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1253062672_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderingPath_1393242200.h"
#include "UnityEngine_UnityEngine_Color_388944582.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"
#include "UnityEngine_UnityEngine_CameraClearFlags1845996296.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Ray1215250369.h"
#include "UnityEngine_UnityEngine_DepthTextureMode411818084.h"
#include "UnityEngine_UnityEngine_QueryTriggerInteraction_963713479.h"
#include "UnityEngine_UnityEngine_Vector4_725341336.h"

// System.Single UnityEngine.Camera::get_fieldOfView()
extern "C"  float Camera_get_fieldOfView_m65126887_0 (Camera_t814710830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
extern "C"  void Camera_set_fieldOfView_m809388684_0 (Camera_t814710830_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C"  float Camera_get_nearClipPlane_m_220312235_0 (Camera_t814710830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
extern "C"  void Camera_set_nearClipPlane_m534185950_0 (Camera_t814710830_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C"  float Camera_get_farClipPlane_m388706726_0 (Camera_t814710830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
extern "C"  void Camera_set_farClipPlane_m1540693853_0 (Camera_t814710830_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_renderingPath(UnityEngine.RenderingPath)
extern "C"  void Camera_set_renderingPath_m_566914850_0 (Camera_t814710830_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_orthographicSize()
extern "C"  float Camera_get_orthographicSize_m_1079451806_0 (Camera_t814710830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
extern "C"  void Camera_set_orthographicSize_m_384428255_0 (Camera_t814710830_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Camera::get_orthographic()
extern "C"  bool Camera_get_orthographic_m_258070565_0 (Camera_t814710830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
extern "C"  void Camera_set_orthographic_m_445017952_0 (Camera_t814710830_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_depth()
extern "C"  float Camera_get_depth_m_652157260_0 (Camera_t814710830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_depth(System.Single)
extern "C"  void Camera_set_depth_m_1195257633_0 (Camera_t814710830_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_aspect()
extern "C"  float Camera_get_aspect_m_149281367_0 (Camera_t814710830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_aspect(System.Single)
extern "C"  void Camera_set_aspect_m_1324934598_0 (Camera_t814710830_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C"  int32_t Camera_get_cullingMask_m1045975289_0 (Camera_t814710830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
extern "C"  void Camera_set_cullingMask_m_2113687722_0 (Camera_t814710830_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_eventMask()
extern "C"  int32_t Camera_get_eventMask_m_625834525_0 (Camera_t814710830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Camera::get_backgroundColor()
extern "C"  Color_t_388944582_0  Camera_get_backgroundColor_m_1324233557_0 (Camera_t814710830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
extern "C"  void Camera_set_backgroundColor_m501006344_0 (Camera_t814710830_0 * __this, Color_t_388944582_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_backgroundColor(UnityEngine.Color&)
extern "C"  void Camera_INTERNAL_get_backgroundColor_m327229068_0 (Camera_t814710830_0 * __this, Color_t_388944582_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_backgroundColor(UnityEngine.Color&)
extern "C"  void Camera_INTERNAL_set_backgroundColor_m2139927960_0 (Camera_t814710830_0 * __this, Color_t_388944582_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_rect()
extern "C"  Rect_t_981940947_0  Camera_get_rect_m_1211701091_0 (Camera_t814710830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
extern "C"  void Camera_set_rect_m1907189602_0 (Camera_t814710830_0 * __this, Rect_t_981940947_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C"  void Camera_INTERNAL_get_rect_m1804455538_0 (Camera_t814710830_0 * __this, Rect_t_981940947_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_rect(UnityEngine.Rect&)
extern "C"  void Camera_INTERNAL_set_rect_m458921854_0 (Camera_t814710830_0 * __this, Rect_t_981940947_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern "C"  Rect_t_981940947_0  Camera_get_pixelRect_m936851539_0 (Camera_t814710830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C"  void Camera_INTERNAL_get_pixelRect_m1853722860_0 (Camera_t814710830_0 * __this, Rect_t_981940947_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C"  RenderTexture_t1203146108_0 * Camera_get_targetTexture_m1468336738_0 (Camera_t814710830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
extern "C"  void Camera_set_targetTexture_m671169649_0 (Camera_t814710830_0 * __this, RenderTexture_t1203146108_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_pixelWidth()
extern "C"  int32_t Camera_get_pixelWidth_m175903141_0 (Camera_t814710830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_pixelHeight()
extern "C"  int32_t Camera_get_pixelHeight_m1661844426_0 (Camera_t814710830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_cameraToWorldMatrix()
extern "C"  Matrix4x4_t1577636070_0  Camera_get_cameraToWorldMatrix_m_876405803_0 (Camera_t814710830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_cameraToWorldMatrix(UnityEngine.Matrix4x4&)
extern "C"  void Camera_INTERNAL_get_cameraToWorldMatrix_m650983478_0 (Camera_t814710830_0 * __this, Matrix4x4_t1577636070_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
extern "C"  Matrix4x4_t1577636070_0  Camera_get_worldToCameraMatrix_m1346206741_0 (Camera_t814710830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_worldToCameraMatrix(UnityEngine.Matrix4x4)
extern "C"  void Camera_set_worldToCameraMatrix_m146983134_0 (Camera_t814710830_0 * __this, Matrix4x4_t1577636070_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_worldToCameraMatrix(UnityEngine.Matrix4x4&)
extern "C"  void Camera_INTERNAL_get_worldToCameraMatrix_m_643438474_0 (Camera_t814710830_0 * __this, Matrix4x4_t1577636070_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_worldToCameraMatrix(UnityEngine.Matrix4x4&)
extern "C"  void Camera_INTERNAL_set_worldToCameraMatrix_m1532998530_0 (Camera_t814710830_0 * __this, Matrix4x4_t1577636070_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
extern "C"  Matrix4x4_t1577636070_0  Camera_get_projectionMatrix_m_1223984816_0 (Camera_t814710830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
extern "C"  void Camera_set_projectionMatrix_m_1753957775_0 (Camera_t814710830_0 * __this, Matrix4x4_t1577636070_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C"  void Camera_INTERNAL_get_projectionMatrix_m684200627_0 (Camera_t814710830_0 * __this, Matrix4x4_t1577636070_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C"  void Camera_INTERNAL_set_projectionMatrix_m1272775463_0 (Camera_t814710830_0 * __this, Matrix4x4_t1577636070_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C"  int32_t Camera_get_clearFlags_m192466552_0 (Camera_t814710830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
extern "C"  void Camera_set_clearFlags_m175420861_0 (Camera_t814710830_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern "C"  Vector3_t_725341337_0  Camera_ScreenToViewportPoint_m_567763542_0 (Camera_t814710830_0 * __this, Vector3_t_725341337_0  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void Camera_INTERNAL_CALL_ScreenToViewportPoint_m_582440594_0 (Object_t * __this /* static, unused */, Camera_t814710830_0 * ___self, Vector3_t_725341337_0 * ___position, Vector3_t_725341337_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C"  Ray_t1215250369_0  Camera_ScreenPointToRay_m1733083890_0 (Camera_t814710830_0 * __this, Vector3_t_725341337_0  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&,UnityEngine.Ray&)
extern "C"  void Camera_INTERNAL_CALL_ScreenPointToRay_m371614468_0 (Object_t * __this /* static, unused */, Camera_t814710830_0 * ___self, Vector3_t_725341337_0 * ___position, Ray_t1215250369_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t814710830_0 * Camera_get_main_m671815697_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_current()
extern "C"  Camera_t814710830_0 * Camera_get_current_m475592003_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern "C"  int32_t Camera_get_allCamerasCount_m_301532865_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern "C"  int32_t Camera_GetAllCameras_m_523099509_0 (Object_t * __this /* static, unused */, CameraU5BU5D_t1253062672_0* ___cameras, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern "C"  void Camera_FireOnPreCull_m_110375958_0 (Object_t * __this /* static, unused */, Camera_t814710830_0 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern "C"  void Camera_FireOnPreRender_m_1540418226_0 (Object_t * __this /* static, unused */, Camera_t814710830_0 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern "C"  void Camera_FireOnPostRender_m865551979_0 (Object_t * __this /* static, unused */, Camera_t814710830_0 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::Render()
extern "C"  void Camera_Render_m945002290_0 (Camera_t814710830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_useOcclusionCulling(System.Boolean)
extern "C"  void Camera_set_useOcclusionCulling_m1338974346_0 (Camera_t814710830_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::CopyFrom(UnityEngine.Camera)
extern "C"  void Camera_CopyFrom_m_2114354881_0 (Camera_t814710830_0 * __this, Camera_t814710830_0 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.DepthTextureMode UnityEngine.Camera::get_depthTextureMode()
extern "C"  int32_t Camera_get_depthTextureMode_m2117446653_0 (Camera_t814710830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
extern "C"  void Camera_set_depthTextureMode_m_1926640510_0 (Camera_t814710830_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  GameObject_t_184308134_0 * Camera_RaycastTry_m569221064_0 (Camera_t814710830_0 * __this, Ray_t1215250369_0  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  GameObject_t_184308134_0 * Camera_INTERNAL_CALL_RaycastTry_m_1475620680_0 (Object_t * __this /* static, unused */, Camera_t814710830_0 * ___self, Ray_t1215250369_0 * ___ray, float ___distance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern "C"  GameObject_t_184308134_0 * Camera_RaycastTry2D_m_1038655974_0 (Camera_t814710830_0 * __this, Ray_t1215250369_0  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C"  GameObject_t_184308134_0 * Camera_INTERNAL_CALL_RaycastTry2D_m_1498654007_0 (Object_t * __this /* static, unused */, Camera_t814710830_0 * ___self, Ray_t1215250369_0 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::CalculateObliqueMatrix(UnityEngine.Vector4)
extern "C"  Matrix4x4_t1577636070_0  Camera_CalculateObliqueMatrix_m_2107316971_0 (Camera_t814710830_0 * __this, Vector4_t_725341336_0  ___clipPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_CALL_CalculateObliqueMatrix(UnityEngine.Camera,UnityEngine.Vector4&,UnityEngine.Matrix4x4&)
extern "C"  void Camera_INTERNAL_CALL_CalculateObliqueMatrix_m620232841_0 (Object_t * __this /* static, unused */, Camera_t814710830_0 * ___self, Vector4_t_725341336_0 * ___clipPlane, Matrix4x4_t1577636070_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
