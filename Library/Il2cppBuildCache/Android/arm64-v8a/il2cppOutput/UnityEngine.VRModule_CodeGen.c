#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Boolean UnityEngine.XR.XRSettings::get_enabled()
extern void XRSettings_get_enabled_m202056F80CE700EB87DD52C213BE30262B8433AE (void);
// 0x00000002 System.Boolean UnityEngine.XR.XRSettings::get_isDeviceActive()
extern void XRSettings_get_isDeviceActive_m6E7EEA4B9934BE29CB1B908E382F8575ADB9E003 (void);
// 0x00000003 System.Single UnityEngine.XR.XRSettings::get_eyeTextureResolutionScale()
extern void XRSettings_get_eyeTextureResolutionScale_m675B86F3B6A4AA4C3CE525F7079D802BFAC0DD58 (void);
// 0x00000004 System.Void UnityEngine.XR.XRSettings::set_eyeTextureResolutionScale(System.Single)
extern void XRSettings_set_eyeTextureResolutionScale_m46C2B3968563190960202C32F582190DC44EAE3F (void);
// 0x00000005 System.Int32 UnityEngine.XR.XRSettings::get_eyeTextureWidth()
extern void XRSettings_get_eyeTextureWidth_m58A1989DD2F55FCB2C92A712AEA493B6EEA3C55E (void);
// 0x00000006 System.Int32 UnityEngine.XR.XRSettings::get_eyeTextureHeight()
extern void XRSettings_get_eyeTextureHeight_mD4F91CDDB07756E9BF313DEFD3D74DFC6737E1A2 (void);
// 0x00000007 UnityEngine.RenderTextureDescriptor UnityEngine.XR.XRSettings::get_eyeTextureDesc()
extern void XRSettings_get_eyeTextureDesc_mCC8FF72401EDDAF720A3F8678133F49FC05B117A (void);
// 0x00000008 System.Single UnityEngine.XR.XRSettings::get_renderViewportScale()
extern void XRSettings_get_renderViewportScale_mE9D69964D237C95A40BB6D265EF7701219C13A55 (void);
// 0x00000009 System.Single UnityEngine.XR.XRSettings::get_renderViewportScaleInternal()
extern void XRSettings_get_renderViewportScaleInternal_mFAE96B6D6B0E1E4A517515AF2EB4E2482EB3EE4F (void);
// 0x0000000A System.String UnityEngine.XR.XRSettings::get_loadedDeviceName()
extern void XRSettings_get_loadedDeviceName_mFCE6E2901F4E9D598EB91C5255CA5353A69A34B4 (void);
// 0x0000000B System.String[] UnityEngine.XR.XRSettings::get_supportedDevices()
extern void XRSettings_get_supportedDevices_m30DD0609EF3161F49E4E5EBE86FC1DCBD8035C7C (void);
// 0x0000000C UnityEngine.XR.XRSettings/StereoRenderingMode UnityEngine.XR.XRSettings::get_stereoRenderingMode()
extern void XRSettings_get_stereoRenderingMode_m5E85271059E85A00B1AE3CFBD3C221699E731944 (void);
// 0x0000000D System.Void UnityEngine.XR.XRSettings::get_eyeTextureDesc_Injected(UnityEngine.RenderTextureDescriptor&)
extern void XRSettings_get_eyeTextureDesc_Injected_m5DE8C88AB20521C62D9DCDB2DE576D4B81E40B43 (void);
// 0x0000000E System.Void UnityEngine.XR.XRDevice::DisableAutoXRCameraTracking(UnityEngine.Camera,System.Boolean)
extern void XRDevice_DisableAutoXRCameraTracking_mDD0AB20F29D7CF3991BE0A0EBF00F14C4EF77D63 (void);
// 0x0000000F System.Void UnityEngine.XR.XRDevice::InvokeDeviceLoaded(System.String)
extern void XRDevice_InvokeDeviceLoaded_m9B8D07480B85A337BE2B947204E50E41149DC77E (void);
// 0x00000010 System.Void UnityEngine.XR.XRDevice::.cctor()
extern void XRDevice__cctor_mB1E8BACD04DBC82739EBC4FC70714E71B9C7F33B (void);
static Il2CppMethodPointer s_methodPointers[16] = 
{
	XRSettings_get_enabled_m202056F80CE700EB87DD52C213BE30262B8433AE,
	XRSettings_get_isDeviceActive_m6E7EEA4B9934BE29CB1B908E382F8575ADB9E003,
	XRSettings_get_eyeTextureResolutionScale_m675B86F3B6A4AA4C3CE525F7079D802BFAC0DD58,
	XRSettings_set_eyeTextureResolutionScale_m46C2B3968563190960202C32F582190DC44EAE3F,
	XRSettings_get_eyeTextureWidth_m58A1989DD2F55FCB2C92A712AEA493B6EEA3C55E,
	XRSettings_get_eyeTextureHeight_mD4F91CDDB07756E9BF313DEFD3D74DFC6737E1A2,
	XRSettings_get_eyeTextureDesc_mCC8FF72401EDDAF720A3F8678133F49FC05B117A,
	XRSettings_get_renderViewportScale_mE9D69964D237C95A40BB6D265EF7701219C13A55,
	XRSettings_get_renderViewportScaleInternal_mFAE96B6D6B0E1E4A517515AF2EB4E2482EB3EE4F,
	XRSettings_get_loadedDeviceName_mFCE6E2901F4E9D598EB91C5255CA5353A69A34B4,
	XRSettings_get_supportedDevices_m30DD0609EF3161F49E4E5EBE86FC1DCBD8035C7C,
	XRSettings_get_stereoRenderingMode_m5E85271059E85A00B1AE3CFBD3C221699E731944,
	XRSettings_get_eyeTextureDesc_Injected_m5DE8C88AB20521C62D9DCDB2DE576D4B81E40B43,
	XRDevice_DisableAutoXRCameraTracking_mDD0AB20F29D7CF3991BE0A0EBF00F14C4EF77D63,
	XRDevice_InvokeDeviceLoaded_m9B8D07480B85A337BE2B947204E50E41149DC77E,
	XRDevice__cctor_mB1E8BACD04DBC82739EBC4FC70714E71B9C7F33B,
};
static const int32_t s_InvokerIndices[16] = 
{
	6589,
	6589,
	6639,
	6524,
	6608,
	6608,
	6634,
	6639,
	6639,
	6615,
	6615,
	6608,
	6508,
	5960,
	6519,
	6653,
};
extern const CustomAttributesCacheGenerator g_UnityEngine_VRModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_VRModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_VRModule_CodeGenModule = 
{
	"UnityEngine.VRModule.dll",
	16,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_UnityEngine_VRModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
