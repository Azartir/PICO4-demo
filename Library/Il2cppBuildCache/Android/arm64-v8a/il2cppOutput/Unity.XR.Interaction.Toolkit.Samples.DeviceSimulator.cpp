#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_t8054A94E13920B6EAD3A3ACE9E49CCEB297F5292;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_tFBF775077101E34ED6C54C4468F6E0722ECB2EF6;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.InputSystem.InputAction
struct InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_t588F4834F020838C4E8AE148F8A42CC84FA75B44;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9;
// UnityEngine.InputSystem.InputControl
struct InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator
struct XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825;
// UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI
struct XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A;
// UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI
struct XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C;
// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController
struct XRSimulatedController_t7771B4DF96F9B4259DFFFD68E30136C1FEAD7E49;
// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMD
struct XRSimulatedHMD_tE5A264AD475895067EBDC8293CAE486DD24CA540;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformationMode_tFAD711C19386573876EBDE687EA3E407CB1C191A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02A764E4251AC38D73244BF0497560A10A2A8B6A;
IL2CPP_EXTERN_C String_t* _stringLiteral0D6F43F451E5A156511D4FA3F9B728127500A84D;
IL2CPP_EXTERN_C String_t* _stringLiteral294F098A1D5E681EDEE8F43BFA8F45CFBA5798A7;
IL2CPP_EXTERN_C String_t* _stringLiteral33A674C5B19A8E8CE70BB746840755D642FC6AAA;
IL2CPP_EXTERN_C String_t* _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1;
IL2CPP_EXTERN_C String_t* _stringLiteral41D7D721EB92533F364B02AAC885BBC1473C5589;
IL2CPP_EXTERN_C String_t* _stringLiteral44F840CD2F40ADB814D44EA51A7753812FECBF05;
IL2CPP_EXTERN_C String_t* _stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318;
IL2CPP_EXTERN_C String_t* _stringLiteral69E149C19EBE275A194380AED6A65C33679CF612;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral874BE1B2177F8C02B786BA933E78AD9FE1D377DD;
IL2CPP_EXTERN_C String_t* _stringLiteral8EAB3208A6D4D55CC7AD481046AF7FBE9BE11384;
IL2CPP_EXTERN_C String_t* _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED;
IL2CPP_EXTERN_C String_t* _stringLiteral98018BE8EB53CB8EC9307D4EEAAA001D606E788C;
IL2CPP_EXTERN_C String_t* _stringLiteral99E0BE07A8922ABD73F1320EBE0DA083F5D0E14B;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEB505BDB3D74CEA5AF48A58F07A9848FE5F0059D;
IL2CPP_EXTERN_C String_t* _stringLiteralFBA9CEB43D14830BEAAF5F87C6AAAD1A8A36A67F;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mCA43571B7A4D8DFA726F8D112A5CAC300AB51D1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisXRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825_m67ACFA138BD7D0188E78A4021D9AF1E96A3FBDD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisXRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_m1E662BF40DA8B6CC37F2DE8EAA77FEAB5DBF52F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_mDCD41D11CC3A01264FE6A5AE617F4C6F72837C7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7A9E70EEE544D2F90C679F23DE6534D2708BED22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnCycleDevicesAction_m9ACFA74A8A646F1629CDE167F8FC31B933C0721F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnGripAction_m45E73FA51550D4DE11A104DFE6BE0AC7AF814BE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnKeyboardXTranslateAction_m1E58096115BE5404199E743DB5E090B6529F45CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnKeyboardYTranslateAction_m17BD10C0A6324E03C94BCAB6C66899BB358DB235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnKeyboardZTranslateAction_m5F2D6FFC37D1206EDE95A9FE79A1A3D135E2B261_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnManipulateHeadAction_mF6F7356D26691EB892C18595D75FC65035F37927_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnManipulateLeftAction_m126D13A01B708936E9A14CD6A511D7B22B1CAF15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnManipulateRightAction_m7894648198536BDC48022A25E60FD46CE96FF2A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnMenuAction_mB8E35BFD5CF9BF6A5EDE4A51C15E75ECE8FEBAE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnNegateModeAction_m727A9378C860688585C64B85E65227B95749D867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnPrimaryButtonAction_mB1E545F451EA49A225D5F3925D77ED033EE0831D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnRestingHandAxis2DAction_m041709D75169B0201EC830210A3F77A6A615CB7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnSecondaryButtonAction_m5FD8A0C52BC916FD9900C3BDC0AFDEFBE9AFA05B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnStopManipulationAction_m7B133A7D3D5F54E98A8A683E8C23FE42628BDF3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnToggleCursorLockAction_mC5E00ED0874F4EE5A694F073A6295BCFF1758D09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnToggleManipulateBodyAction_m0691F10D15FA9F2DE23EC33829EFFB1F794F4A1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnToggleManipulateLeftAction_m73E959E04FBF28FD30827CD8BF83D40FBD9F94DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnToggleManipulateRightAction_m1C75A4B3CD229581F73AA0745ADFB8273DDB7A7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnToggleMouseTransformationModeAction_m1AB4BB7CE7B3CC482C645C6452789D8A61CF0AAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDeviceSimulatorUI_OnTriggerAction_mB3EF1DB08C567FE04B51F1B6D1954C1112B1952C_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t59EE56F809AD47D1FCC9C27927676A264153F60F 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t8054A94E13920B6EAD3A3ACE9E49CCEB297F5292* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5, ___firstValue_1)); }
	inline Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5, ___additionalValues_2)); }
	inline Action_1U5BU5D_t8054A94E13920B6EAD3A3ACE9E49CCEB297F5292* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t8054A94E13920B6EAD3A3ACE9E49CCEB297F5292** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t8054A94E13920B6EAD3A3ACE9E49CCEB297F5292* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControl>
struct ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811, ___m_Array_0)); }
	inline InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680* get_m_Array_0() const { return ___m_Array_0; }
	inline InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>
struct ReadOnlyArray_1_t9584B0851320AB0F5BC8FF261C123F5994A081B7 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t9584B0851320AB0F5BC8FF261C123F5994A081B7, ___m_Array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_Array_0() const { return ___m_Array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t9584B0851320AB0F5BC8FF261C123F5994A081B7, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t9584B0851320AB0F5BC8FF261C123F5994A081B7, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// System.ValueTuple`2<UnityEngine.Transform,UnityEngine.Camera>
struct ValueTuple_2_t1DFA9346A68D3184C615DE34BCAF8B14067C91A9 
{
public:
	// T1 System.ValueTuple`2::Item1
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t1DFA9346A68D3184C615DE34BCAF8B14067C91A9, ___Item1_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_Item1_0() const { return ___Item1_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t1DFA9346A68D3184C615DE34BCAF8B14067C91A9, ___Item2_1)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_Item2_1() const { return ___Item2_1; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;

public:
	inline static int32_t get_offset_of_m_Code_0() { return static_cast<int32_t>(offsetof(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9, ___m_Code_0)); }
	inline int32_t get_m_Code_0() const { return ___m_Code_0; }
	inline int32_t* get_address_of_m_Code_0() { return &___m_Code_0; }
	inline void set_m_Code_0(int32_t value)
	{
		___m_Code_0 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58 
{
public:
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;

public:
	inline static int32_t get_offset_of_m_InterfaceName_0() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58, ___m_InterfaceName_0)); }
	inline String_t* get_m_InterfaceName_0() const { return ___m_InterfaceName_0; }
	inline String_t** get_address_of_m_InterfaceName_0() { return &___m_InterfaceName_0; }
	inline void set_m_InterfaceName_0(String_t* value)
	{
		___m_InterfaceName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InterfaceName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceClass_1() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58, ___m_DeviceClass_1)); }
	inline String_t* get_m_DeviceClass_1() const { return ___m_DeviceClass_1; }
	inline String_t** get_address_of_m_DeviceClass_1() { return &___m_DeviceClass_1; }
	inline void set_m_DeviceClass_1(String_t* value)
	{
		___m_DeviceClass_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceClass_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Manufacturer_2() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58, ___m_Manufacturer_2)); }
	inline String_t* get_m_Manufacturer_2() const { return ___m_Manufacturer_2; }
	inline String_t** get_address_of_m_Manufacturer_2() { return &___m_Manufacturer_2; }
	inline void set_m_Manufacturer_2(String_t* value)
	{
		___m_Manufacturer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Manufacturer_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Product_3() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58, ___m_Product_3)); }
	inline String_t* get_m_Product_3() const { return ___m_Product_3; }
	inline String_t** get_address_of_m_Product_3() { return &___m_Product_3; }
	inline void set_m_Product_3(String_t* value)
	{
		___m_Product_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Product_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Serial_4() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58, ___m_Serial_4)); }
	inline String_t* get_m_Serial_4() const { return ___m_Serial_4; }
	inline String_t** get_address_of_m_Serial_4() { return &___m_Serial_4; }
	inline void set_m_Serial_4(String_t* value)
	{
		___m_Serial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Serial_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58, ___m_Version_5)); }
	inline String_t* get_m_Version_5() const { return ___m_Version_5; }
	inline String_t** get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(String_t* value)
	{
		___m_Version_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Version_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capabilities_6() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58, ___m_Capabilities_6)); }
	inline String_t* get_m_Capabilities_6() const { return ___m_Capabilities_6; }
	inline String_t** get_address_of_m_Capabilities_6() { return &___m_Capabilities_6; }
	inline void set_m_Capabilities_6(String_t* value)
	{
		___m_Capabilities_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Capabilities_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringOriginalCase_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringLowerCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D 
{
public:
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;

public:
	inline static int32_t get_offset_of_m_State_0() { return static_cast<int32_t>(offsetof(CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D, ___m_State_0)); }
	inline InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * get_m_State_0() const { return ___m_State_0; }
	inline InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 ** get_address_of_m_State_0() { return &___m_State_0; }
	inline void set_m_State_0(InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * value)
	{
		___m_State_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionIndex_1() { return static_cast<int32_t>(offsetof(CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D, ___m_ActionIndex_1)); }
	inline int32_t get_m_ActionIndex_1() const { return ___m_ActionIndex_1; }
	inline int32_t* get_address_of_m_ActionIndex_1() { return &___m_ActionIndex_1; }
	inline void set_m_ActionIndex_1(int32_t value)
	{
		___m_ActionIndex_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D_marshaled_pinvoke
{
	InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D_marshaled_com
{
	InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1 
{
public:
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5  ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5  ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5  ___m_CallbacksToRemove_3;

public:
	inline static int32_t get_offset_of_m_CannotMutateCallbacksArray_0() { return static_cast<int32_t>(offsetof(CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1, ___m_CannotMutateCallbacksArray_0)); }
	inline bool get_m_CannotMutateCallbacksArray_0() const { return ___m_CannotMutateCallbacksArray_0; }
	inline bool* get_address_of_m_CannotMutateCallbacksArray_0() { return &___m_CannotMutateCallbacksArray_0; }
	inline void set_m_CannotMutateCallbacksArray_0(bool value)
	{
		___m_CannotMutateCallbacksArray_0 = value;
	}

	inline static int32_t get_offset_of_m_Callbacks_1() { return static_cast<int32_t>(offsetof(CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1, ___m_Callbacks_1)); }
	inline InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5  get_m_Callbacks_1() const { return ___m_Callbacks_1; }
	inline InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5 * get_address_of_m_Callbacks_1() { return &___m_Callbacks_1; }
	inline void set_m_Callbacks_1(InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5  value)
	{
		___m_Callbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToAdd_2() { return static_cast<int32_t>(offsetof(CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1, ___m_CallbacksToAdd_2)); }
	inline InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5  get_m_CallbacksToAdd_2() const { return ___m_CallbacksToAdd_2; }
	inline InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5 * get_address_of_m_CallbacksToAdd_2() { return &___m_CallbacksToAdd_2; }
	inline void set_m_CallbacksToAdd_2(InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5  value)
	{
		___m_CallbacksToAdd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToRemove_3() { return static_cast<int32_t>(offsetof(CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1, ___m_CallbacksToRemove_3)); }
	inline InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5  get_m_CallbacksToRemove_3() const { return ___m_CallbacksToRemove_3; }
	inline InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5 * get_address_of_m_CallbacksToRemove_3() { return &___m_CallbacksToRemove_3; }
	inline void set_m_CallbacksToRemove_3(InlinedArray_1_t02AB39E6F94F40A915AE5843BDB88347C7AD02B5  value)
	{
		___m_CallbacksToRemove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.CursorLockMode
struct CursorLockMode_t247B41EE9632E4AD759EDADDB351AE0075162D04 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CursorLockMode_t247B41EE9632E4AD759EDADDB351AE0075162D04, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.InputSystem.InputActionPhase
struct InputActionPhase_t2902D1C79819D41CAB80B5345925A58F2926824C 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputActionPhase_t2902D1C79819D41CAB80B5345925A58F2926824C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputActionType
struct InputActionType_tF334DB4C306B973538251E50C2CFE7939899AB35 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputActionType_tF334DB4C306B973538251E50C2CFE7939899AB35, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B 
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___U3CformatU3Ek__BackingField_33;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_34;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_35;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_36;

public:
	inline static int32_t get_offset_of_U3CformatU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B, ___U3CformatU3Ek__BackingField_33)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_U3CformatU3Ek__BackingField_33() const { return ___U3CformatU3Ek__BackingField_33; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_U3CformatU3Ek__BackingField_33() { return &___U3CformatU3Ek__BackingField_33; }
	inline void set_U3CformatU3Ek__BackingField_33(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___U3CformatU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CbyteOffsetU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B, ___U3CbyteOffsetU3Ek__BackingField_34)); }
	inline uint32_t get_U3CbyteOffsetU3Ek__BackingField_34() const { return ___U3CbyteOffsetU3Ek__BackingField_34; }
	inline uint32_t* get_address_of_U3CbyteOffsetU3Ek__BackingField_34() { return &___U3CbyteOffsetU3Ek__BackingField_34; }
	inline void set_U3CbyteOffsetU3Ek__BackingField_34(uint32_t value)
	{
		___U3CbyteOffsetU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CbitOffsetU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B, ___U3CbitOffsetU3Ek__BackingField_35)); }
	inline uint32_t get_U3CbitOffsetU3Ek__BackingField_35() const { return ___U3CbitOffsetU3Ek__BackingField_35; }
	inline uint32_t* get_address_of_U3CbitOffsetU3Ek__BackingField_35() { return &___U3CbitOffsetU3Ek__BackingField_35; }
	inline void set_U3CbitOffsetU3Ek__BackingField_35(uint32_t value)
	{
		___U3CbitOffsetU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CsizeInBitsU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B, ___U3CsizeInBitsU3Ek__BackingField_36)); }
	inline uint32_t get_U3CsizeInBitsU3Ek__BackingField_36() const { return ___U3CsizeInBitsU3Ek__BackingField_36; }
	inline uint32_t* get_address_of_U3CsizeInBitsU3Ek__BackingField_36() { return &___U3CsizeInBitsU3Ek__BackingField_36; }
	inline void set_U3CsizeInBitsU3Ek__BackingField_36(uint32_t value)
	{
		___U3CsizeInBitsU3Ek__BackingField_36 = value;
	}
};


// UnityEngine.XR.InputTrackingState
struct InputTrackingState_t787D19F40F78D57D589D01C27945FD614A426DA9 
{
public:
	// System.UInt32 UnityEngine.XR.InputTrackingState::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputTrackingState_t787D19F40F78D57D589D01C27945FD614A426DA9, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.TypeCode
struct TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState
struct XRSimulatedControllerState_tF8F4FD13AD3CC46E85B73D5F2BCEB18FF0531175 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState::primary2DAxis
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___primary2DAxis_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___primary2DAxis_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trigger_1_OffsetPadding[8];
					// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState::trigger
					float ___trigger_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trigger_1_OffsetPadding_forAlignmentOnly[8];
					float ___trigger_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___grip_2_OffsetPadding[12];
					// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState::grip
					float ___grip_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___grip_2_OffsetPadding_forAlignmentOnly[12];
					float ___grip_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___secondary2DAxis_3_OffsetPadding[16];
					// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState::secondary2DAxis
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___secondary2DAxis_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___secondary2DAxis_3_OffsetPadding_forAlignmentOnly[16];
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___secondary2DAxis_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buttons_4_OffsetPadding[24];
					// System.UInt16 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState::buttons
					uint16_t ___buttons_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buttons_4_OffsetPadding_forAlignmentOnly[24];
					uint16_t ___buttons_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___batteryLevel_5_OffsetPadding[26];
					// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState::batteryLevel
					float ___batteryLevel_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___batteryLevel_5_OffsetPadding_forAlignmentOnly[26];
					float ___batteryLevel_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_6_OffsetPadding[30];
					// System.Int32 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState::trackingState
					int32_t ___trackingState_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trackingState_6_OffsetPadding_forAlignmentOnly[30];
					int32_t ___trackingState_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___isTracked_7_OffsetPadding[34];
					// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState::isTracked
					bool ___isTracked_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___isTracked_7_OffsetPadding_forAlignmentOnly[34];
					bool ___isTracked_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___devicePosition_8_OffsetPadding[35];
					// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState::devicePosition
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___devicePosition_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___devicePosition_8_OffsetPadding_forAlignmentOnly[35];
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___devicePosition_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceRotation_9_OffsetPadding[47];
					// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState::deviceRotation
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___deviceRotation_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___deviceRotation_9_OffsetPadding_forAlignmentOnly[47];
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___deviceRotation_9_forAlignmentOnly;
				};
			};
		};
		uint8_t XRSimulatedControllerState_tF8F4FD13AD3CC46E85B73D5F2BCEB18FF0531175__padding[63];
	};

public:
	inline static int32_t get_offset_of_primary2DAxis_0() { return static_cast<int32_t>(offsetof(XRSimulatedControllerState_tF8F4FD13AD3CC46E85B73D5F2BCEB18FF0531175, ___primary2DAxis_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_primary2DAxis_0() const { return ___primary2DAxis_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_primary2DAxis_0() { return &___primary2DAxis_0; }
	inline void set_primary2DAxis_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___primary2DAxis_0 = value;
	}

	inline static int32_t get_offset_of_trigger_1() { return static_cast<int32_t>(offsetof(XRSimulatedControllerState_tF8F4FD13AD3CC46E85B73D5F2BCEB18FF0531175, ___trigger_1)); }
	inline float get_trigger_1() const { return ___trigger_1; }
	inline float* get_address_of_trigger_1() { return &___trigger_1; }
	inline void set_trigger_1(float value)
	{
		___trigger_1 = value;
	}

	inline static int32_t get_offset_of_grip_2() { return static_cast<int32_t>(offsetof(XRSimulatedControllerState_tF8F4FD13AD3CC46E85B73D5F2BCEB18FF0531175, ___grip_2)); }
	inline float get_grip_2() const { return ___grip_2; }
	inline float* get_address_of_grip_2() { return &___grip_2; }
	inline void set_grip_2(float value)
	{
		___grip_2 = value;
	}

	inline static int32_t get_offset_of_secondary2DAxis_3() { return static_cast<int32_t>(offsetof(XRSimulatedControllerState_tF8F4FD13AD3CC46E85B73D5F2BCEB18FF0531175, ___secondary2DAxis_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_secondary2DAxis_3() const { return ___secondary2DAxis_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_secondary2DAxis_3() { return &___secondary2DAxis_3; }
	inline void set_secondary2DAxis_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___secondary2DAxis_3 = value;
	}

	inline static int32_t get_offset_of_buttons_4() { return static_cast<int32_t>(offsetof(XRSimulatedControllerState_tF8F4FD13AD3CC46E85B73D5F2BCEB18FF0531175, ___buttons_4)); }
	inline uint16_t get_buttons_4() const { return ___buttons_4; }
	inline uint16_t* get_address_of_buttons_4() { return &___buttons_4; }
	inline void set_buttons_4(uint16_t value)
	{
		___buttons_4 = value;
	}

	inline static int32_t get_offset_of_batteryLevel_5() { return static_cast<int32_t>(offsetof(XRSimulatedControllerState_tF8F4FD13AD3CC46E85B73D5F2BCEB18FF0531175, ___batteryLevel_5)); }
	inline float get_batteryLevel_5() const { return ___batteryLevel_5; }
	inline float* get_address_of_batteryLevel_5() { return &___batteryLevel_5; }
	inline void set_batteryLevel_5(float value)
	{
		___batteryLevel_5 = value;
	}

	inline static int32_t get_offset_of_trackingState_6() { return static_cast<int32_t>(offsetof(XRSimulatedControllerState_tF8F4FD13AD3CC46E85B73D5F2BCEB18FF0531175, ___trackingState_6)); }
	inline int32_t get_trackingState_6() const { return ___trackingState_6; }
	inline int32_t* get_address_of_trackingState_6() { return &___trackingState_6; }
	inline void set_trackingState_6(int32_t value)
	{
		___trackingState_6 = value;
	}

	inline static int32_t get_offset_of_isTracked_7() { return static_cast<int32_t>(offsetof(XRSimulatedControllerState_tF8F4FD13AD3CC46E85B73D5F2BCEB18FF0531175, ___isTracked_7)); }
	inline bool get_isTracked_7() const { return ___isTracked_7; }
	inline bool* get_address_of_isTracked_7() { return &___isTracked_7; }
	inline void set_isTracked_7(bool value)
	{
		___isTracked_7 = value;
	}

	inline static int32_t get_offset_of_devicePosition_8() { return static_cast<int32_t>(offsetof(XRSimulatedControllerState_tF8F4FD13AD3CC46E85B73D5F2BCEB18FF0531175, ___devicePosition_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_devicePosition_8() const { return ___devicePosition_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_devicePosition_8() { return &___devicePosition_8; }
	inline void set_devicePosition_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___devicePosition_8 = value;
	}

	inline static int32_t get_offset_of_deviceRotation_9() { return static_cast<int32_t>(offsetof(XRSimulatedControllerState_tF8F4FD13AD3CC46E85B73D5F2BCEB18FF0531175, ___deviceRotation_9)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_deviceRotation_9() const { return ___deviceRotation_9; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_deviceRotation_9() { return &___deviceRotation_9; }
	inline void set_deviceRotation_9(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___deviceRotation_9 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState
struct XRSimulatedControllerState_tF8F4FD13AD3CC46E85B73D5F2BCEB18FF0531175_marshaled_pinvoke
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___primary2DAxis_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___primary2DAxis_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trigger_1_OffsetPadding[8];
					float ___trigger_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trigger_1_OffsetPadding_forAlignmentOnly[8];
					float ___trigger_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___grip_2_OffsetPadding[12];
					float ___grip_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___grip_2_OffsetPadding_forAlignmentOnly[12];
					float ___grip_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___secondary2DAxis_3_OffsetPadding[16];
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___secondary2DAxis_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___secondary2DAxis_3_OffsetPadding_forAlignmentOnly[16];
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___secondary2DAxis_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buttons_4_OffsetPadding[24];
					uint16_t ___buttons_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buttons_4_OffsetPadding_forAlignmentOnly[24];
					uint16_t ___buttons_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___batteryLevel_5_OffsetPadding[26];
					float ___batteryLevel_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___batteryLevel_5_OffsetPadding_forAlignmentOnly[26];
					float ___batteryLevel_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_6_OffsetPadding[30];
					int32_t ___trackingState_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trackingState_6_OffsetPadding_forAlignmentOnly[30];
					int32_t ___trackingState_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___isTracked_7_OffsetPadding[34];
					int32_t ___isTracked_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___isTracked_7_OffsetPadding_forAlignmentOnly[34];
					int32_t ___isTracked_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___devicePosition_8_OffsetPadding[35];
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___devicePosition_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___devicePosition_8_OffsetPadding_forAlignmentOnly[35];
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___devicePosition_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceRotation_9_OffsetPadding[47];
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___deviceRotation_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___deviceRotation_9_OffsetPadding_forAlignmentOnly[47];
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___deviceRotation_9_forAlignmentOnly;
				};
			};
		};
		uint8_t XRSimulatedControllerState_tF8F4FD13AD3CC46E85B73D5F2BCEB18FF0531175__padding[63];
	};
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState
struct XRSimulatedControllerState_tF8F4FD13AD3CC46E85B73D5F2BCEB18FF0531175_marshaled_com
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___primary2DAxis_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___primary2DAxis_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trigger_1_OffsetPadding[8];
					float ___trigger_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trigger_1_OffsetPadding_forAlignmentOnly[8];
					float ___trigger_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___grip_2_OffsetPadding[12];
					float ___grip_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___grip_2_OffsetPadding_forAlignmentOnly[12];
					float ___grip_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___secondary2DAxis_3_OffsetPadding[16];
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___secondary2DAxis_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___secondary2DAxis_3_OffsetPadding_forAlignmentOnly[16];
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___secondary2DAxis_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buttons_4_OffsetPadding[24];
					uint16_t ___buttons_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buttons_4_OffsetPadding_forAlignmentOnly[24];
					uint16_t ___buttons_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___batteryLevel_5_OffsetPadding[26];
					float ___batteryLevel_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___batteryLevel_5_OffsetPadding_forAlignmentOnly[26];
					float ___batteryLevel_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_6_OffsetPadding[30];
					int32_t ___trackingState_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trackingState_6_OffsetPadding_forAlignmentOnly[30];
					int32_t ___trackingState_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___isTracked_7_OffsetPadding[34];
					int32_t ___isTracked_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___isTracked_7_OffsetPadding_forAlignmentOnly[34];
					int32_t ___isTracked_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___devicePosition_8_OffsetPadding[35];
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___devicePosition_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___devicePosition_8_OffsetPadding_forAlignmentOnly[35];
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___devicePosition_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceRotation_9_OffsetPadding[47];
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___deviceRotation_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___deviceRotation_9_OffsetPadding_forAlignmentOnly[47];
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___deviceRotation_9_forAlignmentOnly;
				};
			};
		};
		uint8_t XRSimulatedControllerState_tF8F4FD13AD3CC46E85B73D5F2BCEB18FF0531175__padding[63];
	};
};

// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState
struct XRSimulatedHMDState_tDAE563E2C0FBDB44CF1D0272A9668F5B0A13D5D7 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::leftEyePosition
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftEyePosition_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftEyePosition_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___leftEyeRotation_1_OffsetPadding[12];
					// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::leftEyeRotation
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___leftEyeRotation_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___leftEyeRotation_1_OffsetPadding_forAlignmentOnly[12];
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___leftEyeRotation_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rightEyePosition_2_OffsetPadding[28];
					// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::rightEyePosition
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightEyePosition_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___rightEyePosition_2_OffsetPadding_forAlignmentOnly[28];
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightEyePosition_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rightEyeRotation_3_OffsetPadding[40];
					// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::rightEyeRotation
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rightEyeRotation_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___rightEyeRotation_3_OffsetPadding_forAlignmentOnly[40];
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rightEyeRotation_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___centerEyePosition_4_OffsetPadding[56];
					// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::centerEyePosition
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___centerEyePosition_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___centerEyePosition_4_OffsetPadding_forAlignmentOnly[56];
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___centerEyePosition_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___centerEyeRotation_5_OffsetPadding[68];
					// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::centerEyeRotation
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___centerEyeRotation_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___centerEyeRotation_5_OffsetPadding_forAlignmentOnly[68];
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___centerEyeRotation_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_6_OffsetPadding[84];
					// System.Int32 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::trackingState
					int32_t ___trackingState_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trackingState_6_OffsetPadding_forAlignmentOnly[84];
					int32_t ___trackingState_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___isTracked_7_OffsetPadding[88];
					// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::isTracked
					bool ___isTracked_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___isTracked_7_OffsetPadding_forAlignmentOnly[88];
					bool ___isTracked_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___devicePosition_8_OffsetPadding[89];
					// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::devicePosition
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___devicePosition_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___devicePosition_8_OffsetPadding_forAlignmentOnly[89];
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___devicePosition_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceRotation_9_OffsetPadding[101];
					// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState::deviceRotation
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___deviceRotation_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___deviceRotation_9_OffsetPadding_forAlignmentOnly[101];
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___deviceRotation_9_forAlignmentOnly;
				};
			};
		};
		uint8_t XRSimulatedHMDState_tDAE563E2C0FBDB44CF1D0272A9668F5B0A13D5D7__padding[117];
	};

public:
	inline static int32_t get_offset_of_leftEyePosition_0() { return static_cast<int32_t>(offsetof(XRSimulatedHMDState_tDAE563E2C0FBDB44CF1D0272A9668F5B0A13D5D7, ___leftEyePosition_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftEyePosition_0() const { return ___leftEyePosition_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftEyePosition_0() { return &___leftEyePosition_0; }
	inline void set_leftEyePosition_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftEyePosition_0 = value;
	}

	inline static int32_t get_offset_of_leftEyeRotation_1() { return static_cast<int32_t>(offsetof(XRSimulatedHMDState_tDAE563E2C0FBDB44CF1D0272A9668F5B0A13D5D7, ___leftEyeRotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_leftEyeRotation_1() const { return ___leftEyeRotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_leftEyeRotation_1() { return &___leftEyeRotation_1; }
	inline void set_leftEyeRotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___leftEyeRotation_1 = value;
	}

	inline static int32_t get_offset_of_rightEyePosition_2() { return static_cast<int32_t>(offsetof(XRSimulatedHMDState_tDAE563E2C0FBDB44CF1D0272A9668F5B0A13D5D7, ___rightEyePosition_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightEyePosition_2() const { return ___rightEyePosition_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightEyePosition_2() { return &___rightEyePosition_2; }
	inline void set_rightEyePosition_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightEyePosition_2 = value;
	}

	inline static int32_t get_offset_of_rightEyeRotation_3() { return static_cast<int32_t>(offsetof(XRSimulatedHMDState_tDAE563E2C0FBDB44CF1D0272A9668F5B0A13D5D7, ___rightEyeRotation_3)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rightEyeRotation_3() const { return ___rightEyeRotation_3; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rightEyeRotation_3() { return &___rightEyeRotation_3; }
	inline void set_rightEyeRotation_3(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rightEyeRotation_3 = value;
	}

	inline static int32_t get_offset_of_centerEyePosition_4() { return static_cast<int32_t>(offsetof(XRSimulatedHMDState_tDAE563E2C0FBDB44CF1D0272A9668F5B0A13D5D7, ___centerEyePosition_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_centerEyePosition_4() const { return ___centerEyePosition_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_centerEyePosition_4() { return &___centerEyePosition_4; }
	inline void set_centerEyePosition_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___centerEyePosition_4 = value;
	}

	inline static int32_t get_offset_of_centerEyeRotation_5() { return static_cast<int32_t>(offsetof(XRSimulatedHMDState_tDAE563E2C0FBDB44CF1D0272A9668F5B0A13D5D7, ___centerEyeRotation_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_centerEyeRotation_5() const { return ___centerEyeRotation_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_centerEyeRotation_5() { return &___centerEyeRotation_5; }
	inline void set_centerEyeRotation_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___centerEyeRotation_5 = value;
	}

	inline static int32_t get_offset_of_trackingState_6() { return static_cast<int32_t>(offsetof(XRSimulatedHMDState_tDAE563E2C0FBDB44CF1D0272A9668F5B0A13D5D7, ___trackingState_6)); }
	inline int32_t get_trackingState_6() const { return ___trackingState_6; }
	inline int32_t* get_address_of_trackingState_6() { return &___trackingState_6; }
	inline void set_trackingState_6(int32_t value)
	{
		___trackingState_6 = value;
	}

	inline static int32_t get_offset_of_isTracked_7() { return static_cast<int32_t>(offsetof(XRSimulatedHMDState_tDAE563E2C0FBDB44CF1D0272A9668F5B0A13D5D7, ___isTracked_7)); }
	inline bool get_isTracked_7() const { return ___isTracked_7; }
	inline bool* get_address_of_isTracked_7() { return &___isTracked_7; }
	inline void set_isTracked_7(bool value)
	{
		___isTracked_7 = value;
	}

	inline static int32_t get_offset_of_devicePosition_8() { return static_cast<int32_t>(offsetof(XRSimulatedHMDState_tDAE563E2C0FBDB44CF1D0272A9668F5B0A13D5D7, ___devicePosition_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_devicePosition_8() const { return ___devicePosition_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_devicePosition_8() { return &___devicePosition_8; }
	inline void set_devicePosition_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___devicePosition_8 = value;
	}

	inline static int32_t get_offset_of_deviceRotation_9() { return static_cast<int32_t>(offsetof(XRSimulatedHMDState_tDAE563E2C0FBDB44CF1D0272A9668F5B0A13D5D7, ___deviceRotation_9)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_deviceRotation_9() const { return ___deviceRotation_9; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_deviceRotation_9() { return &___deviceRotation_9; }
	inline void set_deviceRotation_9(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___deviceRotation_9 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState
struct XRSimulatedHMDState_tDAE563E2C0FBDB44CF1D0272A9668F5B0A13D5D7_marshaled_pinvoke
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftEyePosition_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftEyePosition_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___leftEyeRotation_1_OffsetPadding[12];
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___leftEyeRotation_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___leftEyeRotation_1_OffsetPadding_forAlignmentOnly[12];
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___leftEyeRotation_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rightEyePosition_2_OffsetPadding[28];
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightEyePosition_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___rightEyePosition_2_OffsetPadding_forAlignmentOnly[28];
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightEyePosition_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rightEyeRotation_3_OffsetPadding[40];
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rightEyeRotation_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___rightEyeRotation_3_OffsetPadding_forAlignmentOnly[40];
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rightEyeRotation_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___centerEyePosition_4_OffsetPadding[56];
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___centerEyePosition_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___centerEyePosition_4_OffsetPadding_forAlignmentOnly[56];
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___centerEyePosition_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___centerEyeRotation_5_OffsetPadding[68];
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___centerEyeRotation_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___centerEyeRotation_5_OffsetPadding_forAlignmentOnly[68];
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___centerEyeRotation_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_6_OffsetPadding[84];
					int32_t ___trackingState_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trackingState_6_OffsetPadding_forAlignmentOnly[84];
					int32_t ___trackingState_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___isTracked_7_OffsetPadding[88];
					int32_t ___isTracked_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___isTracked_7_OffsetPadding_forAlignmentOnly[88];
					int32_t ___isTracked_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___devicePosition_8_OffsetPadding[89];
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___devicePosition_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___devicePosition_8_OffsetPadding_forAlignmentOnly[89];
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___devicePosition_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceRotation_9_OffsetPadding[101];
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___deviceRotation_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___deviceRotation_9_OffsetPadding_forAlignmentOnly[101];
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___deviceRotation_9_forAlignmentOnly;
				};
			};
		};
		uint8_t XRSimulatedHMDState_tDAE563E2C0FBDB44CF1D0272A9668F5B0A13D5D7__padding[117];
	};
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState
struct XRSimulatedHMDState_tDAE563E2C0FBDB44CF1D0272A9668F5B0A13D5D7_marshaled_com
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftEyePosition_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftEyePosition_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___leftEyeRotation_1_OffsetPadding[12];
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___leftEyeRotation_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___leftEyeRotation_1_OffsetPadding_forAlignmentOnly[12];
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___leftEyeRotation_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rightEyePosition_2_OffsetPadding[28];
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightEyePosition_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___rightEyePosition_2_OffsetPadding_forAlignmentOnly[28];
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightEyePosition_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rightEyeRotation_3_OffsetPadding[40];
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rightEyeRotation_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___rightEyeRotation_3_OffsetPadding_forAlignmentOnly[40];
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rightEyeRotation_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___centerEyePosition_4_OffsetPadding[56];
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___centerEyePosition_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___centerEyePosition_4_OffsetPadding_forAlignmentOnly[56];
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___centerEyePosition_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___centerEyeRotation_5_OffsetPadding[68];
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___centerEyeRotation_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___centerEyeRotation_5_OffsetPadding_forAlignmentOnly[68];
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___centerEyeRotation_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_6_OffsetPadding[84];
					int32_t ___trackingState_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trackingState_6_OffsetPadding_forAlignmentOnly[84];
					int32_t ___trackingState_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___isTracked_7_OffsetPadding[88];
					int32_t ___isTracked_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___isTracked_7_OffsetPadding_forAlignmentOnly[88];
					int32_t ___isTracked_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___devicePosition_8_OffsetPadding[89];
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___devicePosition_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___devicePosition_8_OffsetPadding_forAlignmentOnly[89];
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___devicePosition_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceRotation_9_OffsetPadding[101];
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___deviceRotation_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___deviceRotation_9_OffsetPadding_forAlignmentOnly[101];
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___deviceRotation_9_forAlignmentOnly;
				};
			};
		};
		uint8_t XRSimulatedHMDState_tDAE563E2C0FBDB44CF1D0272A9668F5B0A13D5D7__padding[117];
	};
};

// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputAction/ActionFlags
struct ActionFlags_t7D04593349EAB81D5C0E58D2B0DBAABA6B914252 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputAction/ActionFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ActionFlags_t7D04593349EAB81D5C0E58D2B0DBAABA6B914252, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputBinding/Flags
struct Flags_tB8C0F66F19426A1903E4D43B669650457D5057D1 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBinding/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tB8C0F66F19426A1903E4D43B669650457D5057D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputControl/ControlFlags
struct ControlFlags_t43CF0138618503E94B4811FD6CF66F13F0186787 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControl/ControlFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlFlags_t43CF0138618503E94B4811FD6CF66F13F0186787, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputDevice/DeviceFlags
struct DeviceFlags_tF2567D99F286E930FC6B04C6A3CCB2E65B1D762D 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputDevice/DeviceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceFlags_tF2567D99F286E930FC6B04C6A3CCB2E65B1D762D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/Axis2DTargets
struct Axis2DTargets_tDA1ABED2BAB31548E373BA5BA1FA1CE335A16174 
{
public:
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/Axis2DTargets::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis2DTargets_tDA1ABED2BAB31548E373BA5BA1FA1CE335A16174, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/Space
struct Space_t145148EFA4ABDCF429FA18A63E4C01D03E2CB75C 
{
public:
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t145148EFA4ABDCF429FA18A63E4C01D03E2CB75C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/TargetedDevices
struct TargetedDevices_t91D1E49E64A78DE2AAF1B4DC94042EF4292FA8AE 
{
public:
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/TargetedDevices::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TargetedDevices_t91D1E49E64A78DE2AAF1B4DC94042EF4292FA8AE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/TransformationMode
struct TransformationMode_tFAD711C19386573876EBDE687EA3E407CB1C191A 
{
public:
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/TransformationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TransformationMode_tFAD711C19386573876EBDE687EA3E407CB1C191A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.InputSystem.InputBinding
struct InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB 
{
public:
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Path_4() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Path_4)); }
	inline String_t* get_m_Path_4() const { return ___m_Path_4; }
	inline String_t** get_address_of_m_Path_4() { return &___m_Path_4; }
	inline void set_m_Path_4(String_t* value)
	{
		___m_Path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_6() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Processors_6)); }
	inline String_t* get_m_Processors_6() const { return ___m_Processors_6; }
	inline String_t** get_address_of_m_Processors_6() { return &___m_Processors_6; }
	inline void set_m_Processors_6(String_t* value)
	{
		___m_Processors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Groups_7() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Groups_7)); }
	inline String_t* get_m_Groups_7() const { return ___m_Groups_7; }
	inline String_t** get_address_of_m_Groups_7() { return &___m_Groups_7; }
	inline void set_m_Groups_7(String_t* value)
	{
		___m_Groups_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Groups_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_8() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Action_8)); }
	inline String_t* get_m_Action_8() const { return ___m_Action_8; }
	inline String_t** get_address_of_m_Action_8() { return &___m_Action_8; }
	inline void set_m_Action_8(String_t* value)
	{
		___m_Action_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_9() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Flags_9)); }
	inline int32_t get_m_Flags_9() const { return ___m_Flags_9; }
	inline int32_t* get_address_of_m_Flags_9() { return &___m_Flags_9; }
	inline void set_m_Flags_9(int32_t value)
	{
		___m_Flags_9 = value;
	}

	inline static int32_t get_offset_of_m_OverridePath_10() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_OverridePath_10)); }
	inline String_t* get_m_OverridePath_10() const { return ___m_OverridePath_10; }
	inline String_t** get_address_of_m_OverridePath_10() { return &___m_OverridePath_10; }
	inline void set_m_OverridePath_10(String_t* value)
	{
		___m_OverridePath_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverridePath_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideInteractions_11() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_OverrideInteractions_11)); }
	inline String_t* get_m_OverrideInteractions_11() const { return ___m_OverrideInteractions_11; }
	inline String_t** get_address_of_m_OverrideInteractions_11() { return &___m_OverrideInteractions_11; }
	inline void set_m_OverrideInteractions_11(String_t* value)
	{
		___m_OverrideInteractions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideInteractions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideProcessors_12() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_OverrideProcessors_12)); }
	inline String_t* get_m_OverrideProcessors_12() const { return ___m_OverrideProcessors_12; }
	inline String_t** get_address_of_m_OverrideProcessors_12() { return &___m_OverrideProcessors_12; }
	inline void set_m_OverrideProcessors_12(String_t* value)
	{
		___m_OverrideProcessors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideProcessors_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BoolValue_1() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_BoolValue_1)); }
	inline bool get_m_BoolValue_1() const { return ___m_BoolValue_1; }
	inline bool* get_address_of_m_BoolValue_1() { return &___m_BoolValue_1; }
	inline void set_m_BoolValue_1(bool value)
	{
		___m_BoolValue_1 = value;
	}

	inline static int32_t get_offset_of_m_CharValue_2() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_CharValue_2)); }
	inline Il2CppChar get_m_CharValue_2() const { return ___m_CharValue_2; }
	inline Il2CppChar* get_address_of_m_CharValue_2() { return &___m_CharValue_2; }
	inline void set_m_CharValue_2(Il2CppChar value)
	{
		___m_CharValue_2 = value;
	}

	inline static int32_t get_offset_of_m_ByteValue_3() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_ByteValue_3)); }
	inline uint8_t get_m_ByteValue_3() const { return ___m_ByteValue_3; }
	inline uint8_t* get_address_of_m_ByteValue_3() { return &___m_ByteValue_3; }
	inline void set_m_ByteValue_3(uint8_t value)
	{
		___m_ByteValue_3 = value;
	}

	inline static int32_t get_offset_of_m_SByteValue_4() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_SByteValue_4)); }
	inline int8_t get_m_SByteValue_4() const { return ___m_SByteValue_4; }
	inline int8_t* get_address_of_m_SByteValue_4() { return &___m_SByteValue_4; }
	inline void set_m_SByteValue_4(int8_t value)
	{
		___m_SByteValue_4 = value;
	}

	inline static int32_t get_offset_of_m_ShortValue_5() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_ShortValue_5)); }
	inline int16_t get_m_ShortValue_5() const { return ___m_ShortValue_5; }
	inline int16_t* get_address_of_m_ShortValue_5() { return &___m_ShortValue_5; }
	inline void set_m_ShortValue_5(int16_t value)
	{
		___m_ShortValue_5 = value;
	}

	inline static int32_t get_offset_of_m_UShortValue_6() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_UShortValue_6)); }
	inline uint16_t get_m_UShortValue_6() const { return ___m_UShortValue_6; }
	inline uint16_t* get_address_of_m_UShortValue_6() { return &___m_UShortValue_6; }
	inline void set_m_UShortValue_6(uint16_t value)
	{
		___m_UShortValue_6 = value;
	}

	inline static int32_t get_offset_of_m_IntValue_7() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_IntValue_7)); }
	inline int32_t get_m_IntValue_7() const { return ___m_IntValue_7; }
	inline int32_t* get_address_of_m_IntValue_7() { return &___m_IntValue_7; }
	inline void set_m_IntValue_7(int32_t value)
	{
		___m_IntValue_7 = value;
	}

	inline static int32_t get_offset_of_m_UIntValue_8() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_UIntValue_8)); }
	inline uint32_t get_m_UIntValue_8() const { return ___m_UIntValue_8; }
	inline uint32_t* get_address_of_m_UIntValue_8() { return &___m_UIntValue_8; }
	inline void set_m_UIntValue_8(uint32_t value)
	{
		___m_UIntValue_8 = value;
	}

	inline static int32_t get_offset_of_m_LongValue_9() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_LongValue_9)); }
	inline int64_t get_m_LongValue_9() const { return ___m_LongValue_9; }
	inline int64_t* get_address_of_m_LongValue_9() { return &___m_LongValue_9; }
	inline void set_m_LongValue_9(int64_t value)
	{
		___m_LongValue_9 = value;
	}

	inline static int32_t get_offset_of_m_ULongValue_10() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_ULongValue_10)); }
	inline uint64_t get_m_ULongValue_10() const { return ___m_ULongValue_10; }
	inline uint64_t* get_address_of_m_ULongValue_10() { return &___m_ULongValue_10; }
	inline void set_m_ULongValue_10(uint64_t value)
	{
		___m_ULongValue_10 = value;
	}

	inline static int32_t get_offset_of_m_FloatValue_11() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_FloatValue_11)); }
	inline float get_m_FloatValue_11() const { return ___m_FloatValue_11; }
	inline float* get_address_of_m_FloatValue_11() { return &___m_FloatValue_11; }
	inline void set_m_FloatValue_11(float value)
	{
		___m_FloatValue_11 = value;
	}

	inline static int32_t get_offset_of_m_DoubleValue_12() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_DoubleValue_12)); }
	inline double get_m_DoubleValue_12() const { return ___m_DoubleValue_12; }
	inline double* get_address_of_m_DoubleValue_12() { return &___m_DoubleValue_12; }
	inline void set_m_DoubleValue_12(double value)
	{
		___m_DoubleValue_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81  : public MulticastDelegate_t
{
public:

public:
};


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07 
{
public:
	// T System.Nullable`1::value
	InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07, ___value_0)); }
	inline InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB  get_value_0() const { return ___value_0; }
	inline InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionReference::m_Asset
	InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 * ___m_Asset_4;
	// System.String UnityEngine.InputSystem.InputActionReference::m_ActionId
	String_t* ___m_ActionId_5;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::m_Action
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * ___m_Action_6;

public:
	inline static int32_t get_offset_of_m_Asset_4() { return static_cast<int32_t>(offsetof(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621, ___m_Asset_4)); }
	inline InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 * get_m_Asset_4() const { return ___m_Asset_4; }
	inline InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 ** get_address_of_m_Asset_4() { return &___m_Asset_4; }
	inline void set_m_Asset_4(InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 * value)
	{
		___m_Asset_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Asset_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionId_5() { return static_cast<int32_t>(offsetof(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621, ___m_ActionId_5)); }
	inline String_t* get_m_ActionId_5() const { return ___m_ActionId_5; }
	inline String_t** get_address_of_m_ActionId_5() { return &___m_ActionId_5; }
	inline void set_m_ActionId_5(String_t* value)
	{
		___m_ActionId_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionId_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_6() { return static_cast<int32_t>(offsetof(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621, ___m_Action_6)); }
	inline InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * get_m_Action_6() const { return ___m_Action_6; }
	inline InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B ** get_address_of_m_Action_6() { return &___m_Action_6; }
	inline void set_m_Action_6(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * value)
	{
		___m_Action_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_6), (void*)value);
	}
};


// UnityEngine.InputSystem.InputControl
struct InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B  ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  ___m_MaxValue_20;

public:
	inline static int32_t get_offset_of_m_StateBlock_0() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_StateBlock_0)); }
	inline InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B  get_m_StateBlock_0() const { return ___m_StateBlock_0; }
	inline InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B * get_address_of_m_StateBlock_0() { return &___m_StateBlock_0; }
	inline void set_m_StateBlock_0(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B  value)
	{
		___m_StateBlock_0 = value;
	}

	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_Name_1)); }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  get_m_Name_1() const { return ___m_Name_1; }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED * get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayName_3() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_DisplayName_3)); }
	inline String_t* get_m_DisplayName_3() const { return ___m_DisplayName_3; }
	inline String_t** get_address_of_m_DisplayName_3() { return &___m_DisplayName_3; }
	inline void set_m_DisplayName_3(String_t* value)
	{
		___m_DisplayName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayNameFromLayout_4() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_DisplayNameFromLayout_4)); }
	inline String_t* get_m_DisplayNameFromLayout_4() const { return ___m_DisplayNameFromLayout_4; }
	inline String_t** get_address_of_m_DisplayNameFromLayout_4() { return &___m_DisplayNameFromLayout_4; }
	inline void set_m_DisplayNameFromLayout_4(String_t* value)
	{
		___m_DisplayNameFromLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayNameFromLayout_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayName_5() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_ShortDisplayName_5)); }
	inline String_t* get_m_ShortDisplayName_5() const { return ___m_ShortDisplayName_5; }
	inline String_t** get_address_of_m_ShortDisplayName_5() { return &___m_ShortDisplayName_5; }
	inline void set_m_ShortDisplayName_5(String_t* value)
	{
		___m_ShortDisplayName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayName_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayNameFromLayout_6() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_ShortDisplayNameFromLayout_6)); }
	inline String_t* get_m_ShortDisplayNameFromLayout_6() const { return ___m_ShortDisplayNameFromLayout_6; }
	inline String_t** get_address_of_m_ShortDisplayNameFromLayout_6() { return &___m_ShortDisplayNameFromLayout_6; }
	inline void set_m_ShortDisplayNameFromLayout_6(String_t* value)
	{
		___m_ShortDisplayNameFromLayout_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayNameFromLayout_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Layout_7() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_Layout_7)); }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  get_m_Layout_7() const { return ___m_Layout_7; }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED * get_address_of_m_Layout_7() { return &___m_Layout_7; }
	inline void set_m_Layout_7(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  value)
	{
		___m_Layout_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Variants_8() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_Variants_8)); }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  get_m_Variants_8() const { return ___m_Variants_8; }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED * get_address_of_m_Variants_8() { return &___m_Variants_8; }
	inline void set_m_Variants_8(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  value)
	{
		___m_Variants_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Device_9() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_Device_9)); }
	inline InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * get_m_Device_9() const { return ___m_Device_9; }
	inline InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 ** get_address_of_m_Device_9() { return &___m_Device_9; }
	inline void set_m_Device_9(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * value)
	{
		___m_Device_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Device_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_10() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_Parent_10)); }
	inline InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * get_m_Parent_10() const { return ___m_Parent_10; }
	inline InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 ** get_address_of_m_Parent_10() { return &___m_Parent_10; }
	inline void set_m_Parent_10(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * value)
	{
		___m_Parent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageCount_11() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_UsageCount_11)); }
	inline int32_t get_m_UsageCount_11() const { return ___m_UsageCount_11; }
	inline int32_t* get_address_of_m_UsageCount_11() { return &___m_UsageCount_11; }
	inline void set_m_UsageCount_11(int32_t value)
	{
		___m_UsageCount_11 = value;
	}

	inline static int32_t get_offset_of_m_UsageStartIndex_12() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_UsageStartIndex_12)); }
	inline int32_t get_m_UsageStartIndex_12() const { return ___m_UsageStartIndex_12; }
	inline int32_t* get_address_of_m_UsageStartIndex_12() { return &___m_UsageStartIndex_12; }
	inline void set_m_UsageStartIndex_12(int32_t value)
	{
		___m_UsageStartIndex_12 = value;
	}

	inline static int32_t get_offset_of_m_AliasCount_13() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_AliasCount_13)); }
	inline int32_t get_m_AliasCount_13() const { return ___m_AliasCount_13; }
	inline int32_t* get_address_of_m_AliasCount_13() { return &___m_AliasCount_13; }
	inline void set_m_AliasCount_13(int32_t value)
	{
		___m_AliasCount_13 = value;
	}

	inline static int32_t get_offset_of_m_AliasStartIndex_14() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_AliasStartIndex_14)); }
	inline int32_t get_m_AliasStartIndex_14() const { return ___m_AliasStartIndex_14; }
	inline int32_t* get_address_of_m_AliasStartIndex_14() { return &___m_AliasStartIndex_14; }
	inline void set_m_AliasStartIndex_14(int32_t value)
	{
		___m_AliasStartIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_ChildCount_15() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_ChildCount_15)); }
	inline int32_t get_m_ChildCount_15() const { return ___m_ChildCount_15; }
	inline int32_t* get_address_of_m_ChildCount_15() { return &___m_ChildCount_15; }
	inline void set_m_ChildCount_15(int32_t value)
	{
		___m_ChildCount_15 = value;
	}

	inline static int32_t get_offset_of_m_ChildStartIndex_16() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_ChildStartIndex_16)); }
	inline int32_t get_m_ChildStartIndex_16() const { return ___m_ChildStartIndex_16; }
	inline int32_t* get_address_of_m_ChildStartIndex_16() { return &___m_ChildStartIndex_16; }
	inline void set_m_ChildStartIndex_16(int32_t value)
	{
		___m_ChildStartIndex_16 = value;
	}

	inline static int32_t get_offset_of_m_ControlFlags_17() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_ControlFlags_17)); }
	inline int32_t get_m_ControlFlags_17() const { return ___m_ControlFlags_17; }
	inline int32_t* get_address_of_m_ControlFlags_17() { return &___m_ControlFlags_17; }
	inline void set_m_ControlFlags_17(int32_t value)
	{
		___m_ControlFlags_17 = value;
	}

	inline static int32_t get_offset_of_m_DefaultState_18() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_DefaultState_18)); }
	inline PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  get_m_DefaultState_18() const { return ___m_DefaultState_18; }
	inline PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8 * get_address_of_m_DefaultState_18() { return &___m_DefaultState_18; }
	inline void set_m_DefaultState_18(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  value)
	{
		___m_DefaultState_18 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_19() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_MinValue_19)); }
	inline PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  get_m_MinValue_19() const { return ___m_MinValue_19; }
	inline PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8 * get_address_of_m_MinValue_19() { return &___m_MinValue_19; }
	inline void set_m_MinValue_19(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  value)
	{
		___m_MinValue_19 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_20() { return static_cast<int32_t>(offsetof(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1, ___m_MaxValue_20)); }
	inline PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  get_m_MaxValue_20() const { return ___m_MaxValue_20; }
	inline PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8 * get_address_of_m_MaxValue_20() { return &___m_MaxValue_20; }
	inline void set_m_MaxValue_20(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  value)
	{
		___m_MaxValue_20 = value;
	}
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.InputSystem.InputAction
struct InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_tFBF775077101E34ED6C54C4468F6E0722ECB2EF6* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07  ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_t588F4834F020838C4E8AE148F8A42CC84FA75B44 * ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1  ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1  ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1  ___m_OnPerformed_17;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_ExpectedControlType_2() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_ExpectedControlType_2)); }
	inline String_t* get_m_ExpectedControlType_2() const { return ___m_ExpectedControlType_2; }
	inline String_t** get_address_of_m_ExpectedControlType_2() { return &___m_ExpectedControlType_2; }
	inline void set_m_ExpectedControlType_2(String_t* value)
	{
		___m_ExpectedControlType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExpectedControlType_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_4() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_Processors_4)); }
	inline String_t* get_m_Processors_4() const { return ___m_Processors_4; }
	inline String_t** get_address_of_m_Processors_4() { return &___m_Processors_4; }
	inline void set_m_Processors_4(String_t* value)
	{
		___m_Processors_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_SingletonActionBindings_6() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_SingletonActionBindings_6)); }
	inline InputBindingU5BU5D_tFBF775077101E34ED6C54C4468F6E0722ECB2EF6* get_m_SingletonActionBindings_6() const { return ___m_SingletonActionBindings_6; }
	inline InputBindingU5BU5D_tFBF775077101E34ED6C54C4468F6E0722ECB2EF6** get_address_of_m_SingletonActionBindings_6() { return &___m_SingletonActionBindings_6; }
	inline void set_m_SingletonActionBindings_6(InputBindingU5BU5D_tFBF775077101E34ED6C54C4468F6E0722ECB2EF6* value)
	{
		___m_SingletonActionBindings_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SingletonActionBindings_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_7() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_Flags_7)); }
	inline int32_t get_m_Flags_7() const { return ___m_Flags_7; }
	inline int32_t* get_address_of_m_Flags_7() { return &___m_Flags_7; }
	inline void set_m_Flags_7(int32_t value)
	{
		___m_Flags_7 = value;
	}

	inline static int32_t get_offset_of_m_BindingMask_8() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_BindingMask_8)); }
	inline Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07  get_m_BindingMask_8() const { return ___m_BindingMask_8; }
	inline Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07 * get_address_of_m_BindingMask_8() { return &___m_BindingMask_8; }
	inline void set_m_BindingMask_8(Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07  value)
	{
		___m_BindingMask_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_BindingsStartIndex_9() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_BindingsStartIndex_9)); }
	inline int32_t get_m_BindingsStartIndex_9() const { return ___m_BindingsStartIndex_9; }
	inline int32_t* get_address_of_m_BindingsStartIndex_9() { return &___m_BindingsStartIndex_9; }
	inline void set_m_BindingsStartIndex_9(int32_t value)
	{
		___m_BindingsStartIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_BindingsCount_10() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_BindingsCount_10)); }
	inline int32_t get_m_BindingsCount_10() const { return ___m_BindingsCount_10; }
	inline int32_t* get_address_of_m_BindingsCount_10() { return &___m_BindingsCount_10; }
	inline void set_m_BindingsCount_10(int32_t value)
	{
		___m_BindingsCount_10 = value;
	}

	inline static int32_t get_offset_of_m_ControlStartIndex_11() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_ControlStartIndex_11)); }
	inline int32_t get_m_ControlStartIndex_11() const { return ___m_ControlStartIndex_11; }
	inline int32_t* get_address_of_m_ControlStartIndex_11() { return &___m_ControlStartIndex_11; }
	inline void set_m_ControlStartIndex_11(int32_t value)
	{
		___m_ControlStartIndex_11 = value;
	}

	inline static int32_t get_offset_of_m_ControlCount_12() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_ControlCount_12)); }
	inline int32_t get_m_ControlCount_12() const { return ___m_ControlCount_12; }
	inline int32_t* get_address_of_m_ControlCount_12() { return &___m_ControlCount_12; }
	inline void set_m_ControlCount_12(int32_t value)
	{
		___m_ControlCount_12 = value;
	}

	inline static int32_t get_offset_of_m_ActionIndexInState_13() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_ActionIndexInState_13)); }
	inline int32_t get_m_ActionIndexInState_13() const { return ___m_ActionIndexInState_13; }
	inline int32_t* get_address_of_m_ActionIndexInState_13() { return &___m_ActionIndexInState_13; }
	inline void set_m_ActionIndexInState_13(int32_t value)
	{
		___m_ActionIndexInState_13 = value;
	}

	inline static int32_t get_offset_of_m_ActionMap_14() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_ActionMap_14)); }
	inline InputActionMap_t588F4834F020838C4E8AE148F8A42CC84FA75B44 * get_m_ActionMap_14() const { return ___m_ActionMap_14; }
	inline InputActionMap_t588F4834F020838C4E8AE148F8A42CC84FA75B44 ** get_address_of_m_ActionMap_14() { return &___m_ActionMap_14; }
	inline void set_m_ActionMap_14(InputActionMap_t588F4834F020838C4E8AE148F8A42CC84FA75B44 * value)
	{
		___m_ActionMap_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMap_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnStarted_15() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_OnStarted_15)); }
	inline CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1  get_m_OnStarted_15() const { return ___m_OnStarted_15; }
	inline CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1 * get_address_of_m_OnStarted_15() { return &___m_OnStarted_15; }
	inline void set_m_OnStarted_15(CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1  value)
	{
		___m_OnStarted_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnStarted_15))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnCanceled_16() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_OnCanceled_16)); }
	inline CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1  get_m_OnCanceled_16() const { return ___m_OnCanceled_16; }
	inline CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1 * get_address_of_m_OnCanceled_16() { return &___m_OnCanceled_16; }
	inline void set_m_OnCanceled_16(CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1  value)
	{
		___m_OnCanceled_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnCanceled_16))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnPerformed_17() { return static_cast<int32_t>(offsetof(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B, ___m_OnPerformed_17)); }
	inline CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1  get_m_OnPerformed_17() const { return ___m_OnPerformed_17; }
	inline CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1 * get_address_of_m_OnPerformed_17() { return &___m_OnPerformed_17; }
	inline void set_m_OnPerformed_17(CallbackArray_1_t9AA7F1C91BD426A599B158F2A207F494A0D431F1  value)
	{
		___m_OnPerformed_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_OnPerformed_17))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputDevice
struct InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87  : public InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1
{
public:
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_24;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_25;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_26;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_27;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58  ___m_Description_28;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_29;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_30;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4* ___m_AliasesForEachControl_31;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4* ___m_UsagesForEachControl_32;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680* ___m_UsageToControl_33;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680* ___m_ChildrenForEachControl_34;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___m_StateOffsetToControlMap_35;

public:
	inline static int32_t get_offset_of_m_DeviceFlags_24() { return static_cast<int32_t>(offsetof(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87, ___m_DeviceFlags_24)); }
	inline int32_t get_m_DeviceFlags_24() const { return ___m_DeviceFlags_24; }
	inline int32_t* get_address_of_m_DeviceFlags_24() { return &___m_DeviceFlags_24; }
	inline void set_m_DeviceFlags_24(int32_t value)
	{
		___m_DeviceFlags_24 = value;
	}

	inline static int32_t get_offset_of_m_DeviceId_25() { return static_cast<int32_t>(offsetof(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87, ___m_DeviceId_25)); }
	inline int32_t get_m_DeviceId_25() const { return ___m_DeviceId_25; }
	inline int32_t* get_address_of_m_DeviceId_25() { return &___m_DeviceId_25; }
	inline void set_m_DeviceId_25(int32_t value)
	{
		___m_DeviceId_25 = value;
	}

	inline static int32_t get_offset_of_m_ParticipantId_26() { return static_cast<int32_t>(offsetof(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87, ___m_ParticipantId_26)); }
	inline int32_t get_m_ParticipantId_26() const { return ___m_ParticipantId_26; }
	inline int32_t* get_address_of_m_ParticipantId_26() { return &___m_ParticipantId_26; }
	inline void set_m_ParticipantId_26(int32_t value)
	{
		___m_ParticipantId_26 = value;
	}

	inline static int32_t get_offset_of_m_DeviceIndex_27() { return static_cast<int32_t>(offsetof(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87, ___m_DeviceIndex_27)); }
	inline int32_t get_m_DeviceIndex_27() const { return ___m_DeviceIndex_27; }
	inline int32_t* get_address_of_m_DeviceIndex_27() { return &___m_DeviceIndex_27; }
	inline void set_m_DeviceIndex_27(int32_t value)
	{
		___m_DeviceIndex_27 = value;
	}

	inline static int32_t get_offset_of_m_Description_28() { return static_cast<int32_t>(offsetof(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87, ___m_Description_28)); }
	inline InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58  get_m_Description_28() const { return ___m_Description_28; }
	inline InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58 * get_address_of_m_Description_28() { return &___m_Description_28; }
	inline void set_m_Description_28(InputDeviceDescription_tBE78411023CFED0A42110A1357D65BD6E5EDBB58  value)
	{
		___m_Description_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_InterfaceName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_DeviceClass_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Manufacturer_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Product_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Serial_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Version_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Capabilities_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_LastUpdateTimeInternal_29() { return static_cast<int32_t>(offsetof(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87, ___m_LastUpdateTimeInternal_29)); }
	inline double get_m_LastUpdateTimeInternal_29() const { return ___m_LastUpdateTimeInternal_29; }
	inline double* get_address_of_m_LastUpdateTimeInternal_29() { return &___m_LastUpdateTimeInternal_29; }
	inline void set_m_LastUpdateTimeInternal_29(double value)
	{
		___m_LastUpdateTimeInternal_29 = value;
	}

	inline static int32_t get_offset_of_m_CurrentUpdateStepCount_30() { return static_cast<int32_t>(offsetof(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87, ___m_CurrentUpdateStepCount_30)); }
	inline uint32_t get_m_CurrentUpdateStepCount_30() const { return ___m_CurrentUpdateStepCount_30; }
	inline uint32_t* get_address_of_m_CurrentUpdateStepCount_30() { return &___m_CurrentUpdateStepCount_30; }
	inline void set_m_CurrentUpdateStepCount_30(uint32_t value)
	{
		___m_CurrentUpdateStepCount_30 = value;
	}

	inline static int32_t get_offset_of_m_AliasesForEachControl_31() { return static_cast<int32_t>(offsetof(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87, ___m_AliasesForEachControl_31)); }
	inline InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4* get_m_AliasesForEachControl_31() const { return ___m_AliasesForEachControl_31; }
	inline InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4** get_address_of_m_AliasesForEachControl_31() { return &___m_AliasesForEachControl_31; }
	inline void set_m_AliasesForEachControl_31(InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4* value)
	{
		___m_AliasesForEachControl_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AliasesForEachControl_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsagesForEachControl_32() { return static_cast<int32_t>(offsetof(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87, ___m_UsagesForEachControl_32)); }
	inline InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4* get_m_UsagesForEachControl_32() const { return ___m_UsagesForEachControl_32; }
	inline InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4** get_address_of_m_UsagesForEachControl_32() { return &___m_UsagesForEachControl_32; }
	inline void set_m_UsagesForEachControl_32(InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4* value)
	{
		___m_UsagesForEachControl_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsagesForEachControl_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageToControl_33() { return static_cast<int32_t>(offsetof(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87, ___m_UsageToControl_33)); }
	inline InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680* get_m_UsageToControl_33() const { return ___m_UsageToControl_33; }
	inline InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680** get_address_of_m_UsageToControl_33() { return &___m_UsageToControl_33; }
	inline void set_m_UsageToControl_33(InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680* value)
	{
		___m_UsageToControl_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsageToControl_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChildrenForEachControl_34() { return static_cast<int32_t>(offsetof(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87, ___m_ChildrenForEachControl_34)); }
	inline InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680* get_m_ChildrenForEachControl_34() const { return ___m_ChildrenForEachControl_34; }
	inline InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680** get_address_of_m_ChildrenForEachControl_34() { return &___m_ChildrenForEachControl_34; }
	inline void set_m_ChildrenForEachControl_34(InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680* value)
	{
		___m_ChildrenForEachControl_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildrenForEachControl_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_StateOffsetToControlMap_35() { return static_cast<int32_t>(offsetof(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87, ___m_StateOffsetToControlMap_35)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_m_StateOffsetToControlMap_35() const { return ___m_StateOffsetToControlMap_35; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_m_StateOffsetToControlMap_35() { return &___m_StateOffsetToControlMap_35; }
	inline void set_m_StateOffsetToControlMap_35(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___m_StateOffsetToControlMap_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StateOffsetToControlMap_35), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator
struct XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_DeviceSimulatorActionAsset
	InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 * ___m_DeviceSimulatorActionAsset_7;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ControllerActionAsset
	InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 * ___m_ControllerActionAsset_8;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_KeyboardXTranslateAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_KeyboardXTranslateAction_9;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_KeyboardYTranslateAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_KeyboardYTranslateAction_10;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_KeyboardZTranslateAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_KeyboardZTranslateAction_11;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ManipulateLeftAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_ManipulateLeftAction_12;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ManipulateRightAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_ManipulateRightAction_13;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ToggleManipulateLeftAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_ToggleManipulateLeftAction_14;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ToggleManipulateRightAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_ToggleManipulateRightAction_15;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ToggleManipulateBodyAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_ToggleManipulateBodyAction_16;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ManipulateHeadAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_ManipulateHeadAction_17;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_CycleDevicesAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_CycleDevicesAction_18;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_StopManipulationAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_StopManipulationAction_19;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MouseDeltaAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_MouseDeltaAction_20;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MouseScrollAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_MouseScrollAction_21;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_RotateModeOverrideAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_RotateModeOverrideAction_22;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ToggleMouseTransformationModeAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_ToggleMouseTransformationModeAction_23;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_NegateModeAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_NegateModeAction_24;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_XConstraintAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_XConstraintAction_25;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_YConstraintAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_YConstraintAction_26;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ZConstraintAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_ZConstraintAction_27;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ResetAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_ResetAction_28;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ToggleCursorLockAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_ToggleCursorLockAction_29;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ToggleDevicePositionTargetAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_ToggleDevicePositionTargetAction_30;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_TogglePrimary2DAxisTargetAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_TogglePrimary2DAxisTargetAction_31;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ToggleSecondary2DAxisTargetAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_ToggleSecondary2DAxisTargetAction_32;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_Axis2DAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_Axis2DAction_33;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_RestingHandAxis2DAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_RestingHandAxis2DAction_34;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_GripAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_GripAction_35;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_TriggerAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_TriggerAction_36;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_PrimaryButtonAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_PrimaryButtonAction_37;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_SecondaryButtonAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_SecondaryButtonAction_38;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MenuAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_MenuAction_39;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_Primary2DAxisClickAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_Primary2DAxisClickAction_40;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_Secondary2DAxisClickAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_Secondary2DAxisClickAction_41;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_Primary2DAxisTouchAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_Primary2DAxisTouchAction_42;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_Secondary2DAxisTouchAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_Secondary2DAxisTouchAction_43;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_PrimaryTouchAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_PrimaryTouchAction_44;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_SecondaryTouchAction
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_SecondaryTouchAction_45;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_CameraTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_CameraTransform_46;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/Space UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_KeyboardTranslateSpace
	int32_t ___m_KeyboardTranslateSpace_47;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/Space UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MouseTranslateSpace
	int32_t ___m_MouseTranslateSpace_48;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_KeyboardXTranslateSpeed
	float ___m_KeyboardXTranslateSpeed_49;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_KeyboardYTranslateSpeed
	float ___m_KeyboardYTranslateSpeed_50;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_KeyboardZTranslateSpeed
	float ___m_KeyboardZTranslateSpeed_51;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_KeyboardBodyTranslateMultiplier
	float ___m_KeyboardBodyTranslateMultiplier_52;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MouseXTranslateSensitivity
	float ___m_MouseXTranslateSensitivity_53;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MouseYTranslateSensitivity
	float ___m_MouseYTranslateSensitivity_54;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MouseScrollTranslateSensitivity
	float ___m_MouseScrollTranslateSensitivity_55;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MouseXRotateSensitivity
	float ___m_MouseXRotateSensitivity_56;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MouseYRotateSensitivity
	float ___m_MouseYRotateSensitivity_57;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MouseScrollRotateSensitivity
	float ___m_MouseScrollRotateSensitivity_58;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MouseYRotateInvert
	bool ___m_MouseYRotateInvert_59;
	// UnityEngine.CursorLockMode UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_DesiredCursorLockMode
	int32_t ___m_DesiredCursorLockMode_60;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_RemoveOtherHMDDevices
	bool ___m_RemoveOtherHMDDevices_61;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_DeviceSimulatorUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_DeviceSimulatorUI_62;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_GripAmount
	float ___m_GripAmount_63;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_TriggerAmount
	float ___m_TriggerAmount_64;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_HMDIsTracked
	bool ___m_HMDIsTracked_65;
	// UnityEngine.XR.InputTrackingState UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_HMDTrackingState
	uint32_t ___m_HMDTrackingState_66;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_LeftControllerIsTracked
	bool ___m_LeftControllerIsTracked_67;
	// UnityEngine.XR.InputTrackingState UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_LeftControllerTrackingState
	uint32_t ___m_LeftControllerTrackingState_68;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_RightControllerIsTracked
	bool ___m_RightControllerIsTracked_69;
	// UnityEngine.XR.InputTrackingState UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_RightControllerTrackingState
	uint32_t ___m_RightControllerTrackingState_70;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/TransformationMode UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::<mouseTransformationMode>k__BackingField
	int32_t ___U3CmouseTransformationModeU3Ek__BackingField_71;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::<negateMode>k__BackingField
	bool ___U3CnegateModeU3Ek__BackingField_72;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/Axis2DTargets UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::<axis2DTargets>k__BackingField
	int32_t ___U3Caxis2DTargetsU3Ek__BackingField_73;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/TargetedDevices UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_TargetedDeviceInput
	int32_t ___m_TargetedDeviceInput_75;
	// System.ValueTuple`2<UnityEngine.Transform,UnityEngine.Camera> UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_CachedCamera
	ValueTuple_2_t1DFA9346A68D3184C615DE34BCAF8B14067C91A9  ___m_CachedCamera_76;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_KeyboardXTranslateInput
	float ___m_KeyboardXTranslateInput_77;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_KeyboardYTranslateInput
	float ___m_KeyboardYTranslateInput_78;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_KeyboardZTranslateInput
	float ___m_KeyboardZTranslateInput_79;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MouseDeltaInput
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_MouseDeltaInput_80;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MouseScrollInput
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_MouseScrollInput_81;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_RotateModeOverrideInput
	bool ___m_RotateModeOverrideInput_82;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_XConstraintInput
	bool ___m_XConstraintInput_83;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_YConstraintInput
	bool ___m_YConstraintInput_84;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ZConstraintInput
	bool ___m_ZConstraintInput_85;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ResetInput
	bool ___m_ResetInput_86;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_Axis2DInput
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Axis2DInput_87;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_RestingHandAxis2DInput
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RestingHandAxis2DInput_88;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_GripInput
	bool ___m_GripInput_89;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_TriggerInput
	bool ___m_TriggerInput_90;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_PrimaryButtonInput
	bool ___m_PrimaryButtonInput_91;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_SecondaryButtonInput
	bool ___m_SecondaryButtonInput_92;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_MenuInput
	bool ___m_MenuInput_93;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_Primary2DAxisClickInput
	bool ___m_Primary2DAxisClickInput_94;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_Secondary2DAxisClickInput
	bool ___m_Secondary2DAxisClickInput_95;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_Primary2DAxisTouchInput
	bool ___m_Primary2DAxisTouchInput_96;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_Secondary2DAxisTouchInput
	bool ___m_Secondary2DAxisTouchInput_97;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_PrimaryTouchInput
	bool ___m_PrimaryTouchInput_98;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_SecondaryTouchInput
	bool ___m_SecondaryTouchInput_99;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_ManipulatedRestingHandAxis2D
	bool ___m_ManipulatedRestingHandAxis2D_100;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_LeftControllerEuler
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_LeftControllerEuler_101;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_RightControllerEuler
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RightControllerEuler_102;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_CenterEyeEuler
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_CenterEyeEuler_103;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_HMDState
	XRSimulatedHMDState_tDAE563E2C0FBDB44CF1D0272A9668F5B0A13D5D7  ___m_HMDState_104;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_LeftControllerState
	XRSimulatedControllerState_tF8F4FD13AD3CC46E85B73D5F2BCEB18FF0531175  ___m_LeftControllerState_105;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_RightControllerState
	XRSimulatedControllerState_tF8F4FD13AD3CC46E85B73D5F2BCEB18FF0531175  ___m_RightControllerState_106;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMD UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_HMDDevice
	XRSimulatedHMD_tE5A264AD475895067EBDC8293CAE486DD24CA540 * ___m_HMDDevice_107;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_LeftControllerDevice
	XRSimulatedController_t7771B4DF96F9B4259DFFFD68E30136C1FEAD7E49 * ___m_LeftControllerDevice_108;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedController UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_RightControllerDevice
	XRSimulatedController_t7771B4DF96F9B4259DFFFD68E30136C1FEAD7E49 * ___m_RightControllerDevice_109;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::m_OnInputDeviceChangeSubscribed
	bool ___m_OnInputDeviceChangeSubscribed_110;

public:
	inline static int32_t get_offset_of_m_DeviceSimulatorActionAsset_7() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_DeviceSimulatorActionAsset_7)); }
	inline InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 * get_m_DeviceSimulatorActionAsset_7() const { return ___m_DeviceSimulatorActionAsset_7; }
	inline InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 ** get_address_of_m_DeviceSimulatorActionAsset_7() { return &___m_DeviceSimulatorActionAsset_7; }
	inline void set_m_DeviceSimulatorActionAsset_7(InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 * value)
	{
		___m_DeviceSimulatorActionAsset_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceSimulatorActionAsset_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControllerActionAsset_8() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_ControllerActionAsset_8)); }
	inline InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 * get_m_ControllerActionAsset_8() const { return ___m_ControllerActionAsset_8; }
	inline InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 ** get_address_of_m_ControllerActionAsset_8() { return &___m_ControllerActionAsset_8; }
	inline void set_m_ControllerActionAsset_8(InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 * value)
	{
		___m_ControllerActionAsset_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControllerActionAsset_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_KeyboardXTranslateAction_9() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_KeyboardXTranslateAction_9)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_KeyboardXTranslateAction_9() const { return ___m_KeyboardXTranslateAction_9; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_KeyboardXTranslateAction_9() { return &___m_KeyboardXTranslateAction_9; }
	inline void set_m_KeyboardXTranslateAction_9(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_KeyboardXTranslateAction_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_KeyboardXTranslateAction_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_KeyboardYTranslateAction_10() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_KeyboardYTranslateAction_10)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_KeyboardYTranslateAction_10() const { return ___m_KeyboardYTranslateAction_10; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_KeyboardYTranslateAction_10() { return &___m_KeyboardYTranslateAction_10; }
	inline void set_m_KeyboardYTranslateAction_10(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_KeyboardYTranslateAction_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_KeyboardYTranslateAction_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_KeyboardZTranslateAction_11() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_KeyboardZTranslateAction_11)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_KeyboardZTranslateAction_11() const { return ___m_KeyboardZTranslateAction_11; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_KeyboardZTranslateAction_11() { return &___m_KeyboardZTranslateAction_11; }
	inline void set_m_KeyboardZTranslateAction_11(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_KeyboardZTranslateAction_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_KeyboardZTranslateAction_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ManipulateLeftAction_12() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_ManipulateLeftAction_12)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_ManipulateLeftAction_12() const { return ___m_ManipulateLeftAction_12; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_ManipulateLeftAction_12() { return &___m_ManipulateLeftAction_12; }
	inline void set_m_ManipulateLeftAction_12(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_ManipulateLeftAction_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ManipulateLeftAction_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ManipulateRightAction_13() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_ManipulateRightAction_13)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_ManipulateRightAction_13() const { return ___m_ManipulateRightAction_13; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_ManipulateRightAction_13() { return &___m_ManipulateRightAction_13; }
	inline void set_m_ManipulateRightAction_13(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_ManipulateRightAction_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ManipulateRightAction_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ToggleManipulateLeftAction_14() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_ToggleManipulateLeftAction_14)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_ToggleManipulateLeftAction_14() const { return ___m_ToggleManipulateLeftAction_14; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_ToggleManipulateLeftAction_14() { return &___m_ToggleManipulateLeftAction_14; }
	inline void set_m_ToggleManipulateLeftAction_14(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_ToggleManipulateLeftAction_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToggleManipulateLeftAction_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_ToggleManipulateRightAction_15() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_ToggleManipulateRightAction_15)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_ToggleManipulateRightAction_15() const { return ___m_ToggleManipulateRightAction_15; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_ToggleManipulateRightAction_15() { return &___m_ToggleManipulateRightAction_15; }
	inline void set_m_ToggleManipulateRightAction_15(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_ToggleManipulateRightAction_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToggleManipulateRightAction_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_ToggleManipulateBodyAction_16() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_ToggleManipulateBodyAction_16)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_ToggleManipulateBodyAction_16() const { return ___m_ToggleManipulateBodyAction_16; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_ToggleManipulateBodyAction_16() { return &___m_ToggleManipulateBodyAction_16; }
	inline void set_m_ToggleManipulateBodyAction_16(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_ToggleManipulateBodyAction_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToggleManipulateBodyAction_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_ManipulateHeadAction_17() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_ManipulateHeadAction_17)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_ManipulateHeadAction_17() const { return ___m_ManipulateHeadAction_17; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_ManipulateHeadAction_17() { return &___m_ManipulateHeadAction_17; }
	inline void set_m_ManipulateHeadAction_17(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_ManipulateHeadAction_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ManipulateHeadAction_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_CycleDevicesAction_18() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_CycleDevicesAction_18)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_CycleDevicesAction_18() const { return ___m_CycleDevicesAction_18; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_CycleDevicesAction_18() { return &___m_CycleDevicesAction_18; }
	inline void set_m_CycleDevicesAction_18(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_CycleDevicesAction_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CycleDevicesAction_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_StopManipulationAction_19() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_StopManipulationAction_19)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_StopManipulationAction_19() const { return ___m_StopManipulationAction_19; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_StopManipulationAction_19() { return &___m_StopManipulationAction_19; }
	inline void set_m_StopManipulationAction_19(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_StopManipulationAction_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StopManipulationAction_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_MouseDeltaAction_20() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_MouseDeltaAction_20)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_MouseDeltaAction_20() const { return ___m_MouseDeltaAction_20; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_MouseDeltaAction_20() { return &___m_MouseDeltaAction_20; }
	inline void set_m_MouseDeltaAction_20(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_MouseDeltaAction_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MouseDeltaAction_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_MouseScrollAction_21() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_MouseScrollAction_21)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_MouseScrollAction_21() const { return ___m_MouseScrollAction_21; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_MouseScrollAction_21() { return &___m_MouseScrollAction_21; }
	inline void set_m_MouseScrollAction_21(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_MouseScrollAction_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MouseScrollAction_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_RotateModeOverrideAction_22() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_RotateModeOverrideAction_22)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_RotateModeOverrideAction_22() const { return ___m_RotateModeOverrideAction_22; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_RotateModeOverrideAction_22() { return &___m_RotateModeOverrideAction_22; }
	inline void set_m_RotateModeOverrideAction_22(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_RotateModeOverrideAction_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RotateModeOverrideAction_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ToggleMouseTransformationModeAction_23() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_ToggleMouseTransformationModeAction_23)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_ToggleMouseTransformationModeAction_23() const { return ___m_ToggleMouseTransformationModeAction_23; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_ToggleMouseTransformationModeAction_23() { return &___m_ToggleMouseTransformationModeAction_23; }
	inline void set_m_ToggleMouseTransformationModeAction_23(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_ToggleMouseTransformationModeAction_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToggleMouseTransformationModeAction_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_NegateModeAction_24() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_NegateModeAction_24)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_NegateModeAction_24() const { return ___m_NegateModeAction_24; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_NegateModeAction_24() { return &___m_NegateModeAction_24; }
	inline void set_m_NegateModeAction_24(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_NegateModeAction_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NegateModeAction_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_XConstraintAction_25() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_XConstraintAction_25)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_XConstraintAction_25() const { return ___m_XConstraintAction_25; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_XConstraintAction_25() { return &___m_XConstraintAction_25; }
	inline void set_m_XConstraintAction_25(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_XConstraintAction_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_XConstraintAction_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_YConstraintAction_26() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_YConstraintAction_26)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_YConstraintAction_26() const { return ___m_YConstraintAction_26; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_YConstraintAction_26() { return &___m_YConstraintAction_26; }
	inline void set_m_YConstraintAction_26(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_YConstraintAction_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_YConstraintAction_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ZConstraintAction_27() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_ZConstraintAction_27)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_ZConstraintAction_27() const { return ___m_ZConstraintAction_27; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_ZConstraintAction_27() { return &___m_ZConstraintAction_27; }
	inline void set_m_ZConstraintAction_27(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_ZConstraintAction_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ZConstraintAction_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ResetAction_28() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_ResetAction_28)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_ResetAction_28() const { return ___m_ResetAction_28; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_ResetAction_28() { return &___m_ResetAction_28; }
	inline void set_m_ResetAction_28(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_ResetAction_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ResetAction_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_ToggleCursorLockAction_29() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_ToggleCursorLockAction_29)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_ToggleCursorLockAction_29() const { return ___m_ToggleCursorLockAction_29; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_ToggleCursorLockAction_29() { return &___m_ToggleCursorLockAction_29; }
	inline void set_m_ToggleCursorLockAction_29(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_ToggleCursorLockAction_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToggleCursorLockAction_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_ToggleDevicePositionTargetAction_30() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_ToggleDevicePositionTargetAction_30)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_ToggleDevicePositionTargetAction_30() const { return ___m_ToggleDevicePositionTargetAction_30; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_ToggleDevicePositionTargetAction_30() { return &___m_ToggleDevicePositionTargetAction_30; }
	inline void set_m_ToggleDevicePositionTargetAction_30(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_ToggleDevicePositionTargetAction_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToggleDevicePositionTargetAction_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_TogglePrimary2DAxisTargetAction_31() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_TogglePrimary2DAxisTargetAction_31)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_TogglePrimary2DAxisTargetAction_31() const { return ___m_TogglePrimary2DAxisTargetAction_31; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_TogglePrimary2DAxisTargetAction_31() { return &___m_TogglePrimary2DAxisTargetAction_31; }
	inline void set_m_TogglePrimary2DAxisTargetAction_31(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_TogglePrimary2DAxisTargetAction_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TogglePrimary2DAxisTargetAction_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ToggleSecondary2DAxisTargetAction_32() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_ToggleSecondary2DAxisTargetAction_32)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_ToggleSecondary2DAxisTargetAction_32() const { return ___m_ToggleSecondary2DAxisTargetAction_32; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_ToggleSecondary2DAxisTargetAction_32() { return &___m_ToggleSecondary2DAxisTargetAction_32; }
	inline void set_m_ToggleSecondary2DAxisTargetAction_32(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_ToggleSecondary2DAxisTargetAction_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToggleSecondary2DAxisTargetAction_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Axis2DAction_33() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_Axis2DAction_33)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_Axis2DAction_33() const { return ___m_Axis2DAction_33; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_Axis2DAction_33() { return &___m_Axis2DAction_33; }
	inline void set_m_Axis2DAction_33(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_Axis2DAction_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Axis2DAction_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_RestingHandAxis2DAction_34() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_RestingHandAxis2DAction_34)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_RestingHandAxis2DAction_34() const { return ___m_RestingHandAxis2DAction_34; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_RestingHandAxis2DAction_34() { return &___m_RestingHandAxis2DAction_34; }
	inline void set_m_RestingHandAxis2DAction_34(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_RestingHandAxis2DAction_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RestingHandAxis2DAction_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_GripAction_35() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_GripAction_35)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_GripAction_35() const { return ___m_GripAction_35; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_GripAction_35() { return &___m_GripAction_35; }
	inline void set_m_GripAction_35(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_GripAction_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GripAction_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_TriggerAction_36() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_TriggerAction_36)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_TriggerAction_36() const { return ___m_TriggerAction_36; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_TriggerAction_36() { return &___m_TriggerAction_36; }
	inline void set_m_TriggerAction_36(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_TriggerAction_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TriggerAction_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_PrimaryButtonAction_37() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_PrimaryButtonAction_37)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_PrimaryButtonAction_37() const { return ___m_PrimaryButtonAction_37; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_PrimaryButtonAction_37() { return &___m_PrimaryButtonAction_37; }
	inline void set_m_PrimaryButtonAction_37(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_PrimaryButtonAction_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PrimaryButtonAction_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_SecondaryButtonAction_38() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_SecondaryButtonAction_38)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_SecondaryButtonAction_38() const { return ___m_SecondaryButtonAction_38; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_SecondaryButtonAction_38() { return &___m_SecondaryButtonAction_38; }
	inline void set_m_SecondaryButtonAction_38(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_SecondaryButtonAction_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SecondaryButtonAction_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_MenuAction_39() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_MenuAction_39)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_MenuAction_39() const { return ___m_MenuAction_39; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_MenuAction_39() { return &___m_MenuAction_39; }
	inline void set_m_MenuAction_39(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_MenuAction_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MenuAction_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_Primary2DAxisClickAction_40() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_Primary2DAxisClickAction_40)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_Primary2DAxisClickAction_40() const { return ___m_Primary2DAxisClickAction_40; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_Primary2DAxisClickAction_40() { return &___m_Primary2DAxisClickAction_40; }
	inline void set_m_Primary2DAxisClickAction_40(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_Primary2DAxisClickAction_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Primary2DAxisClickAction_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_Secondary2DAxisClickAction_41() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_Secondary2DAxisClickAction_41)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_Secondary2DAxisClickAction_41() const { return ___m_Secondary2DAxisClickAction_41; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_Secondary2DAxisClickAction_41() { return &___m_Secondary2DAxisClickAction_41; }
	inline void set_m_Secondary2DAxisClickAction_41(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_Secondary2DAxisClickAction_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Secondary2DAxisClickAction_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_Primary2DAxisTouchAction_42() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_Primary2DAxisTouchAction_42)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_Primary2DAxisTouchAction_42() const { return ___m_Primary2DAxisTouchAction_42; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_Primary2DAxisTouchAction_42() { return &___m_Primary2DAxisTouchAction_42; }
	inline void set_m_Primary2DAxisTouchAction_42(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_Primary2DAxisTouchAction_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Primary2DAxisTouchAction_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_Secondary2DAxisTouchAction_43() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_Secondary2DAxisTouchAction_43)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_Secondary2DAxisTouchAction_43() const { return ___m_Secondary2DAxisTouchAction_43; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_Secondary2DAxisTouchAction_43() { return &___m_Secondary2DAxisTouchAction_43; }
	inline void set_m_Secondary2DAxisTouchAction_43(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_Secondary2DAxisTouchAction_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Secondary2DAxisTouchAction_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_PrimaryTouchAction_44() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_PrimaryTouchAction_44)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_PrimaryTouchAction_44() const { return ___m_PrimaryTouchAction_44; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_PrimaryTouchAction_44() { return &___m_PrimaryTouchAction_44; }
	inline void set_m_PrimaryTouchAction_44(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_PrimaryTouchAction_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PrimaryTouchAction_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_SecondaryTouchAction_45() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_SecondaryTouchAction_45)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_SecondaryTouchAction_45() const { return ___m_SecondaryTouchAction_45; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_SecondaryTouchAction_45() { return &___m_SecondaryTouchAction_45; }
	inline void set_m_SecondaryTouchAction_45(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_SecondaryTouchAction_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SecondaryTouchAction_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_CameraTransform_46() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_CameraTransform_46)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_CameraTransform_46() const { return ___m_CameraTransform_46; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_CameraTransform_46() { return &___m_CameraTransform_46; }
	inline void set_m_CameraTransform_46(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_CameraTransform_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CameraTransform_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_KeyboardTranslateSpace_47() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_KeyboardTranslateSpace_47)); }
	inline int32_t get_m_KeyboardTranslateSpace_47() const { return ___m_KeyboardTranslateSpace_47; }
	inline int32_t* get_address_of_m_KeyboardTranslateSpace_47() { return &___m_KeyboardTranslateSpace_47; }
	inline void set_m_KeyboardTranslateSpace_47(int32_t value)
	{
		___m_KeyboardTranslateSpace_47 = value;
	}

	inline static int32_t get_offset_of_m_MouseTranslateSpace_48() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_MouseTranslateSpace_48)); }
	inline int32_t get_m_MouseTranslateSpace_48() const { return ___m_MouseTranslateSpace_48; }
	inline int32_t* get_address_of_m_MouseTranslateSpace_48() { return &___m_MouseTranslateSpace_48; }
	inline void set_m_MouseTranslateSpace_48(int32_t value)
	{
		___m_MouseTranslateSpace_48 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardXTranslateSpeed_49() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_KeyboardXTranslateSpeed_49)); }
	inline float get_m_KeyboardXTranslateSpeed_49() const { return ___m_KeyboardXTranslateSpeed_49; }
	inline float* get_address_of_m_KeyboardXTranslateSpeed_49() { return &___m_KeyboardXTranslateSpeed_49; }
	inline void set_m_KeyboardXTranslateSpeed_49(float value)
	{
		___m_KeyboardXTranslateSpeed_49 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardYTranslateSpeed_50() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_KeyboardYTranslateSpeed_50)); }
	inline float get_m_KeyboardYTranslateSpeed_50() const { return ___m_KeyboardYTranslateSpeed_50; }
	inline float* get_address_of_m_KeyboardYTranslateSpeed_50() { return &___m_KeyboardYTranslateSpeed_50; }
	inline void set_m_KeyboardYTranslateSpeed_50(float value)
	{
		___m_KeyboardYTranslateSpeed_50 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardZTranslateSpeed_51() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_KeyboardZTranslateSpeed_51)); }
	inline float get_m_KeyboardZTranslateSpeed_51() const { return ___m_KeyboardZTranslateSpeed_51; }
	inline float* get_address_of_m_KeyboardZTranslateSpeed_51() { return &___m_KeyboardZTranslateSpeed_51; }
	inline void set_m_KeyboardZTranslateSpeed_51(float value)
	{
		___m_KeyboardZTranslateSpeed_51 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardBodyTranslateMultiplier_52() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_KeyboardBodyTranslateMultiplier_52)); }
	inline float get_m_KeyboardBodyTranslateMultiplier_52() const { return ___m_KeyboardBodyTranslateMultiplier_52; }
	inline float* get_address_of_m_KeyboardBodyTranslateMultiplier_52() { return &___m_KeyboardBodyTranslateMultiplier_52; }
	inline void set_m_KeyboardBodyTranslateMultiplier_52(float value)
	{
		___m_KeyboardBodyTranslateMultiplier_52 = value;
	}

	inline static int32_t get_offset_of_m_MouseXTranslateSensitivity_53() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_MouseXTranslateSensitivity_53)); }
	inline float get_m_MouseXTranslateSensitivity_53() const { return ___m_MouseXTranslateSensitivity_53; }
	inline float* get_address_of_m_MouseXTranslateSensitivity_53() { return &___m_MouseXTranslateSensitivity_53; }
	inline void set_m_MouseXTranslateSensitivity_53(float value)
	{
		___m_MouseXTranslateSensitivity_53 = value;
	}

	inline static int32_t get_offset_of_m_MouseYTranslateSensitivity_54() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_MouseYTranslateSensitivity_54)); }
	inline float get_m_MouseYTranslateSensitivity_54() const { return ___m_MouseYTranslateSensitivity_54; }
	inline float* get_address_of_m_MouseYTranslateSensitivity_54() { return &___m_MouseYTranslateSensitivity_54; }
	inline void set_m_MouseYTranslateSensitivity_54(float value)
	{
		___m_MouseYTranslateSensitivity_54 = value;
	}

	inline static int32_t get_offset_of_m_MouseScrollTranslateSensitivity_55() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_MouseScrollTranslateSensitivity_55)); }
	inline float get_m_MouseScrollTranslateSensitivity_55() const { return ___m_MouseScrollTranslateSensitivity_55; }
	inline float* get_address_of_m_MouseScrollTranslateSensitivity_55() { return &___m_MouseScrollTranslateSensitivity_55; }
	inline void set_m_MouseScrollTranslateSensitivity_55(float value)
	{
		___m_MouseScrollTranslateSensitivity_55 = value;
	}

	inline static int32_t get_offset_of_m_MouseXRotateSensitivity_56() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_MouseXRotateSensitivity_56)); }
	inline float get_m_MouseXRotateSensitivity_56() const { return ___m_MouseXRotateSensitivity_56; }
	inline float* get_address_of_m_MouseXRotateSensitivity_56() { return &___m_MouseXRotateSensitivity_56; }
	inline void set_m_MouseXRotateSensitivity_56(float value)
	{
		___m_MouseXRotateSensitivity_56 = value;
	}

	inline static int32_t get_offset_of_m_MouseYRotateSensitivity_57() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_MouseYRotateSensitivity_57)); }
	inline float get_m_MouseYRotateSensitivity_57() const { return ___m_MouseYRotateSensitivity_57; }
	inline float* get_address_of_m_MouseYRotateSensitivity_57() { return &___m_MouseYRotateSensitivity_57; }
	inline void set_m_MouseYRotateSensitivity_57(float value)
	{
		___m_MouseYRotateSensitivity_57 = value;
	}

	inline static int32_t get_offset_of_m_MouseScrollRotateSensitivity_58() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_MouseScrollRotateSensitivity_58)); }
	inline float get_m_MouseScrollRotateSensitivity_58() const { return ___m_MouseScrollRotateSensitivity_58; }
	inline float* get_address_of_m_MouseScrollRotateSensitivity_58() { return &___m_MouseScrollRotateSensitivity_58; }
	inline void set_m_MouseScrollRotateSensitivity_58(float value)
	{
		___m_MouseScrollRotateSensitivity_58 = value;
	}

	inline static int32_t get_offset_of_m_MouseYRotateInvert_59() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_MouseYRotateInvert_59)); }
	inline bool get_m_MouseYRotateInvert_59() const { return ___m_MouseYRotateInvert_59; }
	inline bool* get_address_of_m_MouseYRotateInvert_59() { return &___m_MouseYRotateInvert_59; }
	inline void set_m_MouseYRotateInvert_59(bool value)
	{
		___m_MouseYRotateInvert_59 = value;
	}

	inline static int32_t get_offset_of_m_DesiredCursorLockMode_60() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_DesiredCursorLockMode_60)); }
	inline int32_t get_m_DesiredCursorLockMode_60() const { return ___m_DesiredCursorLockMode_60; }
	inline int32_t* get_address_of_m_DesiredCursorLockMode_60() { return &___m_DesiredCursorLockMode_60; }
	inline void set_m_DesiredCursorLockMode_60(int32_t value)
	{
		___m_DesiredCursorLockMode_60 = value;
	}

	inline static int32_t get_offset_of_m_RemoveOtherHMDDevices_61() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_RemoveOtherHMDDevices_61)); }
	inline bool get_m_RemoveOtherHMDDevices_61() const { return ___m_RemoveOtherHMDDevices_61; }
	inline bool* get_address_of_m_RemoveOtherHMDDevices_61() { return &___m_RemoveOtherHMDDevices_61; }
	inline void set_m_RemoveOtherHMDDevices_61(bool value)
	{
		___m_RemoveOtherHMDDevices_61 = value;
	}

	inline static int32_t get_offset_of_m_DeviceSimulatorUI_62() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_DeviceSimulatorUI_62)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_DeviceSimulatorUI_62() const { return ___m_DeviceSimulatorUI_62; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_DeviceSimulatorUI_62() { return &___m_DeviceSimulatorUI_62; }
	inline void set_m_DeviceSimulatorUI_62(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_DeviceSimulatorUI_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceSimulatorUI_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_GripAmount_63() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_GripAmount_63)); }
	inline float get_m_GripAmount_63() const { return ___m_GripAmount_63; }
	inline float* get_address_of_m_GripAmount_63() { return &___m_GripAmount_63; }
	inline void set_m_GripAmount_63(float value)
	{
		___m_GripAmount_63 = value;
	}

	inline static int32_t get_offset_of_m_TriggerAmount_64() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_TriggerAmount_64)); }
	inline float get_m_TriggerAmount_64() const { return ___m_TriggerAmount_64; }
	inline float* get_address_of_m_TriggerAmount_64() { return &___m_TriggerAmount_64; }
	inline void set_m_TriggerAmount_64(float value)
	{
		___m_TriggerAmount_64 = value;
	}

	inline static int32_t get_offset_of_m_HMDIsTracked_65() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_HMDIsTracked_65)); }
	inline bool get_m_HMDIsTracked_65() const { return ___m_HMDIsTracked_65; }
	inline bool* get_address_of_m_HMDIsTracked_65() { return &___m_HMDIsTracked_65; }
	inline void set_m_HMDIsTracked_65(bool value)
	{
		___m_HMDIsTracked_65 = value;
	}

	inline static int32_t get_offset_of_m_HMDTrackingState_66() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_HMDTrackingState_66)); }
	inline uint32_t get_m_HMDTrackingState_66() const { return ___m_HMDTrackingState_66; }
	inline uint32_t* get_address_of_m_HMDTrackingState_66() { return &___m_HMDTrackingState_66; }
	inline void set_m_HMDTrackingState_66(uint32_t value)
	{
		___m_HMDTrackingState_66 = value;
	}

	inline static int32_t get_offset_of_m_LeftControllerIsTracked_67() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_LeftControllerIsTracked_67)); }
	inline bool get_m_LeftControllerIsTracked_67() const { return ___m_LeftControllerIsTracked_67; }
	inline bool* get_address_of_m_LeftControllerIsTracked_67() { return &___m_LeftControllerIsTracked_67; }
	inline void set_m_LeftControllerIsTracked_67(bool value)
	{
		___m_LeftControllerIsTracked_67 = value;
	}

	inline static int32_t get_offset_of_m_LeftControllerTrackingState_68() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_LeftControllerTrackingState_68)); }
	inline uint32_t get_m_LeftControllerTrackingState_68() const { return ___m_LeftControllerTrackingState_68; }
	inline uint32_t* get_address_of_m_LeftControllerTrackingState_68() { return &___m_LeftControllerTrackingState_68; }
	inline void set_m_LeftControllerTrackingState_68(uint32_t value)
	{
		___m_LeftControllerTrackingState_68 = value;
	}

	inline static int32_t get_offset_of_m_RightControllerIsTracked_69() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_RightControllerIsTracked_69)); }
	inline bool get_m_RightControllerIsTracked_69() const { return ___m_RightControllerIsTracked_69; }
	inline bool* get_address_of_m_RightControllerIsTracked_69() { return &___m_RightControllerIsTracked_69; }
	inline void set_m_RightControllerIsTracked_69(bool value)
	{
		___m_RightControllerIsTracked_69 = value;
	}

	inline static int32_t get_offset_of_m_RightControllerTrackingState_70() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_RightControllerTrackingState_70)); }
	inline uint32_t get_m_RightControllerTrackingState_70() const { return ___m_RightControllerTrackingState_70; }
	inline uint32_t* get_address_of_m_RightControllerTrackingState_70() { return &___m_RightControllerTrackingState_70; }
	inline void set_m_RightControllerTrackingState_70(uint32_t value)
	{
		___m_RightControllerTrackingState_70 = value;
	}

	inline static int32_t get_offset_of_U3CmouseTransformationModeU3Ek__BackingField_71() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___U3CmouseTransformationModeU3Ek__BackingField_71)); }
	inline int32_t get_U3CmouseTransformationModeU3Ek__BackingField_71() const { return ___U3CmouseTransformationModeU3Ek__BackingField_71; }
	inline int32_t* get_address_of_U3CmouseTransformationModeU3Ek__BackingField_71() { return &___U3CmouseTransformationModeU3Ek__BackingField_71; }
	inline void set_U3CmouseTransformationModeU3Ek__BackingField_71(int32_t value)
	{
		___U3CmouseTransformationModeU3Ek__BackingField_71 = value;
	}

	inline static int32_t get_offset_of_U3CnegateModeU3Ek__BackingField_72() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___U3CnegateModeU3Ek__BackingField_72)); }
	inline bool get_U3CnegateModeU3Ek__BackingField_72() const { return ___U3CnegateModeU3Ek__BackingField_72; }
	inline bool* get_address_of_U3CnegateModeU3Ek__BackingField_72() { return &___U3CnegateModeU3Ek__BackingField_72; }
	inline void set_U3CnegateModeU3Ek__BackingField_72(bool value)
	{
		___U3CnegateModeU3Ek__BackingField_72 = value;
	}

	inline static int32_t get_offset_of_U3Caxis2DTargetsU3Ek__BackingField_73() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___U3Caxis2DTargetsU3Ek__BackingField_73)); }
	inline int32_t get_U3Caxis2DTargetsU3Ek__BackingField_73() const { return ___U3Caxis2DTargetsU3Ek__BackingField_73; }
	inline int32_t* get_address_of_U3Caxis2DTargetsU3Ek__BackingField_73() { return &___U3Caxis2DTargetsU3Ek__BackingField_73; }
	inline void set_U3Caxis2DTargetsU3Ek__BackingField_73(int32_t value)
	{
		___U3Caxis2DTargetsU3Ek__BackingField_73 = value;
	}

	inline static int32_t get_offset_of_m_TargetedDeviceInput_75() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_TargetedDeviceInput_75)); }
	inline int32_t get_m_TargetedDeviceInput_75() const { return ___m_TargetedDeviceInput_75; }
	inline int32_t* get_address_of_m_TargetedDeviceInput_75() { return &___m_TargetedDeviceInput_75; }
	inline void set_m_TargetedDeviceInput_75(int32_t value)
	{
		___m_TargetedDeviceInput_75 = value;
	}

	inline static int32_t get_offset_of_m_CachedCamera_76() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_CachedCamera_76)); }
	inline ValueTuple_2_t1DFA9346A68D3184C615DE34BCAF8B14067C91A9  get_m_CachedCamera_76() const { return ___m_CachedCamera_76; }
	inline ValueTuple_2_t1DFA9346A68D3184C615DE34BCAF8B14067C91A9 * get_address_of_m_CachedCamera_76() { return &___m_CachedCamera_76; }
	inline void set_m_CachedCamera_76(ValueTuple_2_t1DFA9346A68D3184C615DE34BCAF8B14067C91A9  value)
	{
		___m_CachedCamera_76 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CachedCamera_76))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CachedCamera_76))->___Item2_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_KeyboardXTranslateInput_77() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_KeyboardXTranslateInput_77)); }
	inline float get_m_KeyboardXTranslateInput_77() const { return ___m_KeyboardXTranslateInput_77; }
	inline float* get_address_of_m_KeyboardXTranslateInput_77() { return &___m_KeyboardXTranslateInput_77; }
	inline void set_m_KeyboardXTranslateInput_77(float value)
	{
		___m_KeyboardXTranslateInput_77 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardYTranslateInput_78() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_KeyboardYTranslateInput_78)); }
	inline float get_m_KeyboardYTranslateInput_78() const { return ___m_KeyboardYTranslateInput_78; }
	inline float* get_address_of_m_KeyboardYTranslateInput_78() { return &___m_KeyboardYTranslateInput_78; }
	inline void set_m_KeyboardYTranslateInput_78(float value)
	{
		___m_KeyboardYTranslateInput_78 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardZTranslateInput_79() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_KeyboardZTranslateInput_79)); }
	inline float get_m_KeyboardZTranslateInput_79() const { return ___m_KeyboardZTranslateInput_79; }
	inline float* get_address_of_m_KeyboardZTranslateInput_79() { return &___m_KeyboardZTranslateInput_79; }
	inline void set_m_KeyboardZTranslateInput_79(float value)
	{
		___m_KeyboardZTranslateInput_79 = value;
	}

	inline static int32_t get_offset_of_m_MouseDeltaInput_80() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_MouseDeltaInput_80)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_MouseDeltaInput_80() const { return ___m_MouseDeltaInput_80; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_MouseDeltaInput_80() { return &___m_MouseDeltaInput_80; }
	inline void set_m_MouseDeltaInput_80(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_MouseDeltaInput_80 = value;
	}

	inline static int32_t get_offset_of_m_MouseScrollInput_81() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_MouseScrollInput_81)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_MouseScrollInput_81() const { return ___m_MouseScrollInput_81; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_MouseScrollInput_81() { return &___m_MouseScrollInput_81; }
	inline void set_m_MouseScrollInput_81(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_MouseScrollInput_81 = value;
	}

	inline static int32_t get_offset_of_m_RotateModeOverrideInput_82() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_RotateModeOverrideInput_82)); }
	inline bool get_m_RotateModeOverrideInput_82() const { return ___m_RotateModeOverrideInput_82; }
	inline bool* get_address_of_m_RotateModeOverrideInput_82() { return &___m_RotateModeOverrideInput_82; }
	inline void set_m_RotateModeOverrideInput_82(bool value)
	{
		___m_RotateModeOverrideInput_82 = value;
	}

	inline static int32_t get_offset_of_m_XConstraintInput_83() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_XConstraintInput_83)); }
	inline bool get_m_XConstraintInput_83() const { return ___m_XConstraintInput_83; }
	inline bool* get_address_of_m_XConstraintInput_83() { return &___m_XConstraintInput_83; }
	inline void set_m_XConstraintInput_83(bool value)
	{
		___m_XConstraintInput_83 = value;
	}

	inline static int32_t get_offset_of_m_YConstraintInput_84() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_YConstraintInput_84)); }
	inline bool get_m_YConstraintInput_84() const { return ___m_YConstraintInput_84; }
	inline bool* get_address_of_m_YConstraintInput_84() { return &___m_YConstraintInput_84; }
	inline void set_m_YConstraintInput_84(bool value)
	{
		___m_YConstraintInput_84 = value;
	}

	inline static int32_t get_offset_of_m_ZConstraintInput_85() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_ZConstraintInput_85)); }
	inline bool get_m_ZConstraintInput_85() const { return ___m_ZConstraintInput_85; }
	inline bool* get_address_of_m_ZConstraintInput_85() { return &___m_ZConstraintInput_85; }
	inline void set_m_ZConstraintInput_85(bool value)
	{
		___m_ZConstraintInput_85 = value;
	}

	inline static int32_t get_offset_of_m_ResetInput_86() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_ResetInput_86)); }
	inline bool get_m_ResetInput_86() const { return ___m_ResetInput_86; }
	inline bool* get_address_of_m_ResetInput_86() { return &___m_ResetInput_86; }
	inline void set_m_ResetInput_86(bool value)
	{
		___m_ResetInput_86 = value;
	}

	inline static int32_t get_offset_of_m_Axis2DInput_87() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_Axis2DInput_87)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Axis2DInput_87() const { return ___m_Axis2DInput_87; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Axis2DInput_87() { return &___m_Axis2DInput_87; }
	inline void set_m_Axis2DInput_87(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Axis2DInput_87 = value;
	}

	inline static int32_t get_offset_of_m_RestingHandAxis2DInput_88() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_RestingHandAxis2DInput_88)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RestingHandAxis2DInput_88() const { return ___m_RestingHandAxis2DInput_88; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RestingHandAxis2DInput_88() { return &___m_RestingHandAxis2DInput_88; }
	inline void set_m_RestingHandAxis2DInput_88(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RestingHandAxis2DInput_88 = value;
	}

	inline static int32_t get_offset_of_m_GripInput_89() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_GripInput_89)); }
	inline bool get_m_GripInput_89() const { return ___m_GripInput_89; }
	inline bool* get_address_of_m_GripInput_89() { return &___m_GripInput_89; }
	inline void set_m_GripInput_89(bool value)
	{
		___m_GripInput_89 = value;
	}

	inline static int32_t get_offset_of_m_TriggerInput_90() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_TriggerInput_90)); }
	inline bool get_m_TriggerInput_90() const { return ___m_TriggerInput_90; }
	inline bool* get_address_of_m_TriggerInput_90() { return &___m_TriggerInput_90; }
	inline void set_m_TriggerInput_90(bool value)
	{
		___m_TriggerInput_90 = value;
	}

	inline static int32_t get_offset_of_m_PrimaryButtonInput_91() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_PrimaryButtonInput_91)); }
	inline bool get_m_PrimaryButtonInput_91() const { return ___m_PrimaryButtonInput_91; }
	inline bool* get_address_of_m_PrimaryButtonInput_91() { return &___m_PrimaryButtonInput_91; }
	inline void set_m_PrimaryButtonInput_91(bool value)
	{
		___m_PrimaryButtonInput_91 = value;
	}

	inline static int32_t get_offset_of_m_SecondaryButtonInput_92() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_SecondaryButtonInput_92)); }
	inline bool get_m_SecondaryButtonInput_92() const { return ___m_SecondaryButtonInput_92; }
	inline bool* get_address_of_m_SecondaryButtonInput_92() { return &___m_SecondaryButtonInput_92; }
	inline void set_m_SecondaryButtonInput_92(bool value)
	{
		___m_SecondaryButtonInput_92 = value;
	}

	inline static int32_t get_offset_of_m_MenuInput_93() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_MenuInput_93)); }
	inline bool get_m_MenuInput_93() const { return ___m_MenuInput_93; }
	inline bool* get_address_of_m_MenuInput_93() { return &___m_MenuInput_93; }
	inline void set_m_MenuInput_93(bool value)
	{
		___m_MenuInput_93 = value;
	}

	inline static int32_t get_offset_of_m_Primary2DAxisClickInput_94() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_Primary2DAxisClickInput_94)); }
	inline bool get_m_Primary2DAxisClickInput_94() const { return ___m_Primary2DAxisClickInput_94; }
	inline bool* get_address_of_m_Primary2DAxisClickInput_94() { return &___m_Primary2DAxisClickInput_94; }
	inline void set_m_Primary2DAxisClickInput_94(bool value)
	{
		___m_Primary2DAxisClickInput_94 = value;
	}

	inline static int32_t get_offset_of_m_Secondary2DAxisClickInput_95() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_Secondary2DAxisClickInput_95)); }
	inline bool get_m_Secondary2DAxisClickInput_95() const { return ___m_Secondary2DAxisClickInput_95; }
	inline bool* get_address_of_m_Secondary2DAxisClickInput_95() { return &___m_Secondary2DAxisClickInput_95; }
	inline void set_m_Secondary2DAxisClickInput_95(bool value)
	{
		___m_Secondary2DAxisClickInput_95 = value;
	}

	inline static int32_t get_offset_of_m_Primary2DAxisTouchInput_96() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_Primary2DAxisTouchInput_96)); }
	inline bool get_m_Primary2DAxisTouchInput_96() const { return ___m_Primary2DAxisTouchInput_96; }
	inline bool* get_address_of_m_Primary2DAxisTouchInput_96() { return &___m_Primary2DAxisTouchInput_96; }
	inline void set_m_Primary2DAxisTouchInput_96(bool value)
	{
		___m_Primary2DAxisTouchInput_96 = value;
	}

	inline static int32_t get_offset_of_m_Secondary2DAxisTouchInput_97() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_Secondary2DAxisTouchInput_97)); }
	inline bool get_m_Secondary2DAxisTouchInput_97() const { return ___m_Secondary2DAxisTouchInput_97; }
	inline bool* get_address_of_m_Secondary2DAxisTouchInput_97() { return &___m_Secondary2DAxisTouchInput_97; }
	inline void set_m_Secondary2DAxisTouchInput_97(bool value)
	{
		___m_Secondary2DAxisTouchInput_97 = value;
	}

	inline static int32_t get_offset_of_m_PrimaryTouchInput_98() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_PrimaryTouchInput_98)); }
	inline bool get_m_PrimaryTouchInput_98() const { return ___m_PrimaryTouchInput_98; }
	inline bool* get_address_of_m_PrimaryTouchInput_98() { return &___m_PrimaryTouchInput_98; }
	inline void set_m_PrimaryTouchInput_98(bool value)
	{
		___m_PrimaryTouchInput_98 = value;
	}

	inline static int32_t get_offset_of_m_SecondaryTouchInput_99() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_SecondaryTouchInput_99)); }
	inline bool get_m_SecondaryTouchInput_99() const { return ___m_SecondaryTouchInput_99; }
	inline bool* get_address_of_m_SecondaryTouchInput_99() { return &___m_SecondaryTouchInput_99; }
	inline void set_m_SecondaryTouchInput_99(bool value)
	{
		___m_SecondaryTouchInput_99 = value;
	}

	inline static int32_t get_offset_of_m_ManipulatedRestingHandAxis2D_100() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_ManipulatedRestingHandAxis2D_100)); }
	inline bool get_m_ManipulatedRestingHandAxis2D_100() const { return ___m_ManipulatedRestingHandAxis2D_100; }
	inline bool* get_address_of_m_ManipulatedRestingHandAxis2D_100() { return &___m_ManipulatedRestingHandAxis2D_100; }
	inline void set_m_ManipulatedRestingHandAxis2D_100(bool value)
	{
		___m_ManipulatedRestingHandAxis2D_100 = value;
	}

	inline static int32_t get_offset_of_m_LeftControllerEuler_101() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_LeftControllerEuler_101)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_LeftControllerEuler_101() const { return ___m_LeftControllerEuler_101; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_LeftControllerEuler_101() { return &___m_LeftControllerEuler_101; }
	inline void set_m_LeftControllerEuler_101(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_LeftControllerEuler_101 = value;
	}

	inline static int32_t get_offset_of_m_RightControllerEuler_102() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_RightControllerEuler_102)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RightControllerEuler_102() const { return ___m_RightControllerEuler_102; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RightControllerEuler_102() { return &___m_RightControllerEuler_102; }
	inline void set_m_RightControllerEuler_102(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RightControllerEuler_102 = value;
	}

	inline static int32_t get_offset_of_m_CenterEyeEuler_103() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_CenterEyeEuler_103)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_CenterEyeEuler_103() const { return ___m_CenterEyeEuler_103; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_CenterEyeEuler_103() { return &___m_CenterEyeEuler_103; }
	inline void set_m_CenterEyeEuler_103(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_CenterEyeEuler_103 = value;
	}

	inline static int32_t get_offset_of_m_HMDState_104() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_HMDState_104)); }
	inline XRSimulatedHMDState_tDAE563E2C0FBDB44CF1D0272A9668F5B0A13D5D7  get_m_HMDState_104() const { return ___m_HMDState_104; }
	inline XRSimulatedHMDState_tDAE563E2C0FBDB44CF1D0272A9668F5B0A13D5D7 * get_address_of_m_HMDState_104() { return &___m_HMDState_104; }
	inline void set_m_HMDState_104(XRSimulatedHMDState_tDAE563E2C0FBDB44CF1D0272A9668F5B0A13D5D7  value)
	{
		___m_HMDState_104 = value;
	}

	inline static int32_t get_offset_of_m_LeftControllerState_105() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_LeftControllerState_105)); }
	inline XRSimulatedControllerState_tF8F4FD13AD3CC46E85B73D5F2BCEB18FF0531175  get_m_LeftControllerState_105() const { return ___m_LeftControllerState_105; }
	inline XRSimulatedControllerState_tF8F4FD13AD3CC46E85B73D5F2BCEB18FF0531175 * get_address_of_m_LeftControllerState_105() { return &___m_LeftControllerState_105; }
	inline void set_m_LeftControllerState_105(XRSimulatedControllerState_tF8F4FD13AD3CC46E85B73D5F2BCEB18FF0531175  value)
	{
		___m_LeftControllerState_105 = value;
	}

	inline static int32_t get_offset_of_m_RightControllerState_106() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_RightControllerState_106)); }
	inline XRSimulatedControllerState_tF8F4FD13AD3CC46E85B73D5F2BCEB18FF0531175  get_m_RightControllerState_106() const { return ___m_RightControllerState_106; }
	inline XRSimulatedControllerState_tF8F4FD13AD3CC46E85B73D5F2BCEB18FF0531175 * get_address_of_m_RightControllerState_106() { return &___m_RightControllerState_106; }
	inline void set_m_RightControllerState_106(XRSimulatedControllerState_tF8F4FD13AD3CC46E85B73D5F2BCEB18FF0531175  value)
	{
		___m_RightControllerState_106 = value;
	}

	inline static int32_t get_offset_of_m_HMDDevice_107() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_HMDDevice_107)); }
	inline XRSimulatedHMD_tE5A264AD475895067EBDC8293CAE486DD24CA540 * get_m_HMDDevice_107() const { return ___m_HMDDevice_107; }
	inline XRSimulatedHMD_tE5A264AD475895067EBDC8293CAE486DD24CA540 ** get_address_of_m_HMDDevice_107() { return &___m_HMDDevice_107; }
	inline void set_m_HMDDevice_107(XRSimulatedHMD_tE5A264AD475895067EBDC8293CAE486DD24CA540 * value)
	{
		___m_HMDDevice_107 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HMDDevice_107), (void*)value);
	}

	inline static int32_t get_offset_of_m_LeftControllerDevice_108() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_LeftControllerDevice_108)); }
	inline XRSimulatedController_t7771B4DF96F9B4259DFFFD68E30136C1FEAD7E49 * get_m_LeftControllerDevice_108() const { return ___m_LeftControllerDevice_108; }
	inline XRSimulatedController_t7771B4DF96F9B4259DFFFD68E30136C1FEAD7E49 ** get_address_of_m_LeftControllerDevice_108() { return &___m_LeftControllerDevice_108; }
	inline void set_m_LeftControllerDevice_108(XRSimulatedController_t7771B4DF96F9B4259DFFFD68E30136C1FEAD7E49 * value)
	{
		___m_LeftControllerDevice_108 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LeftControllerDevice_108), (void*)value);
	}

	inline static int32_t get_offset_of_m_RightControllerDevice_109() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_RightControllerDevice_109)); }
	inline XRSimulatedController_t7771B4DF96F9B4259DFFFD68E30136C1FEAD7E49 * get_m_RightControllerDevice_109() const { return ___m_RightControllerDevice_109; }
	inline XRSimulatedController_t7771B4DF96F9B4259DFFFD68E30136C1FEAD7E49 ** get_address_of_m_RightControllerDevice_109() { return &___m_RightControllerDevice_109; }
	inline void set_m_RightControllerDevice_109(XRSimulatedController_t7771B4DF96F9B4259DFFFD68E30136C1FEAD7E49 * value)
	{
		___m_RightControllerDevice_109 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RightControllerDevice_109), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnInputDeviceChangeSubscribed_110() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825, ___m_OnInputDeviceChangeSubscribed_110)); }
	inline bool get_m_OnInputDeviceChangeSubscribed_110() const { return ___m_OnInputDeviceChangeSubscribed_110; }
	inline bool* get_address_of_m_OnInputDeviceChangeSubscribed_110() { return &___m_OnInputDeviceChangeSubscribed_110; }
	inline void set_m_OnInputDeviceChangeSubscribed_110(bool value)
	{
		___m_OnInputDeviceChangeSubscribed_110 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI
struct XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_ControllerImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_ControllerImage_4;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_ControllerOverlayImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_ControllerOverlayImage_5;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_PrimaryButtonImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_PrimaryButtonImage_6;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_PrimaryButtonText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_PrimaryButtonText_7;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_PrimaryButtonIcon
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_PrimaryButtonIcon_8;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_SecondaryButtonImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_SecondaryButtonImage_9;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_SecondaryButtonText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_SecondaryButtonText_10;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_SecondaryButtonIcon
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_SecondaryButtonIcon_11;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_TriggerButtonImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_TriggerButtonImage_12;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_TriggerButtonText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_TriggerButtonText_13;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_TriggerButtonIcon
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_TriggerButtonIcon_14;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_GripButtonImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_GripButtonImage_15;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_GripButtonText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_GripButtonText_16;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_GripButtonIcon
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_GripButtonIcon_17;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_ThumbstickButtonImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_ThumbstickButtonImage_18;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_ThumbstickButtonText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_ThumbstickButtonText_19;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_ThumbstickButtonIcon
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_ThumbstickButtonIcon_20;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_MenuButtonImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_MenuButtonImage_21;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_MenuButtonText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_MenuButtonText_22;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_MenuButtonIcon
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_MenuButtonIcon_23;
	// UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_MainUIManager
	XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * ___m_MainUIManager_24;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_PrimaryButtonActivated
	bool ___m_PrimaryButtonActivated_25;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_SecondaryButtonActivated
	bool ___m_SecondaryButtonActivated_26;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_TriggerActivated
	bool ___m_TriggerActivated_27;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_GripActivated
	bool ___m_GripActivated_28;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_MenuActivated
	bool ___m_MenuActivated_29;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_XAxisTranslateActivated
	bool ___m_XAxisTranslateActivated_30;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::m_YAxisTranslateActivated
	bool ___m_YAxisTranslateActivated_31;

public:
	inline static int32_t get_offset_of_m_ControllerImage_4() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_ControllerImage_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_ControllerImage_4() const { return ___m_ControllerImage_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_ControllerImage_4() { return &___m_ControllerImage_4; }
	inline void set_m_ControllerImage_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_ControllerImage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControllerImage_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControllerOverlayImage_5() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_ControllerOverlayImage_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_ControllerOverlayImage_5() const { return ___m_ControllerOverlayImage_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_ControllerOverlayImage_5() { return &___m_ControllerOverlayImage_5; }
	inline void set_m_ControllerOverlayImage_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_ControllerOverlayImage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControllerOverlayImage_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_PrimaryButtonImage_6() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_PrimaryButtonImage_6)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_PrimaryButtonImage_6() const { return ___m_PrimaryButtonImage_6; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_PrimaryButtonImage_6() { return &___m_PrimaryButtonImage_6; }
	inline void set_m_PrimaryButtonImage_6(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_PrimaryButtonImage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PrimaryButtonImage_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_PrimaryButtonText_7() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_PrimaryButtonText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_PrimaryButtonText_7() const { return ___m_PrimaryButtonText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_PrimaryButtonText_7() { return &___m_PrimaryButtonText_7; }
	inline void set_m_PrimaryButtonText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_PrimaryButtonText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PrimaryButtonText_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_PrimaryButtonIcon_8() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_PrimaryButtonIcon_8)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_PrimaryButtonIcon_8() const { return ___m_PrimaryButtonIcon_8; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_PrimaryButtonIcon_8() { return &___m_PrimaryButtonIcon_8; }
	inline void set_m_PrimaryButtonIcon_8(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_PrimaryButtonIcon_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PrimaryButtonIcon_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_SecondaryButtonImage_9() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_SecondaryButtonImage_9)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_SecondaryButtonImage_9() const { return ___m_SecondaryButtonImage_9; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_SecondaryButtonImage_9() { return &___m_SecondaryButtonImage_9; }
	inline void set_m_SecondaryButtonImage_9(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_SecondaryButtonImage_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SecondaryButtonImage_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_SecondaryButtonText_10() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_SecondaryButtonText_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_SecondaryButtonText_10() const { return ___m_SecondaryButtonText_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_SecondaryButtonText_10() { return &___m_SecondaryButtonText_10; }
	inline void set_m_SecondaryButtonText_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_SecondaryButtonText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SecondaryButtonText_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_SecondaryButtonIcon_11() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_SecondaryButtonIcon_11)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_SecondaryButtonIcon_11() const { return ___m_SecondaryButtonIcon_11; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_SecondaryButtonIcon_11() { return &___m_SecondaryButtonIcon_11; }
	inline void set_m_SecondaryButtonIcon_11(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_SecondaryButtonIcon_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SecondaryButtonIcon_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_TriggerButtonImage_12() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_TriggerButtonImage_12)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_TriggerButtonImage_12() const { return ___m_TriggerButtonImage_12; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_TriggerButtonImage_12() { return &___m_TriggerButtonImage_12; }
	inline void set_m_TriggerButtonImage_12(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_TriggerButtonImage_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TriggerButtonImage_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_TriggerButtonText_13() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_TriggerButtonText_13)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_TriggerButtonText_13() const { return ___m_TriggerButtonText_13; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_TriggerButtonText_13() { return &___m_TriggerButtonText_13; }
	inline void set_m_TriggerButtonText_13(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_TriggerButtonText_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TriggerButtonText_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_TriggerButtonIcon_14() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_TriggerButtonIcon_14)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_TriggerButtonIcon_14() const { return ___m_TriggerButtonIcon_14; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_TriggerButtonIcon_14() { return &___m_TriggerButtonIcon_14; }
	inline void set_m_TriggerButtonIcon_14(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_TriggerButtonIcon_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TriggerButtonIcon_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_GripButtonImage_15() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_GripButtonImage_15)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_GripButtonImage_15() const { return ___m_GripButtonImage_15; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_GripButtonImage_15() { return &___m_GripButtonImage_15; }
	inline void set_m_GripButtonImage_15(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_GripButtonImage_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GripButtonImage_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_GripButtonText_16() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_GripButtonText_16)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_GripButtonText_16() const { return ___m_GripButtonText_16; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_GripButtonText_16() { return &___m_GripButtonText_16; }
	inline void set_m_GripButtonText_16(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_GripButtonText_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GripButtonText_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_GripButtonIcon_17() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_GripButtonIcon_17)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_GripButtonIcon_17() const { return ___m_GripButtonIcon_17; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_GripButtonIcon_17() { return &___m_GripButtonIcon_17; }
	inline void set_m_GripButtonIcon_17(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_GripButtonIcon_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GripButtonIcon_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThumbstickButtonImage_18() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_ThumbstickButtonImage_18)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_ThumbstickButtonImage_18() const { return ___m_ThumbstickButtonImage_18; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_ThumbstickButtonImage_18() { return &___m_ThumbstickButtonImage_18; }
	inline void set_m_ThumbstickButtonImage_18(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_ThumbstickButtonImage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThumbstickButtonImage_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThumbstickButtonText_19() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_ThumbstickButtonText_19)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_ThumbstickButtonText_19() const { return ___m_ThumbstickButtonText_19; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_ThumbstickButtonText_19() { return &___m_ThumbstickButtonText_19; }
	inline void set_m_ThumbstickButtonText_19(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_ThumbstickButtonText_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThumbstickButtonText_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThumbstickButtonIcon_20() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_ThumbstickButtonIcon_20)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_ThumbstickButtonIcon_20() const { return ___m_ThumbstickButtonIcon_20; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_ThumbstickButtonIcon_20() { return &___m_ThumbstickButtonIcon_20; }
	inline void set_m_ThumbstickButtonIcon_20(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_ThumbstickButtonIcon_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThumbstickButtonIcon_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_MenuButtonImage_21() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_MenuButtonImage_21)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_MenuButtonImage_21() const { return ___m_MenuButtonImage_21; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_MenuButtonImage_21() { return &___m_MenuButtonImage_21; }
	inline void set_m_MenuButtonImage_21(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_MenuButtonImage_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MenuButtonImage_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_MenuButtonText_22() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_MenuButtonText_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_MenuButtonText_22() const { return ___m_MenuButtonText_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_MenuButtonText_22() { return &___m_MenuButtonText_22; }
	inline void set_m_MenuButtonText_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_MenuButtonText_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MenuButtonText_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_MenuButtonIcon_23() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_MenuButtonIcon_23)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_MenuButtonIcon_23() const { return ___m_MenuButtonIcon_23; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_MenuButtonIcon_23() { return &___m_MenuButtonIcon_23; }
	inline void set_m_MenuButtonIcon_23(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_MenuButtonIcon_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MenuButtonIcon_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_MainUIManager_24() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_MainUIManager_24)); }
	inline XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * get_m_MainUIManager_24() const { return ___m_MainUIManager_24; }
	inline XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C ** get_address_of_m_MainUIManager_24() { return &___m_MainUIManager_24; }
	inline void set_m_MainUIManager_24(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * value)
	{
		___m_MainUIManager_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MainUIManager_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_PrimaryButtonActivated_25() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_PrimaryButtonActivated_25)); }
	inline bool get_m_PrimaryButtonActivated_25() const { return ___m_PrimaryButtonActivated_25; }
	inline bool* get_address_of_m_PrimaryButtonActivated_25() { return &___m_PrimaryButtonActivated_25; }
	inline void set_m_PrimaryButtonActivated_25(bool value)
	{
		___m_PrimaryButtonActivated_25 = value;
	}

	inline static int32_t get_offset_of_m_SecondaryButtonActivated_26() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_SecondaryButtonActivated_26)); }
	inline bool get_m_SecondaryButtonActivated_26() const { return ___m_SecondaryButtonActivated_26; }
	inline bool* get_address_of_m_SecondaryButtonActivated_26() { return &___m_SecondaryButtonActivated_26; }
	inline void set_m_SecondaryButtonActivated_26(bool value)
	{
		___m_SecondaryButtonActivated_26 = value;
	}

	inline static int32_t get_offset_of_m_TriggerActivated_27() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_TriggerActivated_27)); }
	inline bool get_m_TriggerActivated_27() const { return ___m_TriggerActivated_27; }
	inline bool* get_address_of_m_TriggerActivated_27() { return &___m_TriggerActivated_27; }
	inline void set_m_TriggerActivated_27(bool value)
	{
		___m_TriggerActivated_27 = value;
	}

	inline static int32_t get_offset_of_m_GripActivated_28() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_GripActivated_28)); }
	inline bool get_m_GripActivated_28() const { return ___m_GripActivated_28; }
	inline bool* get_address_of_m_GripActivated_28() { return &___m_GripActivated_28; }
	inline void set_m_GripActivated_28(bool value)
	{
		___m_GripActivated_28 = value;
	}

	inline static int32_t get_offset_of_m_MenuActivated_29() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_MenuActivated_29)); }
	inline bool get_m_MenuActivated_29() const { return ___m_MenuActivated_29; }
	inline bool* get_address_of_m_MenuActivated_29() { return &___m_MenuActivated_29; }
	inline void set_m_MenuActivated_29(bool value)
	{
		___m_MenuActivated_29 = value;
	}

	inline static int32_t get_offset_of_m_XAxisTranslateActivated_30() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_XAxisTranslateActivated_30)); }
	inline bool get_m_XAxisTranslateActivated_30() const { return ___m_XAxisTranslateActivated_30; }
	inline bool* get_address_of_m_XAxisTranslateActivated_30() { return &___m_XAxisTranslateActivated_30; }
	inline void set_m_XAxisTranslateActivated_30(bool value)
	{
		___m_XAxisTranslateActivated_30 = value;
	}

	inline static int32_t get_offset_of_m_YAxisTranslateActivated_31() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A, ___m_YAxisTranslateActivated_31)); }
	inline bool get_m_YAxisTranslateActivated_31() const { return ___m_YAxisTranslateActivated_31; }
	inline bool* get_address_of_m_YAxisTranslateActivated_31() { return &___m_YAxisTranslateActivated_31; }
	inline void set_m_YAxisTranslateActivated_31(bool value)
	{
		___m_YAxisTranslateActivated_31 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI
struct XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_Simulator
	XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * ___m_Simulator_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_IsMenuOpen
	bool ___m_IsMenuOpen_8;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_XRDeviceSimulatorMainPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_XRDeviceSimulatorMainPanel_9;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_XRDeviceSimulatorCollapsedPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_XRDeviceSimulatorCollapsedPanel_10;
	// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HmdSpriteDark
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HmdSpriteDark_11;
	// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HmdSpriteLight
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HmdSpriteLight_12;
	// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_KeyboardSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_KeyboardSprite_13;
	// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_MouseSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_MouseSprite_14;
	// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_RMouseSpriteDark
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_RMouseSpriteDark_15;
	// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_RMouseSpriteLight
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_RMouseSpriteLight_16;
	// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_RMouseSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_RMouseSprite_17;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_CycleDevicesText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_CycleDevicesText_18;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_CurrentSelectedDeviceText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_CurrentSelectedDeviceText_19;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HeadsetImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_HeadsetImage_20;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HeadsetMoveButton
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_HeadsetMoveButton_21;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HeadsetMoveButtonIcon
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_HeadsetMoveButtonIcon_22;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HeadsetMoveButtonText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_HeadsetMoveButtonText_23;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HeadsetMoveValueIcon
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_HeadsetMoveValueIcon_24;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HeadsetMoveValueText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_HeadsetMoveValueText_25;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HeadsetLookButton
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_HeadsetLookButton_26;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HeadsetLookButtonText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_HeadsetLookButtonText_27;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HeadsetLookValueIcon
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_HeadsetLookValueIcon_28;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HeadsetLookValueText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_HeadsetLookValueText_29;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_CursorLockButton
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_CursorLockButton_30;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_CursorLockValueText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_CursorLockValueText_31;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_MouseModeButtonText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_MouseModeButtonText_32;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_MouseModeValueText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_MouseModeValueText_33;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HeadsetSelectedButton
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_HeadsetSelectedButton_34;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_HeadsetSelectedValueText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_HeadsetSelectedValueText_35;
	// UnityEngine.UI.Image UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_ControllerSelectedButton
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_ControllerSelectedButton_36;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_ControllersSelectedValueText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_ControllersSelectedValueText_37;
	// UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_LeftController
	XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * ___m_LeftController_38;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_LeftControllerButtonText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_LeftControllerButtonText_39;
	// UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_RightController
	XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * ___m_RightController_40;
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_RightControllerButtonText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_RightControllerButtonText_41;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_EnabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_EnabledColor_44;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_47;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_ButtonColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_ButtonColor_50;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_DisabledButtonColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledButtonColor_53;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_56;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_BackgroundColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_BackgroundColor_59;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_DeviceColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DeviceColor_62;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_DisabledDeviceColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledDeviceColor_65;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_XAxisActivated
	bool ___m_XAxisActivated_66;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::m_ZAxisActivated
	bool ___m_ZAxisActivated_67;

public:
	inline static int32_t get_offset_of_m_Simulator_4() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_Simulator_4)); }
	inline XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * get_m_Simulator_4() const { return ___m_Simulator_4; }
	inline XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 ** get_address_of_m_Simulator_4() { return &___m_Simulator_4; }
	inline void set_m_Simulator_4(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * value)
	{
		___m_Simulator_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Simulator_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsMenuOpen_8() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_IsMenuOpen_8)); }
	inline bool get_m_IsMenuOpen_8() const { return ___m_IsMenuOpen_8; }
	inline bool* get_address_of_m_IsMenuOpen_8() { return &___m_IsMenuOpen_8; }
	inline void set_m_IsMenuOpen_8(bool value)
	{
		___m_IsMenuOpen_8 = value;
	}

	inline static int32_t get_offset_of_m_XRDeviceSimulatorMainPanel_9() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_XRDeviceSimulatorMainPanel_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_XRDeviceSimulatorMainPanel_9() const { return ___m_XRDeviceSimulatorMainPanel_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_XRDeviceSimulatorMainPanel_9() { return &___m_XRDeviceSimulatorMainPanel_9; }
	inline void set_m_XRDeviceSimulatorMainPanel_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_XRDeviceSimulatorMainPanel_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_XRDeviceSimulatorMainPanel_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_XRDeviceSimulatorCollapsedPanel_10() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_XRDeviceSimulatorCollapsedPanel_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_XRDeviceSimulatorCollapsedPanel_10() const { return ___m_XRDeviceSimulatorCollapsedPanel_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_XRDeviceSimulatorCollapsedPanel_10() { return &___m_XRDeviceSimulatorCollapsedPanel_10; }
	inline void set_m_XRDeviceSimulatorCollapsedPanel_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_XRDeviceSimulatorCollapsedPanel_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_XRDeviceSimulatorCollapsedPanel_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HmdSpriteDark_11() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_HmdSpriteDark_11)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HmdSpriteDark_11() const { return ___m_HmdSpriteDark_11; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HmdSpriteDark_11() { return &___m_HmdSpriteDark_11; }
	inline void set_m_HmdSpriteDark_11(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HmdSpriteDark_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HmdSpriteDark_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_HmdSpriteLight_12() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_HmdSpriteLight_12)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HmdSpriteLight_12() const { return ___m_HmdSpriteLight_12; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HmdSpriteLight_12() { return &___m_HmdSpriteLight_12; }
	inline void set_m_HmdSpriteLight_12(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HmdSpriteLight_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HmdSpriteLight_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_KeyboardSprite_13() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_KeyboardSprite_13)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_KeyboardSprite_13() const { return ___m_KeyboardSprite_13; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_KeyboardSprite_13() { return &___m_KeyboardSprite_13; }
	inline void set_m_KeyboardSprite_13(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_KeyboardSprite_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_KeyboardSprite_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_MouseSprite_14() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_MouseSprite_14)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_MouseSprite_14() const { return ___m_MouseSprite_14; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_MouseSprite_14() { return &___m_MouseSprite_14; }
	inline void set_m_MouseSprite_14(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_MouseSprite_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MouseSprite_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_RMouseSpriteDark_15() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_RMouseSpriteDark_15)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_RMouseSpriteDark_15() const { return ___m_RMouseSpriteDark_15; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_RMouseSpriteDark_15() { return &___m_RMouseSpriteDark_15; }
	inline void set_m_RMouseSpriteDark_15(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_RMouseSpriteDark_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RMouseSpriteDark_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_RMouseSpriteLight_16() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_RMouseSpriteLight_16)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_RMouseSpriteLight_16() const { return ___m_RMouseSpriteLight_16; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_RMouseSpriteLight_16() { return &___m_RMouseSpriteLight_16; }
	inline void set_m_RMouseSpriteLight_16(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_RMouseSpriteLight_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RMouseSpriteLight_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_RMouseSprite_17() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_RMouseSprite_17)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_RMouseSprite_17() const { return ___m_RMouseSprite_17; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_RMouseSprite_17() { return &___m_RMouseSprite_17; }
	inline void set_m_RMouseSprite_17(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_RMouseSprite_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RMouseSprite_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_CycleDevicesText_18() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_CycleDevicesText_18)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_CycleDevicesText_18() const { return ___m_CycleDevicesText_18; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_CycleDevicesText_18() { return &___m_CycleDevicesText_18; }
	inline void set_m_CycleDevicesText_18(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_CycleDevicesText_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CycleDevicesText_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentSelectedDeviceText_19() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_CurrentSelectedDeviceText_19)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_CurrentSelectedDeviceText_19() const { return ___m_CurrentSelectedDeviceText_19; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_CurrentSelectedDeviceText_19() { return &___m_CurrentSelectedDeviceText_19; }
	inline void set_m_CurrentSelectedDeviceText_19(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_CurrentSelectedDeviceText_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelectedDeviceText_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_HeadsetImage_20() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_HeadsetImage_20)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_HeadsetImage_20() const { return ___m_HeadsetImage_20; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_HeadsetImage_20() { return &___m_HeadsetImage_20; }
	inline void set_m_HeadsetImage_20(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_HeadsetImage_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HeadsetImage_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HeadsetMoveButton_21() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_HeadsetMoveButton_21)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_HeadsetMoveButton_21() const { return ___m_HeadsetMoveButton_21; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_HeadsetMoveButton_21() { return &___m_HeadsetMoveButton_21; }
	inline void set_m_HeadsetMoveButton_21(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_HeadsetMoveButton_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HeadsetMoveButton_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_HeadsetMoveButtonIcon_22() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_HeadsetMoveButtonIcon_22)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_HeadsetMoveButtonIcon_22() const { return ___m_HeadsetMoveButtonIcon_22; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_HeadsetMoveButtonIcon_22() { return &___m_HeadsetMoveButtonIcon_22; }
	inline void set_m_HeadsetMoveButtonIcon_22(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_HeadsetMoveButtonIcon_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HeadsetMoveButtonIcon_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_HeadsetMoveButtonText_23() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_HeadsetMoveButtonText_23)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_HeadsetMoveButtonText_23() const { return ___m_HeadsetMoveButtonText_23; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_HeadsetMoveButtonText_23() { return &___m_HeadsetMoveButtonText_23; }
	inline void set_m_HeadsetMoveButtonText_23(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_HeadsetMoveButtonText_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HeadsetMoveButtonText_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_HeadsetMoveValueIcon_24() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_HeadsetMoveValueIcon_24)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_HeadsetMoveValueIcon_24() const { return ___m_HeadsetMoveValueIcon_24; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_HeadsetMoveValueIcon_24() { return &___m_HeadsetMoveValueIcon_24; }
	inline void set_m_HeadsetMoveValueIcon_24(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_HeadsetMoveValueIcon_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HeadsetMoveValueIcon_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_HeadsetMoveValueText_25() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_HeadsetMoveValueText_25)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_HeadsetMoveValueText_25() const { return ___m_HeadsetMoveValueText_25; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_HeadsetMoveValueText_25() { return &___m_HeadsetMoveValueText_25; }
	inline void set_m_HeadsetMoveValueText_25(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_HeadsetMoveValueText_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HeadsetMoveValueText_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_HeadsetLookButton_26() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_HeadsetLookButton_26)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_HeadsetLookButton_26() const { return ___m_HeadsetLookButton_26; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_HeadsetLookButton_26() { return &___m_HeadsetLookButton_26; }
	inline void set_m_HeadsetLookButton_26(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_HeadsetLookButton_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HeadsetLookButton_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_HeadsetLookButtonText_27() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_HeadsetLookButtonText_27)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_HeadsetLookButtonText_27() const { return ___m_HeadsetLookButtonText_27; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_HeadsetLookButtonText_27() { return &___m_HeadsetLookButtonText_27; }
	inline void set_m_HeadsetLookButtonText_27(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_HeadsetLookButtonText_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HeadsetLookButtonText_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_HeadsetLookValueIcon_28() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_HeadsetLookValueIcon_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_HeadsetLookValueIcon_28() const { return ___m_HeadsetLookValueIcon_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_HeadsetLookValueIcon_28() { return &___m_HeadsetLookValueIcon_28; }
	inline void set_m_HeadsetLookValueIcon_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_HeadsetLookValueIcon_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HeadsetLookValueIcon_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_HeadsetLookValueText_29() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_HeadsetLookValueText_29)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_HeadsetLookValueText_29() const { return ___m_HeadsetLookValueText_29; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_HeadsetLookValueText_29() { return &___m_HeadsetLookValueText_29; }
	inline void set_m_HeadsetLookValueText_29(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_HeadsetLookValueText_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HeadsetLookValueText_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorLockButton_30() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_CursorLockButton_30)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_CursorLockButton_30() const { return ___m_CursorLockButton_30; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_CursorLockButton_30() { return &___m_CursorLockButton_30; }
	inline void set_m_CursorLockButton_30(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_CursorLockButton_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorLockButton_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorLockValueText_31() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_CursorLockValueText_31)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_CursorLockValueText_31() const { return ___m_CursorLockValueText_31; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_CursorLockValueText_31() { return &___m_CursorLockValueText_31; }
	inline void set_m_CursorLockValueText_31(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_CursorLockValueText_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorLockValueText_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_MouseModeButtonText_32() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_MouseModeButtonText_32)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_MouseModeButtonText_32() const { return ___m_MouseModeButtonText_32; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_MouseModeButtonText_32() { return &___m_MouseModeButtonText_32; }
	inline void set_m_MouseModeButtonText_32(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_MouseModeButtonText_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MouseModeButtonText_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_MouseModeValueText_33() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_MouseModeValueText_33)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_MouseModeValueText_33() const { return ___m_MouseModeValueText_33; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_MouseModeValueText_33() { return &___m_MouseModeValueText_33; }
	inline void set_m_MouseModeValueText_33(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_MouseModeValueText_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MouseModeValueText_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_HeadsetSelectedButton_34() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_HeadsetSelectedButton_34)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_HeadsetSelectedButton_34() const { return ___m_HeadsetSelectedButton_34; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_HeadsetSelectedButton_34() { return &___m_HeadsetSelectedButton_34; }
	inline void set_m_HeadsetSelectedButton_34(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_HeadsetSelectedButton_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HeadsetSelectedButton_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_HeadsetSelectedValueText_35() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_HeadsetSelectedValueText_35)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_HeadsetSelectedValueText_35() const { return ___m_HeadsetSelectedValueText_35; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_HeadsetSelectedValueText_35() { return &___m_HeadsetSelectedValueText_35; }
	inline void set_m_HeadsetSelectedValueText_35(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_HeadsetSelectedValueText_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HeadsetSelectedValueText_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControllerSelectedButton_36() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_ControllerSelectedButton_36)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_ControllerSelectedButton_36() const { return ___m_ControllerSelectedButton_36; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_ControllerSelectedButton_36() { return &___m_ControllerSelectedButton_36; }
	inline void set_m_ControllerSelectedButton_36(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_ControllerSelectedButton_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControllerSelectedButton_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControllersSelectedValueText_37() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_ControllersSelectedValueText_37)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_ControllersSelectedValueText_37() const { return ___m_ControllersSelectedValueText_37; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_ControllersSelectedValueText_37() { return &___m_ControllersSelectedValueText_37; }
	inline void set_m_ControllersSelectedValueText_37(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_ControllersSelectedValueText_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControllersSelectedValueText_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_LeftController_38() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_LeftController_38)); }
	inline XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * get_m_LeftController_38() const { return ___m_LeftController_38; }
	inline XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A ** get_address_of_m_LeftController_38() { return &___m_LeftController_38; }
	inline void set_m_LeftController_38(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * value)
	{
		___m_LeftController_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LeftController_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_LeftControllerButtonText_39() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_LeftControllerButtonText_39)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_LeftControllerButtonText_39() const { return ___m_LeftControllerButtonText_39; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_LeftControllerButtonText_39() { return &___m_LeftControllerButtonText_39; }
	inline void set_m_LeftControllerButtonText_39(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_LeftControllerButtonText_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LeftControllerButtonText_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_RightController_40() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_RightController_40)); }
	inline XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * get_m_RightController_40() const { return ___m_RightController_40; }
	inline XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A ** get_address_of_m_RightController_40() { return &___m_RightController_40; }
	inline void set_m_RightController_40(XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * value)
	{
		___m_RightController_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RightController_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_RightControllerButtonText_41() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_RightControllerButtonText_41)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_RightControllerButtonText_41() const { return ___m_RightControllerButtonText_41; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_RightControllerButtonText_41() { return &___m_RightControllerButtonText_41; }
	inline void set_m_RightControllerButtonText_41(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_RightControllerButtonText_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RightControllerButtonText_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_EnabledColor_44() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_EnabledColor_44)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_EnabledColor_44() const { return ___m_EnabledColor_44; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_EnabledColor_44() { return &___m_EnabledColor_44; }
	inline void set_m_EnabledColor_44(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_EnabledColor_44 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_47() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_DisabledColor_47)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_47() const { return ___m_DisabledColor_47; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_47() { return &___m_DisabledColor_47; }
	inline void set_m_DisabledColor_47(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_47 = value;
	}

	inline static int32_t get_offset_of_m_ButtonColor_50() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_ButtonColor_50)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_ButtonColor_50() const { return ___m_ButtonColor_50; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_ButtonColor_50() { return &___m_ButtonColor_50; }
	inline void set_m_ButtonColor_50(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_ButtonColor_50 = value;
	}

	inline static int32_t get_offset_of_m_DisabledButtonColor_53() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_DisabledButtonColor_53)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledButtonColor_53() const { return ___m_DisabledButtonColor_53; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledButtonColor_53() { return &___m_DisabledButtonColor_53; }
	inline void set_m_DisabledButtonColor_53(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledButtonColor_53 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_56() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_SelectedColor_56)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_56() const { return ___m_SelectedColor_56; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_56() { return &___m_SelectedColor_56; }
	inline void set_m_SelectedColor_56(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_56 = value;
	}

	inline static int32_t get_offset_of_m_BackgroundColor_59() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_BackgroundColor_59)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_BackgroundColor_59() const { return ___m_BackgroundColor_59; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_BackgroundColor_59() { return &___m_BackgroundColor_59; }
	inline void set_m_BackgroundColor_59(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_BackgroundColor_59 = value;
	}

	inline static int32_t get_offset_of_m_DeviceColor_62() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_DeviceColor_62)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DeviceColor_62() const { return ___m_DeviceColor_62; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DeviceColor_62() { return &___m_DeviceColor_62; }
	inline void set_m_DeviceColor_62(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DeviceColor_62 = value;
	}

	inline static int32_t get_offset_of_m_DisabledDeviceColor_65() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_DisabledDeviceColor_65)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledDeviceColor_65() const { return ___m_DisabledDeviceColor_65; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledDeviceColor_65() { return &___m_DisabledDeviceColor_65; }
	inline void set_m_DisabledDeviceColor_65(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledDeviceColor_65 = value;
	}

	inline static int32_t get_offset_of_m_XAxisActivated_66() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_XAxisActivated_66)); }
	inline bool get_m_XAxisActivated_66() const { return ___m_XAxisActivated_66; }
	inline bool* get_address_of_m_XAxisActivated_66() { return &___m_XAxisActivated_66; }
	inline void set_m_XAxisActivated_66(bool value)
	{
		___m_XAxisActivated_66 = value;
	}

	inline static int32_t get_offset_of_m_ZAxisActivated_67() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C, ___m_ZAxisActivated_67)); }
	inline bool get_m_ZAxisActivated_67() const { return ___m_ZAxisActivated_67; }
	inline bool* get_address_of_m_ZAxisActivated_67() { return &___m_ZAxisActivated_67; }
	inline void set_m_ZAxisActivated_67(bool value)
	{
		___m_ZAxisActivated_67 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTargetCache_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTargetCache_11)); }
	inline bool get_m_RaycastTargetCache_11() const { return ___m_RaycastTargetCache_11; }
	inline bool* get_address_of_m_RaycastTargetCache_11() { return &___m_RaycastTargetCache_11; }
	inline void set_m_RaycastTargetCache_11(bool value)
	{
		___m_RaycastTargetCache_11 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_12)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_12() const { return ___m_RaycastPadding_12; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_12() { return &___m_RaycastPadding_12; }
	inline void set_m_RaycastPadding_12(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_12 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_13)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_13() const { return ___m_RectTransform_13; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_13() { return &___m_RectTransform_13; }
	inline void set_m_RectTransform_13(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_14)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_14() const { return ___m_CanvasRenderer_14; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_14() { return &___m_CanvasRenderer_14; }
	inline void set_m_CanvasRenderer_14(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_15)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_15() const { return ___m_Canvas_15; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_15() { return &___m_Canvas_15; }
	inline void set_m_Canvas_15(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_16)); }
	inline bool get_m_VertsDirty_16() const { return ___m_VertsDirty_16; }
	inline bool* get_address_of_m_VertsDirty_16() { return &___m_VertsDirty_16; }
	inline void set_m_VertsDirty_16(bool value)
	{
		___m_VertsDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_17)); }
	inline bool get_m_MaterialDirty_17() const { return ___m_MaterialDirty_17; }
	inline bool* get_address_of_m_MaterialDirty_17() { return &___m_MaterialDirty_17; }
	inline void set_m_MaterialDirty_17(bool value)
	{
		___m_MaterialDirty_17 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_18() const { return ___m_OnDirtyLayoutCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_18() { return &___m_OnDirtyLayoutCallback_18; }
	inline void set_m_OnDirtyLayoutCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_19() const { return ___m_OnDirtyVertsCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_19() { return &___m_OnDirtyVertsCallback_19; }
	inline void set_m_OnDirtyVertsCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_20)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_20() const { return ___m_OnDirtyMaterialCallback_20; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_20() { return &___m_OnDirtyMaterialCallback_20; }
	inline void set_m_OnDirtyMaterialCallback_20(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_23)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_23() const { return ___m_CachedMesh_23; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_23() { return &___m_CachedMesh_23; }
	inline void set_m_CachedMesh_23(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_24)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_24() const { return ___m_CachedUvs_24; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_24() { return &___m_CachedUvs_24; }
	inline void set_m_CachedUvs_24(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_25)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_25() const { return ___m_ColorTweenRunner_25; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_25() { return &___m_ColorTweenRunner_25; }
	inline void set_m_ColorTweenRunner_25(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_26; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_26(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_26 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_36;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_27)); }
	inline bool get_m_ShouldRecalculateStencil_27() const { return ___m_ShouldRecalculateStencil_27; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_27() { return &___m_ShouldRecalculateStencil_27; }
	inline void set_m_ShouldRecalculateStencil_27(bool value)
	{
		___m_ShouldRecalculateStencil_27 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_28)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_28() const { return ___m_MaskMaterial_28; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_28() { return &___m_MaskMaterial_28; }
	inline void set_m_MaskMaterial_28(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_29)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_29() const { return ___m_ParentMask_29; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_29() { return &___m_ParentMask_29; }
	inline void set_m_ParentMask_29(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_30)); }
	inline bool get_m_Maskable_30() const { return ___m_Maskable_30; }
	inline bool* get_address_of_m_Maskable_30() { return &___m_Maskable_30; }
	inline void set_m_Maskable_30(bool value)
	{
		___m_Maskable_30 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_31)); }
	inline bool get_m_IsMaskingGraphic_31() const { return ___m_IsMaskingGraphic_31; }
	inline bool* get_address_of_m_IsMaskingGraphic_31() { return &___m_IsMaskingGraphic_31; }
	inline void set_m_IsMaskingGraphic_31(bool value)
	{
		___m_IsMaskingGraphic_31 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_32)); }
	inline bool get_m_IncludeForMasking_32() const { return ___m_IncludeForMasking_32; }
	inline bool* get_address_of_m_IncludeForMasking_32() { return &___m_IncludeForMasking_32; }
	inline void set_m_IncludeForMasking_32(bool value)
	{
		___m_IncludeForMasking_32 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_33)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_33() const { return ___m_OnCullStateChanged_33; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_33() { return &___m_OnCullStateChanged_33; }
	inline void set_m_OnCullStateChanged_33(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_34)); }
	inline bool get_m_ShouldRecalculate_34() const { return ___m_ShouldRecalculate_34; }
	inline bool* get_address_of_m_ShouldRecalculate_34() { return &___m_ShouldRecalculate_34; }
	inline void set_m_ShouldRecalculate_34(bool value)
	{
		___m_ShouldRecalculate_34 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_35)); }
	inline int32_t get_m_StencilValue_35() const { return ___m_StencilValue_35; }
	inline int32_t* get_address_of_m_StencilValue_35() { return &___m_StencilValue_35; }
	inline void set_m_StencilValue_35(int32_t value)
	{
		___m_StencilValue_35 = value;
	}

	inline static int32_t get_offset_of_m_Corners_36() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_36)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_36() const { return ___m_Corners_36; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_36() { return &___m_Corners_36; }
	inline void set_m_Corners_36(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_36), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;

public:
	inline static int32_t get_offset_of_m_Sprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_38() const { return ___m_Sprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_38() { return &___m_Sprite_38; }
	inline void set_m_Sprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_39)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_39() const { return ___m_OverrideSprite_39; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_39() { return &___m_OverrideSprite_39; }
	inline void set_m_OverrideSprite_39(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_40)); }
	inline int32_t get_m_Type_40() const { return ___m_Type_40; }
	inline int32_t* get_address_of_m_Type_40() { return &___m_Type_40; }
	inline void set_m_Type_40(int32_t value)
	{
		___m_Type_40 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_41)); }
	inline bool get_m_PreserveAspect_41() const { return ___m_PreserveAspect_41; }
	inline bool* get_address_of_m_PreserveAspect_41() { return &___m_PreserveAspect_41; }
	inline void set_m_PreserveAspect_41(bool value)
	{
		___m_PreserveAspect_41 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_42)); }
	inline bool get_m_FillCenter_42() const { return ___m_FillCenter_42; }
	inline bool* get_address_of_m_FillCenter_42() { return &___m_FillCenter_42; }
	inline void set_m_FillCenter_42(bool value)
	{
		___m_FillCenter_42 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_43)); }
	inline int32_t get_m_FillMethod_43() const { return ___m_FillMethod_43; }
	inline int32_t* get_address_of_m_FillMethod_43() { return &___m_FillMethod_43; }
	inline void set_m_FillMethod_43(int32_t value)
	{
		___m_FillMethod_43 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_44)); }
	inline float get_m_FillAmount_44() const { return ___m_FillAmount_44; }
	inline float* get_address_of_m_FillAmount_44() { return &___m_FillAmount_44; }
	inline void set_m_FillAmount_44(float value)
	{
		___m_FillAmount_44 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_45)); }
	inline bool get_m_FillClockwise_45() const { return ___m_FillClockwise_45; }
	inline bool* get_address_of_m_FillClockwise_45() { return &___m_FillClockwise_45; }
	inline void set_m_FillClockwise_45(bool value)
	{
		___m_FillClockwise_45 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_46)); }
	inline int32_t get_m_FillOrigin_46() const { return ___m_FillOrigin_46; }
	inline int32_t* get_address_of_m_FillOrigin_46() { return &___m_FillOrigin_46; }
	inline void set_m_FillOrigin_46(int32_t value)
	{
		___m_FillOrigin_46 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_47)); }
	inline float get_m_AlphaHitTestMinimumThreshold_47() const { return ___m_AlphaHitTestMinimumThreshold_47; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_47() { return &___m_AlphaHitTestMinimumThreshold_47; }
	inline void set_m_AlphaHitTestMinimumThreshold_47(float value)
	{
		___m_AlphaHitTestMinimumThreshold_47 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_48)); }
	inline bool get_m_Tracked_48() const { return ___m_Tracked_48; }
	inline bool* get_address_of_m_Tracked_48() { return &___m_Tracked_48; }
	inline void set_m_Tracked_48(bool value)
	{
		___m_Tracked_48 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_49)); }
	inline bool get_m_UseSpriteMesh_49() const { return ___m_UseSpriteMesh_49; }
	inline bool* get_address_of_m_UseSpriteMesh_49() { return &___m_UseSpriteMesh_49; }
	inline void set_m_UseSpriteMesh_49(bool value)
	{
		___m_UseSpriteMesh_49 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_50)); }
	inline float get_m_PixelsPerUnitMultiplier_50() const { return ___m_PixelsPerUnitMultiplier_50; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_50() { return &___m_PixelsPerUnitMultiplier_50; }
	inline void set_m_PixelsPerUnitMultiplier_50(float value)
	{
		___m_PixelsPerUnitMultiplier_50 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_51)); }
	inline float get_m_CachedReferencePixelsPerUnit_51() const { return ___m_CachedReferencePixelsPerUnit_51; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_51() { return &___m_CachedReferencePixelsPerUnit_51; }
	inline void set_m_CachedReferencePixelsPerUnit_51(float value)
	{
		___m_CachedReferencePixelsPerUnit_51 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_43;

public:
	inline static int32_t get_offset_of_m_FontData_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_37)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_37() const { return ___m_FontData_37; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_37() { return &___m_FontData_37; }
	inline void set_m_FontData_37(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_38)); }
	inline String_t* get_m_Text_38() const { return ___m_Text_38; }
	inline String_t** get_address_of_m_Text_38() { return &___m_Text_38; }
	inline void set_m_Text_38(String_t* value)
	{
		___m_Text_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_39() const { return ___m_TextCache_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_39() { return &___m_TextCache_39; }
	inline void set_m_TextCache_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_40)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_40() const { return ___m_TextCacheForLayout_40; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_40() { return &___m_TextCacheForLayout_40; }
	inline void set_m_TextCacheForLayout_40(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_42)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_42() const { return ___m_DisableFontTextureRebuiltCallback_42; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_42() { return &___m_DisableFontTextureRebuiltCallback_42; }
	inline void set_m_DisableFontTextureRebuiltCallback_42(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_42 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_43() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_43)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_43() const { return ___m_TempVerts_43; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_43() { return &___m_TempVerts_43; }
	inline void set_m_TempVerts_43(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_43), (void*)value);
	}
};


// <Module>


// <Module>


// System.Object


// System.Object

struct Il2CppArrayBounds;

// System.Array

struct Il2CppArrayBounds;

// System.Array


// System.String

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.String


// System.ValueType


// System.ValueType


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControl>


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControl>


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>


// System.ValueTuple`2<UnityEngine.Transform,UnityEngine.Camera>


// System.ValueTuple`2<UnityEngine.Transform,UnityEngine.Camera>


// System.Boolean

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Boolean


// UnityEngine.Color


// UnityEngine.Color


// System.Enum

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};


// System.Enum


// UnityEngine.InputSystem.Utilities.FourCC


// UnityEngine.InputSystem.Utilities.FourCC


// UnityEngine.InputSystem.Layouts.InputDeviceDescription


// UnityEngine.InputSystem.Layouts.InputDeviceDescription


// System.Int32


// System.Int32


// System.IntPtr

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.IntPtr


// UnityEngine.InputSystem.Utilities.InternedString


// UnityEngine.InputSystem.Utilities.InternedString


// UnityEngine.Quaternion

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Quaternion


// System.Single


// System.Single


// UnityEngine.Vector2

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2


// UnityEngine.Vector3

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector3


// UnityEngine.Vector4

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.Vector4


// System.Void


// System.Void


// UnityEngine.InputSystem.InputAction/CallbackContext


// UnityEngine.InputSystem.InputAction/CallbackContext


// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>


// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>


// UnityEngine.CursorLockMode


// UnityEngine.CursorLockMode


// System.Delegate


// System.Delegate


// UnityEngine.InputSystem.InputActionPhase


// UnityEngine.InputSystem.InputActionPhase


// UnityEngine.InputSystem.InputActionType


// UnityEngine.InputSystem.InputActionType


// UnityEngine.InputSystem.LowLevel.InputStateBlock

struct InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatSBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatInt_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatUInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatShort_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatUShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatByte_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatSByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatLong_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatULong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatFloat_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatDouble_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatVector2_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatVector3_27;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatQuaternion_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatVector2Short_29;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatVector3Short_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatVector2Byte_31;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  ___FormatVector3Byte_32;

public:
	inline static int32_t get_offset_of_FormatBit_2() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatBit_2)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatBit_2() const { return ___FormatBit_2; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatBit_2() { return &___FormatBit_2; }
	inline void set_FormatBit_2(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatBit_2 = value;
	}

	inline static int32_t get_offset_of_FormatSBit_4() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatSBit_4)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatSBit_4() const { return ___FormatSBit_4; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatSBit_4() { return &___FormatSBit_4; }
	inline void set_FormatSBit_4(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatSBit_4 = value;
	}

	inline static int32_t get_offset_of_FormatInt_6() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatInt_6)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatInt_6() const { return ___FormatInt_6; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatInt_6() { return &___FormatInt_6; }
	inline void set_FormatInt_6(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatInt_6 = value;
	}

	inline static int32_t get_offset_of_FormatUInt_8() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatUInt_8)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatUInt_8() const { return ___FormatUInt_8; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatUInt_8() { return &___FormatUInt_8; }
	inline void set_FormatUInt_8(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatUInt_8 = value;
	}

	inline static int32_t get_offset_of_FormatShort_10() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatShort_10)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatShort_10() const { return ___FormatShort_10; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatShort_10() { return &___FormatShort_10; }
	inline void set_FormatShort_10(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatShort_10 = value;
	}

	inline static int32_t get_offset_of_FormatUShort_12() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatUShort_12)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatUShort_12() const { return ___FormatUShort_12; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatUShort_12() { return &___FormatUShort_12; }
	inline void set_FormatUShort_12(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatUShort_12 = value;
	}

	inline static int32_t get_offset_of_FormatByte_14() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatByte_14)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatByte_14() const { return ___FormatByte_14; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatByte_14() { return &___FormatByte_14; }
	inline void set_FormatByte_14(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatByte_14 = value;
	}

	inline static int32_t get_offset_of_FormatSByte_16() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatSByte_16)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatSByte_16() const { return ___FormatSByte_16; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatSByte_16() { return &___FormatSByte_16; }
	inline void set_FormatSByte_16(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatSByte_16 = value;
	}

	inline static int32_t get_offset_of_FormatLong_18() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatLong_18)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatLong_18() const { return ___FormatLong_18; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatLong_18() { return &___FormatLong_18; }
	inline void set_FormatLong_18(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatLong_18 = value;
	}

	inline static int32_t get_offset_of_FormatULong_20() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatULong_20)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatULong_20() const { return ___FormatULong_20; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatULong_20() { return &___FormatULong_20; }
	inline void set_FormatULong_20(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatULong_20 = value;
	}

	inline static int32_t get_offset_of_FormatFloat_22() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatFloat_22)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatFloat_22() const { return ___FormatFloat_22; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatFloat_22() { return &___FormatFloat_22; }
	inline void set_FormatFloat_22(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatFloat_22 = value;
	}

	inline static int32_t get_offset_of_FormatDouble_24() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatDouble_24)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatDouble_24() const { return ___FormatDouble_24; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatDouble_24() { return &___FormatDouble_24; }
	inline void set_FormatDouble_24(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatDouble_24 = value;
	}

	inline static int32_t get_offset_of_FormatVector2_26() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatVector2_26)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatVector2_26() const { return ___FormatVector2_26; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatVector2_26() { return &___FormatVector2_26; }
	inline void set_FormatVector2_26(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatVector2_26 = value;
	}

	inline static int32_t get_offset_of_FormatVector3_27() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatVector3_27)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatVector3_27() const { return ___FormatVector3_27; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatVector3_27() { return &___FormatVector3_27; }
	inline void set_FormatVector3_27(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatVector3_27 = value;
	}

	inline static int32_t get_offset_of_FormatQuaternion_28() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatQuaternion_28)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatQuaternion_28() const { return ___FormatQuaternion_28; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatQuaternion_28() { return &___FormatQuaternion_28; }
	inline void set_FormatQuaternion_28(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatQuaternion_28 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Short_29() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatVector2Short_29)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatVector2Short_29() const { return ___FormatVector2Short_29; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatVector2Short_29() { return &___FormatVector2Short_29; }
	inline void set_FormatVector2Short_29(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatVector2Short_29 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Short_30() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatVector3Short_30)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatVector3Short_30() const { return ___FormatVector3Short_30; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatVector3Short_30() { return &___FormatVector3Short_30; }
	inline void set_FormatVector3Short_30(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatVector3Short_30 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Byte_31() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatVector2Byte_31)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatVector2Byte_31() const { return ___FormatVector2Byte_31; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatVector2Byte_31() { return &___FormatVector2Byte_31; }
	inline void set_FormatVector2Byte_31(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatVector2Byte_31 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Byte_32() { return static_cast<int32_t>(offsetof(InputStateBlock_tB9FCBE0F27DDBB11B04B0EC517712C29CC126A0B_StaticFields, ___FormatVector3Byte_32)); }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  get_FormatVector3Byte_32() const { return ___FormatVector3Byte_32; }
	inline FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9 * get_address_of_FormatVector3Byte_32() { return &___FormatVector3Byte_32; }
	inline void set_FormatVector3Byte_32(FourCC_t8D38CDCEAD02FE53A6C2E9AF01354E4E5AB400A9  value)
	{
		___FormatVector3Byte_32 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputStateBlock


// UnityEngine.XR.InputTrackingState


// UnityEngine.XR.InputTrackingState


// UnityEngine.Object

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};


// UnityEngine.Object


// System.TypeCode


// System.TypeCode


// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState


// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState


// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState


// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState


// UnityEngine.UI.Image/FillMethod


// UnityEngine.UI.Image/FillMethod


// UnityEngine.UI.Image/Type


// UnityEngine.UI.Image/Type


// UnityEngine.InputSystem.InputAction/ActionFlags


// UnityEngine.InputSystem.InputAction/ActionFlags


// UnityEngine.InputSystem.InputBinding/Flags


// UnityEngine.InputSystem.InputBinding/Flags


// UnityEngine.InputSystem.InputControl/ControlFlags


// UnityEngine.InputSystem.InputControl/ControlFlags


// UnityEngine.InputSystem.InputDevice/DeviceFlags


// UnityEngine.InputSystem.InputDevice/DeviceFlags


// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/Axis2DTargets


// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/Axis2DTargets


// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/Space


// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/Space


// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/TargetedDevices


// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/TargetedDevices


// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/TransformationMode


// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/TransformationMode


// UnityEngine.Component


// UnityEngine.Component


// UnityEngine.GameObject


// UnityEngine.GameObject


// UnityEngine.InputSystem.InputBinding


// UnityEngine.InputSystem.InputBinding


// System.MulticastDelegate


// System.MulticastDelegate


// UnityEngine.InputSystem.Utilities.PrimitiveValue


// UnityEngine.InputSystem.Utilities.PrimitiveValue


// UnityEngine.ScriptableObject


// UnityEngine.ScriptableObject


// UnityEngine.Sprite


// UnityEngine.Sprite


// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>


// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>


// UnityEngine.Behaviour


// UnityEngine.Behaviour


// UnityEngine.InputSystem.InputActionReference


// UnityEngine.InputSystem.InputActionReference


// UnityEngine.InputSystem.InputControl


// UnityEngine.InputSystem.InputControl


// UnityEngine.Transform


// UnityEngine.Transform


// UnityEngine.InputSystem.InputAction


// UnityEngine.InputSystem.InputAction


// UnityEngine.InputSystem.InputDevice


// UnityEngine.InputSystem.InputDevice


// UnityEngine.MonoBehaviour


// UnityEngine.MonoBehaviour


// UnityEngine.EventSystems.UIBehaviour


// UnityEngine.EventSystems.UIBehaviour


// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator

struct XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::s_LeftControllerDefaultInitialPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s_LeftControllerDefaultInitialPosition_5;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::s_RightControllerDefaultInitialPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s_RightControllerDefaultInitialPosition_6;
	// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::<instance>k__BackingField
	XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * ___U3CinstanceU3Ek__BackingField_74;

public:
	inline static int32_t get_offset_of_s_LeftControllerDefaultInitialPosition_5() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825_StaticFields, ___s_LeftControllerDefaultInitialPosition_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_s_LeftControllerDefaultInitialPosition_5() const { return ___s_LeftControllerDefaultInitialPosition_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_s_LeftControllerDefaultInitialPosition_5() { return &___s_LeftControllerDefaultInitialPosition_5; }
	inline void set_s_LeftControllerDefaultInitialPosition_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___s_LeftControllerDefaultInitialPosition_5 = value;
	}

	inline static int32_t get_offset_of_s_RightControllerDefaultInitialPosition_6() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825_StaticFields, ___s_RightControllerDefaultInitialPosition_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_s_RightControllerDefaultInitialPosition_6() const { return ___s_RightControllerDefaultInitialPosition_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_s_RightControllerDefaultInitialPosition_6() { return &___s_RightControllerDefaultInitialPosition_6; }
	inline void set_s_RightControllerDefaultInitialPosition_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___s_RightControllerDefaultInitialPosition_6 = value;
	}

	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_74() { return static_cast<int32_t>(offsetof(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825_StaticFields, ___U3CinstanceU3Ek__BackingField_74)); }
	inline XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * get_U3CinstanceU3Ek__BackingField_74() const { return ___U3CinstanceU3Ek__BackingField_74; }
	inline XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 ** get_address_of_U3CinstanceU3Ek__BackingField_74() { return &___U3CinstanceU3Ek__BackingField_74; }
	inline void set_U3CinstanceU3Ek__BackingField_74(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * value)
	{
		___U3CinstanceU3Ek__BackingField_74 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_74), (void*)value);
	}
};


// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator


// UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI


// UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI


// UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI

struct XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields
{
public:
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_EnabledColorDark
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___k_EnabledColorDark_42;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_EnabledColorLight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___k_EnabledColorLight_43;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_DisabledColorDark
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___k_DisabledColorDark_45;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_DisabledColorLight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___k_DisabledColorLight_46;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_ButtonColorDark
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___k_ButtonColorDark_48;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_ButtonColorLight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___k_ButtonColorLight_49;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_DisabledButtonColorDark
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___k_DisabledButtonColorDark_51;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_DisabledButtonColorLight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___k_DisabledButtonColorLight_52;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_SelectedColorDark
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___k_SelectedColorDark_54;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_SelectedColorLight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___k_SelectedColorLight_55;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_BackgroundColorDark
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___k_BackgroundColorDark_57;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_BackgroundColorLight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___k_BackgroundColorLight_58;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_DeviceColorDark
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___k_DeviceColorDark_60;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_DeviceColorLight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___k_DeviceColorLight_61;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_DisabledDeviceColorDark
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___k_DisabledDeviceColorDark_63;
	// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::k_DisabledDeviceColorLight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___k_DisabledDeviceColorLight_64;

public:
	inline static int32_t get_offset_of_k_EnabledColorDark_42() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields, ___k_EnabledColorDark_42)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_k_EnabledColorDark_42() const { return ___k_EnabledColorDark_42; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_k_EnabledColorDark_42() { return &___k_EnabledColorDark_42; }
	inline void set_k_EnabledColorDark_42(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___k_EnabledColorDark_42 = value;
	}

	inline static int32_t get_offset_of_k_EnabledColorLight_43() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields, ___k_EnabledColorLight_43)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_k_EnabledColorLight_43() const { return ___k_EnabledColorLight_43; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_k_EnabledColorLight_43() { return &___k_EnabledColorLight_43; }
	inline void set_k_EnabledColorLight_43(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___k_EnabledColorLight_43 = value;
	}

	inline static int32_t get_offset_of_k_DisabledColorDark_45() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields, ___k_DisabledColorDark_45)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_k_DisabledColorDark_45() const { return ___k_DisabledColorDark_45; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_k_DisabledColorDark_45() { return &___k_DisabledColorDark_45; }
	inline void set_k_DisabledColorDark_45(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___k_DisabledColorDark_45 = value;
	}

	inline static int32_t get_offset_of_k_DisabledColorLight_46() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields, ___k_DisabledColorLight_46)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_k_DisabledColorLight_46() const { return ___k_DisabledColorLight_46; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_k_DisabledColorLight_46() { return &___k_DisabledColorLight_46; }
	inline void set_k_DisabledColorLight_46(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___k_DisabledColorLight_46 = value;
	}

	inline static int32_t get_offset_of_k_ButtonColorDark_48() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields, ___k_ButtonColorDark_48)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_k_ButtonColorDark_48() const { return ___k_ButtonColorDark_48; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_k_ButtonColorDark_48() { return &___k_ButtonColorDark_48; }
	inline void set_k_ButtonColorDark_48(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___k_ButtonColorDark_48 = value;
	}

	inline static int32_t get_offset_of_k_ButtonColorLight_49() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields, ___k_ButtonColorLight_49)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_k_ButtonColorLight_49() const { return ___k_ButtonColorLight_49; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_k_ButtonColorLight_49() { return &___k_ButtonColorLight_49; }
	inline void set_k_ButtonColorLight_49(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___k_ButtonColorLight_49 = value;
	}

	inline static int32_t get_offset_of_k_DisabledButtonColorDark_51() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields, ___k_DisabledButtonColorDark_51)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_k_DisabledButtonColorDark_51() const { return ___k_DisabledButtonColorDark_51; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_k_DisabledButtonColorDark_51() { return &___k_DisabledButtonColorDark_51; }
	inline void set_k_DisabledButtonColorDark_51(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___k_DisabledButtonColorDark_51 = value;
	}

	inline static int32_t get_offset_of_k_DisabledButtonColorLight_52() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields, ___k_DisabledButtonColorLight_52)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_k_DisabledButtonColorLight_52() const { return ___k_DisabledButtonColorLight_52; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_k_DisabledButtonColorLight_52() { return &___k_DisabledButtonColorLight_52; }
	inline void set_k_DisabledButtonColorLight_52(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___k_DisabledButtonColorLight_52 = value;
	}

	inline static int32_t get_offset_of_k_SelectedColorDark_54() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields, ___k_SelectedColorDark_54)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_k_SelectedColorDark_54() const { return ___k_SelectedColorDark_54; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_k_SelectedColorDark_54() { return &___k_SelectedColorDark_54; }
	inline void set_k_SelectedColorDark_54(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___k_SelectedColorDark_54 = value;
	}

	inline static int32_t get_offset_of_k_SelectedColorLight_55() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields, ___k_SelectedColorLight_55)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_k_SelectedColorLight_55() const { return ___k_SelectedColorLight_55; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_k_SelectedColorLight_55() { return &___k_SelectedColorLight_55; }
	inline void set_k_SelectedColorLight_55(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___k_SelectedColorLight_55 = value;
	}

	inline static int32_t get_offset_of_k_BackgroundColorDark_57() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields, ___k_BackgroundColorDark_57)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_k_BackgroundColorDark_57() const { return ___k_BackgroundColorDark_57; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_k_BackgroundColorDark_57() { return &___k_BackgroundColorDark_57; }
	inline void set_k_BackgroundColorDark_57(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___k_BackgroundColorDark_57 = value;
	}

	inline static int32_t get_offset_of_k_BackgroundColorLight_58() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields, ___k_BackgroundColorLight_58)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_k_BackgroundColorLight_58() const { return ___k_BackgroundColorLight_58; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_k_BackgroundColorLight_58() { return &___k_BackgroundColorLight_58; }
	inline void set_k_BackgroundColorLight_58(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___k_BackgroundColorLight_58 = value;
	}

	inline static int32_t get_offset_of_k_DeviceColorDark_60() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields, ___k_DeviceColorDark_60)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_k_DeviceColorDark_60() const { return ___k_DeviceColorDark_60; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_k_DeviceColorDark_60() { return &___k_DeviceColorDark_60; }
	inline void set_k_DeviceColorDark_60(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___k_DeviceColorDark_60 = value;
	}

	inline static int32_t get_offset_of_k_DeviceColorLight_61() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields, ___k_DeviceColorLight_61)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_k_DeviceColorLight_61() const { return ___k_DeviceColorLight_61; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_k_DeviceColorLight_61() { return &___k_DeviceColorLight_61; }
	inline void set_k_DeviceColorLight_61(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___k_DeviceColorLight_61 = value;
	}

	inline static int32_t get_offset_of_k_DisabledDeviceColorDark_63() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields, ___k_DisabledDeviceColorDark_63)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_k_DisabledDeviceColorDark_63() const { return ___k_DisabledDeviceColorDark_63; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_k_DisabledDeviceColorDark_63() { return &___k_DisabledDeviceColorDark_63; }
	inline void set_k_DisabledDeviceColorDark_63(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___k_DisabledDeviceColorDark_63 = value;
	}

	inline static int32_t get_offset_of_k_DisabledDeviceColorLight_64() { return static_cast<int32_t>(offsetof(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields, ___k_DisabledDeviceColorLight_64)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_k_DisabledDeviceColorLight_64() const { return ___k_DisabledDeviceColorLight_64; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_k_DisabledDeviceColorLight_64() { return &___k_DisabledDeviceColorLight_64; }
	inline void set_k_DisabledDeviceColorLight_64(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___k_DisabledDeviceColorLight_64 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI


// UnityEngine.UI.Graphic

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_22;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_21)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_21() const { return ___s_Mesh_21; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_21() { return &___s_Mesh_21; }
	inline void set_s_Mesh_21(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_22)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_22() const { return ___s_VertexHelper_22; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_22() { return &___s_VertexHelper_22; }
	inline void set_s_VertexHelper_22(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_22), (void*)value);
	}
};


// UnityEngine.UI.Graphic


// UnityEngine.UI.MaskableGraphic


// UnityEngine.UI.MaskableGraphic


// UnityEngine.UI.Image

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_37)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_37() const { return ___s_ETC1DefaultUI_37; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_37() { return &___s_ETC1DefaultUI_37; }
	inline void set_s_ETC1DefaultUI_37(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_52() const { return ___s_VertScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_52() { return &___s_VertScratch_52; }
	inline void set_s_VertScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_53)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_53() const { return ___s_UVScratch_53; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_53() { return &___s_UVScratch_53; }
	inline void set_s_UVScratch_53(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_54() const { return ___s_Xy_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_54() { return &___s_Xy_54; }
	inline void set_s_Xy_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_54), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_55)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_55() const { return ___s_Uv_55; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_55() { return &___s_Uv_55; }
	inline void set_s_Uv_55(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_55), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_56)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_56() const { return ___m_TrackedTexturelessImages_56; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_56() { return &___m_TrackedTexturelessImages_56; }
	inline void set_m_TrackedTexturelessImages_56(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_56), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_57() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_57)); }
	inline bool get_s_Initialized_57() const { return ___s_Initialized_57; }
	inline bool* get_address_of_s_Initialized_57() { return &___s_Initialized_57; }
	inline void set_s_Initialized_57(bool value)
	{
		___s_Initialized_57 = value;
	}
};


// UnityEngine.UI.Image


// UnityEngine.UI.Text

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_41;

public:
	inline static int32_t get_offset_of_s_DefaultText_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_41)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_41() const { return ___s_DefaultText_41; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_41() { return &___s_DefaultText_41; }
	inline void set_s_DefaultText_41(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_41), (void*)value);
	}
};


// UnityEngine.UI.Text

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * m_Items[1];

public:
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * m_Items[1];

public:
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !0 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ReadOnlyArray_1_get_Item_m84136BE8993A7013D4900F0ACF7B4ECAD86456F6_gshared (ReadOnlyArray_1_t9584B0851320AB0F5BC8FF261C123F5994A081B7 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_gshared (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mCA43571B7A4D8DFA726F8D112A5CAC300AB51D1A_gshared (CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D * __this, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI>()
inline XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * Component_GetComponent_TisXRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_m1E662BF40DA8B6CC37F2DE8EAA77FEAB5DBF52F1 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_primaryButtonAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_primaryButtonAction_mB7BCDBBE5D394E63B47E7D56CCF5C2E6270E96EF_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9 (InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControl> UnityEngine.InputSystem.InputAction::get_controls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A (InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * __this, const RuntimeMethod* method);
// !0 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControl>::get_Item(System.Int32)
inline InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC (ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * (*) (ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *, int32_t, const RuntimeMethod*))ReadOnlyArray_1_get_Item_m84136BE8993A7013D4900F0ACF7B4ECAD86456F6_gshared)(__this, ___index0, method);
}
// System.String UnityEngine.InputSystem.InputControl::get_displayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9 (InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_secondaryButtonAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_secondaryButtonAction_m2AC50D0F1D73AC43041FD52CF9CBCE9E5EF1C8DC_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_gripAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_gripAction_mF05561553B345B1DFD07289181E3DD6A118C41DA_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_triggerAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_triggerAction_m5C3F2192A90BCD7A3985AF9BC21CC8269A72ED3A_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_menuAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_menuAction_m9021D9EA4B6A3F56E4A2718DF82A415883AFBF9E_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_disabledColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  XRDeviceSimulatorUI_get_disabledColor_m81D8A472CD0C10427A5B99CABB1F24A765431C14 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_disabledDeviceColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  XRDeviceSimulatorUI_get_disabledDeviceColor_m4F3609660C0C69C42DC753850AE8520D94D86A1E (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_axis2DAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_axis2DAction_mA0760910F253A668B81C67762567DD1E231A2A61_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_restingHandAxis2DAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_restingHandAxis2DAction_m5D88E9D0730BDF46072583FE18CA75BEBB519A40_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::UpdateButtonVisuals(System.Boolean,UnityEngine.UI.Image,UnityEngine.UI.Text,UnityEngine.InputSystem.InputControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_UpdateButtonVisuals_m8B6B7799656AE623FD9D5D8BF0A816B302A4E2F3 (XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * __this, bool ___active0, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___buttonIcon1, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___buttonText2, InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * ___control3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::UpdateButtonColor(UnityEngine.UI.Image,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_UpdateButtonColor_mF440595006502AE6FC991A48878FFA20E66745F8 (XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * __this, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___image0, bool ___activated1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_deviceColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  XRDeviceSimulatorUI_get_deviceColor_m59F7708B01B7BEFC29E70B060C7631458C998CA3 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_enabledColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  XRDeviceSimulatorUI_get_enabledColor_mF403E9AE291B460A41F084739A53AA4914C18E69 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::UpdateDisableControllerButton(System.Boolean,UnityEngine.UI.Image,UnityEngine.UI.Image,UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_UpdateDisableControllerButton_mF5E6EAA8173BB99C07C75CACE2DF85C6B42F1994 (XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * __this, bool ___active0, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___button1, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___buttonIcon2, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___buttonText3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_buttonColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  XRDeviceSimulatorUI_get_buttonColor_m3B82CC7EA2B4930260A85D387453E16B9B237730 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_selectedColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  XRDeviceSimulatorUI_get_selectedColor_m87F7AA917ACF9C33AF892BE88068E6F7ABE9A1EC (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_disabledButtonColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  XRDeviceSimulatorUI_get_disabledButtonColor_m7E701752C4AE8101CFE400D409E846F13FEAADD4 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_mFA8E564BB81364E4E65551816F3631176E7F58E7 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::GetInputIcon(UnityEngine.InputSystem.InputControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * XRDeviceSimulatorUI_GetInputIcon_m107705A92DDA1DCFF6AFB28559DE4C5FC5390F7A (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * ___control0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.InputControl::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputControl_get_name_mE259B1306F7E4F865D127B30939A70E9492EAFB2 (InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_m2F4F3E4DD95471924015E9CB5AF20E59C650EE37 (const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_keyboardSprite()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * XRDeviceSimulatorUI_get_keyboardSprite_m6ECB45C904FD03FE35D5D4D41D2BBFC03BC29329_inline (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_clear_m399144A63869398B7F5B812201C2A92B84218FD2 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color_op_Equality_m54C509DB917E1B555CC54970616DBC8AF52F8E0D (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___lhs0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___rhs1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator>()
inline XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * Component_GetComponentInParent_TisXRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825_m67ACFA138BD7D0188E78A4021D9AF1E96A3FBDD9 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::Initialize(UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_Initialize_m2064408DA68EE175C59A4E474C0FB2DE953CCC49 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * ___simulator0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_manipulateLeftAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_manipulateLeftAction_m02144C87B034B9AE5449FA1F548FD4EE81429096_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::Unsubscribe(UnityEngine.InputSystem.InputActionReference,System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_Unsubscribe_mD3AC95545F52AB8E0D6D236AED826CB78C36CEBD (InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___reference0, Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * ___performedOrCanceled1, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_manipulateRightAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_manipulateRightAction_mF4CC07723038F377314185CD9FB5E90CD21586B6_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_toggleManipulateLeftAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_toggleManipulateLeftAction_m3D80B979C61BDAD15783947F7EE29FC3386D5D7D_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_toggleManipulateRightAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_toggleManipulateRightAction_m2EE96B290EB34F752C22CCBA675E93F7712A5E7E_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_toggleManipulateBodyAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_toggleManipulateBodyAction_m65C32387CB7A0DAEDBFD296D453D973BE3370CDF_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_manipulateHeadAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_manipulateHeadAction_mB90A2A2533E4221E89711C7BCC0A655C9693352B_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_cycleDevicesAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_cycleDevicesAction_mA4722D0384674C1025219F06F450444F4B68E431_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_stopManipulationAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_stopManipulationAction_mD79372878D4BC093A37093D5EB26881F5FDE8300_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_toggleMouseTransformationModeAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_toggleMouseTransformationModeAction_m4FCF9DC51EF09D4E76FB15C272AE843C2CD920DC_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_negateModeAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_negateModeAction_m164521874C4A2FAF4A452D9CF4EB077E98A4DCE9_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_toggleCursorLockAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_toggleCursorLockAction_m2D03DF881EA5AFAC578B1565605E18910F4723A1_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_keyboardXTranslateAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_keyboardXTranslateAction_m2BD28113DD84574FEAD0B749445C29250D79D94F_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_keyboardYTranslateAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_keyboardYTranslateAction_mA6A0EDA7E25CCDD339C876C48C12FA26F93F59B7_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_keyboardZTranslateAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_keyboardZTranslateAction_mE87380FD43FCDE70B544F5AAB37428BF62202AF1_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::InitColorTheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_InitColorTheme_m0DD091122EDC360AC44F88B8D35C7144C0361E6A (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_Initialize_m0443BCA3D1E34DFD8BCCF881B1DDFB5C052188C5 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnSetMouseMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnSetMouseMode_mD6F63B48301C21A5AE7D7C216A418BA5FA91E7DD (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnActivateHeadsetDevice(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnActivateHeadsetDevice_m57B314F67F9B6E01877E2E25BAFB64C080A37340 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, bool ___activated0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.UI.Image>(System.Boolean)
inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* Component_GetComponentsInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_mDCD41D11CC3A01264FE6A5AE617F4C6F72837C7A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared)(__this, ___includeInactive0, method);
}
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * Image_get_sprite_mA6FB016B4E3FE5EFFAE4B3AEE2D2DF89C61E0AF3 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.UI.Text>(System.Boolean)
inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* Component_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7A9E70EEE544D2F90C679F23DE6534D2708BED22 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared)(__this, ___includeInactive0, method);
}
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_backgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  XRDeviceSimulatorUI_get_backgroundColor_m81A6DF706123921EEA7139E612219F4B72403D13 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method);
// UnityEngine.CursorLockMode UnityEngine.Cursor::get_lockState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cursor_get_lockState_mB6DDB8EBF42F6F14B0F87BBDF5F05AE183B63B70 (const RuntimeMethod* method);
// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/TransformationMode UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_mouseTransformationMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRDeviceSimulator_get_mouseTransformationMode_m8BD4DE8F0E31B845095DCD38FFB84A294DA067B7_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::get_device()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * InputControl_get_device_m7B8D4A5F3C7C11E4FE7239692961C434C7CCF9E1_inline (InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::Initialize(UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_Initialize_mE1A4B54387782ED0A21C14C20CCBD052939A87A5 (XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * __this, XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * ___simulator0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::Subscribe(UnityEngine.InputSystem.InputActionReference,System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_Subscribe_m6F8C94491821EB99D0F85F09D4DFCA85C5F36954 (InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___reference0, Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * ___performedOrCanceled1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_isMenuOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDeviceSimulatorUI_get_isMenuOpen_m67B1E31C805E324B61C25A8E26EF583192BAAF16 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method);
// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_rMouseSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * XRDeviceSimulatorUI_get_rMouseSprite_mA7F890A24CFA1639CDFD4EB2123014AAEDBB0B29 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method);
// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_mouseSprite()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * XRDeviceSimulatorUI_get_mouseSprite_mBE854019C673238D182525DE933E00878977D559_inline (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::set_isMenuOpen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_set_isMenuOpen_mEEA8B5A4184BC779056EEBBA6761BF121F21344D (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnActivateController(UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnActivateController_m6AE1F08C92C60A608C00D1B87DCB3300D0AB240C (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * ___controller0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::PushCurrentButtonState(UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_PushCurrentButtonState_m3F66C8A471D35EDC9AC61B161206777A4D93B3AF (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * ___controller0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::SetAsActiveController(System.Boolean,UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_SetAsActiveController_mBFF380DCAEA8960D704B267747BC2AD3DE62EE6B (XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * __this, bool ___active0, XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * ___simulator1, bool ___isRestingHand2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::HeadDeviceSetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_HeadDeviceSetActive_m003A58199DCAA13AED05B2FAC0DFFB22B958DDA9 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, bool ___active0, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.InputAction::get_inProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_get_inProgress_m5273F103D017C3A9BAE1779058980D793D7B9C25 (InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnGrip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnGrip_mC02D2F5FE6C6024B3E721FABDC9ED5D5B1F864F0 (XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * __this, bool ___activated0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnTrigger_m31AAF4E9EA402F39865519B16DE99C8F39DBB1E8 (XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * __this, bool ___activated0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnMenu(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnMenu_mE8F0E9C8A3C7BEB310CE768B9B8A43584E3C6D89 (XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * __this, bool ___activated0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnPrimaryButton(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnPrimaryButton_m3DB2B50347C4518974B80DEB23F355B42BE88434 (XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * __this, bool ___activated0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnSecondaryButton(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnSecondaryButton_m5FAE619AF7096F44A0D3A39E1A4FE32C2F3BE5D1 (XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * __this, bool ___activated0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnXAxisTranslatePerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnXAxisTranslatePerformed_m80AF4EB70AE05E3DA1BE17890CD92E847CD9D64D (XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * __this, bool ___activated0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnZAxisTranslatePerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnZAxisTranslatePerformed_m6CE8DF072B44AE102A5379B0417020E212339620 (XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * __this, bool ___activated0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m9FF12F3D5C984DB93D2DD75667F3B53D7B66C0A3 (InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * __this, Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_m07229F73CE0F7D5679F422DBAA9B287CFDF68AFE (InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * __this, Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m141C0FA72906BDF08A33EF3728C0193EFD0AAB06 (InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * __this, Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::remove_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_canceled_m69E70B6BAFF763F524D38F2D0346911A80C5B7C5 (InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * __this, Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * ___value0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionPhase UnityEngine.InputSystem.InputAction/CallbackContext::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_phase_mBA28B019C1FFD8919377CEAC4EED5B8FD37A7830 (CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.InputExtensions::IsInProgress(UnityEngine.InputSystem.InputActionPhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputExtensions_IsInProgress_mEB534005411FDCF6FB88FEF96CFB13EB9120EBF4 (int32_t ___phase0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_manipulatingLeftController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDeviceSimulator_get_manipulatingLeftController_m63B1C83082E7CB9FF4A82EA66E7731490DA737A1 (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_manipulatingRightController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDeviceSimulator_get_manipulatingRightController_mEB1B1E20F37A6307A2F88E8FFFE99964E26898B6 (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnActivateBothControllers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnActivateBothControllers_mD3BE37CBC8733CA91B7562D86808539C20BA54AD (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnActivateLeftController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnActivateLeftController_m45E1F576A22B513AB86ADC92EAC3BDB512EA81B9 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnActivateRightController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnActivateRightController_mF4399484F44762200A20EB9FB627436C9FD07F7D (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_manipulatingFPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDeviceSimulator_get_manipulatingFPS_mB8E32C334A04E8796714F7F7B33306C3B6BDD9E5 (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnCursorLockChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnCursorLockChanged_m36CC117DA0F1A053D44E4BE11A3FEFA70B473709 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnXAxisTranslatePerformed(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnXAxisTranslatePerformed_m2BCBF2DE15A9F23530EB5C6A0B91FABA2886589C (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, bool ___activated0, bool ___restingHand1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnYAxisTranslatePerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnYAxisTranslatePerformed_mC0AAFD6A9E96B0FA4B5E5DF09C68AA1C2E1058A0 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, bool ___activated0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnZAxisTranslatePerformed(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnZAxisTranslatePerformed_mBEF516CA16282EE73A99C5F7543820EA5689BDD9 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, bool ___activated0, bool ___restingHand1, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mCA43571B7A4D8DFA726F8D112A5CAC300AB51D1A (CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D * __this, const RuntimeMethod* method)
{
	return ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *, const RuntimeMethod*))CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mCA43571B7A4D8DFA726F8D112A5CAC300AB51D1A_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::ClampMagnitude(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_ClampMagnitude_m2D7D4180CE91CF2D6E2677BB01E7427EDCDBBAE3 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___vector0, float ___maxLength1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnGripPerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnGripPerformed_m5B32E58AA4B24E29AB92E2F09B1451F987F910F8 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, bool ___activated0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnTriggerPerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnTriggerPerformed_m8CB39693191F301A385C5702521223D97F9346C2 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, bool ___activated0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnMenuPerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnMenuPerformed_mD06215DCC32397C5D6D5AD2C62D42CE3F1898A7B (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, bool ___activated0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnPrimaryButtonPerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnPrimaryButtonPerformed_mC8FF8F6F4A79DEBC46DF49FA39249FBA8020FF9E (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, bool ___activated0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnSecondaryButtonPerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnSecondaryButtonPerformed_mF5F76702F25B35FC2ACF26F9A10F1EA921250A2B (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, bool ___activated0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::get_negateMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRDeviceSimulator_get_negateMode_mBE6C1B3C4AC6536935ED6BBA2BE4E70A17BDF5A7_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method);
// UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/TransformationMode UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::Negate(UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/TransformationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRDeviceSimulator_Negate_m9361EBE06C81B130313043FE796E938B21EAAD6A (int32_t ___mode0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_mD8CAAC9E4B8C5C92A21D176E4AB2C521CFA0EF7F (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_Awake_m096E02E0926239E3D43DBFCB14BB695E37DC7ADA (XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisXRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_m1E662BF40DA8B6CC37F2DE8EAA77FEAB5DBF52F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_MainUIManager = GetComponent<XRDeviceSimulatorUI>();
		XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * L_0;
		L_0 = Component_GetComponent_TisXRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_m1E662BF40DA8B6CC37F2DE8EAA77FEAB5DBF52F1(__this, /*hidden argument*/Component_GetComponent_TisXRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_m1E662BF40DA8B6CC37F2DE8EAA77FEAB5DBF52F1_RuntimeMethod_var);
		__this->set_m_MainUIManager_24(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::Initialize(UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_Initialize_mE1A4B54387782ED0A21C14C20CCBD052939A87A5 (XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * __this, XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * ___simulator0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// m_PrimaryButtonText.text = simulator.primaryButtonAction.action.controls[0].displayName;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_m_PrimaryButtonText_7();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_1 = ___simulator0;
		NullCheck(L_1);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_2;
		L_2 = XRDeviceSimulator_get_primaryButtonAction_mB7BCDBBE5D394E63B47E7D56CCF5C2E6270E96EF_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_3;
		L_3 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  L_4;
		L_4 = InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_5;
		L_5 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_1), 0, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9(L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_6);
		// m_SecondaryButtonText.text = simulator.secondaryButtonAction.action.controls[0].displayName;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_m_SecondaryButtonText_10();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_8 = ___simulator0;
		NullCheck(L_8);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_9;
		L_9 = XRDeviceSimulator_get_secondaryButtonAction_m2AC50D0F1D73AC43041FD52CF9CBCE9E5EF1C8DC_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_10;
		L_10 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  L_11;
		L_11 = InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_12;
		L_12 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_1), 0, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9(L_12, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_13);
		// m_GripButtonText.text = simulator.gripAction.action.controls[0].displayName;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_14 = __this->get_m_GripButtonText_16();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_15 = ___simulator0;
		NullCheck(L_15);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_16;
		L_16 = XRDeviceSimulator_get_gripAction_mF05561553B345B1DFD07289181E3DD6A118C41DA_inline(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_17;
		L_17 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  L_18;
		L_18 = InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A(L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_19;
		L_19 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_1), 0, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9(L_19, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_20);
		// m_TriggerButtonText.text = simulator.triggerAction.action.controls[0].displayName;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = __this->get_m_TriggerButtonText_13();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_22 = ___simulator0;
		NullCheck(L_22);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_23;
		L_23 = XRDeviceSimulator_get_triggerAction_m5C3F2192A90BCD7A3985AF9BC21CC8269A72ED3A_inline(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_24;
		L_24 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  L_25;
		L_25 = InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A(L_24, /*hidden argument*/NULL);
		V_1 = L_25;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_26;
		L_26 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_1), 0, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9(L_26, /*hidden argument*/NULL);
		NullCheck(L_21);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_27);
		// m_MenuButtonText.text = simulator.menuAction.action.controls[0].displayName;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_28 = __this->get_m_MenuButtonText_22();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_29 = ___simulator0;
		NullCheck(L_29);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_30;
		L_30 = XRDeviceSimulator_get_menuAction_m9021D9EA4B6A3F56E4A2718DF82A415883AFBF9E_inline(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_31;
		L_31 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  L_32;
		L_32 = InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A(L_31, /*hidden argument*/NULL);
		V_1 = L_32;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_33;
		L_33 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_1), 0, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		NullCheck(L_33);
		String_t* L_34;
		L_34 = InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9(L_33, /*hidden argument*/NULL);
		NullCheck(L_28);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_28, L_34);
		// var disabledImgColor = m_MainUIManager.disabledColor;
		XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * L_35 = __this->get_m_MainUIManager_24();
		NullCheck(L_35);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_36;
		L_36 = XRDeviceSimulatorUI_get_disabledColor_m81D8A472CD0C10427A5B99CABB1F24A765431C14(L_35, /*hidden argument*/NULL);
		V_0 = L_36;
		// m_ThumbstickButtonImage.color = disabledImgColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_37 = __this->get_m_ThumbstickButtonImage_18();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_38 = V_0;
		NullCheck(L_37);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_37, L_38);
		// m_ControllerImage.color = m_MainUIManager.disabledDeviceColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_39 = __this->get_m_ControllerImage_4();
		XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * L_40 = __this->get_m_MainUIManager_24();
		NullCheck(L_40);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_41;
		L_41 = XRDeviceSimulatorUI_get_disabledDeviceColor_m4F3609660C0C69C42DC753850AE8520D94D86A1E(L_40, /*hidden argument*/NULL);
		NullCheck(L_39);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_39, L_41);
		// m_ControllerOverlayImage.color = disabledImgColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_42 = __this->get_m_ControllerOverlayImage_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_43 = V_0;
		NullCheck(L_42);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_42, L_43);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::SetAsActiveController(System.Boolean,UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_SetAsActiveController_mBFF380DCAEA8960D704B267747BC2AD3DE62EE6B (XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * __this, bool ___active0, XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * ___simulator1, bool ___isRestingHand2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B6_0 = NULL;
	XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * G_B6_1 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B5_0 = NULL;
	XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B7_1 = NULL;
	XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * G_B7_2 = NULL;
	XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * G_B11_0 = NULL;
	XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * G_B12_1 = NULL;
	{
		// var controls = isRestingHand ?
		//     simulator.restingHandAxis2DAction.action.controls :
		//     simulator.axis2DAction.action.controls;
		bool L_0 = ___isRestingHand2;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_1 = ___simulator1;
		NullCheck(L_1);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_2;
		L_2 = XRDeviceSimulator_get_axis2DAction_mA0760910F253A668B81C67762567DD1E231A2A61_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_3;
		L_3 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  L_4;
		L_4 = InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A(L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_0026;
	}

IL_0016:
	{
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_5 = ___simulator1;
		NullCheck(L_5);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_6;
		L_6 = XRDeviceSimulator_get_restingHandAxis2DAction_m5D88E9D0730BDF46072583FE18CA75BEBB519A40_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_7;
		L_7 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  L_8;
		L_8 = InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A(L_7, /*hidden argument*/NULL);
		G_B3_0 = L_8;
	}

IL_0026:
	{
		V_0 = G_B3_0;
		// m_ThumbstickButtonText.text = $"{controls[0].displayName}, {controls[1].displayName}, {controls[2].displayName}, {controls[3].displayName}";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_m_ThumbstickButtonText_19();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_12;
		L_12 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_0), 0, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_13);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_11;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_16;
		L_16 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_0), 1, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_17);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_15;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_18;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_20;
		L_20 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_0), 2, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_21);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = L_19;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_22;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_24;
		L_24 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_0), 3, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_25);
		String_t* L_26;
		L_26 = String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417(L_23, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_26);
		// UpdateButtonVisuals(active, m_PrimaryButtonIcon, m_PrimaryButtonText, simulator.primaryButtonAction.action.controls[0]);
		bool L_27 = ___active0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28 = __this->get_m_PrimaryButtonIcon_8();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_29 = __this->get_m_PrimaryButtonText_7();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_30 = ___simulator1;
		NullCheck(L_30);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_31;
		L_31 = XRDeviceSimulator_get_primaryButtonAction_mB7BCDBBE5D394E63B47E7D56CCF5C2E6270E96EF_inline(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_32;
		L_32 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  L_33;
		L_33 = InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A(L_32, /*hidden argument*/NULL);
		V_1 = L_33;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_34;
		L_34 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_1), 0, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		XRDeviceSimulatorControllerUI_UpdateButtonVisuals_m8B6B7799656AE623FD9D5D8BF0A816B302A4E2F3(__this, L_27, L_28, L_29, L_34, /*hidden argument*/NULL);
		// UpdateButtonVisuals(active, m_SecondaryButtonIcon, m_SecondaryButtonText, simulator.secondaryButtonAction.action.controls[0]);
		bool L_35 = ___active0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_36 = __this->get_m_SecondaryButtonIcon_11();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_37 = __this->get_m_SecondaryButtonText_10();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_38 = ___simulator1;
		NullCheck(L_38);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_39;
		L_39 = XRDeviceSimulator_get_secondaryButtonAction_m2AC50D0F1D73AC43041FD52CF9CBCE9E5EF1C8DC_inline(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_40;
		L_40 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  L_41;
		L_41 = InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A(L_40, /*hidden argument*/NULL);
		V_1 = L_41;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_42;
		L_42 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_1), 0, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		XRDeviceSimulatorControllerUI_UpdateButtonVisuals_m8B6B7799656AE623FD9D5D8BF0A816B302A4E2F3(__this, L_35, L_36, L_37, L_42, /*hidden argument*/NULL);
		// UpdateButtonVisuals(active, m_TriggerButtonIcon, m_TriggerButtonText, simulator.triggerAction.action.controls[0]);
		bool L_43 = ___active0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_44 = __this->get_m_TriggerButtonIcon_14();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_45 = __this->get_m_TriggerButtonText_13();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_46 = ___simulator1;
		NullCheck(L_46);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_47;
		L_47 = XRDeviceSimulator_get_triggerAction_m5C3F2192A90BCD7A3985AF9BC21CC8269A72ED3A_inline(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_48;
		L_48 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_47, /*hidden argument*/NULL);
		NullCheck(L_48);
		ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  L_49;
		L_49 = InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A(L_48, /*hidden argument*/NULL);
		V_1 = L_49;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_50;
		L_50 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_1), 0, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		XRDeviceSimulatorControllerUI_UpdateButtonVisuals_m8B6B7799656AE623FD9D5D8BF0A816B302A4E2F3(__this, L_43, L_44, L_45, L_50, /*hidden argument*/NULL);
		// UpdateButtonVisuals(active, m_GripButtonIcon, m_GripButtonText, simulator.gripAction.action.controls[0]);
		bool L_51 = ___active0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_52 = __this->get_m_GripButtonIcon_17();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_53 = __this->get_m_GripButtonText_16();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_54 = ___simulator1;
		NullCheck(L_54);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_55;
		L_55 = XRDeviceSimulator_get_gripAction_mF05561553B345B1DFD07289181E3DD6A118C41DA_inline(L_54, /*hidden argument*/NULL);
		NullCheck(L_55);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_56;
		L_56 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_55, /*hidden argument*/NULL);
		NullCheck(L_56);
		ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  L_57;
		L_57 = InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A(L_56, /*hidden argument*/NULL);
		V_1 = L_57;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_58;
		L_58 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_1), 0, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		XRDeviceSimulatorControllerUI_UpdateButtonVisuals_m8B6B7799656AE623FD9D5D8BF0A816B302A4E2F3(__this, L_51, L_52, L_53, L_58, /*hidden argument*/NULL);
		// UpdateButtonVisuals(active, m_MenuButtonIcon, m_MenuButtonText, simulator.menuAction.action.controls[0]);
		bool L_59 = ___active0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_60 = __this->get_m_MenuButtonIcon_23();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_61 = __this->get_m_MenuButtonText_22();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_62 = ___simulator1;
		NullCheck(L_62);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_63;
		L_63 = XRDeviceSimulator_get_menuAction_m9021D9EA4B6A3F56E4A2718DF82A415883AFBF9E_inline(L_62, /*hidden argument*/NULL);
		NullCheck(L_63);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_64;
		L_64 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_63, /*hidden argument*/NULL);
		NullCheck(L_64);
		ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  L_65;
		L_65 = InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A(L_64, /*hidden argument*/NULL);
		V_1 = L_65;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_66;
		L_66 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_1), 0, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		XRDeviceSimulatorControllerUI_UpdateButtonVisuals_m8B6B7799656AE623FD9D5D8BF0A816B302A4E2F3(__this, L_59, L_60, L_61, L_66, /*hidden argument*/NULL);
		// UpdateButtonVisuals(active || isRestingHand, m_ThumbstickButtonIcon, m_ThumbstickButtonText, simulator.axis2DAction.action.controls[0]);
		bool L_67 = ___active0;
		bool L_68 = ___isRestingHand2;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_69 = __this->get_m_ThumbstickButtonIcon_20();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_70 = __this->get_m_ThumbstickButtonText_19();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_71 = ___simulator1;
		NullCheck(L_71);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_72;
		L_72 = XRDeviceSimulator_get_axis2DAction_mA0760910F253A668B81C67762567DD1E231A2A61_inline(L_71, /*hidden argument*/NULL);
		NullCheck(L_72);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_73;
		L_73 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_72, /*hidden argument*/NULL);
		NullCheck(L_73);
		ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  L_74;
		L_74 = InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A(L_73, /*hidden argument*/NULL);
		V_1 = L_74;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_75;
		L_75 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_1), 0, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		XRDeviceSimulatorControllerUI_UpdateButtonVisuals_m8B6B7799656AE623FD9D5D8BF0A816B302A4E2F3(__this, (bool)((int32_t)((int32_t)L_67|(int32_t)L_68)), L_69, L_70, L_75, /*hidden argument*/NULL);
		// if (active)
		bool L_76 = ___active0;
		V_2 = L_76;
		bool L_77 = V_2;
		if (!L_77)
		{
			goto IL_0260;
		}
	}
	{
		// UpdateButtonColor(m_PrimaryButtonImage, m_PrimaryButtonActivated);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_78 = __this->get_m_PrimaryButtonImage_6();
		bool L_79 = __this->get_m_PrimaryButtonActivated_25();
		XRDeviceSimulatorControllerUI_UpdateButtonColor_mF440595006502AE6FC991A48878FFA20E66745F8(__this, L_78, L_79, /*hidden argument*/NULL);
		// UpdateButtonColor(m_SecondaryButtonImage, m_SecondaryButtonActivated);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_80 = __this->get_m_SecondaryButtonImage_9();
		bool L_81 = __this->get_m_SecondaryButtonActivated_26();
		XRDeviceSimulatorControllerUI_UpdateButtonColor_mF440595006502AE6FC991A48878FFA20E66745F8(__this, L_80, L_81, /*hidden argument*/NULL);
		// UpdateButtonColor(m_TriggerButtonImage, m_TriggerActivated);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_82 = __this->get_m_TriggerButtonImage_12();
		bool L_83 = __this->get_m_TriggerActivated_27();
		XRDeviceSimulatorControllerUI_UpdateButtonColor_mF440595006502AE6FC991A48878FFA20E66745F8(__this, L_82, L_83, /*hidden argument*/NULL);
		// UpdateButtonColor(m_GripButtonImage, m_GripActivated);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_84 = __this->get_m_GripButtonImage_15();
		bool L_85 = __this->get_m_GripActivated_28();
		XRDeviceSimulatorControllerUI_UpdateButtonColor_mF440595006502AE6FC991A48878FFA20E66745F8(__this, L_84, L_85, /*hidden argument*/NULL);
		// UpdateButtonColor(m_MenuButtonImage, m_MenuActivated);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_86 = __this->get_m_MenuButtonImage_21();
		bool L_87 = __this->get_m_MenuActivated_29();
		XRDeviceSimulatorControllerUI_UpdateButtonColor_mF440595006502AE6FC991A48878FFA20E66745F8(__this, L_86, L_87, /*hidden argument*/NULL);
		// UpdateButtonColor(m_ThumbstickButtonImage, m_XAxisTranslateActivated || m_YAxisTranslateActivated);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_88 = __this->get_m_ThumbstickButtonImage_18();
		bool L_89 = __this->get_m_XAxisTranslateActivated_30();
		G_B5_0 = L_88;
		G_B5_1 = __this;
		if (L_89)
		{
			G_B6_0 = L_88;
			G_B6_1 = __this;
			goto IL_0225;
		}
	}
	{
		bool L_90 = __this->get_m_YAxisTranslateActivated_31();
		G_B7_0 = ((int32_t)(L_90));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0226;
	}

IL_0225:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0226:
	{
		NullCheck(G_B7_2);
		XRDeviceSimulatorControllerUI_UpdateButtonColor_mF440595006502AE6FC991A48878FFA20E66745F8(G_B7_2, G_B7_1, (bool)G_B7_0, /*hidden argument*/NULL);
		// m_ControllerImage.color = m_MainUIManager.deviceColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_91 = __this->get_m_ControllerImage_4();
		XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * L_92 = __this->get_m_MainUIManager_24();
		NullCheck(L_92);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_93;
		L_93 = XRDeviceSimulatorUI_get_deviceColor_m59F7708B01B7BEFC29E70B060C7631458C998CA3(L_92, /*hidden argument*/NULL);
		NullCheck(L_91);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_91, L_93);
		// m_ControllerOverlayImage.color = m_MainUIManager.enabledColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_94 = __this->get_m_ControllerOverlayImage_5();
		XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * L_95 = __this->get_m_MainUIManager_24();
		NullCheck(L_95);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_96;
		L_96 = XRDeviceSimulatorUI_get_enabledColor_mF403E9AE291B460A41F084739A53AA4914C18E69(L_95, /*hidden argument*/NULL);
		NullCheck(L_94);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_94, L_96);
		goto IL_0376;
	}

IL_0260:
	{
		// UpdateDisableControllerButton(m_PrimaryButtonActivated, m_PrimaryButtonImage, m_PrimaryButtonIcon, m_PrimaryButtonText);
		bool L_97 = __this->get_m_PrimaryButtonActivated_25();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_98 = __this->get_m_PrimaryButtonImage_6();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_99 = __this->get_m_PrimaryButtonIcon_8();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_100 = __this->get_m_PrimaryButtonText_7();
		XRDeviceSimulatorControllerUI_UpdateDisableControllerButton_mF5E6EAA8173BB99C07C75CACE2DF85C6B42F1994(__this, L_97, L_98, L_99, L_100, /*hidden argument*/NULL);
		// UpdateDisableControllerButton(m_SecondaryButtonActivated, m_SecondaryButtonImage, m_SecondaryButtonIcon, m_SecondaryButtonText);
		bool L_101 = __this->get_m_SecondaryButtonActivated_26();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_102 = __this->get_m_SecondaryButtonImage_9();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_103 = __this->get_m_SecondaryButtonIcon_11();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_104 = __this->get_m_SecondaryButtonText_10();
		XRDeviceSimulatorControllerUI_UpdateDisableControllerButton_mF5E6EAA8173BB99C07C75CACE2DF85C6B42F1994(__this, L_101, L_102, L_103, L_104, /*hidden argument*/NULL);
		// UpdateDisableControllerButton(m_TriggerActivated, m_TriggerButtonImage, m_TriggerButtonIcon, m_TriggerButtonText);
		bool L_105 = __this->get_m_TriggerActivated_27();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_106 = __this->get_m_TriggerButtonImage_12();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_107 = __this->get_m_TriggerButtonIcon_14();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_108 = __this->get_m_TriggerButtonText_13();
		XRDeviceSimulatorControllerUI_UpdateDisableControllerButton_mF5E6EAA8173BB99C07C75CACE2DF85C6B42F1994(__this, L_105, L_106, L_107, L_108, /*hidden argument*/NULL);
		// UpdateDisableControllerButton(m_GripActivated, m_GripButtonImage, m_GripButtonIcon, m_GripButtonText);
		bool L_109 = __this->get_m_GripActivated_28();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_110 = __this->get_m_GripButtonImage_15();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_111 = __this->get_m_GripButtonIcon_17();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_112 = __this->get_m_GripButtonText_16();
		XRDeviceSimulatorControllerUI_UpdateDisableControllerButton_mF5E6EAA8173BB99C07C75CACE2DF85C6B42F1994(__this, L_109, L_110, L_111, L_112, /*hidden argument*/NULL);
		// UpdateDisableControllerButton(m_MenuActivated, m_MenuButtonImage, m_MenuButtonIcon, m_MenuButtonText);
		bool L_113 = __this->get_m_MenuActivated_29();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_114 = __this->get_m_MenuButtonImage_21();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_115 = __this->get_m_MenuButtonIcon_23();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_116 = __this->get_m_MenuButtonText_22();
		XRDeviceSimulatorControllerUI_UpdateDisableControllerButton_mF5E6EAA8173BB99C07C75CACE2DF85C6B42F1994(__this, L_113, L_114, L_115, L_116, /*hidden argument*/NULL);
		// if (!isRestingHand)
		bool L_117 = ___isRestingHand2;
		V_3 = (bool)((((int32_t)L_117) == ((int32_t)0))? 1 : 0);
		bool L_118 = V_3;
		if (!L_118)
		{
			goto IL_0330;
		}
	}
	{
		// UpdateDisableControllerButton(m_XAxisTranslateActivated || m_YAxisTranslateActivated, m_ThumbstickButtonImage, m_ThumbstickButtonIcon, m_ThumbstickButtonText);
		bool L_119 = __this->get_m_XAxisTranslateActivated_30();
		G_B10_0 = __this;
		if (L_119)
		{
			G_B11_0 = __this;
			goto IL_0315;
		}
	}
	{
		bool L_120 = __this->get_m_YAxisTranslateActivated_31();
		G_B12_0 = ((int32_t)(L_120));
		G_B12_1 = G_B10_0;
		goto IL_0316;
	}

IL_0315:
	{
		G_B12_0 = 1;
		G_B12_1 = G_B11_0;
	}

IL_0316:
	{
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_121 = __this->get_m_ThumbstickButtonImage_18();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_122 = __this->get_m_ThumbstickButtonIcon_20();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_123 = __this->get_m_ThumbstickButtonText_19();
		NullCheck(G_B12_1);
		XRDeviceSimulatorControllerUI_UpdateDisableControllerButton_mF5E6EAA8173BB99C07C75CACE2DF85C6B42F1994(G_B12_1, (bool)G_B12_0, L_121, L_122, L_123, /*hidden argument*/NULL);
		goto IL_0347;
	}

IL_0330:
	{
		// m_ThumbstickButtonImage.color = m_MainUIManager.buttonColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_124 = __this->get_m_ThumbstickButtonImage_18();
		XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * L_125 = __this->get_m_MainUIManager_24();
		NullCheck(L_125);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_126;
		L_126 = XRDeviceSimulatorUI_get_buttonColor_m3B82CC7EA2B4930260A85D387453E16B9B237730(L_125, /*hidden argument*/NULL);
		NullCheck(L_124);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_124, L_126);
	}

IL_0347:
	{
		// m_ControllerImage.color = m_MainUIManager.disabledDeviceColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_127 = __this->get_m_ControllerImage_4();
		XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * L_128 = __this->get_m_MainUIManager_24();
		NullCheck(L_128);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_129;
		L_129 = XRDeviceSimulatorUI_get_disabledDeviceColor_m4F3609660C0C69C42DC753850AE8520D94D86A1E(L_128, /*hidden argument*/NULL);
		NullCheck(L_127);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_127, L_129);
		// m_ControllerOverlayImage.color = m_MainUIManager.disabledColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_130 = __this->get_m_ControllerOverlayImage_5();
		XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * L_131 = __this->get_m_MainUIManager_24();
		NullCheck(L_131);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_132;
		L_132 = XRDeviceSimulatorUI_get_disabledColor_m81D8A472CD0C10427A5B99CABB1F24A765431C14(L_131, /*hidden argument*/NULL);
		NullCheck(L_130);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_130, L_132);
	}

IL_0376:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::UpdateDisableControllerButton(System.Boolean,UnityEngine.UI.Image,UnityEngine.UI.Image,UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_UpdateDisableControllerButton_mF5E6EAA8173BB99C07C75CACE2DF85C6B42F1994 (XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * __this, bool ___active0, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___button1, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___buttonIcon2, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___buttonText3, const RuntimeMethod* method)
{
	bool V_0 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if(active)
		bool L_0 = ___active0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		// var tmpColor = m_MainUIManager.selectedColor;
		XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * L_2 = __this->get_m_MainUIManager_24();
		NullCheck(L_2);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = XRDeviceSimulatorUI_get_selectedColor_m87F7AA917ACF9C33AF892BE88068E6F7ABE9A1EC(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// tmpColor.a = 0.5f;
		(&V_1)->set_a_3((0.5f));
		// button.color = tmpColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = ___button1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = V_1;
		NullCheck(L_4);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// buttonText.gameObject.SetActive(true);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = ___buttonText3;
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)1, /*hidden argument*/NULL);
		// buttonIcon.gameObject.SetActive(true);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8 = ___buttonIcon2;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
		goto IL_0074;
	}

IL_0045:
	{
		// button.color = m_MainUIManager.disabledButtonColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = ___button1;
		XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * L_11 = __this->get_m_MainUIManager_24();
		NullCheck(L_11);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = XRDeviceSimulatorUI_get_disabledButtonColor_m7E701752C4AE8101CFE400D409E846F13FEAADD4(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_12);
		// buttonText.gameObject.SetActive(false);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = ___buttonText3;
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)0, /*hidden argument*/NULL);
		// buttonIcon.gameObject.SetActive(false);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_15 = ___buttonIcon2;
		NullCheck(L_15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)0, /*hidden argument*/NULL);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::UpdateButtonVisuals(System.Boolean,UnityEngine.UI.Image,UnityEngine.UI.Text,UnityEngine.InputSystem.InputControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_UpdateButtonVisuals_m8B6B7799656AE623FD9D5D8BF0A816B302A4E2F3 (XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * __this, bool ___active0, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___buttonIcon1, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___buttonText2, InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * ___control3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02A764E4251AC38D73244BF0497560A10A2A8B6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33A674C5B19A8E8CE70BB746840755D642FC6AAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EAB3208A6D4D55CC7AD481046AF7FBE9BE11384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99E0BE07A8922ABD73F1320EBE0DA083F5D0E14B);
		s_Il2CppMethodInitialized = true;
	}
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// buttonText.gameObject.SetActive(active);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = ___buttonText2;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		bool L_2 = ___active0;
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, L_2, /*hidden argument*/NULL);
		// buttonIcon.gameObject.SetActive(active);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = ___buttonIcon1;
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		bool L_5 = ___active0;
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, L_5, /*hidden argument*/NULL);
		// var color = active ? m_MainUIManager.enabledColor : m_MainUIManager.disabledColor;
		bool L_6 = ___active0;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * L_7 = __this->get_m_MainUIManager_24();
		NullCheck(L_7);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		L_8 = XRDeviceSimulatorUI_get_disabledColor_m81D8A472CD0C10427A5B99CABB1F24A765431C14(L_7, /*hidden argument*/NULL);
		G_B3_0 = L_8;
		goto IL_0036;
	}

IL_002b:
	{
		XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * L_9 = __this->get_m_MainUIManager_24();
		NullCheck(L_9);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		L_10 = XRDeviceSimulatorUI_get_enabledColor_mF403E9AE291B460A41F084739A53AA4914C18E69(L_9, /*hidden argument*/NULL);
		G_B3_0 = L_10;
	}

IL_0036:
	{
		V_0 = G_B3_0;
		// buttonText.color = color;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = ___buttonText2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12 = V_0;
		NullCheck(L_11);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
		// buttonIcon.color = color;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_13 = ___buttonIcon1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14 = V_0;
		NullCheck(L_13);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_14);
		// buttonIcon.transform.localScale = Vector3.one;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_15 = ___buttonIcon1;
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_get_one_mFA8E564BB81364E4E65551816F3631176E7F58E7(/*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_16, L_17, /*hidden argument*/NULL);
		// buttonIcon.sprite = m_MainUIManager.GetInputIcon(control);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_18 = ___buttonIcon1;
		XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * L_19 = __this->get_m_MainUIManager_24();
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_20 = ___control3;
		NullCheck(L_19);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_21;
		L_21 = XRDeviceSimulatorUI_GetInputIcon_m107705A92DDA1DCFF6AFB28559DE4C5FC5390F7A(L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_18, L_21, /*hidden argument*/NULL);
		// switch (control.name)
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_22 = ___control3;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = InputControl_get_name_mE259B1306F7E4F865D127B30939A70E9492EAFB2(L_22, /*hidden argument*/NULL);
		V_2 = L_23;
		String_t* L_24 = V_2;
		V_1 = L_24;
		String_t* L_25 = V_1;
		if (!L_25)
		{
			goto IL_00e9;
		}
	}
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_26, _stringLiteral8EAB3208A6D4D55CC7AD481046AF7FBE9BE11384, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_0095;
		}
	}
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_28, _stringLiteral99E0BE07A8922ABD73F1320EBE0DA083F5D0E14B, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_00e9;
	}

IL_0095:
	{
		// buttonText.text = "L Mouse";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_30 = ___buttonText2;
		NullCheck(L_30);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_30, _stringLiteral33A674C5B19A8E8CE70BB746840755D642FC6AAA);
		// buttonIcon.color = Color.white;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_31 = ___buttonIcon1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_32;
		L_32 = Color_get_white_m2F4F3E4DD95471924015E9CB5AF20E59C650EE37(/*hidden argument*/NULL);
		NullCheck(L_31);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_31, L_32);
		// buttonIcon.transform.localScale = new Vector3(-1f, 1f, 1f);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_33 = ___buttonIcon1;
		NullCheck(L_33);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_33, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_35), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_34, L_35, /*hidden argument*/NULL);
		// break;
		goto IL_00fd;
	}

IL_00cf:
	{
		// buttonText.text = "R Mouse";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_36 = ___buttonText2;
		NullCheck(L_36);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_36, _stringLiteral02A764E4251AC38D73244BF0497560A10A2A8B6A);
		// buttonIcon.color = Color.white;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_37 = ___buttonIcon1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_38;
		L_38 = Color_get_white_m2F4F3E4DD95471924015E9CB5AF20E59C650EE37(/*hidden argument*/NULL);
		NullCheck(L_37);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_37, L_38);
		// break;
		goto IL_00fd;
	}

IL_00e9:
	{
		// buttonIcon.sprite = m_MainUIManager.keyboardSprite;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_39 = ___buttonIcon1;
		XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * L_40 = __this->get_m_MainUIManager_24();
		NullCheck(L_40);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_41;
		L_41 = XRDeviceSimulatorUI_get_keyboardSprite_m6ECB45C904FD03FE35D5D4D41D2BBFC03BC29329_inline(L_40, /*hidden argument*/NULL);
		NullCheck(L_39);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_39, L_41, /*hidden argument*/NULL);
		// break;
		goto IL_00fd;
	}

IL_00fd:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::UpdateButtonColor(UnityEngine.UI.Image,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_UpdateButtonColor_mF440595006502AE6FC991A48878FFA20E66745F8 (XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * __this, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___image0, bool ___activated1, const RuntimeMethod* method)
{
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B2_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B1_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B3_1 = NULL;
	{
		// image.color = activated ? m_MainUIManager.selectedColor : m_MainUIManager.buttonColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = ___image0;
		bool L_1 = ___activated1;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0012;
		}
	}
	{
		XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * L_2 = __this->get_m_MainUIManager_24();
		NullCheck(L_2);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = XRDeviceSimulatorUI_get_buttonColor_m3B82CC7EA2B4930260A85D387453E16B9B237730(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_001d;
	}

IL_0012:
	{
		XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * L_4 = __this->get_m_MainUIManager_24();
		NullCheck(L_4);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = XRDeviceSimulatorUI_get_selectedColor_m87F7AA917ACF9C33AF892BE88068E6F7ABE9A1EC(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_001d:
	{
		NullCheck(G_B3_1);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnPrimaryButton(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnPrimaryButton_m3DB2B50347C4518974B80DEB23F355B42BE88434 (XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * __this, bool ___activated0, const RuntimeMethod* method)
{
	{
		// m_PrimaryButtonActivated = activated;
		bool L_0 = ___activated0;
		__this->set_m_PrimaryButtonActivated_25(L_0);
		// UpdateButtonColor(m_PrimaryButtonImage, activated);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_m_PrimaryButtonImage_6();
		bool L_2 = ___activated0;
		XRDeviceSimulatorControllerUI_UpdateButtonColor_mF440595006502AE6FC991A48878FFA20E66745F8(__this, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnSecondaryButton(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnSecondaryButton_m5FAE619AF7096F44A0D3A39E1A4FE32C2F3BE5D1 (XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * __this, bool ___activated0, const RuntimeMethod* method)
{
	{
		// m_SecondaryButtonActivated = activated;
		bool L_0 = ___activated0;
		__this->set_m_SecondaryButtonActivated_26(L_0);
		// UpdateButtonColor(m_SecondaryButtonImage, activated);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_m_SecondaryButtonImage_9();
		bool L_2 = ___activated0;
		XRDeviceSimulatorControllerUI_UpdateButtonColor_mF440595006502AE6FC991A48878FFA20E66745F8(__this, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnTrigger_m31AAF4E9EA402F39865519B16DE99C8F39DBB1E8 (XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * __this, bool ___activated0, const RuntimeMethod* method)
{
	{
		// m_TriggerActivated = activated;
		bool L_0 = ___activated0;
		__this->set_m_TriggerActivated_27(L_0);
		// UpdateButtonColor(m_TriggerButtonImage, activated);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_m_TriggerButtonImage_12();
		bool L_2 = ___activated0;
		XRDeviceSimulatorControllerUI_UpdateButtonColor_mF440595006502AE6FC991A48878FFA20E66745F8(__this, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnGrip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnGrip_mC02D2F5FE6C6024B3E721FABDC9ED5D5B1F864F0 (XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * __this, bool ___activated0, const RuntimeMethod* method)
{
	{
		// m_GripActivated = activated;
		bool L_0 = ___activated0;
		__this->set_m_GripActivated_28(L_0);
		// UpdateButtonColor(m_GripButtonImage, activated);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_m_GripButtonImage_15();
		bool L_2 = ___activated0;
		XRDeviceSimulatorControllerUI_UpdateButtonColor_mF440595006502AE6FC991A48878FFA20E66745F8(__this, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnMenu(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnMenu_mE8F0E9C8A3C7BEB310CE768B9B8A43584E3C6D89 (XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * __this, bool ___activated0, const RuntimeMethod* method)
{
	{
		// m_MenuActivated = activated;
		bool L_0 = ___activated0;
		__this->set_m_MenuActivated_29(L_0);
		// UpdateButtonColor(m_MenuButtonImage, activated);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_m_MenuButtonImage_21();
		bool L_2 = ___activated0;
		XRDeviceSimulatorControllerUI_UpdateButtonColor_mF440595006502AE6FC991A48878FFA20E66745F8(__this, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnXAxisTranslatePerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnXAxisTranslatePerformed_m80AF4EB70AE05E3DA1BE17890CD92E847CD9D64D (XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * __this, bool ___activated0, const RuntimeMethod* method)
{
	{
		// m_XAxisTranslateActivated = activated;
		bool L_0 = ___activated0;
		__this->set_m_XAxisTranslateActivated_30(L_0);
		// UpdateButtonColor(m_ThumbstickButtonImage, activated);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_m_ThumbstickButtonImage_18();
		bool L_2 = ___activated0;
		XRDeviceSimulatorControllerUI_UpdateButtonColor_mF440595006502AE6FC991A48878FFA20E66745F8(__this, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::OnZAxisTranslatePerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI_OnZAxisTranslatePerformed_m6CE8DF072B44AE102A5379B0417020E212339620 (XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * __this, bool ___activated0, const RuntimeMethod* method)
{
	{
		// m_YAxisTranslateActivated = activated;
		bool L_0 = ___activated0;
		__this->set_m_YAxisTranslateActivated_31(L_0);
		// UpdateButtonColor(m_ThumbstickButtonImage, activated);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_m_ThumbstickButtonImage_18();
		bool L_2 = ___activated0;
		XRDeviceSimulatorControllerUI_UpdateButtonColor_mF440595006502AE6FC991A48878FFA20E66745F8(__this, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorControllerUI__ctor_m61F0D99CADB0D6AE5FCDA78CADE558011133DCEC (XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_isMenuOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDeviceSimulatorUI_get_isMenuOpen_m67B1E31C805E324B61C25A8E26EF583192BAAF16 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return m_IsMenuOpen;
		bool L_0 = __this->get_m_IsMenuOpen_8();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::set_isMenuOpen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_set_isMenuOpen_mEEA8B5A4184BC779056EEBBA6761BF121F21344D (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// m_IsMenuOpen = value;
		bool L_0 = ___value0;
		__this->set_m_IsMenuOpen_8(L_0);
		// }
		return;
	}
}
// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_keyboardSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * XRDeviceSimulatorUI_get_keyboardSprite_m6ECB45C904FD03FE35D5D4D41D2BBFC03BC29329 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	{
		// internal Sprite keyboardSprite => m_KeyboardSprite;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0 = __this->get_m_KeyboardSprite_13();
		return L_0;
	}
}
// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_mouseSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * XRDeviceSimulatorUI_get_mouseSprite_mBE854019C673238D182525DE933E00878977D559 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	{
		// internal Sprite mouseSprite => m_MouseSprite;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0 = __this->get_m_MouseSprite_14();
		return L_0;
	}
}
// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_rMouseSpriteDark()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * XRDeviceSimulatorUI_get_rMouseSpriteDark_m613BF82E5350D6A664A03945B5D9AC0241C64047 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	{
		// internal Sprite rMouseSpriteDark => m_RMouseSpriteDark;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0 = __this->get_m_RMouseSpriteDark_15();
		return L_0;
	}
}
// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_rMouseSpriteLight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * XRDeviceSimulatorUI_get_rMouseSpriteLight_m4CAABB9C933C8BA95C1CB3F00321FA48110A4863 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	{
		// internal Sprite rMouseSpriteLight => m_RMouseSpriteLight;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0 = __this->get_m_RMouseSpriteLight_16();
		return L_0;
	}
}
// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_rMouseSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * XRDeviceSimulatorUI_get_rMouseSprite_mA7F890A24CFA1639CDFD4EB2123014AAEDBB0B29 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * V_1 = NULL;
	{
		// if (m_RMouseSprite == null)
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0 = __this->get_m_RMouseSprite_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// m_RMouseSprite = m_RMouseSpriteDark;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3 = __this->get_m_RMouseSpriteDark_15();
		__this->set_m_RMouseSprite_17(L_3);
	}

IL_001d:
	{
		// return m_RMouseSprite;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_4 = __this->get_m_RMouseSprite_17();
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_enabledColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  XRDeviceSimulatorUI_get_enabledColor_mF403E9AE291B460A41F084739A53AA4914C18E69 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (m_EnabledColor == Color.clear)
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_m_EnabledColor_44();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_clear_m399144A63869398B7F5B812201C2A92B84218FD2(/*hidden argument*/NULL);
		bool L_2;
		L_2 = Color_op_Equality_m54C509DB917E1B555CC54970616DBC8AF52F8E0D(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// m_EnabledColor = k_EnabledColorDark;
		IL2CPP_RUNTIME_CLASS_INIT(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = ((XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var))->get_k_EnabledColorDark_42();
		__this->set_m_EnabledColor_44(L_4);
	}

IL_0020:
	{
		// return m_EnabledColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = __this->get_m_EnabledColor_44();
		V_1 = L_5;
		goto IL_0029;
	}

IL_0029:
	{
		// }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_disabledColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  XRDeviceSimulatorUI_get_disabledColor_m81D8A472CD0C10427A5B99CABB1F24A765431C14 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (m_DisabledColor == Color.clear)
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_m_DisabledColor_47();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_clear_m399144A63869398B7F5B812201C2A92B84218FD2(/*hidden argument*/NULL);
		bool L_2;
		L_2 = Color_op_Equality_m54C509DB917E1B555CC54970616DBC8AF52F8E0D(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// m_DisabledColor = k_DisabledColorDark;
		IL2CPP_RUNTIME_CLASS_INIT(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = ((XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var))->get_k_DisabledColorDark_45();
		__this->set_m_DisabledColor_47(L_4);
	}

IL_0020:
	{
		// return m_DisabledColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = __this->get_m_DisabledColor_47();
		V_1 = L_5;
		goto IL_0029;
	}

IL_0029:
	{
		// }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_buttonColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  XRDeviceSimulatorUI_get_buttonColor_m3B82CC7EA2B4930260A85D387453E16B9B237730 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (m_ButtonColor == Color.clear)
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_m_ButtonColor_50();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_clear_m399144A63869398B7F5B812201C2A92B84218FD2(/*hidden argument*/NULL);
		bool L_2;
		L_2 = Color_op_Equality_m54C509DB917E1B555CC54970616DBC8AF52F8E0D(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// m_ButtonColor = k_ButtonColorDark;
		IL2CPP_RUNTIME_CLASS_INIT(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = ((XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var))->get_k_ButtonColorDark_48();
		__this->set_m_ButtonColor_50(L_4);
	}

IL_0020:
	{
		// return m_ButtonColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = __this->get_m_ButtonColor_50();
		V_1 = L_5;
		goto IL_0029;
	}

IL_0029:
	{
		// }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_disabledButtonColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  XRDeviceSimulatorUI_get_disabledButtonColor_m7E701752C4AE8101CFE400D409E846F13FEAADD4 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (m_DisabledButtonColor == Color.clear)
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_m_DisabledButtonColor_53();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_clear_m399144A63869398B7F5B812201C2A92B84218FD2(/*hidden argument*/NULL);
		bool L_2;
		L_2 = Color_op_Equality_m54C509DB917E1B555CC54970616DBC8AF52F8E0D(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// m_DisabledButtonColor = k_DisabledButtonColorDark;
		IL2CPP_RUNTIME_CLASS_INIT(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = ((XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var))->get_k_DisabledButtonColorDark_51();
		__this->set_m_DisabledButtonColor_53(L_4);
	}

IL_0020:
	{
		// return m_DisabledButtonColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = __this->get_m_DisabledButtonColor_53();
		V_1 = L_5;
		goto IL_0029;
	}

IL_0029:
	{
		// }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_selectedColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  XRDeviceSimulatorUI_get_selectedColor_m87F7AA917ACF9C33AF892BE88068E6F7ABE9A1EC (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (m_SelectedColor == Color.clear)
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_m_SelectedColor_56();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_clear_m399144A63869398B7F5B812201C2A92B84218FD2(/*hidden argument*/NULL);
		bool L_2;
		L_2 = Color_op_Equality_m54C509DB917E1B555CC54970616DBC8AF52F8E0D(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// m_SelectedColor = k_SelectedColorDark;
		IL2CPP_RUNTIME_CLASS_INIT(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = ((XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var))->get_k_SelectedColorDark_54();
		__this->set_m_SelectedColor_56(L_4);
	}

IL_0020:
	{
		// return m_SelectedColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = __this->get_m_SelectedColor_56();
		V_1 = L_5;
		goto IL_0029;
	}

IL_0029:
	{
		// }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_backgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  XRDeviceSimulatorUI_get_backgroundColor_m81A6DF706123921EEA7139E612219F4B72403D13 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (m_BackgroundColor == Color.clear)
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_m_BackgroundColor_59();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_clear_m399144A63869398B7F5B812201C2A92B84218FD2(/*hidden argument*/NULL);
		bool L_2;
		L_2 = Color_op_Equality_m54C509DB917E1B555CC54970616DBC8AF52F8E0D(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// m_BackgroundColor = k_BackgroundColorDark;
		IL2CPP_RUNTIME_CLASS_INIT(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = ((XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var))->get_k_BackgroundColorDark_57();
		__this->set_m_BackgroundColor_59(L_4);
	}

IL_0020:
	{
		// return m_BackgroundColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = __this->get_m_BackgroundColor_59();
		V_1 = L_5;
		goto IL_0029;
	}

IL_0029:
	{
		// }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_deviceColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  XRDeviceSimulatorUI_get_deviceColor_m59F7708B01B7BEFC29E70B060C7631458C998CA3 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (m_DeviceColor == Color.clear)
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_m_DeviceColor_62();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_clear_m399144A63869398B7F5B812201C2A92B84218FD2(/*hidden argument*/NULL);
		bool L_2;
		L_2 = Color_op_Equality_m54C509DB917E1B555CC54970616DBC8AF52F8E0D(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// m_DeviceColor = k_DeviceColorDark;
		IL2CPP_RUNTIME_CLASS_INIT(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = ((XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var))->get_k_DeviceColorDark_60();
		__this->set_m_DeviceColor_62(L_4);
	}

IL_0020:
	{
		// return m_DeviceColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = __this->get_m_DeviceColor_62();
		V_1 = L_5;
		goto IL_0029;
	}

IL_0029:
	{
		// }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Color UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::get_disabledDeviceColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  XRDeviceSimulatorUI_get_disabledDeviceColor_m4F3609660C0C69C42DC753850AE8520D94D86A1E (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (m_DisabledDeviceColor == Color.clear)
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_m_DisabledDeviceColor_65();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_clear_m399144A63869398B7F5B812201C2A92B84218FD2(/*hidden argument*/NULL);
		bool L_2;
		L_2 = Color_op_Equality_m54C509DB917E1B555CC54970616DBC8AF52F8E0D(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// m_DisabledDeviceColor = k_DisabledDeviceColorDark;
		IL2CPP_RUNTIME_CLASS_INIT(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = ((XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var))->get_k_DisabledDeviceColorDark_63();
		__this->set_m_DisabledDeviceColor_65(L_4);
	}

IL_0020:
	{
		// return m_DisabledDeviceColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = __this->get_m_DisabledDeviceColor_65();
		V_1 = L_5;
		goto IL_0029;
	}

IL_0029:
	{
		// }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = V_1;
		return L_6;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_Start_m307DBD29BFD48F3BF3DC18CD4F89EF457C6D748D (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisXRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825_m67ACFA138BD7D0188E78A4021D9AF1E96A3FBDD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * V_0 = NULL;
	bool V_1 = false;
	{
		// var simulator = GetComponentInParent<XRDeviceSimulator>();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_0;
		L_0 = Component_GetComponentInParent_TisXRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825_m67ACFA138BD7D0188E78A4021D9AF1E96A3FBDD9(__this, /*hidden argument*/Component_GetComponentInParent_TisXRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825_m67ACFA138BD7D0188E78A4021D9AF1E96A3FBDD9_RuntimeMethod_var);
		V_0 = L_0;
		// if (simulator != null)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// Initialize(simulator);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_4 = V_0;
		XRDeviceSimulatorUI_Initialize_m2064408DA68EE175C59A4E474C0FB2DE953CCC49(__this, L_4, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnDestroy_m91278C010211B0093B11EA123A7D8B82DC69A32E (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnCycleDevicesAction_m9ACFA74A8A646F1629CDE167F8FC31B933C0721F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnGripAction_m45E73FA51550D4DE11A104DFE6BE0AC7AF814BE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnKeyboardXTranslateAction_m1E58096115BE5404199E743DB5E090B6529F45CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnKeyboardYTranslateAction_m17BD10C0A6324E03C94BCAB6C66899BB358DB235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnKeyboardZTranslateAction_m5F2D6FFC37D1206EDE95A9FE79A1A3D135E2B261_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnManipulateHeadAction_mF6F7356D26691EB892C18595D75FC65035F37927_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnManipulateLeftAction_m126D13A01B708936E9A14CD6A511D7B22B1CAF15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnManipulateRightAction_m7894648198536BDC48022A25E60FD46CE96FF2A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnMenuAction_mB8E35BFD5CF9BF6A5EDE4A51C15E75ECE8FEBAE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnNegateModeAction_m727A9378C860688585C64B85E65227B95749D867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnPrimaryButtonAction_mB1E545F451EA49A225D5F3925D77ED033EE0831D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnRestingHandAxis2DAction_m041709D75169B0201EC830210A3F77A6A615CB7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnSecondaryButtonAction_m5FD8A0C52BC916FD9900C3BDC0AFDEFBE9AFA05B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnStopManipulationAction_m7B133A7D3D5F54E98A8A683E8C23FE42628BDF3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnToggleCursorLockAction_mC5E00ED0874F4EE5A694F073A6295BCFF1758D09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnToggleManipulateBodyAction_m0691F10D15FA9F2DE23EC33829EFFB1F794F4A1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnToggleManipulateLeftAction_m73E959E04FBF28FD30827CD8BF83D40FBD9F94DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnToggleManipulateRightAction_m1C75A4B3CD229581F73AA0745ADFB8273DDB7A7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnToggleMouseTransformationModeAction_m1AB4BB7CE7B3CC482C645C6452789D8A61CF0AAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnTriggerAction_mB3EF1DB08C567FE04B51F1B6D1954C1112B1952C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_Simulator != null)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_0 = __this->get_m_Simulator_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_025a;
		}
	}
	{
		// Unsubscribe(m_Simulator.manipulateLeftAction, OnManipulateLeftAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_3 = __this->get_m_Simulator_4();
		NullCheck(L_3);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_4;
		L_4 = XRDeviceSimulator_get_manipulateLeftAction_m02144C87B034B9AE5449FA1F548FD4EE81429096_inline(L_3, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_5 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_5, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnManipulateLeftAction_m126D13A01B708936E9A14CD6A511D7B22B1CAF15_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var);
		XRDeviceSimulatorUI_Unsubscribe_mD3AC95545F52AB8E0D6D236AED826CB78C36CEBD(L_4, L_5, /*hidden argument*/NULL);
		// Unsubscribe(m_Simulator.manipulateRightAction, OnManipulateRightAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_6 = __this->get_m_Simulator_4();
		NullCheck(L_6);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_7;
		L_7 = XRDeviceSimulator_get_manipulateRightAction_mF4CC07723038F377314185CD9FB5E90CD21586B6_inline(L_6, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_8 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_8, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnManipulateRightAction_m7894648198536BDC48022A25E60FD46CE96FF2A0_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Unsubscribe_mD3AC95545F52AB8E0D6D236AED826CB78C36CEBD(L_7, L_8, /*hidden argument*/NULL);
		// Unsubscribe(m_Simulator.toggleManipulateLeftAction, OnToggleManipulateLeftAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_9 = __this->get_m_Simulator_4();
		NullCheck(L_9);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_10;
		L_10 = XRDeviceSimulator_get_toggleManipulateLeftAction_m3D80B979C61BDAD15783947F7EE29FC3386D5D7D_inline(L_9, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_11 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_11, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnToggleManipulateLeftAction_m73E959E04FBF28FD30827CD8BF83D40FBD9F94DB_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Unsubscribe_mD3AC95545F52AB8E0D6D236AED826CB78C36CEBD(L_10, L_11, /*hidden argument*/NULL);
		// Unsubscribe(m_Simulator.toggleManipulateRightAction, OnToggleManipulateRightAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_12 = __this->get_m_Simulator_4();
		NullCheck(L_12);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_13;
		L_13 = XRDeviceSimulator_get_toggleManipulateRightAction_m2EE96B290EB34F752C22CCBA675E93F7712A5E7E_inline(L_12, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_14 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_14, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnToggleManipulateRightAction_m1C75A4B3CD229581F73AA0745ADFB8273DDB7A7F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Unsubscribe_mD3AC95545F52AB8E0D6D236AED826CB78C36CEBD(L_13, L_14, /*hidden argument*/NULL);
		// Unsubscribe(m_Simulator.toggleManipulateBodyAction, OnToggleManipulateBodyAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_15 = __this->get_m_Simulator_4();
		NullCheck(L_15);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_16;
		L_16 = XRDeviceSimulator_get_toggleManipulateBodyAction_m65C32387CB7A0DAEDBFD296D453D973BE3370CDF_inline(L_15, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_17 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_17, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnToggleManipulateBodyAction_m0691F10D15FA9F2DE23EC33829EFFB1F794F4A1A_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Unsubscribe_mD3AC95545F52AB8E0D6D236AED826CB78C36CEBD(L_16, L_17, /*hidden argument*/NULL);
		// Unsubscribe(m_Simulator.manipulateHeadAction, OnManipulateHeadAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_18 = __this->get_m_Simulator_4();
		NullCheck(L_18);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_19;
		L_19 = XRDeviceSimulator_get_manipulateHeadAction_mB90A2A2533E4221E89711C7BCC0A655C9693352B_inline(L_18, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_20 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_20, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnManipulateHeadAction_mF6F7356D26691EB892C18595D75FC65035F37927_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Unsubscribe_mD3AC95545F52AB8E0D6D236AED826CB78C36CEBD(L_19, L_20, /*hidden argument*/NULL);
		// Unsubscribe(m_Simulator.cycleDevicesAction, OnCycleDevicesAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_21 = __this->get_m_Simulator_4();
		NullCheck(L_21);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_22;
		L_22 = XRDeviceSimulator_get_cycleDevicesAction_mA4722D0384674C1025219F06F450444F4B68E431_inline(L_21, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_23 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_23, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnCycleDevicesAction_m9ACFA74A8A646F1629CDE167F8FC31B933C0721F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Unsubscribe_mD3AC95545F52AB8E0D6D236AED826CB78C36CEBD(L_22, L_23, /*hidden argument*/NULL);
		// Unsubscribe(m_Simulator.stopManipulationAction, OnStopManipulationAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_24 = __this->get_m_Simulator_4();
		NullCheck(L_24);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_25;
		L_25 = XRDeviceSimulator_get_stopManipulationAction_mD79372878D4BC093A37093D5EB26881F5FDE8300_inline(L_24, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_26 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_26, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnStopManipulationAction_m7B133A7D3D5F54E98A8A683E8C23FE42628BDF3B_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Unsubscribe_mD3AC95545F52AB8E0D6D236AED826CB78C36CEBD(L_25, L_26, /*hidden argument*/NULL);
		// Unsubscribe(m_Simulator.toggleMouseTransformationModeAction, OnToggleMouseTransformationModeAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_27 = __this->get_m_Simulator_4();
		NullCheck(L_27);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_28;
		L_28 = XRDeviceSimulator_get_toggleMouseTransformationModeAction_m4FCF9DC51EF09D4E76FB15C272AE843C2CD920DC_inline(L_27, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_29 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_29, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnToggleMouseTransformationModeAction_m1AB4BB7CE7B3CC482C645C6452789D8A61CF0AAA_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Unsubscribe_mD3AC95545F52AB8E0D6D236AED826CB78C36CEBD(L_28, L_29, /*hidden argument*/NULL);
		// Unsubscribe(m_Simulator.negateModeAction, OnNegateModeAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_30 = __this->get_m_Simulator_4();
		NullCheck(L_30);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_31;
		L_31 = XRDeviceSimulator_get_negateModeAction_m164521874C4A2FAF4A452D9CF4EB077E98A4DCE9_inline(L_30, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_32 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_32, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnNegateModeAction_m727A9378C860688585C64B85E65227B95749D867_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Unsubscribe_mD3AC95545F52AB8E0D6D236AED826CB78C36CEBD(L_31, L_32, /*hidden argument*/NULL);
		// Unsubscribe(m_Simulator.toggleCursorLockAction, OnToggleCursorLockAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_33 = __this->get_m_Simulator_4();
		NullCheck(L_33);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_34;
		L_34 = XRDeviceSimulator_get_toggleCursorLockAction_m2D03DF881EA5AFAC578B1565605E18910F4723A1_inline(L_33, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_35 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_35, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnToggleCursorLockAction_mC5E00ED0874F4EE5A694F073A6295BCFF1758D09_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Unsubscribe_mD3AC95545F52AB8E0D6D236AED826CB78C36CEBD(L_34, L_35, /*hidden argument*/NULL);
		// Unsubscribe(m_Simulator.keyboardXTranslateAction, OnKeyboardXTranslateAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_36 = __this->get_m_Simulator_4();
		NullCheck(L_36);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_37;
		L_37 = XRDeviceSimulator_get_keyboardXTranslateAction_m2BD28113DD84574FEAD0B749445C29250D79D94F_inline(L_36, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_38 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_38, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnKeyboardXTranslateAction_m1E58096115BE5404199E743DB5E090B6529F45CB_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Unsubscribe_mD3AC95545F52AB8E0D6D236AED826CB78C36CEBD(L_37, L_38, /*hidden argument*/NULL);
		// Unsubscribe(m_Simulator.keyboardYTranslateAction, OnKeyboardYTranslateAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_39 = __this->get_m_Simulator_4();
		NullCheck(L_39);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_40;
		L_40 = XRDeviceSimulator_get_keyboardYTranslateAction_mA6A0EDA7E25CCDD339C876C48C12FA26F93F59B7_inline(L_39, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_41 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_41, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnKeyboardYTranslateAction_m17BD10C0A6324E03C94BCAB6C66899BB358DB235_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Unsubscribe_mD3AC95545F52AB8E0D6D236AED826CB78C36CEBD(L_40, L_41, /*hidden argument*/NULL);
		// Unsubscribe(m_Simulator.keyboardZTranslateAction, OnKeyboardZTranslateAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_42 = __this->get_m_Simulator_4();
		NullCheck(L_42);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_43;
		L_43 = XRDeviceSimulator_get_keyboardZTranslateAction_mE87380FD43FCDE70B544F5AAB37428BF62202AF1_inline(L_42, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_44 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_44, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnKeyboardZTranslateAction_m5F2D6FFC37D1206EDE95A9FE79A1A3D135E2B261_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Unsubscribe_mD3AC95545F52AB8E0D6D236AED826CB78C36CEBD(L_43, L_44, /*hidden argument*/NULL);
		// Unsubscribe(m_Simulator.restingHandAxis2DAction, OnRestingHandAxis2DAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_45 = __this->get_m_Simulator_4();
		NullCheck(L_45);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_46;
		L_46 = XRDeviceSimulator_get_restingHandAxis2DAction_m5D88E9D0730BDF46072583FE18CA75BEBB519A40_inline(L_45, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_47 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_47, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnRestingHandAxis2DAction_m041709D75169B0201EC830210A3F77A6A615CB7F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Unsubscribe_mD3AC95545F52AB8E0D6D236AED826CB78C36CEBD(L_46, L_47, /*hidden argument*/NULL);
		// Unsubscribe(m_Simulator.gripAction, OnGripAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_48 = __this->get_m_Simulator_4();
		NullCheck(L_48);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_49;
		L_49 = XRDeviceSimulator_get_gripAction_mF05561553B345B1DFD07289181E3DD6A118C41DA_inline(L_48, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_50 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_50, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnGripAction_m45E73FA51550D4DE11A104DFE6BE0AC7AF814BE7_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Unsubscribe_mD3AC95545F52AB8E0D6D236AED826CB78C36CEBD(L_49, L_50, /*hidden argument*/NULL);
		// Unsubscribe(m_Simulator.triggerAction, OnTriggerAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_51 = __this->get_m_Simulator_4();
		NullCheck(L_51);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_52;
		L_52 = XRDeviceSimulator_get_triggerAction_m5C3F2192A90BCD7A3985AF9BC21CC8269A72ED3A_inline(L_51, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_53 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_53, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnTriggerAction_mB3EF1DB08C567FE04B51F1B6D1954C1112B1952C_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Unsubscribe_mD3AC95545F52AB8E0D6D236AED826CB78C36CEBD(L_52, L_53, /*hidden argument*/NULL);
		// Unsubscribe(m_Simulator.menuAction, OnMenuAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_54 = __this->get_m_Simulator_4();
		NullCheck(L_54);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_55;
		L_55 = XRDeviceSimulator_get_menuAction_m9021D9EA4B6A3F56E4A2718DF82A415883AFBF9E_inline(L_54, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_56 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_56, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnMenuAction_mB8E35BFD5CF9BF6A5EDE4A51C15E75ECE8FEBAE6_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Unsubscribe_mD3AC95545F52AB8E0D6D236AED826CB78C36CEBD(L_55, L_56, /*hidden argument*/NULL);
		// Unsubscribe(m_Simulator.primaryButtonAction, OnPrimaryButtonAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_57 = __this->get_m_Simulator_4();
		NullCheck(L_57);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_58;
		L_58 = XRDeviceSimulator_get_primaryButtonAction_mB7BCDBBE5D394E63B47E7D56CCF5C2E6270E96EF_inline(L_57, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_59 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_59, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnPrimaryButtonAction_mB1E545F451EA49A225D5F3925D77ED033EE0831D_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Unsubscribe_mD3AC95545F52AB8E0D6D236AED826CB78C36CEBD(L_58, L_59, /*hidden argument*/NULL);
		// Unsubscribe(m_Simulator.secondaryButtonAction, OnSecondaryButtonAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_60 = __this->get_m_Simulator_4();
		NullCheck(L_60);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_61;
		L_61 = XRDeviceSimulator_get_secondaryButtonAction_m2AC50D0F1D73AC43041FD52CF9CBCE9E5EF1C8DC_inline(L_60, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_62 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_62, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnSecondaryButtonAction_m5FD8A0C52BC916FD9900C3BDC0AFDEFBE9AFA05B_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Unsubscribe_mD3AC95545F52AB8E0D6D236AED826CB78C36CEBD(L_61, L_62, /*hidden argument*/NULL);
	}

IL_025a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::Initialize(UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_Initialize_m2064408DA68EE175C59A4E474C0FB2DE953CCC49 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * ___simulator0, const RuntimeMethod* method)
{
	{
		// m_Simulator = simulator;
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_0 = ___simulator0;
		__this->set_m_Simulator_4(L_0);
		// InitColorTheme();
		XRDeviceSimulatorUI_InitColorTheme_m0DD091122EDC360AC44F88B8D35C7144C0361E6A(__this, /*hidden argument*/NULL);
		// Initialize();
		XRDeviceSimulatorUI_Initialize_m0443BCA3D1E34DFD8BCCF881B1DDFB5C052188C5(__this, /*hidden argument*/NULL);
		// OnSetMouseMode();
		XRDeviceSimulatorUI_OnSetMouseMode_mD6F63B48301C21A5AE7D7C216A418BA5FA91E7DD(__this, /*hidden argument*/NULL);
		// OnActivateHeadsetDevice();
		XRDeviceSimulatorUI_OnActivateHeadsetDevice_m57B314F67F9B6E01877E2E25BAFB64C080A37340(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::InitColorTheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_InitColorTheme_m0DD091122EDC360AC44F88B8D35C7144C0361E6A (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_Initialize_m0443BCA3D1E34DFD8BCCF881B1DDFB5C052188C5 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_mDCD41D11CC3A01264FE6A5AE617F4C6F72837C7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7A9E70EEE544D2F90C679F23DE6534D2708BED22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnCycleDevicesAction_m9ACFA74A8A646F1629CDE167F8FC31B933C0721F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnGripAction_m45E73FA51550D4DE11A104DFE6BE0AC7AF814BE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnKeyboardXTranslateAction_m1E58096115BE5404199E743DB5E090B6529F45CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnKeyboardYTranslateAction_m17BD10C0A6324E03C94BCAB6C66899BB358DB235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnKeyboardZTranslateAction_m5F2D6FFC37D1206EDE95A9FE79A1A3D135E2B261_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnManipulateHeadAction_mF6F7356D26691EB892C18595D75FC65035F37927_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnManipulateLeftAction_m126D13A01B708936E9A14CD6A511D7B22B1CAF15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnManipulateRightAction_m7894648198536BDC48022A25E60FD46CE96FF2A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnMenuAction_mB8E35BFD5CF9BF6A5EDE4A51C15E75ECE8FEBAE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnNegateModeAction_m727A9378C860688585C64B85E65227B95749D867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnPrimaryButtonAction_mB1E545F451EA49A225D5F3925D77ED033EE0831D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnRestingHandAxis2DAction_m041709D75169B0201EC830210A3F77A6A615CB7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnSecondaryButtonAction_m5FD8A0C52BC916FD9900C3BDC0AFDEFBE9AFA05B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnStopManipulationAction_m7B133A7D3D5F54E98A8A683E8C23FE42628BDF3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnToggleCursorLockAction_mC5E00ED0874F4EE5A694F073A6295BCFF1758D09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnToggleManipulateBodyAction_m0691F10D15FA9F2DE23EC33829EFFB1F794F4A1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnToggleManipulateLeftAction_m73E959E04FBF28FD30827CD8BF83D40FBD9F94DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnToggleManipulateRightAction_m1C75A4B3CD229581F73AA0745ADFB8273DDB7A7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnToggleMouseTransformationModeAction_m1AB4BB7CE7B3CC482C645C6452789D8A61CF0AAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_OnTriggerAction_mB3EF1DB08C567FE04B51F1B6D1954C1112B1952C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D6F43F451E5A156511D4FA3F9B728127500A84D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral294F098A1D5E681EDEE8F43BFA8F45CFBA5798A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41D7D721EB92533F364B02AAC885BBC1473C5589);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44F840CD2F40ADB814D44EA51A7753812FECBF05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EAB3208A6D4D55CC7AD481046AF7FBE9BE11384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99E0BE07A8922ABD73F1320EBE0DA083F5D0E14B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBA9CEB43D14830BEAAF5F87C6AAAD1A8A36A67F);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * V_2 = NULL;
	ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  V_4;
	memset((&V_4), 0, sizeof(V_4));
	InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * V_5 = NULL;
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* V_6 = NULL;
	int32_t V_7 = 0;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * V_8 = NULL;
	TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* V_9 = NULL;
	int32_t V_10 = 0;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * V_11 = NULL;
	ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	bool V_14 = false;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B3_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B2_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B4_1 = NULL;
	String_t* G_B11_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B11_1 = NULL;
	String_t* G_B10_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B10_1 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B13_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B12_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B14_0;
	memset((&G_B14_0), 0, sizeof(G_B14_0));
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B14_1 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B16_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B15_0 = NULL;
	String_t* G_B17_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B17_1 = NULL;
	int32_t G_B20_0 = 0;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B26_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B25_0 = NULL;
	String_t* G_B27_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B27_1 = NULL;
	{
		// var bckgrdAlpha = m_XRDeviceSimulatorMainPanel.GetComponent<Image>().color.a;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_XRDeviceSimulatorMainPanel_9();
		NullCheck(L_0);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		NullCheck(L_1);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		float L_3 = L_2.get_a_3();
		V_0 = L_3;
		// foreach (var image in GetComponentsInChildren<Image>(true))
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_4;
		L_4 = Component_GetComponentsInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_mDCD41D11CC3A01264FE6A5AE617F4C6F72837C7A(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_mDCD41D11CC3A01264FE6A5AE617F4C6F72837C7A_RuntimeMethod_var);
		V_6 = L_4;
		V_7 = 0;
		goto IL_0058;
	}

IL_0026:
	{
		// foreach (var image in GetComponentsInChildren<Image>(true))
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_5 = V_6;
		int32_t L_6 = V_7;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_8 = L_8;
		// image.color = image.sprite == null ? buttonColor : enabledColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = V_8;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = V_8;
		NullCheck(L_10);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_11;
		L_11 = Image_get_sprite_mA6FB016B4E3FE5EFFAE4B3AEE2D2DF89C61E0AF3(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B2_0 = L_9;
		if (L_12)
		{
			G_B3_0 = L_9;
			goto IL_0046;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		L_13 = XRDeviceSimulatorUI_get_enabledColor_mF403E9AE291B460A41F084739A53AA4914C18E69(__this, /*hidden argument*/NULL);
		G_B4_0 = L_13;
		G_B4_1 = G_B2_0;
		goto IL_004c;
	}

IL_0046:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14;
		L_14 = XRDeviceSimulatorUI_get_buttonColor_m3B82CC7EA2B4930260A85D387453E16B9B237730(__this, /*hidden argument*/NULL);
		G_B4_0 = L_14;
		G_B4_1 = G_B3_0;
	}

IL_004c:
	{
		NullCheck(G_B4_1);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B4_1, G_B4_0);
		int32_t L_15 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0058:
	{
		// foreach (var image in GetComponentsInChildren<Image>(true))
		int32_t L_16 = V_7;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_17 = V_6;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_0026;
		}
	}
	{
		// foreach (var text in GetComponentsInChildren<Text>(true))
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_18;
		L_18 = Component_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7A9E70EEE544D2F90C679F23DE6534D2708BED22(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7A9E70EEE544D2F90C679F23DE6534D2708BED22_RuntimeMethod_var);
		V_9 = L_18;
		V_10 = 0;
		goto IL_008a;
	}

IL_006f:
	{
		// foreach (var text in GetComponentsInChildren<Text>(true))
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_19 = V_9;
		int32_t L_20 = V_10;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_11 = L_22;
		// text.color = enabledColor;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23 = V_11;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24;
		L_24 = XRDeviceSimulatorUI_get_enabledColor_mF403E9AE291B460A41F084739A53AA4914C18E69(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_23, L_24);
		int32_t L_25 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_008a:
	{
		// foreach (var text in GetComponentsInChildren<Text>(true))
		int32_t L_26 = V_10;
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_27 = V_9;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))))
		{
			goto IL_006f;
		}
	}
	{
		// m_HeadsetImage.color = Color.white;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28 = __this->get_m_HeadsetImage_20();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_29;
		L_29 = Color_get_white_m2F4F3E4DD95471924015E9CB5AF20E59C650EE37(/*hidden argument*/NULL);
		NullCheck(L_28);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_28, L_29);
		// var bckgrdColor = backgroundColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30;
		L_30 = XRDeviceSimulatorUI_get_backgroundColor_m81A6DF706123921EEA7139E612219F4B72403D13(__this, /*hidden argument*/NULL);
		V_1 = L_30;
		// bckgrdColor.a = bckgrdAlpha;
		float L_31 = V_0;
		(&V_1)->set_a_3(L_31);
		// m_XRDeviceSimulatorMainPanel.GetComponent<Image>().color = bckgrdColor;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = __this->get_m_XRDeviceSimulatorMainPanel_9();
		NullCheck(L_32);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_33;
		L_33 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_32, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_34 = V_1;
		NullCheck(L_33);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_33, L_34);
		// m_XRDeviceSimulatorCollapsedPanel.GetComponent<Image>().color = bckgrdColor;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = __this->get_m_XRDeviceSimulatorCollapsedPanel_10();
		NullCheck(L_35);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_36;
		L_36 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_35, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_37 = V_1;
		NullCheck(L_36);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_36, L_37);
		// m_CycleDevicesText.text = m_Simulator.cycleDevicesAction.action.controls[0].displayName;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_38 = __this->get_m_CycleDevicesText_18();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_39 = __this->get_m_Simulator_4();
		NullCheck(L_39);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_40;
		L_40 = XRDeviceSimulator_get_cycleDevicesAction_mA4722D0384674C1025219F06F450444F4B68E431_inline(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_41;
		L_41 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  L_42;
		L_42 = InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A(L_41, /*hidden argument*/NULL);
		V_12 = L_42;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_43;
		L_43 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_12), 0, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		NullCheck(L_43);
		String_t* L_44;
		L_44 = InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9(L_43, /*hidden argument*/NULL);
		NullCheck(L_38);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_38, L_44);
		// var toggleManipulateBodyActionControl = m_Simulator.toggleManipulateBodyAction.action.controls[0];
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_45 = __this->get_m_Simulator_4();
		NullCheck(L_45);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_46;
		L_46 = XRDeviceSimulator_get_toggleManipulateBodyAction_m65C32387CB7A0DAEDBFD296D453D973BE3370CDF_inline(L_45, /*hidden argument*/NULL);
		NullCheck(L_46);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_47;
		L_47 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  L_48;
		L_48 = InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A(L_47, /*hidden argument*/NULL);
		V_12 = L_48;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_49;
		L_49 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_12), 0, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		V_2 = L_49;
		// m_HeadsetSelectedValueText.text = $"{toggleManipulateBodyActionControl.displayName}";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_50 = __this->get_m_HeadsetSelectedValueText_35();
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_51 = V_2;
		NullCheck(L_51);
		String_t* L_52;
		L_52 = InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9(L_51, /*hidden argument*/NULL);
		String_t* L_53 = L_52;
		G_B10_0 = L_53;
		G_B10_1 = L_50;
		if (L_53)
		{
			G_B11_0 = L_53;
			G_B11_1 = L_50;
			goto IL_013b;
		}
	}
	{
		G_B11_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B11_1 = G_B10_1;
	}

IL_013b:
	{
		NullCheck(G_B11_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B11_1, G_B11_0);
		// var ctrlsBinding1 = m_Simulator.axis2DAction.action.controls;
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_54 = __this->get_m_Simulator_4();
		NullCheck(L_54);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_55;
		L_55 = XRDeviceSimulator_get_axis2DAction_mA0760910F253A668B81C67762567DD1E231A2A61_inline(L_54, /*hidden argument*/NULL);
		NullCheck(L_55);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_56;
		L_56 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_55, /*hidden argument*/NULL);
		NullCheck(L_56);
		ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  L_57;
		L_57 = InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A(L_56, /*hidden argument*/NULL);
		V_3 = L_57;
		// var ctrlsBinding2 = m_Simulator.keyboardYTranslateAction.action.controls;
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_58 = __this->get_m_Simulator_4();
		NullCheck(L_58);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_59;
		L_59 = XRDeviceSimulator_get_keyboardYTranslateAction_mA6A0EDA7E25CCDD339C876C48C12FA26F93F59B7_inline(L_58, /*hidden argument*/NULL);
		NullCheck(L_59);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_60;
		L_60 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_59, /*hidden argument*/NULL);
		NullCheck(L_60);
		ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  L_61;
		L_61 = InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A(L_60, /*hidden argument*/NULL);
		V_4 = L_61;
		// m_HeadsetMoveValueText.text = $"{ctrlsBinding1[0].displayName},{ctrlsBinding1[1].displayName},{ctrlsBinding1[2].displayName},{ctrlsBinding1[3].displayName} + " +
		//     $"{ctrlsBinding2[0].displayName},{ctrlsBinding2[1].displayName}";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_62 = __this->get_m_HeadsetMoveValueText_25();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_63 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_64 = L_63;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_65;
		L_65 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_3), 0, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		NullCheck(L_65);
		String_t* L_66;
		L_66 = InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9(L_65, /*hidden argument*/NULL);
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, L_66);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_66);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = L_64;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_68 = L_67;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_69;
		L_69 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_3), 1, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		NullCheck(L_69);
		String_t* L_70;
		L_70 = InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9(L_69, /*hidden argument*/NULL);
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_70);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_70);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = L_68;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_72 = L_71;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_73;
		L_73 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_3), 2, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		NullCheck(L_73);
		String_t* L_74;
		L_74 = InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9(L_73, /*hidden argument*/NULL);
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_74);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_74);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_75 = L_72;
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_76 = L_75;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_77;
		L_77 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_3), 3, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		NullCheck(L_77);
		String_t* L_78;
		L_78 = InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9(L_77, /*hidden argument*/NULL);
		NullCheck(L_76);
		ArrayElementTypeCheck (L_76, L_78);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_78);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_79 = L_76;
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, _stringLiteral41D7D721EB92533F364B02AAC885BBC1473C5589);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral41D7D721EB92533F364B02AAC885BBC1473C5589);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = L_79;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_81;
		L_81 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_4), 0, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		NullCheck(L_81);
		String_t* L_82;
		L_82 = InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9(L_81, /*hidden argument*/NULL);
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, L_82);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_82);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_83 = L_80;
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_84 = L_83;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_85;
		L_85 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_4), 1, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		NullCheck(L_85);
		String_t* L_86;
		L_86 = InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9(L_85, /*hidden argument*/NULL);
		NullCheck(L_84);
		ArrayElementTypeCheck (L_84, L_86);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_86);
		String_t* L_87;
		L_87 = String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417(L_84, /*hidden argument*/NULL);
		NullCheck(L_62);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_62, L_87);
		// m_CursorLockValueText.text = m_Simulator.toggleCursorLockAction.action.controls[0].displayName;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_88 = __this->get_m_CursorLockValueText_31();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_89 = __this->get_m_Simulator_4();
		NullCheck(L_89);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_90;
		L_90 = XRDeviceSimulator_get_toggleCursorLockAction_m2D03DF881EA5AFAC578B1565605E18910F4723A1_inline(L_89, /*hidden argument*/NULL);
		NullCheck(L_90);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_91;
		L_91 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_90, /*hidden argument*/NULL);
		NullCheck(L_91);
		ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  L_92;
		L_92 = InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A(L_91, /*hidden argument*/NULL);
		V_12 = L_92;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_93;
		L_93 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_12), 0, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		NullCheck(L_93);
		String_t* L_94;
		L_94 = InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9(L_93, /*hidden argument*/NULL);
		NullCheck(L_88);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_88, L_94);
		// m_CursorLockButton.color = Cursor.lockState == CursorLockMode.Locked ? selectedColor : buttonColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_95 = __this->get_m_CursorLockButton_30();
		int32_t L_96;
		L_96 = Cursor_get_lockState_mB6DDB8EBF42F6F14B0F87BBDF5F05AE183B63B70(/*hidden argument*/NULL);
		G_B12_0 = L_95;
		if ((((int32_t)L_96) == ((int32_t)1)))
		{
			G_B13_0 = L_95;
			goto IL_0256;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_97;
		L_97 = XRDeviceSimulatorUI_get_buttonColor_m3B82CC7EA2B4930260A85D387453E16B9B237730(__this, /*hidden argument*/NULL);
		G_B14_0 = L_97;
		G_B14_1 = G_B12_0;
		goto IL_025c;
	}

IL_0256:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_98;
		L_98 = XRDeviceSimulatorUI_get_selectedColor_m87F7AA917ACF9C33AF892BE88068E6F7ABE9A1EC(__this, /*hidden argument*/NULL);
		G_B14_0 = L_98;
		G_B14_1 = G_B13_0;
	}

IL_025c:
	{
		NullCheck(G_B14_1);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B14_1, G_B14_0);
		// m_HeadsetLookButtonText.text = m_Simulator.mouseTransformationMode == XRDeviceSimulator.TransformationMode.Translate ? k_TranslateLookText : k_RotateLookText;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_99 = __this->get_m_HeadsetLookButtonText_27();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_100 = __this->get_m_Simulator_4();
		NullCheck(L_100);
		int32_t L_101;
		L_101 = XRDeviceSimulator_get_mouseTransformationMode_m8BD4DE8F0E31B845095DCD38FFB84A294DA067B7_inline(L_100, /*hidden argument*/NULL);
		G_B15_0 = L_99;
		if (!L_101)
		{
			G_B16_0 = L_99;
			goto IL_027c;
		}
	}
	{
		G_B17_0 = _stringLiteralFBA9CEB43D14830BEAAF5F87C6AAAD1A8A36A67F;
		G_B17_1 = G_B15_0;
		goto IL_0281;
	}

IL_027c:
	{
		G_B17_0 = _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1;
		G_B17_1 = G_B16_0;
	}

IL_0281:
	{
		NullCheck(G_B17_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B17_1, G_B17_0);
		// m_MouseModeValueText.text = m_Simulator.toggleMouseTransformationModeAction.action.controls[0].displayName;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_102 = __this->get_m_MouseModeValueText_33();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_103 = __this->get_m_Simulator_4();
		NullCheck(L_103);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_104;
		L_104 = XRDeviceSimulator_get_toggleMouseTransformationModeAction_m4FCF9DC51EF09D4E76FB15C272AE843C2CD920DC_inline(L_103, /*hidden argument*/NULL);
		NullCheck(L_104);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_105;
		L_105 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_104, /*hidden argument*/NULL);
		NullCheck(L_105);
		ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  L_106;
		L_106 = InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A(L_105, /*hidden argument*/NULL);
		V_12 = L_106;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_107;
		L_107 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_12), 0, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		NullCheck(L_107);
		String_t* L_108;
		L_108 = InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9(L_107, /*hidden argument*/NULL);
		NullCheck(L_102);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_102, L_108);
		// var manipulateHeadActionControl = m_Simulator.manipulateHeadAction.action.controls[0];
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_109 = __this->get_m_Simulator_4();
		NullCheck(L_109);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_110;
		L_110 = XRDeviceSimulator_get_manipulateHeadAction_mB90A2A2533E4221E89711C7BCC0A655C9693352B_inline(L_109, /*hidden argument*/NULL);
		NullCheck(L_110);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_111;
		L_111 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_110, /*hidden argument*/NULL);
		NullCheck(L_111);
		ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  L_112;
		L_112 = InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A(L_111, /*hidden argument*/NULL);
		V_12 = L_112;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_113;
		L_113 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_12), 0, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		V_5 = L_113;
		// m_HeadsetLookValueIcon.sprite = GetInputIcon(manipulateHeadActionControl);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_114 = __this->get_m_HeadsetLookValueIcon_28();
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_115 = V_5;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_116;
		L_116 = XRDeviceSimulatorUI_GetInputIcon_m107705A92DDA1DCFF6AFB28559DE4C5FC5390F7A(__this, L_115, /*hidden argument*/NULL);
		NullCheck(L_114);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_114, L_116, /*hidden argument*/NULL);
		// if (manipulateHeadActionControl.name.Equals("leftButton") ||  manipulateHeadActionControl.name.Equals("rightButton"))
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_117 = V_5;
		NullCheck(L_117);
		String_t* L_118;
		L_118 = InputControl_get_name_mE259B1306F7E4F865D127B30939A70E9492EAFB2(L_117, /*hidden argument*/NULL);
		NullCheck(L_118);
		bool L_119;
		L_119 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_118, _stringLiteral8EAB3208A6D4D55CC7AD481046AF7FBE9BE11384, /*hidden argument*/NULL);
		if (L_119)
		{
			goto IL_0312;
		}
	}
	{
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_120 = V_5;
		NullCheck(L_120);
		String_t* L_121;
		L_121 = InputControl_get_name_mE259B1306F7E4F865D127B30939A70E9492EAFB2(L_120, /*hidden argument*/NULL);
		NullCheck(L_121);
		bool L_122;
		L_122 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_121, _stringLiteral99E0BE07A8922ABD73F1320EBE0DA083F5D0E14B, /*hidden argument*/NULL);
		G_B20_0 = ((int32_t)(L_122));
		goto IL_0313;
	}

IL_0312:
	{
		G_B20_0 = 1;
	}

IL_0313:
	{
		V_13 = (bool)G_B20_0;
		bool L_123 = V_13;
		if (!L_123)
		{
			goto IL_0368;
		}
	}
	{
		// m_HeadsetLookValueIcon.color = Color.white;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_124 = __this->get_m_HeadsetLookValueIcon_28();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_125;
		L_125 = Color_get_white_m2F4F3E4DD95471924015E9CB5AF20E59C650EE37(/*hidden argument*/NULL);
		NullCheck(L_124);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_124, L_125);
		// if (manipulateHeadActionControl.name.Equals("leftButton"))
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_126 = V_5;
		NullCheck(L_126);
		String_t* L_127;
		L_127 = InputControl_get_name_mE259B1306F7E4F865D127B30939A70E9492EAFB2(L_126, /*hidden argument*/NULL);
		NullCheck(L_127);
		bool L_128;
		L_128 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_127, _stringLiteral8EAB3208A6D4D55CC7AD481046AF7FBE9BE11384, /*hidden argument*/NULL);
		V_14 = L_128;
		bool L_129 = V_14;
		if (!L_129)
		{
			goto IL_0367;
		}
	}
	{
		// m_HeadsetLookValueIcon.transform.localScale = new Vector3(-1f, 1f, 1f);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_130 = __this->get_m_HeadsetLookValueIcon_28();
		NullCheck(L_130);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_131;
		L_131 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_130, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_132;
		memset((&L_132), 0, sizeof(L_132));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_132), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_131);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_131, L_132, /*hidden argument*/NULL);
	}

IL_0367:
	{
	}

IL_0368:
	{
		// m_HeadsetLookValueText.text = manipulateHeadActionControl.device.name == k_MouseDeviceType ? k_MouseDeviceType : manipulateHeadActionControl.displayName;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_133 = __this->get_m_HeadsetLookValueText_29();
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_134 = V_5;
		NullCheck(L_134);
		InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * L_135;
		L_135 = InputControl_get_device_m7B8D4A5F3C7C11E4FE7239692961C434C7CCF9E1_inline(L_134, /*hidden argument*/NULL);
		NullCheck(L_135);
		String_t* L_136;
		L_136 = InputControl_get_name_mE259B1306F7E4F865D127B30939A70E9492EAFB2(L_135, /*hidden argument*/NULL);
		bool L_137;
		L_137 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_136, _stringLiteral294F098A1D5E681EDEE8F43BFA8F45CFBA5798A7, /*hidden argument*/NULL);
		G_B25_0 = L_133;
		if (L_137)
		{
			G_B26_0 = L_133;
			goto IL_038f;
		}
	}
	{
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_138 = V_5;
		NullCheck(L_138);
		String_t* L_139;
		L_139 = InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9(L_138, /*hidden argument*/NULL);
		G_B27_0 = L_139;
		G_B27_1 = G_B25_0;
		goto IL_0394;
	}

IL_038f:
	{
		G_B27_0 = _stringLiteral294F098A1D5E681EDEE8F43BFA8F45CFBA5798A7;
		G_B27_1 = G_B26_0;
	}

IL_0394:
	{
		NullCheck(G_B27_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B27_1, G_B27_0);
		// m_LeftController.Initialize(m_Simulator);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_140 = __this->get_m_LeftController_38();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_141 = __this->get_m_Simulator_4();
		NullCheck(L_140);
		XRDeviceSimulatorControllerUI_Initialize_mE1A4B54387782ED0A21C14C20CCBD052939A87A5(L_140, L_141, /*hidden argument*/NULL);
		// m_LeftControllerButtonText.text = $"{m_Simulator.toggleManipulateLeftAction.action.controls[0].displayName} / {m_Simulator.manipulateLeftAction.action.controls[0].displayName} [Hold]";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_142 = __this->get_m_LeftControllerButtonText_39();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_143 = __this->get_m_Simulator_4();
		NullCheck(L_143);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_144;
		L_144 = XRDeviceSimulator_get_toggleManipulateLeftAction_m3D80B979C61BDAD15783947F7EE29FC3386D5D7D_inline(L_143, /*hidden argument*/NULL);
		NullCheck(L_144);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_145;
		L_145 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_144, /*hidden argument*/NULL);
		NullCheck(L_145);
		ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  L_146;
		L_146 = InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A(L_145, /*hidden argument*/NULL);
		V_12 = L_146;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_147;
		L_147 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_12), 0, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		NullCheck(L_147);
		String_t* L_148;
		L_148 = InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9(L_147, /*hidden argument*/NULL);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_149 = __this->get_m_Simulator_4();
		NullCheck(L_149);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_150;
		L_150 = XRDeviceSimulator_get_manipulateLeftAction_m02144C87B034B9AE5449FA1F548FD4EE81429096_inline(L_149, /*hidden argument*/NULL);
		NullCheck(L_150);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_151;
		L_151 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_150, /*hidden argument*/NULL);
		NullCheck(L_151);
		ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  L_152;
		L_152 = InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A(L_151, /*hidden argument*/NULL);
		V_12 = L_152;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_153;
		L_153 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_12), 0, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		NullCheck(L_153);
		String_t* L_154;
		L_154 = InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9(L_153, /*hidden argument*/NULL);
		String_t* L_155;
		L_155 = String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749(L_148, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, L_154, _stringLiteral44F840CD2F40ADB814D44EA51A7753812FECBF05, /*hidden argument*/NULL);
		NullCheck(L_142);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_142, L_155);
		// m_RightController.Initialize(m_Simulator);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_156 = __this->get_m_RightController_40();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_157 = __this->get_m_Simulator_4();
		NullCheck(L_156);
		XRDeviceSimulatorControllerUI_Initialize_mE1A4B54387782ED0A21C14C20CCBD052939A87A5(L_156, L_157, /*hidden argument*/NULL);
		// m_RightControllerButtonText.text = $"{m_Simulator.toggleManipulateRightAction.action.controls[0].displayName} / {m_Simulator.manipulateRightAction.action.controls[0].displayName} [Hold]";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_158 = __this->get_m_RightControllerButtonText_41();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_159 = __this->get_m_Simulator_4();
		NullCheck(L_159);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_160;
		L_160 = XRDeviceSimulator_get_toggleManipulateRightAction_m2EE96B290EB34F752C22CCBA675E93F7712A5E7E_inline(L_159, /*hidden argument*/NULL);
		NullCheck(L_160);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_161;
		L_161 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_160, /*hidden argument*/NULL);
		NullCheck(L_161);
		ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  L_162;
		L_162 = InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A(L_161, /*hidden argument*/NULL);
		V_12 = L_162;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_163;
		L_163 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_12), 0, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		NullCheck(L_163);
		String_t* L_164;
		L_164 = InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9(L_163, /*hidden argument*/NULL);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_165 = __this->get_m_Simulator_4();
		NullCheck(L_165);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_166;
		L_166 = XRDeviceSimulator_get_manipulateRightAction_mF4CC07723038F377314185CD9FB5E90CD21586B6_inline(L_165, /*hidden argument*/NULL);
		NullCheck(L_166);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_167;
		L_167 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_166, /*hidden argument*/NULL);
		NullCheck(L_167);
		ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  L_168;
		L_168 = InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A(L_167, /*hidden argument*/NULL);
		V_12 = L_168;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_169;
		L_169 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_12), 0, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		NullCheck(L_169);
		String_t* L_170;
		L_170 = InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9(L_169, /*hidden argument*/NULL);
		String_t* L_171;
		L_171 = String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749(L_164, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, L_170, _stringLiteral44F840CD2F40ADB814D44EA51A7753812FECBF05, /*hidden argument*/NULL);
		NullCheck(L_158);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_158, L_171);
		// m_ControllersSelectedValueText.text =
		//     $"{m_Simulator.toggleManipulateLeftAction.action.controls[0].displayName}, {m_Simulator.toggleManipulateRightAction.action.controls[0].displayName} [Toggle]";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_172 = __this->get_m_ControllersSelectedValueText_37();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_173 = __this->get_m_Simulator_4();
		NullCheck(L_173);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_174;
		L_174 = XRDeviceSimulator_get_toggleManipulateLeftAction_m3D80B979C61BDAD15783947F7EE29FC3386D5D7D_inline(L_173, /*hidden argument*/NULL);
		NullCheck(L_174);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_175;
		L_175 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_174, /*hidden argument*/NULL);
		NullCheck(L_175);
		ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  L_176;
		L_176 = InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A(L_175, /*hidden argument*/NULL);
		V_12 = L_176;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_177;
		L_177 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_12), 0, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		NullCheck(L_177);
		String_t* L_178;
		L_178 = InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9(L_177, /*hidden argument*/NULL);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_179 = __this->get_m_Simulator_4();
		NullCheck(L_179);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_180;
		L_180 = XRDeviceSimulator_get_toggleManipulateRightAction_m2EE96B290EB34F752C22CCBA675E93F7712A5E7E_inline(L_179, /*hidden argument*/NULL);
		NullCheck(L_180);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_181;
		L_181 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_180, /*hidden argument*/NULL);
		NullCheck(L_181);
		ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811  L_182;
		L_182 = InputAction_get_controls_m96DB51FA3BAA45229AD4418A41F652D64B06B96A(L_181, /*hidden argument*/NULL);
		V_12 = L_182;
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_183;
		L_183 = ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC((ReadOnlyArray_1_t51E12EEA961178973D364D9C1D86150BC4FF6811 *)(&V_12), 0, /*hidden argument*/ReadOnlyArray_1_get_Item_m8E38E64671229D35FA708BF0B650FE3F846189FC_RuntimeMethod_var);
		NullCheck(L_183);
		String_t* L_184;
		L_184 = InputControl_get_displayName_mDAE622C878518A46DDE452D0782BEF7D0CB98EA9(L_183, /*hidden argument*/NULL);
		String_t* L_185;
		L_185 = String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749(L_178, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_184, _stringLiteral0D6F43F451E5A156511D4FA3F9B728127500A84D, /*hidden argument*/NULL);
		NullCheck(L_172);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_172, L_185);
		// m_HeadsetMoveButtonIcon.color = enabledColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_186 = __this->get_m_HeadsetMoveButtonIcon_22();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_187;
		L_187 = XRDeviceSimulatorUI_get_enabledColor_mF403E9AE291B460A41F084739A53AA4914C18E69(__this, /*hidden argument*/NULL);
		NullCheck(L_186);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_186, L_187);
		// Subscribe(m_Simulator.manipulateLeftAction, OnManipulateLeftAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_188 = __this->get_m_Simulator_4();
		NullCheck(L_188);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_189;
		L_189 = XRDeviceSimulator_get_manipulateLeftAction_m02144C87B034B9AE5449FA1F548FD4EE81429096_inline(L_188, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_190 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_190, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnManipulateLeftAction_m126D13A01B708936E9A14CD6A511D7B22B1CAF15_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var);
		XRDeviceSimulatorUI_Subscribe_m6F8C94491821EB99D0F85F09D4DFCA85C5F36954(L_189, L_190, /*hidden argument*/NULL);
		// Subscribe(m_Simulator.manipulateRightAction, OnManipulateRightAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_191 = __this->get_m_Simulator_4();
		NullCheck(L_191);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_192;
		L_192 = XRDeviceSimulator_get_manipulateRightAction_mF4CC07723038F377314185CD9FB5E90CD21586B6_inline(L_191, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_193 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_193, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnManipulateRightAction_m7894648198536BDC48022A25E60FD46CE96FF2A0_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Subscribe_m6F8C94491821EB99D0F85F09D4DFCA85C5F36954(L_192, L_193, /*hidden argument*/NULL);
		// Subscribe(m_Simulator.toggleManipulateLeftAction, OnToggleManipulateLeftAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_194 = __this->get_m_Simulator_4();
		NullCheck(L_194);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_195;
		L_195 = XRDeviceSimulator_get_toggleManipulateLeftAction_m3D80B979C61BDAD15783947F7EE29FC3386D5D7D_inline(L_194, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_196 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_196, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnToggleManipulateLeftAction_m73E959E04FBF28FD30827CD8BF83D40FBD9F94DB_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Subscribe_m6F8C94491821EB99D0F85F09D4DFCA85C5F36954(L_195, L_196, /*hidden argument*/NULL);
		// Subscribe(m_Simulator.toggleManipulateRightAction, OnToggleManipulateRightAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_197 = __this->get_m_Simulator_4();
		NullCheck(L_197);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_198;
		L_198 = XRDeviceSimulator_get_toggleManipulateRightAction_m2EE96B290EB34F752C22CCBA675E93F7712A5E7E_inline(L_197, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_199 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_199, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnToggleManipulateRightAction_m1C75A4B3CD229581F73AA0745ADFB8273DDB7A7F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Subscribe_m6F8C94491821EB99D0F85F09D4DFCA85C5F36954(L_198, L_199, /*hidden argument*/NULL);
		// Subscribe(m_Simulator.toggleManipulateBodyAction, OnToggleManipulateBodyAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_200 = __this->get_m_Simulator_4();
		NullCheck(L_200);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_201;
		L_201 = XRDeviceSimulator_get_toggleManipulateBodyAction_m65C32387CB7A0DAEDBFD296D453D973BE3370CDF_inline(L_200, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_202 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_202, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnToggleManipulateBodyAction_m0691F10D15FA9F2DE23EC33829EFFB1F794F4A1A_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Subscribe_m6F8C94491821EB99D0F85F09D4DFCA85C5F36954(L_201, L_202, /*hidden argument*/NULL);
		// Subscribe(m_Simulator.manipulateHeadAction, OnManipulateHeadAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_203 = __this->get_m_Simulator_4();
		NullCheck(L_203);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_204;
		L_204 = XRDeviceSimulator_get_manipulateHeadAction_mB90A2A2533E4221E89711C7BCC0A655C9693352B_inline(L_203, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_205 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_205, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnManipulateHeadAction_mF6F7356D26691EB892C18595D75FC65035F37927_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Subscribe_m6F8C94491821EB99D0F85F09D4DFCA85C5F36954(L_204, L_205, /*hidden argument*/NULL);
		// Subscribe(m_Simulator.cycleDevicesAction, OnCycleDevicesAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_206 = __this->get_m_Simulator_4();
		NullCheck(L_206);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_207;
		L_207 = XRDeviceSimulator_get_cycleDevicesAction_mA4722D0384674C1025219F06F450444F4B68E431_inline(L_206, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_208 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_208, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnCycleDevicesAction_m9ACFA74A8A646F1629CDE167F8FC31B933C0721F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Subscribe_m6F8C94491821EB99D0F85F09D4DFCA85C5F36954(L_207, L_208, /*hidden argument*/NULL);
		// Subscribe(m_Simulator.stopManipulationAction, OnStopManipulationAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_209 = __this->get_m_Simulator_4();
		NullCheck(L_209);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_210;
		L_210 = XRDeviceSimulator_get_stopManipulationAction_mD79372878D4BC093A37093D5EB26881F5FDE8300_inline(L_209, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_211 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_211, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnStopManipulationAction_m7B133A7D3D5F54E98A8A683E8C23FE42628BDF3B_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Subscribe_m6F8C94491821EB99D0F85F09D4DFCA85C5F36954(L_210, L_211, /*hidden argument*/NULL);
		// Subscribe(m_Simulator.toggleMouseTransformationModeAction, OnToggleMouseTransformationModeAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_212 = __this->get_m_Simulator_4();
		NullCheck(L_212);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_213;
		L_213 = XRDeviceSimulator_get_toggleMouseTransformationModeAction_m4FCF9DC51EF09D4E76FB15C272AE843C2CD920DC_inline(L_212, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_214 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_214, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnToggleMouseTransformationModeAction_m1AB4BB7CE7B3CC482C645C6452789D8A61CF0AAA_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Subscribe_m6F8C94491821EB99D0F85F09D4DFCA85C5F36954(L_213, L_214, /*hidden argument*/NULL);
		// Subscribe(m_Simulator.negateModeAction, OnNegateModeAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_215 = __this->get_m_Simulator_4();
		NullCheck(L_215);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_216;
		L_216 = XRDeviceSimulator_get_negateModeAction_m164521874C4A2FAF4A452D9CF4EB077E98A4DCE9_inline(L_215, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_217 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_217, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnNegateModeAction_m727A9378C860688585C64B85E65227B95749D867_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Subscribe_m6F8C94491821EB99D0F85F09D4DFCA85C5F36954(L_216, L_217, /*hidden argument*/NULL);
		// Subscribe(m_Simulator.toggleCursorLockAction, OnToggleCursorLockAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_218 = __this->get_m_Simulator_4();
		NullCheck(L_218);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_219;
		L_219 = XRDeviceSimulator_get_toggleCursorLockAction_m2D03DF881EA5AFAC578B1565605E18910F4723A1_inline(L_218, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_220 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_220, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnToggleCursorLockAction_mC5E00ED0874F4EE5A694F073A6295BCFF1758D09_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Subscribe_m6F8C94491821EB99D0F85F09D4DFCA85C5F36954(L_219, L_220, /*hidden argument*/NULL);
		// Subscribe(m_Simulator.keyboardXTranslateAction, OnKeyboardXTranslateAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_221 = __this->get_m_Simulator_4();
		NullCheck(L_221);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_222;
		L_222 = XRDeviceSimulator_get_keyboardXTranslateAction_m2BD28113DD84574FEAD0B749445C29250D79D94F_inline(L_221, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_223 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_223, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnKeyboardXTranslateAction_m1E58096115BE5404199E743DB5E090B6529F45CB_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Subscribe_m6F8C94491821EB99D0F85F09D4DFCA85C5F36954(L_222, L_223, /*hidden argument*/NULL);
		// Subscribe(m_Simulator.keyboardYTranslateAction, OnKeyboardYTranslateAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_224 = __this->get_m_Simulator_4();
		NullCheck(L_224);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_225;
		L_225 = XRDeviceSimulator_get_keyboardYTranslateAction_mA6A0EDA7E25CCDD339C876C48C12FA26F93F59B7_inline(L_224, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_226 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_226, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnKeyboardYTranslateAction_m17BD10C0A6324E03C94BCAB6C66899BB358DB235_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Subscribe_m6F8C94491821EB99D0F85F09D4DFCA85C5F36954(L_225, L_226, /*hidden argument*/NULL);
		// Subscribe(m_Simulator.keyboardZTranslateAction, OnKeyboardZTranslateAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_227 = __this->get_m_Simulator_4();
		NullCheck(L_227);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_228;
		L_228 = XRDeviceSimulator_get_keyboardZTranslateAction_mE87380FD43FCDE70B544F5AAB37428BF62202AF1_inline(L_227, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_229 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_229, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnKeyboardZTranslateAction_m5F2D6FFC37D1206EDE95A9FE79A1A3D135E2B261_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Subscribe_m6F8C94491821EB99D0F85F09D4DFCA85C5F36954(L_228, L_229, /*hidden argument*/NULL);
		// Subscribe(m_Simulator.restingHandAxis2DAction, OnRestingHandAxis2DAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_230 = __this->get_m_Simulator_4();
		NullCheck(L_230);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_231;
		L_231 = XRDeviceSimulator_get_restingHandAxis2DAction_m5D88E9D0730BDF46072583FE18CA75BEBB519A40_inline(L_230, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_232 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_232, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnRestingHandAxis2DAction_m041709D75169B0201EC830210A3F77A6A615CB7F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Subscribe_m6F8C94491821EB99D0F85F09D4DFCA85C5F36954(L_231, L_232, /*hidden argument*/NULL);
		// Subscribe(m_Simulator.gripAction, OnGripAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_233 = __this->get_m_Simulator_4();
		NullCheck(L_233);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_234;
		L_234 = XRDeviceSimulator_get_gripAction_mF05561553B345B1DFD07289181E3DD6A118C41DA_inline(L_233, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_235 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_235, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnGripAction_m45E73FA51550D4DE11A104DFE6BE0AC7AF814BE7_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Subscribe_m6F8C94491821EB99D0F85F09D4DFCA85C5F36954(L_234, L_235, /*hidden argument*/NULL);
		// Subscribe(m_Simulator.triggerAction, OnTriggerAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_236 = __this->get_m_Simulator_4();
		NullCheck(L_236);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_237;
		L_237 = XRDeviceSimulator_get_triggerAction_m5C3F2192A90BCD7A3985AF9BC21CC8269A72ED3A_inline(L_236, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_238 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_238, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnTriggerAction_mB3EF1DB08C567FE04B51F1B6D1954C1112B1952C_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Subscribe_m6F8C94491821EB99D0F85F09D4DFCA85C5F36954(L_237, L_238, /*hidden argument*/NULL);
		// Subscribe(m_Simulator.menuAction, OnMenuAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_239 = __this->get_m_Simulator_4();
		NullCheck(L_239);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_240;
		L_240 = XRDeviceSimulator_get_menuAction_m9021D9EA4B6A3F56E4A2718DF82A415883AFBF9E_inline(L_239, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_241 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_241, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnMenuAction_mB8E35BFD5CF9BF6A5EDE4A51C15E75ECE8FEBAE6_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Subscribe_m6F8C94491821EB99D0F85F09D4DFCA85C5F36954(L_240, L_241, /*hidden argument*/NULL);
		// Subscribe(m_Simulator.primaryButtonAction, OnPrimaryButtonAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_242 = __this->get_m_Simulator_4();
		NullCheck(L_242);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_243;
		L_243 = XRDeviceSimulator_get_primaryButtonAction_mB7BCDBBE5D394E63B47E7D56CCF5C2E6270E96EF_inline(L_242, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_244 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_244, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnPrimaryButtonAction_mB1E545F451EA49A225D5F3925D77ED033EE0831D_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Subscribe_m6F8C94491821EB99D0F85F09D4DFCA85C5F36954(L_243, L_244, /*hidden argument*/NULL);
		// Subscribe(m_Simulator.secondaryButtonAction, OnSecondaryButtonAction);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_245 = __this->get_m_Simulator_4();
		NullCheck(L_245);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_246;
		L_246 = XRDeviceSimulator_get_secondaryButtonAction_m2AC50D0F1D73AC43041FD52CF9CBCE9E5EF1C8DC_inline(L_245, /*hidden argument*/NULL);
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_247 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_247, __this, (intptr_t)((intptr_t)XRDeviceSimulatorUI_OnSecondaryButtonAction_m5FD8A0C52BC916FD9900C3BDC0AFDEFBE9AFA05B_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		XRDeviceSimulatorUI_Subscribe_m6F8C94491821EB99D0F85F09D4DFCA85C5F36954(L_246, L_247, /*hidden argument*/NULL);
		// m_XRDeviceSimulatorMainPanel.SetActive(isMenuOpen);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_248 = __this->get_m_XRDeviceSimulatorMainPanel_9();
		bool L_249;
		L_249 = XRDeviceSimulatorUI_get_isMenuOpen_m67B1E31C805E324B61C25A8E26EF583192BAAF16(__this, /*hidden argument*/NULL);
		NullCheck(L_248);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_248, L_249, /*hidden argument*/NULL);
		// m_XRDeviceSimulatorCollapsedPanel.SetActive(!isMenuOpen);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_250 = __this->get_m_XRDeviceSimulatorCollapsedPanel_10();
		bool L_251;
		L_251 = XRDeviceSimulatorUI_get_isMenuOpen_m67B1E31C805E324B61C25A8E26EF583192BAAF16(__this, /*hidden argument*/NULL);
		NullCheck(L_250);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_250, (bool)((((int32_t)L_251) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Sprite UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::GetInputIcon(UnityEngine.InputSystem.InputControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * XRDeviceSimulatorUI_GetInputIcon_m107705A92DDA1DCFF6AFB28559DE4C5FC5390F7A (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * ___control0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral294F098A1D5E681EDEE8F43BFA8F45CFBA5798A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EAB3208A6D4D55CC7AD481046AF7FBE9BE11384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99E0BE07A8922ABD73F1320EBE0DA083F5D0E14B);
		s_Il2CppMethodInitialized = true;
	}
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * V_0 = NULL;
	bool V_1 = false;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * V_2 = NULL;
	bool V_3 = false;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	{
		// if (control == null)
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_0 = ___control0;
		V_1 = (bool)((((RuntimeObject*)(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return null;
		V_2 = (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *)NULL;
		goto IL_0073;
	}

IL_000d:
	{
		// var icon = keyboardSprite;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2;
		L_2 = XRDeviceSimulatorUI_get_keyboardSprite_m6ECB45C904FD03FE35D5D4D41D2BBFC03BC29329_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (control.device.name == k_MouseDeviceType)
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_3 = ___control0;
		NullCheck(L_3);
		InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * L_4;
		L_4 = InputControl_get_device_m7B8D4A5F3C7C11E4FE7239692961C434C7CCF9E1_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = InputControl_get_name_mE259B1306F7E4F865D127B30939A70E9492EAFB2(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_5, _stringLiteral294F098A1D5E681EDEE8F43BFA8F45CFBA5798A7, /*hidden argument*/NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_006f;
		}
	}
	{
		// switch (control.name)
		InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * L_8 = ___control0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = InputControl_get_name_mE259B1306F7E4F865D127B30939A70E9492EAFB2(L_8, /*hidden argument*/NULL);
		V_5 = L_9;
		String_t* L_10 = V_5;
		V_4 = L_10;
		String_t* L_11 = V_4;
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_12 = V_4;
		bool L_13;
		L_13 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_12, _stringLiteral8EAB3208A6D4D55CC7AD481046AF7FBE9BE11384, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_14 = V_4;
		bool L_15;
		L_15 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_14, _stringLiteral99E0BE07A8922ABD73F1320EBE0DA083F5D0E14B, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_005c;
		}
	}
	{
		goto IL_0065;
	}

IL_005c:
	{
		// icon = rMouseSprite;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_16;
		L_16 = XRDeviceSimulatorUI_get_rMouseSprite_mA7F890A24CFA1639CDFD4EB2123014AAEDBB0B29(__this, /*hidden argument*/NULL);
		V_0 = L_16;
		// break;
		goto IL_006e;
	}

IL_0065:
	{
		// icon = mouseSprite;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_17;
		L_17 = XRDeviceSimulatorUI_get_mouseSprite_mBE854019C673238D182525DE933E00878977D559_inline(__this, /*hidden argument*/NULL);
		V_0 = L_17;
		// break;
		goto IL_006e;
	}

IL_006e:
	{
	}

IL_006f:
	{
		// return icon;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_18 = V_0;
		V_2 = L_18;
		goto IL_0073;
	}

IL_0073:
	{
		// }
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_19 = V_2;
		return L_19;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnClickCloseSimulatorUIPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnClickCloseSimulatorUIPanel_mABBAAA127465E9E5D32962E02E5E3BBA49608723 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	{
		// isMenuOpen = false;
		XRDeviceSimulatorUI_set_isMenuOpen_mEEA8B5A4184BC779056EEBBA6761BF121F21344D(__this, (bool)0, /*hidden argument*/NULL);
		// m_XRDeviceSimulatorMainPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_XRDeviceSimulatorMainPanel_9();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// m_XRDeviceSimulatorCollapsedPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_m_XRDeviceSimulatorCollapsedPanel_10();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnClickOpenSimulatorUIPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnClickOpenSimulatorUIPanel_m181EC8F3ECCCA5F2EE6D344B53170B4CF90AC054 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	{
		// isMenuOpen = true;
		XRDeviceSimulatorUI_set_isMenuOpen_mEEA8B5A4184BC779056EEBBA6761BF121F21344D(__this, (bool)1, /*hidden argument*/NULL);
		// m_XRDeviceSimulatorMainPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_XRDeviceSimulatorMainPanel_9();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// m_XRDeviceSimulatorCollapsedPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_m_XRDeviceSimulatorCollapsedPanel_10();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnActivateLeftController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnActivateLeftController_m45E1F576A22B513AB86ADC92EAC3BDB512EA81B9 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral874BE1B2177F8C02B786BA933E78AD9FE1D377DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_CurrentSelectedDeviceText.text = "Left Controller";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_m_CurrentSelectedDeviceText_19();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral874BE1B2177F8C02B786BA933E78AD9FE1D377DD);
		// OnActivateController(m_LeftController);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_1 = __this->get_m_LeftController_38();
		XRDeviceSimulatorUI_OnActivateController_m6AE1F08C92C60A608C00D1B87DCB3300D0AB240C(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnActivateRightController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnActivateRightController_mF4399484F44762200A20EB9FB627436C9FD07F7D (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98018BE8EB53CB8EC9307D4EEAAA001D606E788C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_CurrentSelectedDeviceText.text = "Right Controller";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_m_CurrentSelectedDeviceText_19();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral98018BE8EB53CB8EC9307D4EEAAA001D606E788C);
		// OnActivateController(m_RightController);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_1 = __this->get_m_RightController_40();
		XRDeviceSimulatorUI_OnActivateController_m6AE1F08C92C60A608C00D1B87DCB3300D0AB240C(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnActivateController(UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnActivateController_m6AE1F08C92C60A608C00D1B87DCB3300D0AB240C (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * ___controller0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * V_0 = NULL;
	XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * G_B3_0 = NULL;
	{
		// PushCurrentButtonState(controller);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_0 = ___controller0;
		XRDeviceSimulatorUI_PushCurrentButtonState_m3F66C8A471D35EDC9AC61B161206777A4D93B3AF(__this, L_0, /*hidden argument*/NULL);
		// controller.SetAsActiveController(true, m_Simulator);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_1 = ___controller0;
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_2 = __this->get_m_Simulator_4();
		NullCheck(L_1);
		XRDeviceSimulatorControllerUI_SetAsActiveController_mBFF380DCAEA8960D704B267747BC2AD3DE62EE6B(L_1, (bool)1, L_2, (bool)0, /*hidden argument*/NULL);
		// var other = controller == m_LeftController ? m_RightController : m_LeftController;
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_3 = ___controller0;
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_4 = __this->get_m_LeftController_38();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_3, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002e;
		}
	}
	{
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_6 = __this->get_m_LeftController_38();
		G_B3_0 = L_6;
		goto IL_0034;
	}

IL_002e:
	{
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_7 = __this->get_m_RightController_40();
		G_B3_0 = L_7;
	}

IL_0034:
	{
		V_0 = G_B3_0;
		// other.SetAsActiveController(false, m_Simulator, true);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_8 = V_0;
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_9 = __this->get_m_Simulator_4();
		NullCheck(L_8);
		XRDeviceSimulatorControllerUI_SetAsActiveController_mBFF380DCAEA8960D704B267747BC2AD3DE62EE6B(L_8, (bool)0, L_9, (bool)1, /*hidden argument*/NULL);
		// m_HeadsetImage.gameObject.SetActive(false);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = __this->get_m_HeadsetImage_20();
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)0, /*hidden argument*/NULL);
		// HeadDeviceSetActive(false);
		XRDeviceSimulatorUI_HeadDeviceSetActive_m003A58199DCAA13AED05B2FAC0DFFB22B958DDA9(__this, (bool)0, /*hidden argument*/NULL);
		// m_ControllerSelectedButton.color = selectedColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_12 = __this->get_m_ControllerSelectedButton_36();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		L_13 = XRDeviceSimulatorUI_get_selectedColor_m87F7AA917ACF9C33AF892BE88068E6F7ABE9A1EC(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_13);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnActivateBothControllers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnActivateBothControllers_mD3BE37CBC8733CA91B7562D86808539C20BA54AD (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69E149C19EBE275A194380AED6A65C33679CF612);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_CurrentSelectedDeviceText.text = "Left & Right Controllers";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_m_CurrentSelectedDeviceText_19();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral69E149C19EBE275A194380AED6A65C33679CF612);
		// PushCurrentButtonState(m_LeftController);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_1 = __this->get_m_LeftController_38();
		XRDeviceSimulatorUI_PushCurrentButtonState_m3F66C8A471D35EDC9AC61B161206777A4D93B3AF(__this, L_1, /*hidden argument*/NULL);
		// PushCurrentButtonState(m_RightController);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_2 = __this->get_m_RightController_40();
		XRDeviceSimulatorUI_PushCurrentButtonState_m3F66C8A471D35EDC9AC61B161206777A4D93B3AF(__this, L_2, /*hidden argument*/NULL);
		// m_LeftController.SetAsActiveController(true, m_Simulator);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_3 = __this->get_m_LeftController_38();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_4 = __this->get_m_Simulator_4();
		NullCheck(L_3);
		XRDeviceSimulatorControllerUI_SetAsActiveController_mBFF380DCAEA8960D704B267747BC2AD3DE62EE6B(L_3, (bool)1, L_4, (bool)0, /*hidden argument*/NULL);
		// m_RightController.SetAsActiveController(true, m_Simulator);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_5 = __this->get_m_RightController_40();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_6 = __this->get_m_Simulator_4();
		NullCheck(L_5);
		XRDeviceSimulatorControllerUI_SetAsActiveController_mBFF380DCAEA8960D704B267747BC2AD3DE62EE6B(L_5, (bool)1, L_6, (bool)0, /*hidden argument*/NULL);
		// m_HeadsetImage.gameObject.SetActive(false);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_7 = __this->get_m_HeadsetImage_20();
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// HeadDeviceSetActive(false);
		XRDeviceSimulatorUI_HeadDeviceSetActive_m003A58199DCAA13AED05B2FAC0DFFB22B958DDA9(__this, (bool)0, /*hidden argument*/NULL);
		// m_ControllerSelectedButton.color = selectedColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = __this->get_m_ControllerSelectedButton_36();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		L_10 = XRDeviceSimulatorUI_get_selectedColor_m87F7AA917ACF9C33AF892BE88068E6F7ABE9A1EC(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::PushCurrentButtonState(UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorControllerUI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_PushCurrentButtonState_m3F66C8A471D35EDC9AC61B161206777A4D93B3AF (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * ___controller0, const RuntimeMethod* method)
{
	{
		// controller.OnGrip(m_Simulator.gripAction.action.inProgress);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_0 = ___controller0;
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_1 = __this->get_m_Simulator_4();
		NullCheck(L_1);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_2;
		L_2 = XRDeviceSimulator_get_gripAction_mF05561553B345B1DFD07289181E3DD6A118C41DA_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_3;
		L_3 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = InputAction_get_inProgress_m5273F103D017C3A9BAE1779058980D793D7B9C25(L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		XRDeviceSimulatorControllerUI_OnGrip_mC02D2F5FE6C6024B3E721FABDC9ED5D5B1F864F0(L_0, L_4, /*hidden argument*/NULL);
		// controller.OnTrigger(m_Simulator.triggerAction.action.inProgress);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_5 = ___controller0;
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_6 = __this->get_m_Simulator_4();
		NullCheck(L_6);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_7;
		L_7 = XRDeviceSimulator_get_triggerAction_m5C3F2192A90BCD7A3985AF9BC21CC8269A72ED3A_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_8;
		L_8 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = InputAction_get_inProgress_m5273F103D017C3A9BAE1779058980D793D7B9C25(L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		XRDeviceSimulatorControllerUI_OnTrigger_m31AAF4E9EA402F39865519B16DE99C8F39DBB1E8(L_5, L_9, /*hidden argument*/NULL);
		// controller.OnMenu(m_Simulator.menuAction.action.inProgress);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_10 = ___controller0;
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_11 = __this->get_m_Simulator_4();
		NullCheck(L_11);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_12;
		L_12 = XRDeviceSimulator_get_menuAction_m9021D9EA4B6A3F56E4A2718DF82A415883AFBF9E_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_13;
		L_13 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_14;
		L_14 = InputAction_get_inProgress_m5273F103D017C3A9BAE1779058980D793D7B9C25(L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		XRDeviceSimulatorControllerUI_OnMenu_mE8F0E9C8A3C7BEB310CE768B9B8A43584E3C6D89(L_10, L_14, /*hidden argument*/NULL);
		// controller.OnPrimaryButton(m_Simulator.primaryButtonAction.action.inProgress);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_15 = ___controller0;
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_16 = __this->get_m_Simulator_4();
		NullCheck(L_16);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_17;
		L_17 = XRDeviceSimulator_get_primaryButtonAction_mB7BCDBBE5D394E63B47E7D56CCF5C2E6270E96EF_inline(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_18;
		L_18 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		bool L_19;
		L_19 = InputAction_get_inProgress_m5273F103D017C3A9BAE1779058980D793D7B9C25(L_18, /*hidden argument*/NULL);
		NullCheck(L_15);
		XRDeviceSimulatorControllerUI_OnPrimaryButton_m3DB2B50347C4518974B80DEB23F355B42BE88434(L_15, L_19, /*hidden argument*/NULL);
		// controller.OnSecondaryButton(m_Simulator.secondaryButtonAction.action.inProgress);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_20 = ___controller0;
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_21 = __this->get_m_Simulator_4();
		NullCheck(L_21);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_22;
		L_22 = XRDeviceSimulator_get_secondaryButtonAction_m2AC50D0F1D73AC43041FD52CF9CBCE9E5EF1C8DC_inline(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_23;
		L_23 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		bool L_24;
		L_24 = InputAction_get_inProgress_m5273F103D017C3A9BAE1779058980D793D7B9C25(L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		XRDeviceSimulatorControllerUI_OnSecondaryButton_m5FAE619AF7096F44A0D3A39E1A4FE32C2F3BE5D1(L_20, L_24, /*hidden argument*/NULL);
		// controller.OnXAxisTranslatePerformed(m_Simulator.keyboardXTranslateAction.action.inProgress);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_25 = ___controller0;
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_26 = __this->get_m_Simulator_4();
		NullCheck(L_26);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_27;
		L_27 = XRDeviceSimulator_get_keyboardXTranslateAction_m2BD28113DD84574FEAD0B749445C29250D79D94F_inline(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_28;
		L_28 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		bool L_29;
		L_29 = InputAction_get_inProgress_m5273F103D017C3A9BAE1779058980D793D7B9C25(L_28, /*hidden argument*/NULL);
		NullCheck(L_25);
		XRDeviceSimulatorControllerUI_OnXAxisTranslatePerformed_m80AF4EB70AE05E3DA1BE17890CD92E847CD9D64D(L_25, L_29, /*hidden argument*/NULL);
		// controller.OnZAxisTranslatePerformed(m_Simulator.keyboardZTranslateAction.action.inProgress);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_30 = ___controller0;
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_31 = __this->get_m_Simulator_4();
		NullCheck(L_31);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_32;
		L_32 = XRDeviceSimulator_get_keyboardZTranslateAction_mE87380FD43FCDE70B544F5AAB37428BF62202AF1_inline(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_33;
		L_33 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = InputAction_get_inProgress_m5273F103D017C3A9BAE1779058980D793D7B9C25(L_33, /*hidden argument*/NULL);
		NullCheck(L_30);
		XRDeviceSimulatorControllerUI_OnZAxisTranslatePerformed_m6CE8DF072B44AE102A5379B0417020E212339620(L_30, L_34, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnActivateHeadsetDevice(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnActivateHeadsetDevice_m57B314F67F9B6E01877E2E25BAFB64C080A37340 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, bool ___activated0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB505BDB3D74CEA5AF48A58F07A9848FE5F0059D);
		s_Il2CppMethodInitialized = true;
	}
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B2_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B3_1 = NULL;
	{
		// m_LeftController.SetAsActiveController(false, m_Simulator);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_0 = __this->get_m_LeftController_38();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_1 = __this->get_m_Simulator_4();
		NullCheck(L_0);
		XRDeviceSimulatorControllerUI_SetAsActiveController_mBFF380DCAEA8960D704B267747BC2AD3DE62EE6B(L_0, (bool)0, L_1, (bool)0, /*hidden argument*/NULL);
		// m_RightController.SetAsActiveController(false, m_Simulator);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_2 = __this->get_m_RightController_40();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_3 = __this->get_m_Simulator_4();
		NullCheck(L_2);
		XRDeviceSimulatorControllerUI_SetAsActiveController_mBFF380DCAEA8960D704B267747BC2AD3DE62EE6B(L_2, (bool)0, L_3, (bool)0, /*hidden argument*/NULL);
		// m_CurrentSelectedDeviceText.text = activated ? "Head Mounted Display (HMD)" : "None";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_m_CurrentSelectedDeviceText_19();
		bool L_5 = ___activated0;
		G_B1_0 = L_4;
		if (L_5)
		{
			G_B2_0 = L_4;
			goto IL_0039;
		}
	}
	{
		G_B3_0 = _stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318;
		G_B3_1 = G_B1_0;
		goto IL_003e;
	}

IL_0039:
	{
		G_B3_0 = _stringLiteralEB505BDB3D74CEA5AF48A58F07A9848FE5F0059D;
		G_B3_1 = G_B2_0;
	}

IL_003e:
	{
		NullCheck(G_B3_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B3_1, G_B3_0);
		// m_HeadsetImage.gameObject.SetActive(activated);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_6 = __this->get_m_HeadsetImage_20();
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		bool L_8 = ___activated0;
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, L_8, /*hidden argument*/NULL);
		// HeadDeviceSetActive(activated);
		bool L_9 = ___activated0;
		XRDeviceSimulatorUI_HeadDeviceSetActive_m003A58199DCAA13AED05B2FAC0DFFB22B958DDA9(__this, L_9, /*hidden argument*/NULL);
		// m_ControllerSelectedButton.color = buttonColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = __this->get_m_ControllerSelectedButton_36();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		L_11 = XRDeviceSimulatorUI_get_buttonColor_m3B82CC7EA2B4930260A85D387453E16B9B237730(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_11);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::HeadDeviceSetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_HeadDeviceSetActive_m003A58199DCAA13AED05B2FAC0DFFB22B958DDA9 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, bool ___active0, const RuntimeMethod* method)
{
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B2_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B1_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B3_1 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B8_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B7_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B9_1 = NULL;
	{
		// m_HeadsetSelectedButton.color = active ? selectedColor : buttonColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_m_HeadsetSelectedButton_34();
		bool L_1 = ___active0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0012;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = XRDeviceSimulatorUI_get_buttonColor_m3B82CC7EA2B4930260A85D387453E16B9B237730(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0012:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = XRDeviceSimulatorUI_get_selectedColor_m87F7AA917ACF9C33AF892BE88068E6F7ABE9A1EC(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// var currentColor = active ? enabledColor : disabledColor;
		bool L_4 = ___active0;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = XRDeviceSimulatorUI_get_disabledColor_m81D8A472CD0C10427A5B99CABB1F24A765431C14(__this, /*hidden argument*/NULL);
		G_B6_0 = L_5;
		goto IL_002f;
	}

IL_0029:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = XRDeviceSimulatorUI_get_enabledColor_mF403E9AE291B460A41F084739A53AA4914C18E69(__this, /*hidden argument*/NULL);
		G_B6_0 = L_6;
	}

IL_002f:
	{
		V_0 = G_B6_0;
		// m_HeadsetMoveButtonIcon.color = currentColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_7 = __this->get_m_HeadsetMoveButtonIcon_22();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8 = V_0;
		NullCheck(L_7);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		// m_HeadsetMoveButtonText.color = currentColor;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_m_HeadsetMoveButtonText_23();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10 = V_0;
		NullCheck(L_9);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		// m_HeadsetMoveValueIcon.color = currentColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_11 = __this->get_m_HeadsetMoveValueIcon_24();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12 = V_0;
		NullCheck(L_11);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
		// m_HeadsetMoveValueText.color = currentColor;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = __this->get_m_HeadsetMoveValueText_25();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14 = V_0;
		NullCheck(L_13);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_14);
		// m_HeadsetMoveButton.color = active ? buttonColor : disabledButtonColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_15 = __this->get_m_HeadsetMoveButton_21();
		bool L_16 = ___active0;
		G_B7_0 = L_15;
		if (L_16)
		{
			G_B8_0 = L_15;
			goto IL_0075;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17;
		L_17 = XRDeviceSimulatorUI_get_disabledButtonColor_m7E701752C4AE8101CFE400D409E846F13FEAADD4(__this, /*hidden argument*/NULL);
		G_B9_0 = L_17;
		G_B9_1 = G_B7_0;
		goto IL_007b;
	}

IL_0075:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18;
		L_18 = XRDeviceSimulatorUI_get_buttonColor_m3B82CC7EA2B4930260A85D387453E16B9B237730(__this, /*hidden argument*/NULL);
		G_B9_0 = L_18;
		G_B9_1 = G_B8_0;
	}

IL_007b:
	{
		NullCheck(G_B9_1);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B9_1, G_B9_0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::Subscribe(UnityEngine.InputSystem.InputActionReference,System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_Subscribe_m6F8C94491821EB99D0F85F09D4DFCA85C5F36954 (InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___reference0, Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * ___performedOrCanceled1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * V_0 = NULL;
	bool V_1 = false;
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * G_B3_0 = NULL;
	int32_t G_B6_0 = 0;
	{
		// var action = reference != null ? reference.action : null;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = ___reference0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B *)(NULL));
		goto IL_0013;
	}

IL_000d:
	{
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_2 = ___reference0;
		NullCheck(L_2);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_3;
		L_3 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		// if (action != null && performedOrCanceled != null)
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_4 = V_0;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_5 = ___performedOrCanceled1;
		G_B6_0 = ((!(((RuntimeObject*)(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B6_0 = 0;
	}

IL_001e:
	{
		V_1 = (bool)G_B6_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		// action.performed += performedOrCanceled;
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_7 = V_0;
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_8 = ___performedOrCanceled1;
		NullCheck(L_7);
		InputAction_add_performed_m9FF12F3D5C984DB93D2DD75667F3B53D7B66C0A3(L_7, L_8, /*hidden argument*/NULL);
		// action.canceled += performedOrCanceled;
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_9 = V_0;
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_10 = ___performedOrCanceled1;
		NullCheck(L_9);
		InputAction_add_canceled_m07229F73CE0F7D5679F422DBAA9B287CFDF68AFE(L_9, L_10, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::Unsubscribe(UnityEngine.InputSystem.InputActionReference,System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_Unsubscribe_mD3AC95545F52AB8E0D6D236AED826CB78C36CEBD (InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___reference0, Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * ___performedOrCanceled1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * V_0 = NULL;
	bool V_1 = false;
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * G_B3_0 = NULL;
	int32_t G_B6_0 = 0;
	{
		// var action = reference != null ? reference.action : null;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = ___reference0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B *)(NULL));
		goto IL_0013;
	}

IL_000d:
	{
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_2 = ___reference0;
		NullCheck(L_2);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_3;
		L_3 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		// if (action != null && performedOrCanceled != null)
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_4 = V_0;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_5 = ___performedOrCanceled1;
		G_B6_0 = ((!(((RuntimeObject*)(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B6_0 = 0;
	}

IL_001e:
	{
		V_1 = (bool)G_B6_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		// action.performed -= performedOrCanceled;
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_7 = V_0;
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_8 = ___performedOrCanceled1;
		NullCheck(L_7);
		InputAction_remove_performed_m141C0FA72906BDF08A33EF3728C0193EFD0AAB06(L_7, L_8, /*hidden argument*/NULL);
		// action.canceled -= performedOrCanceled;
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_9 = V_0;
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_10 = ___performedOrCanceled1;
		NullCheck(L_9);
		InputAction_remove_canceled_m69E70B6BAFF763F524D38F2D0346911A80C5B7C5(L_9, L_10, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnManipulateLeftAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnManipulateLeftAction_m126D13A01B708936E9A14CD6A511D7B22B1CAF15 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D  ___context0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B4_0 = 0;
	{
		// if (context.phase.IsInProgress())
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBA28B019C1FFD8919377CEAC4EED5B8FD37A7830((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(&___context0), /*hidden argument*/NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_mEB534005411FDCF6FB88FEF96CFB13EB9120EBF4(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		// if (m_Simulator.manipulatingLeftController && m_Simulator.manipulatingRightController)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_3 = __this->get_m_Simulator_4();
		NullCheck(L_3);
		bool L_4;
		L_4 = XRDeviceSimulator_get_manipulatingLeftController_m63B1C83082E7CB9FF4A82EA66E7731490DA737A1(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_5 = __this->get_m_Simulator_4();
		NullCheck(L_5);
		bool L_6;
		L_6 = XRDeviceSimulator_get_manipulatingRightController_mEB1B1E20F37A6307A2F88E8FFFE99964E26898B6(L_5, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_6));
		goto IL_002d;
	}

IL_002c:
	{
		G_B4_0 = 0;
	}

IL_002d:
	{
		V_1 = (bool)G_B4_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		// OnActivateBothControllers();
		XRDeviceSimulatorUI_OnActivateBothControllers_mD3BE37CBC8733CA91B7562D86808539C20BA54AD(__this, /*hidden argument*/NULL);
		goto IL_0050;
	}

IL_003a:
	{
		// else if (m_Simulator.manipulatingLeftController)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_8 = __this->get_m_Simulator_4();
		NullCheck(L_8);
		bool L_9;
		L_9 = XRDeviceSimulator_get_manipulatingLeftController_m63B1C83082E7CB9FF4A82EA66E7731490DA737A1(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		// OnActivateLeftController();
		XRDeviceSimulatorUI_OnActivateLeftController_m45E1F576A22B513AB86ADC92EAC3BDB512EA81B9(__this, /*hidden argument*/NULL);
	}

IL_0050:
	{
		goto IL_007f;
	}

IL_0053:
	{
		// if (m_Simulator.manipulatingRightController)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_11 = __this->get_m_Simulator_4();
		NullCheck(L_11);
		bool L_12;
		L_12 = XRDeviceSimulator_get_manipulatingRightController_mEB1B1E20F37A6307A2F88E8FFFE99964E26898B6(L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_006c;
		}
	}
	{
		// OnActivateRightController();
		XRDeviceSimulatorUI_OnActivateRightController_mF4399484F44762200A20EB9FB627436C9FD07F7D(__this, /*hidden argument*/NULL);
		goto IL_007e;
	}

IL_006c:
	{
		// OnActivateHeadsetDevice(m_Simulator.manipulatingFPS);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_14 = __this->get_m_Simulator_4();
		NullCheck(L_14);
		bool L_15;
		L_15 = XRDeviceSimulator_get_manipulatingFPS_mB8E32C334A04E8796714F7F7B33306C3B6BDD9E5(L_14, /*hidden argument*/NULL);
		XRDeviceSimulatorUI_OnActivateHeadsetDevice_m57B314F67F9B6E01877E2E25BAFB64C080A37340(__this, L_15, /*hidden argument*/NULL);
	}

IL_007e:
	{
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnManipulateRightAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnManipulateRightAction_m7894648198536BDC48022A25E60FD46CE96FF2A0 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D  ___context0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B4_0 = 0;
	{
		// if (context.phase.IsInProgress())
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBA28B019C1FFD8919377CEAC4EED5B8FD37A7830((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(&___context0), /*hidden argument*/NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_mEB534005411FDCF6FB88FEF96CFB13EB9120EBF4(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		// if (m_Simulator.manipulatingLeftController && m_Simulator.manipulatingRightController)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_3 = __this->get_m_Simulator_4();
		NullCheck(L_3);
		bool L_4;
		L_4 = XRDeviceSimulator_get_manipulatingLeftController_m63B1C83082E7CB9FF4A82EA66E7731490DA737A1(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_5 = __this->get_m_Simulator_4();
		NullCheck(L_5);
		bool L_6;
		L_6 = XRDeviceSimulator_get_manipulatingRightController_mEB1B1E20F37A6307A2F88E8FFFE99964E26898B6(L_5, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_6));
		goto IL_002d;
	}

IL_002c:
	{
		G_B4_0 = 0;
	}

IL_002d:
	{
		V_1 = (bool)G_B4_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		// OnActivateBothControllers();
		XRDeviceSimulatorUI_OnActivateBothControllers_mD3BE37CBC8733CA91B7562D86808539C20BA54AD(__this, /*hidden argument*/NULL);
		goto IL_0050;
	}

IL_003a:
	{
		// else if (m_Simulator.manipulatingRightController)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_8 = __this->get_m_Simulator_4();
		NullCheck(L_8);
		bool L_9;
		L_9 = XRDeviceSimulator_get_manipulatingRightController_mEB1B1E20F37A6307A2F88E8FFFE99964E26898B6(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		// OnActivateRightController();
		XRDeviceSimulatorUI_OnActivateRightController_mF4399484F44762200A20EB9FB627436C9FD07F7D(__this, /*hidden argument*/NULL);
	}

IL_0050:
	{
		goto IL_007f;
	}

IL_0053:
	{
		// if (m_Simulator.manipulatingLeftController)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_11 = __this->get_m_Simulator_4();
		NullCheck(L_11);
		bool L_12;
		L_12 = XRDeviceSimulator_get_manipulatingLeftController_m63B1C83082E7CB9FF4A82EA66E7731490DA737A1(L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_006c;
		}
	}
	{
		// OnActivateLeftController();
		XRDeviceSimulatorUI_OnActivateLeftController_m45E1F576A22B513AB86ADC92EAC3BDB512EA81B9(__this, /*hidden argument*/NULL);
		goto IL_007e;
	}

IL_006c:
	{
		// OnActivateHeadsetDevice(m_Simulator.manipulatingFPS);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_14 = __this->get_m_Simulator_4();
		NullCheck(L_14);
		bool L_15;
		L_15 = XRDeviceSimulator_get_manipulatingFPS_mB8E32C334A04E8796714F7F7B33306C3B6BDD9E5(L_14, /*hidden argument*/NULL);
		XRDeviceSimulatorUI_OnActivateHeadsetDevice_m57B314F67F9B6E01877E2E25BAFB64C080A37340(__this, L_15, /*hidden argument*/NULL);
	}

IL_007e:
	{
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnToggleManipulateLeftAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnToggleManipulateLeftAction_m73E959E04FBF28FD30827CD8BF83D40FBD9F94DB (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D  ___context0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (context.phase.IsInProgress())
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBA28B019C1FFD8919377CEAC4EED5B8FD37A7830((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(&___context0), /*hidden argument*/NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_mEB534005411FDCF6FB88FEF96CFB13EB9120EBF4(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// if (m_Simulator.manipulatingLeftController)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_3 = __this->get_m_Simulator_4();
		NullCheck(L_3);
		bool L_4;
		L_4 = XRDeviceSimulator_get_manipulatingLeftController_m63B1C83082E7CB9FF4A82EA66E7731490DA737A1(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		// OnActivateLeftController();
		XRDeviceSimulatorUI_OnActivateLeftController_m45E1F576A22B513AB86ADC92EAC3BDB512EA81B9(__this, /*hidden argument*/NULL);
		goto IL_0032;
	}

IL_002a:
	{
		// OnActivateHeadsetDevice();
		XRDeviceSimulatorUI_OnActivateHeadsetDevice_m57B314F67F9B6E01877E2E25BAFB64C080A37340(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0032:
	{
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnToggleManipulateRightAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnToggleManipulateRightAction_m1C75A4B3CD229581F73AA0745ADFB8273DDB7A7F (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D  ___context0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (context.phase.IsInProgress())
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBA28B019C1FFD8919377CEAC4EED5B8FD37A7830((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(&___context0), /*hidden argument*/NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_mEB534005411FDCF6FB88FEF96CFB13EB9120EBF4(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// if (m_Simulator.manipulatingRightController)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_3 = __this->get_m_Simulator_4();
		NullCheck(L_3);
		bool L_4;
		L_4 = XRDeviceSimulator_get_manipulatingRightController_mEB1B1E20F37A6307A2F88E8FFFE99964E26898B6(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		// OnActivateRightController();
		XRDeviceSimulatorUI_OnActivateRightController_mF4399484F44762200A20EB9FB627436C9FD07F7D(__this, /*hidden argument*/NULL);
		goto IL_0032;
	}

IL_002a:
	{
		// OnActivateHeadsetDevice();
		XRDeviceSimulatorUI_OnActivateHeadsetDevice_m57B314F67F9B6E01877E2E25BAFB64C080A37340(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0032:
	{
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnToggleManipulateBodyAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnToggleManipulateBodyAction_m0691F10D15FA9F2DE23EC33829EFFB1F794F4A1A (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D  ___context0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (context.phase.IsInProgress())
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBA28B019C1FFD8919377CEAC4EED5B8FD37A7830((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(&___context0), /*hidden argument*/NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_mEB534005411FDCF6FB88FEF96CFB13EB9120EBF4(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// OnActivateHeadsetDevice();
		XRDeviceSimulatorUI_OnActivateHeadsetDevice_m57B314F67F9B6E01877E2E25BAFB64C080A37340(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnManipulateHeadAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnManipulateHeadAction_mF6F7356D26691EB892C18595D75FC65035F37927 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D  ___context0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B11_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B10_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B12_1 = NULL;
	{
		// var isInProgress = context.phase.IsInProgress();
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBA28B019C1FFD8919377CEAC4EED5B8FD37A7830((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(&___context0), /*hidden argument*/NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_mEB534005411FDCF6FB88FEF96CFB13EB9120EBF4(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var noControllers = !m_Simulator.manipulatingLeftController && !m_Simulator.manipulatingRightController;
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_2 = __this->get_m_Simulator_4();
		NullCheck(L_2);
		bool L_3;
		L_3 = XRDeviceSimulator_get_manipulatingLeftController_m63B1C83082E7CB9FF4A82EA66E7731490DA737A1(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_4 = __this->get_m_Simulator_4();
		NullCheck(L_4);
		bool L_5;
		L_5 = XRDeviceSimulator_get_manipulatingRightController_mEB1B1E20F37A6307A2F88E8FFFE99964E26898B6(L_4, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B3_0 = 0;
	}

IL_002c:
	{
		V_1 = (bool)G_B3_0;
		// if (isInProgress)
		bool L_6 = V_0;
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		// if (m_Simulator.manipulatingFPS || noControllers)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_8 = __this->get_m_Simulator_4();
		NullCheck(L_8);
		bool L_9;
		L_9 = XRDeviceSimulator_get_manipulatingFPS_mB8E32C334A04E8796714F7F7B33306C3B6BDD9E5(L_8, /*hidden argument*/NULL);
		bool L_10 = V_1;
		V_3 = (bool)((int32_t)((int32_t)L_9|(int32_t)L_10));
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		// OnActivateHeadsetDevice();
		XRDeviceSimulatorUI_OnActivateHeadsetDevice_m57B314F67F9B6E01877E2E25BAFB64C080A37340(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_004c:
	{
		goto IL_006a;
	}

IL_004f:
	{
		// else if (noControllers)
		bool L_12 = V_1;
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_006a;
		}
	}
	{
		// OnActivateHeadsetDevice(m_Simulator.manipulatingFPS);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_14 = __this->get_m_Simulator_4();
		NullCheck(L_14);
		bool L_15;
		L_15 = XRDeviceSimulator_get_manipulatingFPS_mB8E32C334A04E8796714F7F7B33306C3B6BDD9E5(L_14, /*hidden argument*/NULL);
		XRDeviceSimulatorUI_OnActivateHeadsetDevice_m57B314F67F9B6E01877E2E25BAFB64C080A37340(__this, L_15, /*hidden argument*/NULL);
	}

IL_006a:
	{
		// m_HeadsetImage.gameObject.SetActive(isInProgress || noControllers);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_16 = __this->get_m_HeadsetImage_20();
		NullCheck(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		bool L_18 = V_0;
		bool L_19 = V_1;
		NullCheck(L_17);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)((int32_t)((int32_t)L_18|(int32_t)L_19)), /*hidden argument*/NULL);
		// m_HeadsetLookButton.color = isInProgress ? selectedColor : buttonColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_20 = __this->get_m_HeadsetLookButton_26();
		bool L_21 = V_0;
		G_B10_0 = L_20;
		if (L_21)
		{
			G_B11_0 = L_20;
			goto IL_008f;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_22;
		L_22 = XRDeviceSimulatorUI_get_buttonColor_m3B82CC7EA2B4930260A85D387453E16B9B237730(__this, /*hidden argument*/NULL);
		G_B12_0 = L_22;
		G_B12_1 = G_B10_0;
		goto IL_0095;
	}

IL_008f:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_23;
		L_23 = XRDeviceSimulatorUI_get_selectedColor_m87F7AA917ACF9C33AF892BE88068E6F7ABE9A1EC(__this, /*hidden argument*/NULL);
		G_B12_0 = L_23;
		G_B12_1 = G_B11_0;
	}

IL_0095:
	{
		NullCheck(G_B12_1);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B12_1, G_B12_0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnCycleDevicesAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnCycleDevicesAction_m9ACFA74A8A646F1629CDE167F8FC31B933C0721F (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D  ___context0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (context.phase.IsInProgress())
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBA28B019C1FFD8919377CEAC4EED5B8FD37A7830((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(&___context0), /*hidden argument*/NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_mEB534005411FDCF6FB88FEF96CFB13EB9120EBF4(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0056;
		}
	}
	{
		// if (m_Simulator.manipulatingFPS)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_3 = __this->get_m_Simulator_4();
		NullCheck(L_3);
		bool L_4;
		L_4 = XRDeviceSimulator_get_manipulatingFPS_mB8E32C334A04E8796714F7F7B33306C3B6BDD9E5(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		// OnActivateHeadsetDevice();
		XRDeviceSimulatorUI_OnActivateHeadsetDevice_m57B314F67F9B6E01877E2E25BAFB64C080A37340(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0029:
	{
		// if (m_Simulator.manipulatingLeftController)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_6 = __this->get_m_Simulator_4();
		NullCheck(L_6);
		bool L_7;
		L_7 = XRDeviceSimulator_get_manipulatingLeftController_m63B1C83082E7CB9FF4A82EA66E7731490DA737A1(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_003f;
		}
	}
	{
		// OnActivateLeftController();
		XRDeviceSimulatorUI_OnActivateLeftController_m45E1F576A22B513AB86ADC92EAC3BDB512EA81B9(__this, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// if (m_Simulator.manipulatingRightController)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_9 = __this->get_m_Simulator_4();
		NullCheck(L_9);
		bool L_10;
		L_10 = XRDeviceSimulator_get_manipulatingRightController_mEB1B1E20F37A6307A2F88E8FFFE99964E26898B6(L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0055;
		}
	}
	{
		// OnActivateRightController();
		XRDeviceSimulatorUI_OnActivateRightController_mF4399484F44762200A20EB9FB627436C9FD07F7D(__this, /*hidden argument*/NULL);
	}

IL_0055:
	{
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnStopManipulationAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnStopManipulationAction_m7B133A7D3D5F54E98A8A683E8C23FE42628BDF3B (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D  ___context0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (context.phase.IsInProgress())
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBA28B019C1FFD8919377CEAC4EED5B8FD37A7830((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(&___context0), /*hidden argument*/NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_mEB534005411FDCF6FB88FEF96CFB13EB9120EBF4(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// OnActivateHeadsetDevice(m_Simulator.manipulatingFPS);
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_3 = __this->get_m_Simulator_4();
		NullCheck(L_3);
		bool L_4;
		L_4 = XRDeviceSimulator_get_manipulatingFPS_mB8E32C334A04E8796714F7F7B33306C3B6BDD9E5(L_3, /*hidden argument*/NULL);
		XRDeviceSimulatorUI_OnActivateHeadsetDevice_m57B314F67F9B6E01877E2E25BAFB64C080A37340(__this, L_4, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnToggleMouseTransformationModeAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnToggleMouseTransformationModeAction_m1AB4BB7CE7B3CC482C645C6452789D8A61CF0AAA (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D  ___context0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (context.phase.IsInProgress())
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBA28B019C1FFD8919377CEAC4EED5B8FD37A7830((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(&___context0), /*hidden argument*/NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_mEB534005411FDCF6FB88FEF96CFB13EB9120EBF4(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// OnSetMouseMode();
		XRDeviceSimulatorUI_OnSetMouseMode_mD6F63B48301C21A5AE7D7C216A418BA5FA91E7DD(__this, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnNegateModeAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnNegateModeAction_m727A9378C860688585C64B85E65227B95749D867 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D  ___context0, const RuntimeMethod* method)
{
	{
		// OnSetMouseMode();
		XRDeviceSimulatorUI_OnSetMouseMode_mD6F63B48301C21A5AE7D7C216A418BA5FA91E7DD(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnToggleCursorLockAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnToggleCursorLockAction_mC5E00ED0874F4EE5A694F073A6295BCFF1758D09 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D  ___context0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (context.phase.IsInProgress())
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBA28B019C1FFD8919377CEAC4EED5B8FD37A7830((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(&___context0), /*hidden argument*/NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_mEB534005411FDCF6FB88FEF96CFB13EB9120EBF4(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// OnCursorLockChanged();
		XRDeviceSimulatorUI_OnCursorLockChanged_m36CC117DA0F1A053D44E4BE11A3FEFA70B473709(__this, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnKeyboardXTranslateAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnKeyboardXTranslateAction_m1E58096115BE5404199E743DB5E090B6529F45CB (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D  ___context0, const RuntimeMethod* method)
{
	{
		// OnXAxisTranslatePerformed(context.phase.IsInProgress(), false);
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBA28B019C1FFD8919377CEAC4EED5B8FD37A7830((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(&___context0), /*hidden argument*/NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_mEB534005411FDCF6FB88FEF96CFB13EB9120EBF4(L_0, /*hidden argument*/NULL);
		XRDeviceSimulatorUI_OnXAxisTranslatePerformed_m2BCBF2DE15A9F23530EB5C6A0B91FABA2886589C(__this, L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnKeyboardYTranslateAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnKeyboardYTranslateAction_m17BD10C0A6324E03C94BCAB6C66899BB358DB235 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D  ___context0, const RuntimeMethod* method)
{
	{
		// OnYAxisTranslatePerformed(context.phase.IsInProgress());
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBA28B019C1FFD8919377CEAC4EED5B8FD37A7830((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(&___context0), /*hidden argument*/NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_mEB534005411FDCF6FB88FEF96CFB13EB9120EBF4(L_0, /*hidden argument*/NULL);
		XRDeviceSimulatorUI_OnYAxisTranslatePerformed_mC0AAFD6A9E96B0FA4B5E5DF09C68AA1C2E1058A0(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnKeyboardZTranslateAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnKeyboardZTranslateAction_m5F2D6FFC37D1206EDE95A9FE79A1A3D135E2B261 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D  ___context0, const RuntimeMethod* method)
{
	{
		// OnZAxisTranslatePerformed(context.phase.IsInProgress(), false);
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBA28B019C1FFD8919377CEAC4EED5B8FD37A7830((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(&___context0), /*hidden argument*/NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_mEB534005411FDCF6FB88FEF96CFB13EB9120EBF4(L_0, /*hidden argument*/NULL);
		XRDeviceSimulatorUI_OnZAxisTranslatePerformed_mBEF516CA16282EE73A99C5F7543820EA5689BDD9(__this, L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnRestingHandAxis2DAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnRestingHandAxis2DAction_m041709D75169B0201EC830210A3F77A6A615CB7F (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D  ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mCA43571B7A4D8DFA726F8D112A5CAC300AB51D1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// var restingHandAxis2DInput = Vector2.ClampMagnitude(context.ReadValue<Vector2>(), 1f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mCA43571B7A4D8DFA726F8D112A5CAC300AB51D1A((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(&___context0), /*hidden argument*/CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mCA43571B7A4D8DFA726F8D112A5CAC300AB51D1A_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_ClampMagnitude_m2D7D4180CE91CF2D6E2677BB01E7427EDCDBBAE3(L_0, (1.0f), /*hidden argument*/NULL);
		V_0 = L_1;
		// if (context.phase.IsInProgress())
		int32_t L_2;
		L_2 = CallbackContext_get_phase_mBA28B019C1FFD8919377CEAC4EED5B8FD37A7830((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(&___context0), /*hidden argument*/NULL);
		bool L_3;
		L_3 = InputExtensions_IsInProgress_mEB534005411FDCF6FB88FEF96CFB13EB9120EBF4(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0061;
		}
	}
	{
		// if (restingHandAxis2DInput.x != 0f)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		float L_6 = L_5.get_x_0();
		V_2 = (bool)((((int32_t)((((float)L_6) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		// OnXAxisTranslatePerformed(true, true);
		XRDeviceSimulatorUI_OnXAxisTranslatePerformed_m2BCBF2DE15A9F23530EB5C6A0B91FABA2886589C(__this, (bool)1, (bool)1, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// if (restingHandAxis2DInput.y != 0f)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = V_0;
		float L_9 = L_8.get_y_1();
		V_3 = (bool)((((int32_t)((((float)L_9) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		// OnZAxisTranslatePerformed(true, true);
		XRDeviceSimulatorUI_OnZAxisTranslatePerformed_mBEF516CA16282EE73A99C5F7543820EA5689BDD9(__this, (bool)1, (bool)1, /*hidden argument*/NULL);
	}

IL_005e:
	{
		goto IL_009b;
	}

IL_0061:
	{
		// if (restingHandAxis2DInput.x == 0f)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = V_0;
		float L_12 = L_11.get_x_0();
		V_4 = (bool)((((float)L_12) == ((float)(0.0f)))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_007e;
		}
	}
	{
		// OnXAxisTranslatePerformed(false, true);
		XRDeviceSimulatorUI_OnXAxisTranslatePerformed_m2BCBF2DE15A9F23530EB5C6A0B91FABA2886589C(__this, (bool)0, (bool)1, /*hidden argument*/NULL);
	}

IL_007e:
	{
		// if (restingHandAxis2DInput.y == 0f)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = V_0;
		float L_15 = L_14.get_y_1();
		V_5 = (bool)((((float)L_15) == ((float)(0.0f)))? 1 : 0);
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_009a;
		}
	}
	{
		// OnZAxisTranslatePerformed(false, true);
		XRDeviceSimulatorUI_OnZAxisTranslatePerformed_mBEF516CA16282EE73A99C5F7543820EA5689BDD9(__this, (bool)0, (bool)1, /*hidden argument*/NULL);
	}

IL_009a:
	{
	}

IL_009b:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnGripAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnGripAction_m45E73FA51550D4DE11A104DFE6BE0AC7AF814BE7 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D  ___context0, const RuntimeMethod* method)
{
	{
		// OnGripPerformed(context.phase.IsInProgress());
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBA28B019C1FFD8919377CEAC4EED5B8FD37A7830((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(&___context0), /*hidden argument*/NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_mEB534005411FDCF6FB88FEF96CFB13EB9120EBF4(L_0, /*hidden argument*/NULL);
		XRDeviceSimulatorUI_OnGripPerformed_m5B32E58AA4B24E29AB92E2F09B1451F987F910F8(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnTriggerAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnTriggerAction_mB3EF1DB08C567FE04B51F1B6D1954C1112B1952C (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D  ___context0, const RuntimeMethod* method)
{
	{
		// OnTriggerPerformed(context.phase.IsInProgress());
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBA28B019C1FFD8919377CEAC4EED5B8FD37A7830((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(&___context0), /*hidden argument*/NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_mEB534005411FDCF6FB88FEF96CFB13EB9120EBF4(L_0, /*hidden argument*/NULL);
		XRDeviceSimulatorUI_OnTriggerPerformed_m8CB39693191F301A385C5702521223D97F9346C2(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnMenuAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnMenuAction_mB8E35BFD5CF9BF6A5EDE4A51C15E75ECE8FEBAE6 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D  ___context0, const RuntimeMethod* method)
{
	{
		// OnMenuPerformed(context.phase.IsInProgress());
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBA28B019C1FFD8919377CEAC4EED5B8FD37A7830((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(&___context0), /*hidden argument*/NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_mEB534005411FDCF6FB88FEF96CFB13EB9120EBF4(L_0, /*hidden argument*/NULL);
		XRDeviceSimulatorUI_OnMenuPerformed_mD06215DCC32397C5D6D5AD2C62D42CE3F1898A7B(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnPrimaryButtonAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnPrimaryButtonAction_mB1E545F451EA49A225D5F3925D77ED033EE0831D (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D  ___context0, const RuntimeMethod* method)
{
	{
		// OnPrimaryButtonPerformed(context.phase.IsInProgress());
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBA28B019C1FFD8919377CEAC4EED5B8FD37A7830((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(&___context0), /*hidden argument*/NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_mEB534005411FDCF6FB88FEF96CFB13EB9120EBF4(L_0, /*hidden argument*/NULL);
		XRDeviceSimulatorUI_OnPrimaryButtonPerformed_mC8FF8F6F4A79DEBC46DF49FA39249FBA8020FF9E(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnSecondaryButtonAction(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnSecondaryButtonAction_m5FD8A0C52BC916FD9900C3BDC0AFDEFBE9AFA05B (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D  ___context0, const RuntimeMethod* method)
{
	{
		// OnSecondaryButtonPerformed(context.phase.IsInProgress());
		int32_t L_0;
		L_0 = CallbackContext_get_phase_mBA28B019C1FFD8919377CEAC4EED5B8FD37A7830((CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D *)(&___context0), /*hidden argument*/NULL);
		bool L_1;
		L_1 = InputExtensions_IsInProgress_mEB534005411FDCF6FB88FEF96CFB13EB9120EBF4(L_0, /*hidden argument*/NULL);
		XRDeviceSimulatorUI_OnSecondaryButtonPerformed_mF5F76702F25B35FC2ACF26F9A10F1EA921250A2B(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnSetMouseMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnSetMouseMode_mD6F63B48301C21A5AE7D7C216A418BA5FA91E7DD (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformationMode_tFAD711C19386573876EBDE687EA3E407CB1C191A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBA9CEB43D14830BEAAF5F87C6AAAD1A8A36A67F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B2_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B3_1 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B5_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B6_1 = NULL;
	{
		// m_MouseModeButtonText.text = m_Simulator.negateMode
		//     ? XRDeviceSimulator.Negate(m_Simulator.mouseTransformationMode).ToString()
		//     : m_Simulator.mouseTransformationMode.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_m_MouseModeButtonText_32();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_1 = __this->get_m_Simulator_4();
		NullCheck(L_1);
		bool L_2;
		L_2 = XRDeviceSimulator_get_negateMode_mBE6C1B3C4AC6536935ED6BBA2BE4E70A17BDF5A7_inline(L_1, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if (L_2)
		{
			G_B2_0 = L_0;
			goto IL_002f;
		}
	}
	{
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_3 = __this->get_m_Simulator_4();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = XRDeviceSimulator_get_mouseTransformationMode_m8BD4DE8F0E31B845095DCD38FFB84A294DA067B7_inline(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		RuntimeObject * L_5 = Box(TransformationMode_tFAD711C19386573876EBDE687EA3E407CB1C191A_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		V_0 = *(int32_t*)UnBox(L_5);
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_004d;
	}

IL_002f:
	{
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_7 = __this->get_m_Simulator_4();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = XRDeviceSimulator_get_mouseTransformationMode_m8BD4DE8F0E31B845095DCD38FFB84A294DA067B7_inline(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = XRDeviceSimulator_Negate_m9361EBE06C81B130313043FE796E938B21EAAD6A(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		RuntimeObject * L_10 = Box(TransformationMode_tFAD711C19386573876EBDE687EA3E407CB1C191A_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		V_0 = *(int32_t*)UnBox(L_10);
		G_B3_0 = L_11;
		G_B3_1 = G_B2_0;
	}

IL_004d:
	{
		NullCheck(G_B3_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B3_1, G_B3_0);
		// m_HeadsetLookButtonText.text =
		//     m_Simulator.mouseTransformationMode == XRDeviceSimulator.TransformationMode.Translate
		//         ? k_TranslateLookText
		//         : k_RotateLookText;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12 = __this->get_m_HeadsetLookButtonText_27();
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_13 = __this->get_m_Simulator_4();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = XRDeviceSimulator_get_mouseTransformationMode_m8BD4DE8F0E31B845095DCD38FFB84A294DA067B7_inline(L_13, /*hidden argument*/NULL);
		G_B4_0 = L_12;
		if (!L_14)
		{
			G_B5_0 = L_12;
			goto IL_006d;
		}
	}
	{
		G_B6_0 = _stringLiteralFBA9CEB43D14830BEAAF5F87C6AAAD1A8A36A67F;
		G_B6_1 = G_B4_0;
		goto IL_0072;
	}

IL_006d:
	{
		G_B6_0 = _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1;
		G_B6_1 = G_B5_0;
	}

IL_0072:
	{
		NullCheck(G_B6_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B6_1, G_B6_0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnCursorLockChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnCursorLockChanged_m36CC117DA0F1A053D44E4BE11A3FEFA70B473709 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B2_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B1_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B3_1 = NULL;
	{
		// m_CursorLockButton.color = Cursor.lockState == CursorLockMode.Locked ? selectedColor : buttonColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_m_CursorLockButton_30();
		int32_t L_1;
		L_1 = Cursor_get_lockState_mB6DDB8EBF42F6F14B0F87BBDF5F05AE183B63B70(/*hidden argument*/NULL);
		G_B1_0 = L_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			G_B2_0 = L_0;
			goto IL_0017;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = XRDeviceSimulatorUI_get_buttonColor_m3B82CC7EA2B4930260A85D387453E16B9B237730(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_001d;
	}

IL_0017:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = XRDeviceSimulatorUI_get_selectedColor_m87F7AA917ACF9C33AF892BE88068E6F7ABE9A1EC(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_001d:
	{
		NullCheck(G_B3_1);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnXAxisTranslatePerformed(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnXAxisTranslatePerformed_m2BCBF2DE15A9F23530EB5C6A0B91FABA2886589C (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, bool ___activated0, bool ___restingHand1, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * V_3 = NULL;
	bool V_4 = false;
	XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * V_5 = NULL;
	bool V_6 = false;
	XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * G_B6_0 = NULL;
	XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * G_B11_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B15_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B14_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B16_0;
	memset((&G_B16_0), 0, sizeof(G_B16_0));
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B16_1 = NULL;
	{
		// var active = activated;
		bool L_0 = ___activated0;
		V_0 = L_0;
		// if (!restingHand)
		bool L_1 = ___restingHand1;
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// m_XAxisActivated = activated;
		bool L_3 = ___activated0;
		__this->set_m_XAxisActivated_66(L_3);
		// active |= m_ZAxisActivated;
		bool L_4 = V_0;
		bool L_5 = __this->get_m_ZAxisActivated_67();
		V_0 = (bool)((int32_t)((int32_t)L_4|(int32_t)L_5));
	}

IL_001d:
	{
		// if (m_Simulator.manipulatingLeftController)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_6 = __this->get_m_Simulator_4();
		NullCheck(L_6);
		bool L_7;
		L_7 = XRDeviceSimulator_get_manipulatingLeftController_m63B1C83082E7CB9FF4A82EA66E7731490DA737A1(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		// var lController = restingHand ? m_RightController : m_LeftController;
		bool L_9 = ___restingHand1;
		if (L_9)
		{
			goto IL_0038;
		}
	}
	{
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_10 = __this->get_m_LeftController_38();
		G_B6_0 = L_10;
		goto IL_003e;
	}

IL_0038:
	{
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_11 = __this->get_m_RightController_40();
		G_B6_0 = L_11;
	}

IL_003e:
	{
		V_3 = G_B6_0;
		// lController.OnXAxisTranslatePerformed(active);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_12 = V_3;
		bool L_13 = V_0;
		NullCheck(L_12);
		XRDeviceSimulatorControllerUI_OnXAxisTranslatePerformed_m80AF4EB70AE05E3DA1BE17890CD92E847CD9D64D(L_12, L_13, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// if (m_Simulator.manipulatingRightController)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_14 = __this->get_m_Simulator_4();
		NullCheck(L_14);
		bool L_15;
		L_15 = XRDeviceSimulator_get_manipulatingRightController_mEB1B1E20F37A6307A2F88E8FFFE99964E26898B6(L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_0077;
		}
	}
	{
		// var rController = restingHand ? m_LeftController : m_RightController;
		bool L_17 = ___restingHand1;
		if (L_17)
		{
			goto IL_0065;
		}
	}
	{
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_18 = __this->get_m_RightController_40();
		G_B11_0 = L_18;
		goto IL_006b;
	}

IL_0065:
	{
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_19 = __this->get_m_LeftController_38();
		G_B11_0 = L_19;
	}

IL_006b:
	{
		V_5 = G_B11_0;
		// rController.OnXAxisTranslatePerformed(active);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_20 = V_5;
		bool L_21 = V_0;
		NullCheck(L_20);
		XRDeviceSimulatorControllerUI_OnXAxisTranslatePerformed_m80AF4EB70AE05E3DA1BE17890CD92E847CD9D64D(L_20, L_21, /*hidden argument*/NULL);
	}

IL_0077:
	{
		// if (m_Simulator.manipulatingFPS)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_22 = __this->get_m_Simulator_4();
		NullCheck(L_22);
		bool L_23;
		L_23 = XRDeviceSimulator_get_manipulatingFPS_mB8E32C334A04E8796714F7F7B33306C3B6BDD9E5(L_22, /*hidden argument*/NULL);
		V_6 = L_23;
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_00a5;
		}
	}
	{
		// m_HeadsetMoveButton.color = active ? selectedColor : buttonColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_25 = __this->get_m_HeadsetMoveButton_21();
		bool L_26 = V_0;
		G_B14_0 = L_25;
		if (L_26)
		{
			G_B15_0 = L_25;
			goto IL_0099;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_27;
		L_27 = XRDeviceSimulatorUI_get_buttonColor_m3B82CC7EA2B4930260A85D387453E16B9B237730(__this, /*hidden argument*/NULL);
		G_B16_0 = L_27;
		G_B16_1 = G_B14_0;
		goto IL_009f;
	}

IL_0099:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28;
		L_28 = XRDeviceSimulatorUI_get_selectedColor_m87F7AA917ACF9C33AF892BE88068E6F7ABE9A1EC(__this, /*hidden argument*/NULL);
		G_B16_0 = L_28;
		G_B16_1 = G_B15_0;
	}

IL_009f:
	{
		NullCheck(G_B16_1);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B16_1, G_B16_0);
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnYAxisTranslatePerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnYAxisTranslatePerformed_mC0AAFD6A9E96B0FA4B5E5DF09C68AA1C2E1058A0 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, bool ___activated0, const RuntimeMethod* method)
{
	bool V_0 = false;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B3_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B2_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B4_1 = NULL;
	{
		// if (m_Simulator.manipulatingFPS)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_0 = __this->get_m_Simulator_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = XRDeviceSimulator_get_manipulatingFPS_mB8E32C334A04E8796714F7F7B33306C3B6BDD9E5(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// m_HeadsetMoveButton.color = activated ? selectedColor : buttonColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = __this->get_m_HeadsetMoveButton_21();
		bool L_4 = ___activated0;
		G_B2_0 = L_3;
		if (L_4)
		{
			G_B3_0 = L_3;
			goto IL_0021;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = XRDeviceSimulatorUI_get_buttonColor_m3B82CC7EA2B4930260A85D387453E16B9B237730(__this, /*hidden argument*/NULL);
		G_B4_0 = L_5;
		G_B4_1 = G_B2_0;
		goto IL_0027;
	}

IL_0021:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = XRDeviceSimulatorUI_get_selectedColor_m87F7AA917ACF9C33AF892BE88068E6F7ABE9A1EC(__this, /*hidden argument*/NULL);
		G_B4_0 = L_6;
		G_B4_1 = G_B3_0;
	}

IL_0027:
	{
		NullCheck(G_B4_1);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B4_1, G_B4_0);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnZAxisTranslatePerformed(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnZAxisTranslatePerformed_mBEF516CA16282EE73A99C5F7543820EA5689BDD9 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, bool ___activated0, bool ___restingHand1, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * V_3 = NULL;
	bool V_4 = false;
	XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * V_5 = NULL;
	bool V_6 = false;
	XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * G_B6_0 = NULL;
	XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * G_B11_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B15_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B14_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B16_0;
	memset((&G_B16_0), 0, sizeof(G_B16_0));
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B16_1 = NULL;
	{
		// var active = activated;
		bool L_0 = ___activated0;
		V_0 = L_0;
		// if (!restingHand)
		bool L_1 = ___restingHand1;
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// m_ZAxisActivated = activated;
		bool L_3 = ___activated0;
		__this->set_m_ZAxisActivated_67(L_3);
		// active |= m_XAxisActivated;
		bool L_4 = V_0;
		bool L_5 = __this->get_m_XAxisActivated_66();
		V_0 = (bool)((int32_t)((int32_t)L_4|(int32_t)L_5));
	}

IL_001d:
	{
		// if (m_Simulator.manipulatingLeftController)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_6 = __this->get_m_Simulator_4();
		NullCheck(L_6);
		bool L_7;
		L_7 = XRDeviceSimulator_get_manipulatingLeftController_m63B1C83082E7CB9FF4A82EA66E7731490DA737A1(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		// var lController = restingHand ? m_RightController : m_LeftController;
		bool L_9 = ___restingHand1;
		if (L_9)
		{
			goto IL_0038;
		}
	}
	{
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_10 = __this->get_m_LeftController_38();
		G_B6_0 = L_10;
		goto IL_003e;
	}

IL_0038:
	{
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_11 = __this->get_m_RightController_40();
		G_B6_0 = L_11;
	}

IL_003e:
	{
		V_3 = G_B6_0;
		// lController.OnZAxisTranslatePerformed(active);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_12 = V_3;
		bool L_13 = V_0;
		NullCheck(L_12);
		XRDeviceSimulatorControllerUI_OnZAxisTranslatePerformed_m6CE8DF072B44AE102A5379B0417020E212339620(L_12, L_13, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// if (m_Simulator.manipulatingRightController)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_14 = __this->get_m_Simulator_4();
		NullCheck(L_14);
		bool L_15;
		L_15 = XRDeviceSimulator_get_manipulatingRightController_mEB1B1E20F37A6307A2F88E8FFFE99964E26898B6(L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_0077;
		}
	}
	{
		// var rController = restingHand ? m_LeftController : m_RightController;
		bool L_17 = ___restingHand1;
		if (L_17)
		{
			goto IL_0065;
		}
	}
	{
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_18 = __this->get_m_RightController_40();
		G_B11_0 = L_18;
		goto IL_006b;
	}

IL_0065:
	{
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_19 = __this->get_m_LeftController_38();
		G_B11_0 = L_19;
	}

IL_006b:
	{
		V_5 = G_B11_0;
		// rController.OnZAxisTranslatePerformed(active);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_20 = V_5;
		bool L_21 = V_0;
		NullCheck(L_20);
		XRDeviceSimulatorControllerUI_OnZAxisTranslatePerformed_m6CE8DF072B44AE102A5379B0417020E212339620(L_20, L_21, /*hidden argument*/NULL);
	}

IL_0077:
	{
		// if (m_Simulator.manipulatingFPS)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_22 = __this->get_m_Simulator_4();
		NullCheck(L_22);
		bool L_23;
		L_23 = XRDeviceSimulator_get_manipulatingFPS_mB8E32C334A04E8796714F7F7B33306C3B6BDD9E5(L_22, /*hidden argument*/NULL);
		V_6 = L_23;
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_00a5;
		}
	}
	{
		// m_HeadsetMoveButton.color = active ? selectedColor : buttonColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_25 = __this->get_m_HeadsetMoveButton_21();
		bool L_26 = V_0;
		G_B14_0 = L_25;
		if (L_26)
		{
			G_B15_0 = L_25;
			goto IL_0099;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_27;
		L_27 = XRDeviceSimulatorUI_get_buttonColor_m3B82CC7EA2B4930260A85D387453E16B9B237730(__this, /*hidden argument*/NULL);
		G_B16_0 = L_27;
		G_B16_1 = G_B14_0;
		goto IL_009f;
	}

IL_0099:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28;
		L_28 = XRDeviceSimulatorUI_get_selectedColor_m87F7AA917ACF9C33AF892BE88068E6F7ABE9A1EC(__this, /*hidden argument*/NULL);
		G_B16_0 = L_28;
		G_B16_1 = G_B15_0;
	}

IL_009f:
	{
		NullCheck(G_B16_1);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B16_1, G_B16_0);
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnMenuPerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnMenuPerformed_mD06215DCC32397C5D6D5AD2C62D42CE3F1898A7B (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, bool ___activated0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (m_Simulator.manipulatingLeftController)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_0 = __this->get_m_Simulator_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = XRDeviceSimulator_get_manipulatingLeftController_m63B1C83082E7CB9FF4A82EA66E7731490DA737A1(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// m_LeftController.OnMenu(activated);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_3 = __this->get_m_LeftController_38();
		bool L_4 = ___activated0;
		NullCheck(L_3);
		XRDeviceSimulatorControllerUI_OnMenu_mE8F0E9C8A3C7BEB310CE768B9B8A43584E3C6D89(L_3, L_4, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// if (m_Simulator.manipulatingRightController)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_5 = __this->get_m_Simulator_4();
		NullCheck(L_5);
		bool L_6;
		L_6 = XRDeviceSimulator_get_manipulatingRightController_mEB1B1E20F37A6307A2F88E8FFFE99964E26898B6(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		// m_RightController.OnMenu(activated);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_8 = __this->get_m_RightController_40();
		bool L_9 = ___activated0;
		NullCheck(L_8);
		XRDeviceSimulatorControllerUI_OnMenu_mE8F0E9C8A3C7BEB310CE768B9B8A43584E3C6D89(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnGripPerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnGripPerformed_m5B32E58AA4B24E29AB92E2F09B1451F987F910F8 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, bool ___activated0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (m_Simulator.manipulatingLeftController)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_0 = __this->get_m_Simulator_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = XRDeviceSimulator_get_manipulatingLeftController_m63B1C83082E7CB9FF4A82EA66E7731490DA737A1(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// m_LeftController.OnGrip(activated);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_3 = __this->get_m_LeftController_38();
		bool L_4 = ___activated0;
		NullCheck(L_3);
		XRDeviceSimulatorControllerUI_OnGrip_mC02D2F5FE6C6024B3E721FABDC9ED5D5B1F864F0(L_3, L_4, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// if (m_Simulator.manipulatingRightController)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_5 = __this->get_m_Simulator_4();
		NullCheck(L_5);
		bool L_6;
		L_6 = XRDeviceSimulator_get_manipulatingRightController_mEB1B1E20F37A6307A2F88E8FFFE99964E26898B6(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		// m_RightController.OnGrip(activated);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_8 = __this->get_m_RightController_40();
		bool L_9 = ___activated0;
		NullCheck(L_8);
		XRDeviceSimulatorControllerUI_OnGrip_mC02D2F5FE6C6024B3E721FABDC9ED5D5B1F864F0(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnTriggerPerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnTriggerPerformed_m8CB39693191F301A385C5702521223D97F9346C2 (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, bool ___activated0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (m_Simulator.manipulatingLeftController)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_0 = __this->get_m_Simulator_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = XRDeviceSimulator_get_manipulatingLeftController_m63B1C83082E7CB9FF4A82EA66E7731490DA737A1(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// m_LeftController.OnTrigger(activated);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_3 = __this->get_m_LeftController_38();
		bool L_4 = ___activated0;
		NullCheck(L_3);
		XRDeviceSimulatorControllerUI_OnTrigger_m31AAF4E9EA402F39865519B16DE99C8F39DBB1E8(L_3, L_4, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// if (m_Simulator.manipulatingRightController)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_5 = __this->get_m_Simulator_4();
		NullCheck(L_5);
		bool L_6;
		L_6 = XRDeviceSimulator_get_manipulatingRightController_mEB1B1E20F37A6307A2F88E8FFFE99964E26898B6(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		// m_RightController.OnTrigger(activated);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_8 = __this->get_m_RightController_40();
		bool L_9 = ___activated0;
		NullCheck(L_8);
		XRDeviceSimulatorControllerUI_OnTrigger_m31AAF4E9EA402F39865519B16DE99C8F39DBB1E8(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnPrimaryButtonPerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnPrimaryButtonPerformed_mC8FF8F6F4A79DEBC46DF49FA39249FBA8020FF9E (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, bool ___activated0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (m_Simulator.manipulatingLeftController)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_0 = __this->get_m_Simulator_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = XRDeviceSimulator_get_manipulatingLeftController_m63B1C83082E7CB9FF4A82EA66E7731490DA737A1(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// m_LeftController.OnPrimaryButton(activated);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_3 = __this->get_m_LeftController_38();
		bool L_4 = ___activated0;
		NullCheck(L_3);
		XRDeviceSimulatorControllerUI_OnPrimaryButton_m3DB2B50347C4518974B80DEB23F355B42BE88434(L_3, L_4, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// if (m_Simulator.manipulatingRightController)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_5 = __this->get_m_Simulator_4();
		NullCheck(L_5);
		bool L_6;
		L_6 = XRDeviceSimulator_get_manipulatingRightController_mEB1B1E20F37A6307A2F88E8FFFE99964E26898B6(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		// m_RightController.OnPrimaryButton(activated);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_8 = __this->get_m_RightController_40();
		bool L_9 = ___activated0;
		NullCheck(L_8);
		XRDeviceSimulatorControllerUI_OnPrimaryButton_m3DB2B50347C4518974B80DEB23F355B42BE88434(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::OnSecondaryButtonPerformed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI_OnSecondaryButtonPerformed_mF5F76702F25B35FC2ACF26F9A10F1EA921250A2B (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, bool ___activated0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (m_Simulator.manipulatingLeftController)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_0 = __this->get_m_Simulator_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = XRDeviceSimulator_get_manipulatingLeftController_m63B1C83082E7CB9FF4A82EA66E7731490DA737A1(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// m_LeftController.OnSecondaryButton(activated);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_3 = __this->get_m_LeftController_38();
		bool L_4 = ___activated0;
		NullCheck(L_3);
		XRDeviceSimulatorControllerUI_OnSecondaryButton_m5FAE619AF7096F44A0D3A39E1A4FE32C2F3BE5D1(L_3, L_4, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// if (m_Simulator.manipulatingRightController)
		XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * L_5 = __this->get_m_Simulator_4();
		NullCheck(L_5);
		bool L_6;
		L_6 = XRDeviceSimulator_get_manipulatingRightController_mEB1B1E20F37A6307A2F88E8FFFE99964E26898B6(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		// m_RightController.OnSecondaryButton(activated);
		XRDeviceSimulatorControllerUI_tDB0B633C5C374C36A5BFF7745242173B3E43769A * L_8 = __this->get_m_RightController_40();
		bool L_9 = ___activated0;
		NullCheck(L_8);
		XRDeviceSimulatorControllerUI_OnSecondaryButton_m5FAE619AF7096F44A0D3A39E1A4FE32C2F3BE5D1(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI__ctor_m9359B8D533CC454366CB96E47716C99D96B2E93B (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	{
		// bool m_IsMenuOpen = true;
		__this->set_m_IsMenuOpen_8((bool)1);
		// Color m_EnabledColor = Color.clear;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_clear_m399144A63869398B7F5B812201C2A92B84218FD2(/*hidden argument*/NULL);
		__this->set_m_EnabledColor_44(L_0);
		// Color m_DisabledColor = Color.clear;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_clear_m399144A63869398B7F5B812201C2A92B84218FD2(/*hidden argument*/NULL);
		__this->set_m_DisabledColor_47(L_1);
		// Color m_ButtonColor = Color.clear;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_get_clear_m399144A63869398B7F5B812201C2A92B84218FD2(/*hidden argument*/NULL);
		__this->set_m_ButtonColor_50(L_2);
		// Color m_DisabledButtonColor = Color.clear;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = Color_get_clear_m399144A63869398B7F5B812201C2A92B84218FD2(/*hidden argument*/NULL);
		__this->set_m_DisabledButtonColor_53(L_3);
		// Color m_SelectedColor = Color.clear;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Color_get_clear_m399144A63869398B7F5B812201C2A92B84218FD2(/*hidden argument*/NULL);
		__this->set_m_SelectedColor_56(L_4);
		// Color m_BackgroundColor = Color.clear;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = Color_get_clear_m399144A63869398B7F5B812201C2A92B84218FD2(/*hidden argument*/NULL);
		__this->set_m_BackgroundColor_59(L_5);
		// Color m_DeviceColor = Color.clear;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = Color_get_clear_m399144A63869398B7F5B812201C2A92B84218FD2(/*hidden argument*/NULL);
		__this->set_m_DeviceColor_62(L_6);
		// Color m_DisabledDeviceColor = Color.clear;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		L_7 = Color_get_clear_m399144A63869398B7F5B812201C2A92B84218FD2(/*hidden argument*/NULL);
		__this->set_m_DisabledDeviceColor_65(L_7);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.DeviceSimulator.XRDeviceSimulatorUI::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceSimulatorUI__cctor_m1CD67B9DB59C860640D060F4BD5F6C1BE5293694 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Color k_EnabledColorDark = new Color(0xC4 / 255f, 0xC4 / 255f, 0xC4 / 255f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_0), (0.768627465f), (0.768627465f), (0.768627465f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var))->set_k_EnabledColorDark_42(L_0);
		// static readonly Color k_EnabledColorLight = new Color(0x55/255f, 0x55/255f, 0x55/255f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_1), (0.333333343f), (0.333333343f), (0.333333343f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var))->set_k_EnabledColorLight_43(L_1);
		// static readonly Color k_DisabledColorDark = new Color(0xC4 / 255f, 0xC4 / 255f, 0xC4 / 255f, 0.5f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_2), (0.768627465f), (0.768627465f), (0.768627465f), (0.5f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var))->set_k_DisabledColorDark_45(L_2);
		// static readonly Color k_DisabledColorLight = new Color(0x55/255f, 0x55/255f, 0x55/255f, 0.5f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_3), (0.333333343f), (0.333333343f), (0.333333343f), (0.5f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var))->set_k_DisabledColorLight_46(L_3);
		// static readonly Color k_ButtonColorDark = new Color(0x55 / 255f, 0x55 / 255f, 0x55 / 255f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_4), (0.333333343f), (0.333333343f), (0.333333343f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var))->set_k_ButtonColorDark_48(L_4);
		// static readonly Color k_ButtonColorLight = new Color(0xE4/255f, 0xE4/255f, 0xE4/255f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_5), (0.894117653f), (0.894117653f), (0.894117653f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var))->set_k_ButtonColorLight_49(L_5);
		// static readonly Color k_DisabledButtonColorDark = new Color(0x55 / 255f, 0x55 / 255f, 0x55 / 255f, 0.5f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_6), (0.333333343f), (0.333333343f), (0.333333343f), (0.5f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var))->set_k_DisabledButtonColorDark_51(L_6);
		// static readonly Color k_DisabledButtonColorLight = new Color(0xE4 / 255f, 0xE4 / 255f, 0xE4 / 255f, 0.5f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_7), (0.894117653f), (0.894117653f), (0.894117653f), (0.5f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var))->set_k_DisabledButtonColorLight_52(L_7);
		// static readonly Color k_SelectedColorDark = new Color(0x4F / 255f, 0x65 / 255f, 0x7F / 255f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_8), (0.309803933f), (0.396078438f), (0.498039216f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var))->set_k_SelectedColorDark_54(L_8);
		// static readonly Color k_SelectedColorLight = new Color(0x96/255f, 0xC3/255f, 0xFB/255f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_9), (0.588235319f), (0.764705896f), (0.984313726f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var))->set_k_SelectedColorLight_55(L_9);
		// static readonly Color k_BackgroundColorDark = Color.black;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		L_10 = Color_get_black_mD8CAAC9E4B8C5C92A21D176E4AB2C521CFA0EF7F(/*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var))->set_k_BackgroundColorDark_57(L_10);
		// static readonly Color k_BackgroundColorLight = new Color(0xB6/255f, 0xB6/255f, 0xB6/255f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_11), (0.713725507f), (0.713725507f), (0.713725507f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var))->set_k_BackgroundColorLight_58(L_11);
		// static readonly Color k_DeviceColorDark = new Color(0x6E / 255f, 0x6E / 255f, 0x6E / 255f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_12), (0.431372553f), (0.431372553f), (0.431372553f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var))->set_k_DeviceColorDark_60(L_12);
		// static readonly Color k_DeviceColorLight = new Color(0xE4 / 255f, 0xE4 / 255f, 0xE4 / 255f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_13), (0.894117653f), (0.894117653f), (0.894117653f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var))->set_k_DeviceColorLight_61(L_13);
		// static readonly Color k_DisabledDeviceColorDark = new Color(0x58 / 255f, 0x58 / 255f, 0x58 / 255f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_14), (0.345098048f), (0.345098048f), (0.345098048f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var))->set_k_DisabledDeviceColorDark_63(L_14);
		// static readonly Color k_DisabledDeviceColorLight = new Color(0xA2 / 255f, 0xA2 / 255f, 0xA2 / 255f, 0.5f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_15), (0.635294139f), (0.635294139f), (0.635294139f), (0.5f), /*hidden argument*/NULL);
		((XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_StaticFields*)il2cpp_codegen_static_fields_for(XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C_il2cpp_TypeInfo_var))->set_k_DisabledDeviceColorLight_64(L_15);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_primaryButtonAction_mB7BCDBBE5D394E63B47E7D56CCF5C2E6270E96EF_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method)
{
	{
		// get => m_PrimaryButtonAction;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = __this->get_m_PrimaryButtonAction_37();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_secondaryButtonAction_m2AC50D0F1D73AC43041FD52CF9CBCE9E5EF1C8DC_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method)
{
	{
		// get => m_SecondaryButtonAction;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = __this->get_m_SecondaryButtonAction_38();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_gripAction_mF05561553B345B1DFD07289181E3DD6A118C41DA_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method)
{
	{
		// get => m_GripAction;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = __this->get_m_GripAction_35();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_triggerAction_m5C3F2192A90BCD7A3985AF9BC21CC8269A72ED3A_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method)
{
	{
		// get => m_TriggerAction;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = __this->get_m_TriggerAction_36();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_menuAction_m9021D9EA4B6A3F56E4A2718DF82A415883AFBF9E_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method)
{
	{
		// get => m_MenuAction;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = __this->get_m_MenuAction_39();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_axis2DAction_mA0760910F253A668B81C67762567DD1E231A2A61_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method)
{
	{
		// get => m_Axis2DAction;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = __this->get_m_Axis2DAction_33();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_restingHandAxis2DAction_m5D88E9D0730BDF46072583FE18CA75BEBB519A40_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method)
{
	{
		// get => m_RestingHandAxis2DAction;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = __this->get_m_RestingHandAxis2DAction_34();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * XRDeviceSimulatorUI_get_keyboardSprite_m6ECB45C904FD03FE35D5D4D41D2BBFC03BC29329_inline (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	{
		// internal Sprite keyboardSprite => m_KeyboardSprite;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0 = __this->get_m_KeyboardSprite_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_manipulateLeftAction_m02144C87B034B9AE5449FA1F548FD4EE81429096_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method)
{
	{
		// get => m_ManipulateLeftAction;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = __this->get_m_ManipulateLeftAction_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_manipulateRightAction_mF4CC07723038F377314185CD9FB5E90CD21586B6_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method)
{
	{
		// get => m_ManipulateRightAction;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = __this->get_m_ManipulateRightAction_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_toggleManipulateLeftAction_m3D80B979C61BDAD15783947F7EE29FC3386D5D7D_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method)
{
	{
		// get => m_ToggleManipulateLeftAction;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = __this->get_m_ToggleManipulateLeftAction_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_toggleManipulateRightAction_m2EE96B290EB34F752C22CCBA675E93F7712A5E7E_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method)
{
	{
		// get => m_ToggleManipulateRightAction;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = __this->get_m_ToggleManipulateRightAction_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_toggleManipulateBodyAction_m65C32387CB7A0DAEDBFD296D453D973BE3370CDF_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method)
{
	{
		// get => m_ToggleManipulateBodyAction;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = __this->get_m_ToggleManipulateBodyAction_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_manipulateHeadAction_mB90A2A2533E4221E89711C7BCC0A655C9693352B_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method)
{
	{
		// get => m_ManipulateHeadAction;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = __this->get_m_ManipulateHeadAction_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_cycleDevicesAction_mA4722D0384674C1025219F06F450444F4B68E431_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method)
{
	{
		// get => m_CycleDevicesAction;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = __this->get_m_CycleDevicesAction_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_stopManipulationAction_mD79372878D4BC093A37093D5EB26881F5FDE8300_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method)
{
	{
		// get => m_StopManipulationAction;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = __this->get_m_StopManipulationAction_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_toggleMouseTransformationModeAction_m4FCF9DC51EF09D4E76FB15C272AE843C2CD920DC_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method)
{
	{
		// get => m_ToggleMouseTransformationModeAction;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = __this->get_m_ToggleMouseTransformationModeAction_23();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_negateModeAction_m164521874C4A2FAF4A452D9CF4EB077E98A4DCE9_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method)
{
	{
		// get => m_NegateModeAction;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = __this->get_m_NegateModeAction_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_toggleCursorLockAction_m2D03DF881EA5AFAC578B1565605E18910F4723A1_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method)
{
	{
		// get => m_ToggleCursorLockAction;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = __this->get_m_ToggleCursorLockAction_29();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_keyboardXTranslateAction_m2BD28113DD84574FEAD0B749445C29250D79D94F_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method)
{
	{
		// get => m_KeyboardXTranslateAction;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = __this->get_m_KeyboardXTranslateAction_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_keyboardYTranslateAction_mA6A0EDA7E25CCDD339C876C48C12FA26F93F59B7_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method)
{
	{
		// get => m_KeyboardYTranslateAction;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = __this->get_m_KeyboardYTranslateAction_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * XRDeviceSimulator_get_keyboardZTranslateAction_mE87380FD43FCDE70B544F5AAB37428BF62202AF1_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method)
{
	{
		// get => m_KeyboardZTranslateAction;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = __this->get_m_KeyboardZTranslateAction_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRDeviceSimulator_get_mouseTransformationMode_m8BD4DE8F0E31B845095DCD38FFB84A294DA067B7_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method)
{
	{
		// public TransformationMode mouseTransformationMode { get; set; } = TransformationMode.Rotate;
		int32_t L_0 = __this->get_U3CmouseTransformationModeU3Ek__BackingField_71();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * InputControl_get_device_m7B8D4A5F3C7C11E4FE7239692961C434C7CCF9E1_inline (InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * __this, const RuntimeMethod* method)
{
	{
		// public InputDevice device => m_Device;
		InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * L_0 = __this->get_m_Device_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * XRDeviceSimulatorUI_get_mouseSprite_mBE854019C673238D182525DE933E00878977D559_inline (XRDeviceSimulatorUI_t5572C15658BCD66BD6E1A665E94029B9F0D61C8C * __this, const RuntimeMethod* method)
{
	{
		// internal Sprite mouseSprite => m_MouseSprite;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0 = __this->get_m_MouseSprite_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRDeviceSimulator_get_negateMode_mBE6C1B3C4AC6536935ED6BBA2BE4E70A17BDF5A7_inline (XRDeviceSimulator_t0EDF8E0310ED3B76390C014060AB6C29E1A53825 * __this, const RuntimeMethod* method)
{
	{
		// public bool negateMode { get; private set; }
		bool L_0 = __this->get_U3CnegateModeU3Ek__BackingField_72();
		return L_0;
	}
}
