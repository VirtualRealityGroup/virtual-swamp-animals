#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Collider
struct Collider_t770782909_0;
// UnityEngine.Rigidbody
struct Rigidbody_t_1022613340_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_RaycastHit144185587.h"

// System.Void UnityEngine.RaycastHit::CalculateRaycastTexCoord(UnityEngine.Vector2&,UnityEngine.Collider,UnityEngine.Vector2,UnityEngine.Vector3,System.Int32,System.Int32)
extern "C"  void RaycastHit_CalculateRaycastTexCoord_m1670734366_0 (Object_t * __this /* static, unused */, Vector2_t_725341338_0 * ___output, Collider_t770782909_0 * ___col, Vector2_t_725341338_0  ___uv, Vector3_t_725341337_0  ___point, int32_t ___face, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RaycastHit::INTERNAL_CALL_CalculateRaycastTexCoord(UnityEngine.Vector2&,UnityEngine.Collider,UnityEngine.Vector2&,UnityEngine.Vector3&,System.Int32,System.Int32)
extern "C"  void RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m1112610553_0 (Object_t * __this /* static, unused */, Vector2_t_725341338_0 * ___output, Collider_t770782909_0 * ___col, Vector2_t_725341338_0 * ___uv, Vector3_t_725341337_0 * ___point, int32_t ___face, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C"  Vector3_t_725341337_0  RaycastHit_get_point_m_129469458_0 (RaycastHit_t144185587_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C"  Vector3_t_725341337_0  RaycastHit_get_normal_m1346998891_0 (RaycastHit_t144185587_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C"  float RaycastHit_get_distance_m800944203_0 (RaycastHit_t144185587_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RaycastHit::get_textureCoord()
extern "C"  Vector2_t_725341338_0  RaycastHit_get_textureCoord_m_1975632961_0 (RaycastHit_t144185587_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C"  Collider_t770782909_0 * RaycastHit_get_collider_m_1178085022_0 (RaycastHit_t144185587_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C"  Rigidbody_t_1022613340_0 * RaycastHit_get_rigidbody_m_157083864_0 (RaycastHit_t144185587_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C"  Transform_t1584899523_0 * RaycastHit_get_transform_m905149094_0 (RaycastHit_t144185587_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
