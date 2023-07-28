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
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E;
// System.Action`1<UnityEngine.XR.InputDevice>
struct Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupRegisteredEventArgs>
struct Action_1_t47B49096A3F3DD81951D8486B69487104F4AA2F7;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupUnregisteredEventArgs>
struct Action_1_t7A87D8669B23C029E3558AC726CF997A94F23E71;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct Action_1_t6051DEDF984988738563FB98BD7D78AD81A0C77D;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct Action_1_tE6C3262B5BB25E9A20BA4358C5687205008A1261;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem>
struct Action_1_t84833279C5597E1E0FE303CF3065416470244C93;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>
struct Action_1_t86411888FFBF948F6F03B645D9DA11165B50C96F;
// System.Action`1<Unity.Mathematics.float3>
struct Action_1_t59633D5754271108E50B86A3AE18D14982D2D472;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81;
// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>
struct Action_2_tA58D913EBCC7FD3E95DEC877EDB4363CD3051DF4;
// System.Action`2<System.Object,System.Int32Enum>
struct Action_2_t961B8FC40C595B3E8948D3CB85E51EB90540D7EF;
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<Unity.Mathematics.float3>
struct BindableVariableBase_1_t1567FA968C8EC72C6319A892236CFAAF828710AB;
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single>
struct BindableVariable_1_t641E63CD40F300CB5D8FEEF146957925F9A9A3FD;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,System.Single>
struct Dictionary_2_t86132C0F8B31101EE4D1A23B71484DB7D3AD6F35;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose>
struct Dictionary_2_t6A653984EB988FC39CFB8D564C2AC1D6FA223119;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter>
struct ExposedRegistrationList_1_t5ECEBE78A1A1B74E793C57E99502825849754A91;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter>
struct ExposedRegistrationList_1_t2925F032505D027FCBA7F35721D8B3461BE44E08;
// System.Func`3<Unity.Mathematics.float3,Unity.Mathematics.float3,System.Boolean>
struct Func_3_tFE0A54A2778926FD6B7EEB58825062D0BD8CC9B2;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct HashSetList_1_t05E59557D5A33180E62364E2B7D7B9494206C217;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionStrengthInteractable>
struct HashSetList_1_t214A30468B56AFA2290A752D5BF63D41095E02A2;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct HashSetList_1_t069B6D38EDE7FCBD4A12B9E50E9EA6F33FFB5A84;
// System.Collections.Generic.HashSet`1<UnityEngine.Collider>
struct HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct LinkedPool_1_tE2753A4A1780F82E95F490886556F9A2E579A0A2;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs>
struct LinkedPool_1_tBAA3185B83FAC3FF354A3FB48E8BEDDD52ED54A5;
// System.Collections.Generic.List`1<Unity.XR.CoreUtils.Bindings.IEventBinding>
struct List_1_tF66C076E6E583E99BAB18F6263089E397479B065;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable>
struct List_1_t9B3FEB201619069FD56EE104A4B4CC597EB7F99A;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>
struct List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct List_1_t0EDE7B646794983AD89A3E567022A7A1C17FB365;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct List_1_tA0AA68EBEDA30BFC60B674328ADD3173B39F3B23;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct List_1_t471EBB9BADE4A0B8711AC39DEF94BC759D83FC6E;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9D216521E6A213FF8562D215598D336ABB5474F4;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable>
struct List_1_t8F9C188959ECAB5554BCCA621026A2CC5EE3DE91;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint>
struct List_1_t8F4B8FD04A1AA2BC3EDCB13F4EB43036E073DBE8;
// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>
struct RegistrationList_1_t74EC1F9716A3D2DFF8076D934B6D948E3CC3B395;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1<Unity.Mathematics.float3>
struct TweenableVariableAsyncBase_1_t0964B044416FEA2F724DE35FE65712594E80649D;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.Mathematics.float3>
struct TweenableVariableBase_1_t211ADF995AD7DF7DF484BB8E09E4EE1DCEFF73AF;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t94B67181746C0497C7552A3A1A7B603CF7589E44;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityAction_1_tD7929AD3E8F3644E9E0C9C7590E7B967E96F5783;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t793F3D070F12FF57919C6FA8BDDA742A3D75773D;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityEvent_1_tC7D1BD63B6A342C8CAF366C3242C680CC371BE61;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_t8054A94E13920B6EAD3A3ACE9E49CCEB297F5292;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.XR.Interaction.Toolkit.IXRGroupMember[]
struct IXRGroupMemberU5BU5D_tCCBD4AAC89936993CAED6A9DE25C793BF55DFB24;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_tFBF775077101E34ED6C54C4468F6E0722ECB2EF6;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tE05D1214F0F949DC3A889F8DB4B7A68A3089F6D6;
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t1EAE8433C8EF7C76894673801EE0EE9F6833E9A4;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider
struct ActionBasedContinuousMoveProvider_tA1E91E01A6936255752856265BCBFBDBA093293A;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager
struct ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// Unity.XR.CoreUtils.Bindings.BindingsGroup
struct BindingsGroup_tFD7DAAAD7DD40D8180050DA4BE2BF93754B4F2AE;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.CharacterController
struct CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase
struct ContinuousMoveProviderBase_tEEA003EAE25A3AAEEF9FF9B39FA30EE046059044;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider
struct DynamicMoveProvider_t8B602D8A503C9409E356CFD397192F178225DC72;
// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager
struct GazeInputManager_t066DD55A5B5C68778F240D14E196FEE676998A7A;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Unity.XR.CoreUtils.Bindings.IEventBinding
struct IEventBinding_t0FC1B80E0BB54741B1CB6C375B1E098260E14731;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.IPokeStateDataProvider
struct IPokeStateDataProvider_t8CBEF15D28B76453F7F2612922899EA7D641040A;
// UnityEngine.XR.Interaction.Toolkit.IXRGroupMember
struct IXRGroupMember_tF2EA812394F9D6A074A0B7CCC1004DD117A0C639;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractable
struct IXRInteractable_t55C14481D43774E6E55842D0E9FACD38350FC2E8;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup
struct IXRInteractionGroup_tA8651C20C763C2415824FE1A798D26D33F2FD088;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractor
struct IXRInteractor_t5C1C6907DC8A4085FDEF3DCADEBACEB00B1EA27A;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable
struct IXRSelectInteractable_t6DEF4FD20BE3330B8877118E4ED4EF88320AC930;
// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter
struct IXRTargetFilter_t491C54D9FB31C6F0D667A296B524878605495475;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText
struct IncrementUIText_tA3C6CD00B0EF979DD2366CDD0D227ACD401F5BFA;
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
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.XR.Interaction.Toolkit.LocomotionProvider
struct LocomotionProvider_tF07C5527C6B8CDB38B435E8EDC50DF8CA86C6448;
// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem
struct LocomotionSystem_tEF4F8D19A639BFEBBD4C52AE52AB74D337BB4C5D;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.XR.Interaction.Toolkit.UI.RegisteredUIInteractorCache
struct RegisteredUIInteractorCache_tC27FB1D8B4497ED9031EBC4B283DC395E15DABCF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_tEB89AEF4AAB84886C278347B17FCA2C4C3C956DE;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t5BD68DE25AAF50453DF01C76A1A637D3187F264E;
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
// UnityEngine.XR.Interaction.Toolkit.Utilities.TriggerContactMonitor
struct TriggerContactMonitor_t041FDA658746E866D9AD6C84F039343A1AD51CB5;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.Vector3TweenableVariable
struct Vector3TweenableVariable_tED608C05E502A2D74AC2E7031CC90D00D92C9917;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5;
// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t3CC6EAD1F83B61B2E06AC2D1575A289CCD6437AF;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F;
// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter
struct XRBaseTargetFilter_t001E08BCBD22D6BC11D71ADBE870533A84B5C31C;
// UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor
struct XRDirectInteractor_t2F00E9B79629EFA648D4DF02F8FF034DD99812D5;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup
struct XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4;
// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent
struct XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98;
// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance
struct XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC;
// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
struct XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A;
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__31
struct U3COnAfterInteractionEventsU3Ed__31_tA2C50022A2D30059BB0285E87EE43DECF8920956;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/RaycastHitComparer
struct RaycastHitComparer_t209097E1021D62724BE24F45D1DF2A977B591EDE;

IL2CPP_EXTERN_C RuntimeClass* ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t59633D5754271108E50B86A3AE18D14982D2D472_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t86411888FFBF948F6F03B645D9DA11165B50C96F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tA58D913EBCC7FD3E95DEC877EDB4363CD3051DF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BindingsGroup_tFD7DAAAD7DD40D8180050DA4BE2BF93754B4F2AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPokeStateDataProvider_t8CBEF15D28B76453F7F2612922899EA7D641040A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyBindableVariable_1_tC06DA62C68C80ADDFC2FE6A1351EDAD31282DC33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputSystem_tB2E105FFA04BBFEF25E381E9FBBE7DA78BB18380_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MovementDirection_tED2EC5790F5B09C089825B7F7E1B0A0A5CEB17B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnAfterInteractionEventsU3Ed__31_tA2C50022A2D30059BB0285E87EE43DECF8920956_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t94B67181746C0497C7552A3A1A7B603CF7589E44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tD7929AD3E8F3644E9E0C9C7590E7B967E96F5783_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3TweenableVariable_tED608C05E502A2D74AC2E7031CC90D00D92C9917_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral011D3DCC095E581ECDB235DA85D0318CB7DAE281;
IL2CPP_EXTERN_C String_t* _stringLiteral08922C02E680D90FAAB0862833A88225C5A1F397;
IL2CPP_EXTERN_C String_t* _stringLiteral1109D191766120E6AE6C1E227D686E0DF3130138;
IL2CPP_EXTERN_C String_t* _stringLiteral675D495E61C139628601D1F560A558803C58CB67;
IL2CPP_EXTERN_C String_t* _stringLiteral91BEF5D9E8C19A7BAA9335746C74FFE9F0A218C1;
IL2CPP_EXTERN_C String_t* _stringLiteralA3FB88DDD46531AE82CBA3C68DE5F2B43578B1DA;
IL2CPP_EXTERN_C String_t* _stringLiteralAE556C5D923A68B00D17767856C66003D52D6CEC;
IL2CPP_EXTERN_C String_t* _stringLiteralCAC9FA4EA913C7FEEEFEEA8D8C3FEF0ADF872886;
IL2CPP_EXTERN_C String_t* _stringLiteralD689EACA9A810383FB2DD66A0BB9FAE341BDC5F6;
IL2CPP_EXTERN_C String_t* _stringLiteralF35C02D0118C69B6ADE22DDE2F7B35FDD2B1AD7C;
IL2CPP_EXTERN_C const RuntimeMethod* ActionBasedControllerManager_OnCancelTeleport_m9AB7C027FA810AB29241AE6B45FB0BE37672BB0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActionBasedControllerManager_OnRaySelectEntered_m67E441C036776297554DCF1B31212A7A1EDC8EF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActionBasedControllerManager_OnRaySelectExited_m89533D6795CCF346FDEFBEE08949011C930D09A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActionBasedControllerManager_OnStartTeleport_mF1134B8F8B1C1F07D92D9AD994C06C8495D6B215_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m07FF556D7B40C6C60B7A93C2ADBD5215ED162551_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m7E84356074E72345303580C158E3FCF0BB703260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mBF67781D64A58A12B7F2B0B4949711B2BB69919D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m11077C7022CE6CBAAAC763380F883C54AA772954_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BindableVariableBase_1_Subscribe_mBB14D62DDCA115C882CAF39FA7C29D969425935B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisIPokeStateDataProvider_t8CBEF15D28B76453F7F2612922899EA7D641040A_mBB9E9686DECFE37063B1E30A9FC022BCEEB7F2D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2254852747D86D319AB23DAC16B3E59A9726F8F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7B98E1E5167F455581477D2C8285D0447A53FCCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE0FA132D78425C004BD2F06C3F96F23E84D039A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GazeInputManager_OnDeviceChange_m0A9B99033439B1E79ABB3DD86D7A5BBFCDF8B982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GazeInputManager_OnDeviceConnected_m9AE8B0F8728D058A01832E1B7A55D440C3105DC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m55B41842E98953761E95E07523F94EA16C7834D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2AFFB86C7A3ED83885BD69DD46534436966EBB48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0EB8130F8F618CD66D8635BF535EC28E90DD1675_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m60F63519705ABA5BD6C0197C020C0AFBFD655EE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArray_1_GetEnumerator_m4DB2F36A677C515C0826FECFB55A531029BE8EF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenableVariableAsyncBase_1_Dispose_m7F04550044E1B7C7C8D3677152F64CFC4552EE2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenableVariableBase_1_HandleTween_m76840F115C312908B57559DC90FD2DDD85617472_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenableVariableBase_1_set_target_mA1AE83F0B29D2D881A099C03217C8429D419F174_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnAfterInteractionEventsU3Ed__31_System_Collections_IEnumerator_Reset_m9EFD83E81ECE8E0F1B0A85074A70C023CE70D514_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_mA4D71D6981C540F8442974C5E02BCC92128EAEA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_mD92F2074D1F4BE70CE631962FA9781DC50A652A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mB17050568D58A879D64EE283A868EF7FCFBE0159_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mD52E08F240BDB2B0569328F9300CDA17CA9E9C97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m7DAB81E8D3103C1E8EAC392EC56E6F7CD62853D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_mE5B6E24B4CA6C6434448A0DFEEF593BD995652A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPokeFollowAffordance_OnPokeStateDataUpdated_m2BB3AAB9FD8A31E16A76BCE02C7C433D53E0D3D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPokeFollowAffordance_OnTransformTweenableVariableUpdated_m8F467B393BD078E4E18BC2C74A33689E27D88476_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t0D573034690F6E68092BFD9D39C04BEC7F41BBF9 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>
struct List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IXRGroupMemberU5BU5D_tCCBD4AAC89936993CAED6A9DE25C793BF55DFB24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA, ____items_1)); }
	inline IXRGroupMemberU5BU5D_tCCBD4AAC89936993CAED6A9DE25C793BF55DFB24* get__items_1() const { return ____items_1; }
	inline IXRGroupMemberU5BU5D_tCCBD4AAC89936993CAED6A9DE25C793BF55DFB24** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IXRGroupMemberU5BU5D_tCCBD4AAC89936993CAED6A9DE25C793BF55DFB24* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____items_1)); }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* get__items_1() const { return ____items_1; }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
struct BaseInteractionEventArgs_t0C66D1C53D051664FAE1FF62C7CDCC6E68219CFE  : public RuntimeObject
{
public:
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractor UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactorObject>k__BackingField
	RuntimeObject* ___U3CinteractorObjectU3Ek__BackingField_0;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactableObject>k__BackingField
	RuntimeObject* ___U3CinteractableObjectU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CinteractorObjectU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseInteractionEventArgs_t0C66D1C53D051664FAE1FF62C7CDCC6E68219CFE, ___U3CinteractorObjectU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CinteractorObjectU3Ek__BackingField_0() const { return ___U3CinteractorObjectU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CinteractorObjectU3Ek__BackingField_0() { return &___U3CinteractorObjectU3Ek__BackingField_0; }
	inline void set_U3CinteractorObjectU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CinteractorObjectU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinteractorObjectU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinteractableObjectU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseInteractionEventArgs_t0C66D1C53D051664FAE1FF62C7CDCC6E68219CFE, ___U3CinteractableObjectU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CinteractableObjectU3Ek__BackingField_1() const { return ___U3CinteractableObjectU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CinteractableObjectU3Ek__BackingField_1() { return &___U3CinteractableObjectU3Ek__BackingField_1; }
	inline void set_U3CinteractableObjectU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CinteractableObjectU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinteractableObjectU3Ek__BackingField_1), (void*)value);
	}
};


// Unity.XR.CoreUtils.Bindings.BindingsGroup
struct BindingsGroup_tFD7DAAAD7DD40D8180050DA4BE2BF93754B4F2AE  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Unity.XR.CoreUtils.Bindings.IEventBinding> Unity.XR.CoreUtils.Bindings.BindingsGroup::m_Bindings
	List_1_tF66C076E6E583E99BAB18F6263089E397479B065 * ___m_Bindings_0;

public:
	inline static int32_t get_offset_of_m_Bindings_0() { return static_cast<int32_t>(offsetof(BindingsGroup_tFD7DAAAD7DD40D8180050DA4BE2BF93754B4F2AE, ___m_Bindings_0)); }
	inline List_1_tF66C076E6E583E99BAB18F6263089E397479B065 * get_m_Bindings_0() const { return ___m_Bindings_0; }
	inline List_1_tF66C076E6E583E99BAB18F6263089E397479B065 ** get_address_of_m_Bindings_0() { return &___m_Bindings_0; }
	inline void set_m_Bindings_0(List_1_tF66C076E6E583E99BAB18F6263089E397479B065 * value)
	{
		___m_Bindings_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Bindings_0), (void*)value);
	}
};


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


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__31
struct U3COnAfterInteractionEventsU3Ed__31_tA2C50022A2D30059BB0285E87EE43DECF8920956  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__31::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__31::<>4__this
	ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COnAfterInteractionEventsU3Ed__31_tA2C50022A2D30059BB0285E87EE43DECF8920956, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3COnAfterInteractionEventsU3Ed__31_tA2C50022A2D30059BB0285E87EE43DECF8920956, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3COnAfterInteractionEventsU3Ed__31_tA2C50022A2D30059BB0285E87EE43DECF8920956, ___U3CU3E4__this_2)); }
	inline ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>
struct Enumerator_tD1AA7B3BA0B028284BEC7AB59A86AEA47553FF2C 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_Array
	InputDeviceU5BU5D_tE05D1214F0F949DC3A889F8DB4B7A68A3089F6D6* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_Index
	int32_t ___m_Index_3;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_tD1AA7B3BA0B028284BEC7AB59A86AEA47553FF2C, ___m_Array_0)); }
	inline InputDeviceU5BU5D_tE05D1214F0F949DC3A889F8DB4B7A68A3089F6D6* get_m_Array_0() const { return ___m_Array_0; }
	inline InputDeviceU5BU5D_tE05D1214F0F949DC3A889F8DB4B7A68A3089F6D6** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(InputDeviceU5BU5D_tE05D1214F0F949DC3A889F8DB4B7A68A3089F6D6* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IndexStart_1() { return static_cast<int32_t>(offsetof(Enumerator_tD1AA7B3BA0B028284BEC7AB59A86AEA47553FF2C, ___m_IndexStart_1)); }
	inline int32_t get_m_IndexStart_1() const { return ___m_IndexStart_1; }
	inline int32_t* get_address_of_m_IndexStart_1() { return &___m_IndexStart_1; }
	inline void set_m_IndexStart_1(int32_t value)
	{
		___m_IndexStart_1 = value;
	}

	inline static int32_t get_offset_of_m_IndexEnd_2() { return static_cast<int32_t>(offsetof(Enumerator_tD1AA7B3BA0B028284BEC7AB59A86AEA47553FF2C, ___m_IndexEnd_2)); }
	inline int32_t get_m_IndexEnd_2() const { return ___m_IndexEnd_2; }
	inline int32_t* get_address_of_m_IndexEnd_2() { return &___m_IndexEnd_2; }
	inline void set_m_IndexEnd_2(int32_t value)
	{
		___m_IndexEnd_2 = value;
	}

	inline static int32_t get_offset_of_m_Index_3() { return static_cast<int32_t>(offsetof(Enumerator_tD1AA7B3BA0B028284BEC7AB59A86AEA47553FF2C, ___m_Index_3)); }
	inline int32_t get_m_Index_3() const { return ___m_Index_3; }
	inline int32_t* get_address_of_m_Index_3() { return &___m_Index_3; }
	inline void set_m_Index_3(int32_t value)
	{
		___m_Index_3 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<System.Object>
struct Enumerator_tF5F7C66D929E846719C4FE7803DFDC7B69575883 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_Array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_Index
	int32_t ___m_Index_3;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_tF5F7C66D929E846719C4FE7803DFDC7B69575883, ___m_Array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_Array_0() const { return ___m_Array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IndexStart_1() { return static_cast<int32_t>(offsetof(Enumerator_tF5F7C66D929E846719C4FE7803DFDC7B69575883, ___m_IndexStart_1)); }
	inline int32_t get_m_IndexStart_1() const { return ___m_IndexStart_1; }
	inline int32_t* get_address_of_m_IndexStart_1() { return &___m_IndexStart_1; }
	inline void set_m_IndexStart_1(int32_t value)
	{
		___m_IndexStart_1 = value;
	}

	inline static int32_t get_offset_of_m_IndexEnd_2() { return static_cast<int32_t>(offsetof(Enumerator_tF5F7C66D929E846719C4FE7803DFDC7B69575883, ___m_IndexEnd_2)); }
	inline int32_t get_m_IndexEnd_2() const { return ___m_IndexEnd_2; }
	inline int32_t* get_address_of_m_IndexEnd_2() { return &___m_IndexEnd_2; }
	inline void set_m_IndexEnd_2(int32_t value)
	{
		___m_IndexEnd_2 = value;
	}

	inline static int32_t get_offset_of_m_Index_3() { return static_cast<int32_t>(offsetof(Enumerator_tF5F7C66D929E846719C4FE7803DFDC7B69575883, ___m_Index_3)); }
	inline int32_t get_m_Index_3() const { return ___m_Index_3; }
	inline int32_t* get_address_of_m_Index_3() { return &___m_Index_3; }
	inline void set_m_Index_3(int32_t value)
	{
		___m_Index_3 = value;
	}
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


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>
struct ReadOnlyArray_1_tACB506541C5CC2CCA16D8065F5F949D9874C78D0 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputDeviceU5BU5D_tE05D1214F0F949DC3A889F8DB4B7A68A3089F6D6* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tACB506541C5CC2CCA16D8065F5F949D9874C78D0, ___m_Array_0)); }
	inline InputDeviceU5BU5D_tE05D1214F0F949DC3A889F8DB4B7A68A3089F6D6* get_m_Array_0() const { return ___m_Array_0; }
	inline InputDeviceU5BU5D_tE05D1214F0F949DC3A889F8DB4B7A68A3089F6D6** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(InputDeviceU5BU5D_tE05D1214F0F949DC3A889F8DB4B7A68A3089F6D6* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tACB506541C5CC2CCA16D8065F5F949D9874C78D0, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tACB506541C5CC2CCA16D8065F5F949D9874C78D0, ___m_Length_2)); }
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


// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t793F3D070F12FF57919C6FA8BDDA742A3D75773D  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t793F3D070F12FF57919C6FA8BDDA742A3D75773D, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityEvent_1_tC7D1BD63B6A342C8CAF366C3242C680CC371BE61  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tC7D1BD63B6A342C8CAF366C3242C680CC371BE61, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443 
{
public:
	// System.Boolean UnityEngine.InputSystem.InputActionProperty::m_UseReference
	bool ___m_UseReference_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::m_Action
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * ___m_Action_1;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.InputSystem.InputActionProperty::m_Reference
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_Reference_2;

public:
	inline static int32_t get_offset_of_m_UseReference_0() { return static_cast<int32_t>(offsetof(InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443, ___m_UseReference_0)); }
	inline bool get_m_UseReference_0() const { return ___m_UseReference_0; }
	inline bool* get_address_of_m_UseReference_0() { return &___m_UseReference_0; }
	inline void set_m_UseReference_0(bool value)
	{
		___m_UseReference_0 = value;
	}

	inline static int32_t get_offset_of_m_Action_1() { return static_cast<int32_t>(offsetof(InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443, ___m_Action_1)); }
	inline InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * get_m_Action_1() const { return ___m_Action_1; }
	inline InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B ** get_address_of_m_Action_1() { return &___m_Action_1; }
	inline void set_m_Action_1(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * value)
	{
		___m_Action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Reference_2() { return static_cast<int32_t>(offsetof(InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443, ___m_Reference_2)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_Reference_2() const { return ___m_Reference_2; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_Reference_2() { return &___m_Reference_2; }
	inline void set_m_Reference_2(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_Reference_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Reference_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443_marshaled_pinvoke
{
	int32_t ___m_UseReference_0;
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * ___m_Action_1;
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_Reference_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443_marshaled_com
{
	int32_t ___m_UseReference_0;
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * ___m_Action_1;
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_Reference_2;
};

// UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E 
{
public:
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;

public:
	inline static int32_t get_offset_of_m_DeviceId_1() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E, ___m_DeviceId_1)); }
	inline uint64_t get_m_DeviceId_1() const { return ___m_DeviceId_1; }
	inline uint64_t* get_address_of_m_DeviceId_1() { return &___m_DeviceId_1; }
	inline void set_m_DeviceId_1(uint64_t value)
	{
		___m_DeviceId_1 = value;
	}

	inline static int32_t get_offset_of_m_Initialized_2() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E, ___m_Initialized_2)); }
	inline bool get_m_Initialized_2() const { return ___m_Initialized_2; }
	inline bool* get_address_of_m_Initialized_2() { return &___m_Initialized_2; }
	inline void set_m_Initialized_2(bool value)
	{
		___m_Initialized_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
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


// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
struct InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47 
{
public:
	// System.UInt32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Bits
	uint32_t ___m_Bits_0;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Mask
	int32_t ___m_Mask_1;

public:
	inline static int32_t get_offset_of_m_Bits_0() { return static_cast<int32_t>(offsetof(InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47, ___m_Bits_0)); }
	inline uint32_t get_m_Bits_0() const { return ___m_Bits_0; }
	inline uint32_t* get_address_of_m_Bits_0() { return &___m_Bits_0; }
	inline void set_m_Bits_0(uint32_t value)
	{
		___m_Bits_0 = value;
	}

	inline static int32_t get_offset_of_m_Mask_1() { return static_cast<int32_t>(offsetof(InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47, ___m_Mask_1)); }
	inline int32_t get_m_Mask_1() const { return ___m_Mask_1; }
	inline int32_t* get_address_of_m_Mask_1() { return &___m_Mask_1; }
	inline void set_m_Mask_1(int32_t value)
	{
		___m_Mask_1 = value;
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

// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Mathf
struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194__padding[1];
	};

public:
};


// UnityEngine.PhysicsScene
struct PhysicsScene_tEDFCAA935450E8EBB7732353D9AA264A5F711678 
{
public:
	// System.Int32 UnityEngine.PhysicsScene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PhysicsScene_tEDFCAA935450E8EBB7732353D9AA264A5F711678, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
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


// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_tEB89AEF4AAB84886C278347B17FCA2C4C3C956DE  : public BaseInteractionEventArgs_t0C66D1C53D051664FAE1FF62C7CDCC6E68219CFE
{
public:
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs::<manager>k__BackingField
	XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * ___U3CmanagerU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CmanagerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SelectEnterEventArgs_tEB89AEF4AAB84886C278347B17FCA2C4C3C956DE, ___U3CmanagerU3Ek__BackingField_2)); }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * get_U3CmanagerU3Ek__BackingField_2() const { return ___U3CmanagerU3Ek__BackingField_2; }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 ** get_address_of_U3CmanagerU3Ek__BackingField_2() { return &___U3CmanagerU3Ek__BackingField_2; }
	inline void set_U3CmanagerU3Ek__BackingField_2(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * value)
	{
		___U3CmanagerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmanagerU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t5BD68DE25AAF50453DF01C76A1A637D3187F264E  : public BaseInteractionEventArgs_t0C66D1C53D051664FAE1FF62C7CDCC6E68219CFE
{
public:
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::<manager>k__BackingField
	XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * ___U3CmanagerU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CmanagerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SelectExitEventArgs_t5BD68DE25AAF50453DF01C76A1A637D3187F264E, ___U3CmanagerU3Ek__BackingField_2)); }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * get_U3CmanagerU3Ek__BackingField_2() const { return ___U3CmanagerU3Ek__BackingField_2; }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 ** get_address_of_U3CmanagerU3Ek__BackingField_2() { return &___U3CmanagerU3Ek__BackingField_2; }
	inline void set_U3CmanagerU3Ek__BackingField_2(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * value)
	{
		___U3CmanagerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmanagerU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisCanceledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SelectExitEventArgs_t5BD68DE25AAF50453DF01C76A1A637D3187F264E, ___U3CisCanceledU3Ek__BackingField_3)); }
	inline bool get_U3CisCanceledU3Ek__BackingField_3() const { return ___U3CisCanceledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CisCanceledU3Ek__BackingField_3() { return &___U3CisCanceledU3Ek__BackingField_3; }
	inline void set_U3CisCanceledU3Ek__BackingField_3(bool value)
	{
		___U3CisCanceledU3Ek__BackingField_3 = value;
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


// Unity.Mathematics.float3
struct float3_t9500D105F273B3D86BD354142E891C48FFF9F71D 
{
public:
	// System.Single Unity.Mathematics.float3::x
	float ___x_0;
	// System.Single Unity.Mathematics.float3::y
	float ___y_1;
	// System.Single Unity.Mathematics.float3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(float3_t9500D105F273B3D86BD354142E891C48FFF9F71D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(float3_t9500D105F273B3D86BD354142E891C48FFF9F71D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(float3_t9500D105F273B3D86BD354142E891C48FFF9F71D, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
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

// Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<Unity.Mathematics.float3>
struct BindableVariableBase_1_t1567FA968C8EC72C6319A892236CFAAF828710AB  : public RuntimeObject
{
public:
	// System.Action`1<T> Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::valueUpdated
	Action_1_t59633D5754271108E50B86A3AE18D14982D2D472 * ___valueUpdated_0;
	// T Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_InternalValue
	float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  ___m_InternalValue_1;
	// System.Boolean Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_CheckEquality
	bool ___m_CheckEquality_2;
	// System.Boolean Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_IsInitialized
	bool ___m_IsInitialized_3;
	// System.Func`3<T,T,System.Boolean> Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_EqualityMethod
	Func_3_tFE0A54A2778926FD6B7EEB58825062D0BD8CC9B2 * ___m_EqualityMethod_4;
	// System.Int32 Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1::m_BindingCount
	int32_t ___m_BindingCount_5;

public:
	inline static int32_t get_offset_of_valueUpdated_0() { return static_cast<int32_t>(offsetof(BindableVariableBase_1_t1567FA968C8EC72C6319A892236CFAAF828710AB, ___valueUpdated_0)); }
	inline Action_1_t59633D5754271108E50B86A3AE18D14982D2D472 * get_valueUpdated_0() const { return ___valueUpdated_0; }
	inline Action_1_t59633D5754271108E50B86A3AE18D14982D2D472 ** get_address_of_valueUpdated_0() { return &___valueUpdated_0; }
	inline void set_valueUpdated_0(Action_1_t59633D5754271108E50B86A3AE18D14982D2D472 * value)
	{
		___valueUpdated_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueUpdated_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalValue_1() { return static_cast<int32_t>(offsetof(BindableVariableBase_1_t1567FA968C8EC72C6319A892236CFAAF828710AB, ___m_InternalValue_1)); }
	inline float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  get_m_InternalValue_1() const { return ___m_InternalValue_1; }
	inline float3_t9500D105F273B3D86BD354142E891C48FFF9F71D * get_address_of_m_InternalValue_1() { return &___m_InternalValue_1; }
	inline void set_m_InternalValue_1(float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  value)
	{
		___m_InternalValue_1 = value;
	}

	inline static int32_t get_offset_of_m_CheckEquality_2() { return static_cast<int32_t>(offsetof(BindableVariableBase_1_t1567FA968C8EC72C6319A892236CFAAF828710AB, ___m_CheckEquality_2)); }
	inline bool get_m_CheckEquality_2() const { return ___m_CheckEquality_2; }
	inline bool* get_address_of_m_CheckEquality_2() { return &___m_CheckEquality_2; }
	inline void set_m_CheckEquality_2(bool value)
	{
		___m_CheckEquality_2 = value;
	}

	inline static int32_t get_offset_of_m_IsInitialized_3() { return static_cast<int32_t>(offsetof(BindableVariableBase_1_t1567FA968C8EC72C6319A892236CFAAF828710AB, ___m_IsInitialized_3)); }
	inline bool get_m_IsInitialized_3() const { return ___m_IsInitialized_3; }
	inline bool* get_address_of_m_IsInitialized_3() { return &___m_IsInitialized_3; }
	inline void set_m_IsInitialized_3(bool value)
	{
		___m_IsInitialized_3 = value;
	}

	inline static int32_t get_offset_of_m_EqualityMethod_4() { return static_cast<int32_t>(offsetof(BindableVariableBase_1_t1567FA968C8EC72C6319A892236CFAAF828710AB, ___m_EqualityMethod_4)); }
	inline Func_3_tFE0A54A2778926FD6B7EEB58825062D0BD8CC9B2 * get_m_EqualityMethod_4() const { return ___m_EqualityMethod_4; }
	inline Func_3_tFE0A54A2778926FD6B7EEB58825062D0BD8CC9B2 ** get_address_of_m_EqualityMethod_4() { return &___m_EqualityMethod_4; }
	inline void set_m_EqualityMethod_4(Func_3_tFE0A54A2778926FD6B7EEB58825062D0BD8CC9B2 * value)
	{
		___m_EqualityMethod_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EqualityMethod_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingCount_5() { return static_cast<int32_t>(offsetof(BindableVariableBase_1_t1567FA968C8EC72C6319A892236CFAAF828710AB, ___m_BindingCount_5)); }
	inline int32_t get_m_BindingCount_5() const { return ___m_BindingCount_5; }
	inline int32_t* get_address_of_m_BindingCount_5() { return &___m_BindingCount_5; }
	inline void set_m_BindingCount_5(int32_t value)
	{
		___m_BindingCount_5 = value;
	}
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


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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


// UnityEngine.InputSystem.InputDeviceChange
struct InputDeviceChange_tB4BA2E995721074403B6D0FC3E147BDD8CBF0C3E 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputDeviceChange::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputDeviceChange_tB4BA2E995721074403B6D0FC3E147BDD8CBF0C3E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.InputDeviceCharacteristics
struct InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64 
{
public:
	// System.UInt32 UnityEngine.XR.InputDeviceCharacteristics::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
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


// Unity.Jobs.JobHandle
struct JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 
{
public:
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;

public:
	inline static int32_t get_offset_of_jobGroup_0() { return static_cast<int32_t>(offsetof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847, ___jobGroup_0)); }
	inline intptr_t get_jobGroup_0() const { return ___jobGroup_0; }
	inline intptr_t* get_address_of_jobGroup_0() { return &___jobGroup_0; }
	inline void set_jobGroup_0(intptr_t value)
	{
		___jobGroup_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.LocomotionPhase
struct LocomotionPhase_t2CE381EB3EA5058DF8CEF90F4D0E5F87C09CBE26 
{
public:
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.LocomotionPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LocomotionPhase_t2CE381EB3EA5058DF8CEF90F4D0E5F87C09CBE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
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

// UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData
struct PokeStateData_tD7AE4FF9FE42F143B310C489FD9A9CAFEEEE2EC6 
{
public:
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<meetsRequirements>k__BackingField
	bool ___U3CmeetsRequirementsU3Ek__BackingField_0;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<pokeInteractionPoint>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CpokeInteractionPointU3Ek__BackingField_1;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<axisAlignedPokeInteractionPoint>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<interactionStrength>k__BackingField
	float ___U3CinteractionStrengthU3Ek__BackingField_3;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<target>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CtargetU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CmeetsRequirementsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PokeStateData_tD7AE4FF9FE42F143B310C489FD9A9CAFEEEE2EC6, ___U3CmeetsRequirementsU3Ek__BackingField_0)); }
	inline bool get_U3CmeetsRequirementsU3Ek__BackingField_0() const { return ___U3CmeetsRequirementsU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CmeetsRequirementsU3Ek__BackingField_0() { return &___U3CmeetsRequirementsU3Ek__BackingField_0; }
	inline void set_U3CmeetsRequirementsU3Ek__BackingField_0(bool value)
	{
		___U3CmeetsRequirementsU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CpokeInteractionPointU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PokeStateData_tD7AE4FF9FE42F143B310C489FD9A9CAFEEEE2EC6, ___U3CpokeInteractionPointU3Ek__BackingField_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CpokeInteractionPointU3Ek__BackingField_1() const { return ___U3CpokeInteractionPointU3Ek__BackingField_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CpokeInteractionPointU3Ek__BackingField_1() { return &___U3CpokeInteractionPointU3Ek__BackingField_1; }
	inline void set_U3CpokeInteractionPointU3Ek__BackingField_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CpokeInteractionPointU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PokeStateData_tD7AE4FF9FE42F143B310C489FD9A9CAFEEEE2EC6, ___U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2() const { return ___U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2() { return &___U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2; }
	inline void set_U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CinteractionStrengthU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PokeStateData_tD7AE4FF9FE42F143B310C489FD9A9CAFEEEE2EC6, ___U3CinteractionStrengthU3Ek__BackingField_3)); }
	inline float get_U3CinteractionStrengthU3Ek__BackingField_3() const { return ___U3CinteractionStrengthU3Ek__BackingField_3; }
	inline float* get_address_of_U3CinteractionStrengthU3Ek__BackingField_3() { return &___U3CinteractionStrengthU3Ek__BackingField_3; }
	inline void set_U3CinteractionStrengthU3Ek__BackingField_3(float value)
	{
		___U3CinteractionStrengthU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CtargetU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PokeStateData_tD7AE4FF9FE42F143B310C489FD9A9CAFEEEE2EC6, ___U3CtargetU3Ek__BackingField_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CtargetU3Ek__BackingField_4() const { return ___U3CtargetU3Ek__BackingField_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CtargetU3Ek__BackingField_4() { return &___U3CtargetU3Ek__BackingField_4; }
	inline void set_U3CtargetU3Ek__BackingField_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CtargetU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtargetU3Ek__BackingField_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData
struct PokeStateData_tD7AE4FF9FE42F143B310C489FD9A9CAFEEEE2EC6_marshaled_pinvoke
{
	int32_t ___U3CmeetsRequirementsU3Ek__BackingField_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CpokeInteractionPointU3Ek__BackingField_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2;
	float ___U3CinteractionStrengthU3Ek__BackingField_3;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CtargetU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData
struct PokeStateData_tD7AE4FF9FE42F143B310C489FD9A9CAFEEEE2EC6_marshaled_com
{
	int32_t ___U3CmeetsRequirementsU3Ek__BackingField_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CpokeInteractionPointU3Ek__BackingField_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2;
	float ___U3CinteractionStrengthU3Ek__BackingField_3;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CtargetU3Ek__BackingField_4;
};

// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};


// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.QueryTriggerInteraction
struct QueryTriggerInteraction_t9B82FB8CCAF559F47B6B8C0ECE197515ABFA96B0 
{
public:
	// System.Int32 UnityEngine.QueryTriggerInteraction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QueryTriggerInteraction_t9B82FB8CCAF559F47B6B8C0ECE197515ABFA96B0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918  : public UnityEvent_1_t793F3D070F12FF57919C6FA8BDDA742A3D75773D
{
public:

public:
};


// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8  : public UnityEvent_1_tC7D1BD63B6A342C8CAF366C3242C680CC371BE61
{
public:

public:
};


// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode
struct TargetPriorityMode_t8D550E47EB336C389058830E2DF0BFBD5510A0A1 
{
public:
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TargetPriorityMode_t8D550E47EB336C389058830E2DF0BFBD5510A0A1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.TrackingOriginModeFlags
struct TrackingOriginModeFlags_t256D586CBC67509591B0DFEC26F2D2B5C0B532B0 
{
public:
	// System.Int32 UnityEngine.XR.TrackingOriginModeFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingOriginModeFlags_t256D586CBC67509591B0DFEC26F2D2B5C0B532B0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.WrapMode
struct WrapMode_t0DF566E32B136795606714DB9A11A3DC170F5468 
{
public:
	// System.Int32 UnityEngine.WrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WrapMode_t0DF566E32B136795606714DB9A11A3DC170F5468, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase/GravityApplicationMode
struct GravityApplicationMode_tD5AF61AA4BF84CE90354D159B0AA2A1FE368B3F4 
{
public:
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase/GravityApplicationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GravityApplicationMode_tD5AF61AA4BF84CE90354D159B0AA2A1FE368B3F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection
struct MovementDirection_tED2EC5790F5B09C089825B7F7E1B0A0A5CEB17B6 
{
public:
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MovementDirection_tED2EC5790F5B09C089825B7F7E1B0A0A5CEB17B6, ___value___2)); }
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


// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor/InputTriggerType
struct InputTriggerType_t0BA6FC38118E5D67220858998BDE1EF203537933 
{
public:
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor/InputTriggerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputTriggerType_t0BA6FC38118E5D67220858998BDE1EF203537933, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.CoreUtils.XROrigin/TrackingOriginMode
struct TrackingOriginMode_t530277AD3A09FB8A64A2C9B5B8A77CF54199A7DD 
{
public:
	// System.Int32 Unity.XR.CoreUtils.XROrigin/TrackingOriginMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingOriginMode_t530277AD3A09FB8A64A2C9B5B8A77CF54199A7DD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/AnchorRotationMode
struct AnchorRotationMode_t44119834FEBBD2FA02BE6F69AFEF1995B8DE7B7D 
{
public:
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/AnchorRotationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnchorRotationMode_t44119834FEBBD2FA02BE6F69AFEF1995B8DE7B7D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/HitDetectionType
struct HitDetectionType_t4A18274ADD44FEDF8237BDF269F221C9DBA8E6C9 
{
public:
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/HitDetectionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HitDetectionType_t4A18274ADD44FEDF8237BDF269F221C9DBA8E6C9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/LineType
struct LineType_tBBD57A080CAD25C28205044363163B0DE1C399B1 
{
public:
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_tBBD57A080CAD25C28205044363163B0DE1C399B1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/QuerySnapVolumeInteraction
struct QuerySnapVolumeInteraction_tBB9565F5C0D2DCB3FAA9674AFD4490240BBF9303 
{
public:
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/QuerySnapVolumeInteraction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QuerySnapVolumeInteraction_tBB9565F5C0D2DCB3FAA9674AFD4490240BBF9303, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float3>
struct BindableVariable_1_t9E03D49284E6AC757C588C90B9DC0FD7C047A1DC  : public BindableVariableBase_1_t1567FA968C8EC72C6319A892236CFAAF828710AB
{
public:

public:
};


// Unity.Collections.NativeArray`1<System.Single>
struct NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<Unity.Mathematics.float3>
struct NativeArray_1_t04EB8F797A52DD191D4D513689170F85C9520B92 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t04EB8F797A52DD191D4D513689170F85C9520B92, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t04EB8F797A52DD191D4D513689170F85C9520B92, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t04EB8F797A52DD191D4D513689170F85C9520B92, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.InputDevice>
struct Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>
struct Action_1_t86411888FFBF948F6F03B645D9DA11165B50C96F  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Unity.Mathematics.float3>
struct Action_1_t59633D5754271108E50B86A3AE18D14982D2D472  : public MulticastDelegate_t
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


// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>
struct Action_2_tA58D913EBCC7FD3E95DEC877EDB4363CD3051DF4  : public MulticastDelegate_t
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


// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.Mathematics.float3>
struct TweenableVariableBase_1_t211ADF995AD7DF7DF484BB8E09E4EE1DCEFF73AF  : public BindableVariable_1_t9E03D49284E6AC757C588C90B9DC0FD7C047A1DC
{
public:
	// UnityEngine.AnimationCurve UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1::m_AnimationCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_AnimationCurve_6;
	// T UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1::<target>k__BackingField
	float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  ___U3CtargetU3Ek__BackingField_8;
	// T UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1::<initialValue>k__BackingField
	float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  ___U3CinitialValueU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_m_AnimationCurve_6() { return static_cast<int32_t>(offsetof(TweenableVariableBase_1_t211ADF995AD7DF7DF484BB8E09E4EE1DCEFF73AF, ___m_AnimationCurve_6)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_AnimationCurve_6() const { return ___m_AnimationCurve_6; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_AnimationCurve_6() { return &___m_AnimationCurve_6; }
	inline void set_m_AnimationCurve_6(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_AnimationCurve_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationCurve_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtargetU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TweenableVariableBase_1_t211ADF995AD7DF7DF484BB8E09E4EE1DCEFF73AF, ___U3CtargetU3Ek__BackingField_8)); }
	inline float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  get_U3CtargetU3Ek__BackingField_8() const { return ___U3CtargetU3Ek__BackingField_8; }
	inline float3_t9500D105F273B3D86BD354142E891C48FFF9F71D * get_address_of_U3CtargetU3Ek__BackingField_8() { return &___U3CtargetU3Ek__BackingField_8; }
	inline void set_U3CtargetU3Ek__BackingField_8(float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  value)
	{
		___U3CtargetU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CinitialValueU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TweenableVariableBase_1_t211ADF995AD7DF7DF484BB8E09E4EE1DCEFF73AF, ___U3CinitialValueU3Ek__BackingField_9)); }
	inline float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  get_U3CinitialValueU3Ek__BackingField_9() const { return ___U3CinitialValueU3Ek__BackingField_9; }
	inline float3_t9500D105F273B3D86BD354142E891C48FFF9F71D * get_address_of_U3CinitialValueU3Ek__BackingField_9() { return &___U3CinitialValueU3Ek__BackingField_9; }
	inline void set_U3CinitialValueU3Ek__BackingField_9(float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  value)
	{
		___U3CinitialValueU3Ek__BackingField_9 = value;
	}
};


// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t94B67181746C0497C7552A3A1A7B603CF7589E44  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityAction_1_tD7929AD3E8F3644E9E0C9C7590E7B967E96F5783  : public MulticastDelegate_t
{
public:

public:
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


// UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve
struct NativeCurve_t39CB77C0BDB46173BF2A30BCC734C8E5041B810F 
{
public:
	// Unity.Collections.NativeArray`1<System.Single> UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve::m_Values
	NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  ___m_Values_0;
	// UnityEngine.WrapMode UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve::m_PreWrapMode
	int32_t ___m_PreWrapMode_1;
	// UnityEngine.WrapMode UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve::m_PostWrapMode
	int32_t ___m_PostWrapMode_2;

public:
	inline static int32_t get_offset_of_m_Values_0() { return static_cast<int32_t>(offsetof(NativeCurve_t39CB77C0BDB46173BF2A30BCC734C8E5041B810F, ___m_Values_0)); }
	inline NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  get_m_Values_0() const { return ___m_Values_0; }
	inline NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232 * get_address_of_m_Values_0() { return &___m_Values_0; }
	inline void set_m_Values_0(NativeArray_1_t5F920DC5A531D604D161A0FAD3479B5BFE0D9232  value)
	{
		___m_Values_0 = value;
	}

	inline static int32_t get_offset_of_m_PreWrapMode_1() { return static_cast<int32_t>(offsetof(NativeCurve_t39CB77C0BDB46173BF2A30BCC734C8E5041B810F, ___m_PreWrapMode_1)); }
	inline int32_t get_m_PreWrapMode_1() const { return ___m_PreWrapMode_1; }
	inline int32_t* get_address_of_m_PreWrapMode_1() { return &___m_PreWrapMode_1; }
	inline void set_m_PreWrapMode_1(int32_t value)
	{
		___m_PreWrapMode_1 = value;
	}

	inline static int32_t get_offset_of_m_PostWrapMode_2() { return static_cast<int32_t>(offsetof(NativeCurve_t39CB77C0BDB46173BF2A30BCC734C8E5041B810F, ___m_PostWrapMode_2)); }
	inline int32_t get_m_PostWrapMode_2() const { return ___m_PostWrapMode_2; }
	inline int32_t* get_address_of_m_PostWrapMode_2() { return &___m_PostWrapMode_2; }
	inline void set_m_PostWrapMode_2(int32_t value)
	{
		___m_PostWrapMode_2 = value;
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1<Unity.Mathematics.float3>
struct TweenableVariableAsyncBase_1_t0964B044416FEA2F724DE35FE65712594E80649D  : public TweenableVariableBase_1_t211ADF995AD7DF7DF484BB8E09E4EE1DCEFF73AF
{
public:
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1::m_OutputInitialized
	bool ___m_OutputInitialized_10;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1::m_JobOutputStore
	NativeArray_1_t04EB8F797A52DD191D4D513689170F85C9520B92  ___m_JobOutputStore_11;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1::m_CurveDirty
	bool ___m_CurveDirty_12;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1::m_NativeCurve
	NativeCurve_t39CB77C0BDB46173BF2A30BCC734C8E5041B810F  ___m_NativeCurve_13;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1::m_HasJobPending
	bool ___m_HasJobPending_14;
	// Unity.Jobs.JobHandle UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1::m_LastJobHandle
	JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___m_LastJobHandle_15;

public:
	inline static int32_t get_offset_of_m_OutputInitialized_10() { return static_cast<int32_t>(offsetof(TweenableVariableAsyncBase_1_t0964B044416FEA2F724DE35FE65712594E80649D, ___m_OutputInitialized_10)); }
	inline bool get_m_OutputInitialized_10() const { return ___m_OutputInitialized_10; }
	inline bool* get_address_of_m_OutputInitialized_10() { return &___m_OutputInitialized_10; }
	inline void set_m_OutputInitialized_10(bool value)
	{
		___m_OutputInitialized_10 = value;
	}

	inline static int32_t get_offset_of_m_JobOutputStore_11() { return static_cast<int32_t>(offsetof(TweenableVariableAsyncBase_1_t0964B044416FEA2F724DE35FE65712594E80649D, ___m_JobOutputStore_11)); }
	inline NativeArray_1_t04EB8F797A52DD191D4D513689170F85C9520B92  get_m_JobOutputStore_11() const { return ___m_JobOutputStore_11; }
	inline NativeArray_1_t04EB8F797A52DD191D4D513689170F85C9520B92 * get_address_of_m_JobOutputStore_11() { return &___m_JobOutputStore_11; }
	inline void set_m_JobOutputStore_11(NativeArray_1_t04EB8F797A52DD191D4D513689170F85C9520B92  value)
	{
		___m_JobOutputStore_11 = value;
	}

	inline static int32_t get_offset_of_m_CurveDirty_12() { return static_cast<int32_t>(offsetof(TweenableVariableAsyncBase_1_t0964B044416FEA2F724DE35FE65712594E80649D, ___m_CurveDirty_12)); }
	inline bool get_m_CurveDirty_12() const { return ___m_CurveDirty_12; }
	inline bool* get_address_of_m_CurveDirty_12() { return &___m_CurveDirty_12; }
	inline void set_m_CurveDirty_12(bool value)
	{
		___m_CurveDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_NativeCurve_13() { return static_cast<int32_t>(offsetof(TweenableVariableAsyncBase_1_t0964B044416FEA2F724DE35FE65712594E80649D, ___m_NativeCurve_13)); }
	inline NativeCurve_t39CB77C0BDB46173BF2A30BCC734C8E5041B810F  get_m_NativeCurve_13() const { return ___m_NativeCurve_13; }
	inline NativeCurve_t39CB77C0BDB46173BF2A30BCC734C8E5041B810F * get_address_of_m_NativeCurve_13() { return &___m_NativeCurve_13; }
	inline void set_m_NativeCurve_13(NativeCurve_t39CB77C0BDB46173BF2A30BCC734C8E5041B810F  value)
	{
		___m_NativeCurve_13 = value;
	}

	inline static int32_t get_offset_of_m_HasJobPending_14() { return static_cast<int32_t>(offsetof(TweenableVariableAsyncBase_1_t0964B044416FEA2F724DE35FE65712594E80649D, ___m_HasJobPending_14)); }
	inline bool get_m_HasJobPending_14() const { return ___m_HasJobPending_14; }
	inline bool* get_address_of_m_HasJobPending_14() { return &___m_HasJobPending_14; }
	inline void set_m_HasJobPending_14(bool value)
	{
		___m_HasJobPending_14 = value;
	}

	inline static int32_t get_offset_of_m_LastJobHandle_15() { return static_cast<int32_t>(offsetof(TweenableVariableAsyncBase_1_t0964B044416FEA2F724DE35FE65712594E80649D, ___m_LastJobHandle_15)); }
	inline JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  get_m_LastJobHandle_15() const { return ___m_LastJobHandle_15; }
	inline JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 * get_address_of_m_LastJobHandle_15() { return &___m_LastJobHandle_15; }
	inline void set_m_LastJobHandle_15(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  value)
	{
		___m_LastJobHandle_15 = value;
	}
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager
struct ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_ManipulationInteractionGroup
	XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC * ___m_ManipulationInteractionGroup_5;
	// UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_DirectInteractor
	XRDirectInteractor_t2F00E9B79629EFA648D4DF02F8FF034DD99812D5 * ___m_DirectInteractor_6;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_RayInteractor
	XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A * ___m_RayInteractor_7;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_TeleportInteractor
	XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A * ___m_TeleportInteractor_8;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_TeleportModeActivate
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_TeleportModeActivate_9;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_TeleportModeCancel
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_TeleportModeCancel_10;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_Turn
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_Turn_11;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_SnapTurn
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_SnapTurn_12;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_Move
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___m_Move_13;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_SmoothMotionEnabled
	bool ___m_SmoothMotionEnabled_14;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_SmoothTurnEnabled
	bool ___m_SmoothTurnEnabled_15;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::m_Teleporting
	bool ___m_Teleporting_16;

public:
	inline static int32_t get_offset_of_m_ManipulationInteractionGroup_5() { return static_cast<int32_t>(offsetof(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392, ___m_ManipulationInteractionGroup_5)); }
	inline XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC * get_m_ManipulationInteractionGroup_5() const { return ___m_ManipulationInteractionGroup_5; }
	inline XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC ** get_address_of_m_ManipulationInteractionGroup_5() { return &___m_ManipulationInteractionGroup_5; }
	inline void set_m_ManipulationInteractionGroup_5(XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC * value)
	{
		___m_ManipulationInteractionGroup_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ManipulationInteractionGroup_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_DirectInteractor_6() { return static_cast<int32_t>(offsetof(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392, ___m_DirectInteractor_6)); }
	inline XRDirectInteractor_t2F00E9B79629EFA648D4DF02F8FF034DD99812D5 * get_m_DirectInteractor_6() const { return ___m_DirectInteractor_6; }
	inline XRDirectInteractor_t2F00E9B79629EFA648D4DF02F8FF034DD99812D5 ** get_address_of_m_DirectInteractor_6() { return &___m_DirectInteractor_6; }
	inline void set_m_DirectInteractor_6(XRDirectInteractor_t2F00E9B79629EFA648D4DF02F8FF034DD99812D5 * value)
	{
		___m_DirectInteractor_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DirectInteractor_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_RayInteractor_7() { return static_cast<int32_t>(offsetof(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392, ___m_RayInteractor_7)); }
	inline XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A * get_m_RayInteractor_7() const { return ___m_RayInteractor_7; }
	inline XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A ** get_address_of_m_RayInteractor_7() { return &___m_RayInteractor_7; }
	inline void set_m_RayInteractor_7(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A * value)
	{
		___m_RayInteractor_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RayInteractor_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_TeleportInteractor_8() { return static_cast<int32_t>(offsetof(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392, ___m_TeleportInteractor_8)); }
	inline XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A * get_m_TeleportInteractor_8() const { return ___m_TeleportInteractor_8; }
	inline XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A ** get_address_of_m_TeleportInteractor_8() { return &___m_TeleportInteractor_8; }
	inline void set_m_TeleportInteractor_8(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A * value)
	{
		___m_TeleportInteractor_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TeleportInteractor_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_TeleportModeActivate_9() { return static_cast<int32_t>(offsetof(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392, ___m_TeleportModeActivate_9)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_TeleportModeActivate_9() const { return ___m_TeleportModeActivate_9; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_TeleportModeActivate_9() { return &___m_TeleportModeActivate_9; }
	inline void set_m_TeleportModeActivate_9(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_TeleportModeActivate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TeleportModeActivate_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_TeleportModeCancel_10() { return static_cast<int32_t>(offsetof(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392, ___m_TeleportModeCancel_10)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_TeleportModeCancel_10() const { return ___m_TeleportModeCancel_10; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_TeleportModeCancel_10() { return &___m_TeleportModeCancel_10; }
	inline void set_m_TeleportModeCancel_10(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_TeleportModeCancel_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TeleportModeCancel_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Turn_11() { return static_cast<int32_t>(offsetof(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392, ___m_Turn_11)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_Turn_11() const { return ___m_Turn_11; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_Turn_11() { return &___m_Turn_11; }
	inline void set_m_Turn_11(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_Turn_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Turn_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_SnapTurn_12() { return static_cast<int32_t>(offsetof(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392, ___m_SnapTurn_12)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_SnapTurn_12() const { return ___m_SnapTurn_12; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_SnapTurn_12() { return &___m_SnapTurn_12; }
	inline void set_m_SnapTurn_12(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_SnapTurn_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SnapTurn_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Move_13() { return static_cast<int32_t>(offsetof(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392, ___m_Move_13)); }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * get_m_Move_13() const { return ___m_Move_13; }
	inline InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 ** get_address_of_m_Move_13() { return &___m_Move_13; }
	inline void set_m_Move_13(InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * value)
	{
		___m_Move_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Move_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_SmoothMotionEnabled_14() { return static_cast<int32_t>(offsetof(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392, ___m_SmoothMotionEnabled_14)); }
	inline bool get_m_SmoothMotionEnabled_14() const { return ___m_SmoothMotionEnabled_14; }
	inline bool* get_address_of_m_SmoothMotionEnabled_14() { return &___m_SmoothMotionEnabled_14; }
	inline void set_m_SmoothMotionEnabled_14(bool value)
	{
		___m_SmoothMotionEnabled_14 = value;
	}

	inline static int32_t get_offset_of_m_SmoothTurnEnabled_15() { return static_cast<int32_t>(offsetof(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392, ___m_SmoothTurnEnabled_15)); }
	inline bool get_m_SmoothTurnEnabled_15() const { return ___m_SmoothTurnEnabled_15; }
	inline bool* get_address_of_m_SmoothTurnEnabled_15() { return &___m_SmoothTurnEnabled_15; }
	inline void set_m_SmoothTurnEnabled_15(bool value)
	{
		___m_SmoothTurnEnabled_15 = value;
	}

	inline static int32_t get_offset_of_m_Teleporting_16() { return static_cast<int32_t>(offsetof(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392, ___m_Teleporting_16)); }
	inline bool get_m_Teleporting_16() const { return ___m_Teleporting_16; }
	inline bool* get_address_of_m_Teleporting_16() { return &___m_Teleporting_16; }
	inline void set_m_Teleporting_16(bool value)
	{
		___m_Teleporting_16 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager
struct GazeInputManager_t066DD55A5B5C68778F240D14E196FEE676998A7A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::m_FallbackIfEyeTrackingUnavailable
	bool ___m_FallbackIfEyeTrackingUnavailable_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::m_EyeTrackingDeviceFound
	bool ___m_EyeTrackingDeviceFound_6;

public:
	inline static int32_t get_offset_of_m_FallbackIfEyeTrackingUnavailable_5() { return static_cast<int32_t>(offsetof(GazeInputManager_t066DD55A5B5C68778F240D14E196FEE676998A7A, ___m_FallbackIfEyeTrackingUnavailable_5)); }
	inline bool get_m_FallbackIfEyeTrackingUnavailable_5() const { return ___m_FallbackIfEyeTrackingUnavailable_5; }
	inline bool* get_address_of_m_FallbackIfEyeTrackingUnavailable_5() { return &___m_FallbackIfEyeTrackingUnavailable_5; }
	inline void set_m_FallbackIfEyeTrackingUnavailable_5(bool value)
	{
		___m_FallbackIfEyeTrackingUnavailable_5 = value;
	}

	inline static int32_t get_offset_of_m_EyeTrackingDeviceFound_6() { return static_cast<int32_t>(offsetof(GazeInputManager_t066DD55A5B5C68778F240D14E196FEE676998A7A, ___m_EyeTrackingDeviceFound_6)); }
	inline bool get_m_EyeTrackingDeviceFound_6() const { return ___m_EyeTrackingDeviceFound_6; }
	inline bool* get_address_of_m_EyeTrackingDeviceFound_6() { return &___m_EyeTrackingDeviceFound_6; }
	inline void set_m_EyeTrackingDeviceFound_6(bool value)
	{
		___m_EyeTrackingDeviceFound_6 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText
struct IncrementUIText_tA3C6CD00B0EF979DD2366CDD0D227ACD401F5BFA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText::m_Text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_Text_4;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_m_Text_4() { return static_cast<int32_t>(offsetof(IncrementUIText_tA3C6CD00B0EF979DD2366CDD0D227ACD401F5BFA, ___m_Text_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_Text_4() const { return ___m_Text_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_Text_4() { return &___m_Text_4; }
	inline void set_m_Text_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_Text_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(IncrementUIText_tA3C6CD00B0EF979DD2366CDD0D227ACD401F5BFA, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.LocomotionProvider
struct LocomotionProvider_tF07C5527C6B8CDB38B435E8EDC50DF8CA86C6448  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem> UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::beginLocomotion
	Action_1_t84833279C5597E1E0FE303CF3065416470244C93 * ___beginLocomotion_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem> UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::endLocomotion
	Action_1_t84833279C5597E1E0FE303CF3065416470244C93 * ___endLocomotion_5;
	// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::m_System
	LocomotionSystem_tEF4F8D19A639BFEBBD4C52AE52AB74D337BB4C5D * ___m_System_6;
	// UnityEngine.XR.Interaction.Toolkit.LocomotionPhase UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::<locomotionPhase>k__BackingField
	int32_t ___U3ClocomotionPhaseU3Ek__BackingField_7;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem> UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::startLocomotion
	Action_1_t84833279C5597E1E0FE303CF3065416470244C93 * ___startLocomotion_8;

public:
	inline static int32_t get_offset_of_beginLocomotion_4() { return static_cast<int32_t>(offsetof(LocomotionProvider_tF07C5527C6B8CDB38B435E8EDC50DF8CA86C6448, ___beginLocomotion_4)); }
	inline Action_1_t84833279C5597E1E0FE303CF3065416470244C93 * get_beginLocomotion_4() const { return ___beginLocomotion_4; }
	inline Action_1_t84833279C5597E1E0FE303CF3065416470244C93 ** get_address_of_beginLocomotion_4() { return &___beginLocomotion_4; }
	inline void set_beginLocomotion_4(Action_1_t84833279C5597E1E0FE303CF3065416470244C93 * value)
	{
		___beginLocomotion_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___beginLocomotion_4), (void*)value);
	}

	inline static int32_t get_offset_of_endLocomotion_5() { return static_cast<int32_t>(offsetof(LocomotionProvider_tF07C5527C6B8CDB38B435E8EDC50DF8CA86C6448, ___endLocomotion_5)); }
	inline Action_1_t84833279C5597E1E0FE303CF3065416470244C93 * get_endLocomotion_5() const { return ___endLocomotion_5; }
	inline Action_1_t84833279C5597E1E0FE303CF3065416470244C93 ** get_address_of_endLocomotion_5() { return &___endLocomotion_5; }
	inline void set_endLocomotion_5(Action_1_t84833279C5597E1E0FE303CF3065416470244C93 * value)
	{
		___endLocomotion_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endLocomotion_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_System_6() { return static_cast<int32_t>(offsetof(LocomotionProvider_tF07C5527C6B8CDB38B435E8EDC50DF8CA86C6448, ___m_System_6)); }
	inline LocomotionSystem_tEF4F8D19A639BFEBBD4C52AE52AB74D337BB4C5D * get_m_System_6() const { return ___m_System_6; }
	inline LocomotionSystem_tEF4F8D19A639BFEBBD4C52AE52AB74D337BB4C5D ** get_address_of_m_System_6() { return &___m_System_6; }
	inline void set_m_System_6(LocomotionSystem_tEF4F8D19A639BFEBBD4C52AE52AB74D337BB4C5D * value)
	{
		___m_System_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_System_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClocomotionPhaseU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(LocomotionProvider_tF07C5527C6B8CDB38B435E8EDC50DF8CA86C6448, ___U3ClocomotionPhaseU3Ek__BackingField_7)); }
	inline int32_t get_U3ClocomotionPhaseU3Ek__BackingField_7() const { return ___U3ClocomotionPhaseU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3ClocomotionPhaseU3Ek__BackingField_7() { return &___U3ClocomotionPhaseU3Ek__BackingField_7; }
	inline void set_U3ClocomotionPhaseU3Ek__BackingField_7(int32_t value)
	{
		___U3ClocomotionPhaseU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_startLocomotion_8() { return static_cast<int32_t>(offsetof(LocomotionProvider_tF07C5527C6B8CDB38B435E8EDC50DF8CA86C6448, ___startLocomotion_8)); }
	inline Action_1_t84833279C5597E1E0FE303CF3065416470244C93 * get_startLocomotion_8() const { return ___startLocomotion_8; }
	inline Action_1_t84833279C5597E1E0FE303CF3065416470244C93 ** get_address_of_startLocomotion_8() { return &___startLocomotion_8; }
	inline void set_startLocomotion_8(Action_1_t84833279C5597E1E0FE303CF3065416470244C93 * value)
	{
		___startLocomotion_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startLocomotion_8), (void*)value);
	}
};


// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem
struct LocomotionSystem_tEF4F8D19A639BFEBBD4C52AE52AB74D337BB4C5D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.XR.Interaction.Toolkit.LocomotionProvider UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::m_CurrentExclusiveProvider
	LocomotionProvider_tF07C5527C6B8CDB38B435E8EDC50DF8CA86C6448 * ___m_CurrentExclusiveProvider_4;
	// System.Single UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::m_TimeMadeExclusive
	float ___m_TimeMadeExclusive_5;
	// System.Single UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::m_Timeout
	float ___m_Timeout_6;
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::m_XROrigin
	XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * ___m_XROrigin_7;

public:
	inline static int32_t get_offset_of_m_CurrentExclusiveProvider_4() { return static_cast<int32_t>(offsetof(LocomotionSystem_tEF4F8D19A639BFEBBD4C52AE52AB74D337BB4C5D, ___m_CurrentExclusiveProvider_4)); }
	inline LocomotionProvider_tF07C5527C6B8CDB38B435E8EDC50DF8CA86C6448 * get_m_CurrentExclusiveProvider_4() const { return ___m_CurrentExclusiveProvider_4; }
	inline LocomotionProvider_tF07C5527C6B8CDB38B435E8EDC50DF8CA86C6448 ** get_address_of_m_CurrentExclusiveProvider_4() { return &___m_CurrentExclusiveProvider_4; }
	inline void set_m_CurrentExclusiveProvider_4(LocomotionProvider_tF07C5527C6B8CDB38B435E8EDC50DF8CA86C6448 * value)
	{
		___m_CurrentExclusiveProvider_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentExclusiveProvider_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_TimeMadeExclusive_5() { return static_cast<int32_t>(offsetof(LocomotionSystem_tEF4F8D19A639BFEBBD4C52AE52AB74D337BB4C5D, ___m_TimeMadeExclusive_5)); }
	inline float get_m_TimeMadeExclusive_5() const { return ___m_TimeMadeExclusive_5; }
	inline float* get_address_of_m_TimeMadeExclusive_5() { return &___m_TimeMadeExclusive_5; }
	inline void set_m_TimeMadeExclusive_5(float value)
	{
		___m_TimeMadeExclusive_5 = value;
	}

	inline static int32_t get_offset_of_m_Timeout_6() { return static_cast<int32_t>(offsetof(LocomotionSystem_tEF4F8D19A639BFEBBD4C52AE52AB74D337BB4C5D, ___m_Timeout_6)); }
	inline float get_m_Timeout_6() const { return ___m_Timeout_6; }
	inline float* get_address_of_m_Timeout_6() { return &___m_Timeout_6; }
	inline void set_m_Timeout_6(float value)
	{
		___m_Timeout_6 = value;
	}

	inline static int32_t get_offset_of_m_XROrigin_7() { return static_cast<int32_t>(offsetof(LocomotionSystem_tEF4F8D19A639BFEBBD4C52AE52AB74D337BB4C5D, ___m_XROrigin_7)); }
	inline XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * get_m_XROrigin_7() const { return ___m_XROrigin_7; }
	inline XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D ** get_address_of_m_XROrigin_7() { return &___m_XROrigin_7; }
	inline void set_m_XROrigin_7(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * value)
	{
		___m_XROrigin_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_XROrigin_7), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.Vector3TweenableVariable
struct Vector3TweenableVariable_tED608C05E502A2D74AC2E7031CC90D00D92C9917  : public TweenableVariableAsyncBase_1_t0964B044416FEA2F724DE35FE65712594E80649D
{
public:

public:
};


// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::registered
	Action_1_t6051DEDF984988738563FB98BD7D78AD81A0C77D * ___registered_6;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::unregistered
	Action_1_tE6C3262B5BB25E9A20BA4358C5687205008A1261 * ___unregistered_7;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionManager
	XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * ___m_InteractionManager_8;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<containingGroup>k__BackingField
	RuntimeObject* ___U3CcontainingGroupU3Ek__BackingField_9;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayerMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___m_InteractionLayerMask_10;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayers
	InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47  ___m_InteractionLayers_11;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_AttachTransform_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_KeepSelectedTargetValid
	bool ___m_KeepSelectedTargetValid_13;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_DisableVisualsWhenBlockedInGroup
	bool ___m_DisableVisualsWhenBlockedInGroup_14;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectedInteractable
	XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF * ___m_StartingSelectedInteractable_15;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingTargetFilter
	XRBaseTargetFilter_t001E08BCBD22D6BC11D71ADBE870533A84B5C31C * ___m_StartingTargetFilter_16;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverEntered
	HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6 * ___m_HoverEntered_17;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverExited
	HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341 * ___m_HoverExited_18;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectEntered
	SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 * ___m_SelectEntered_19;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectExited
	SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 * ___m_SelectExited_20;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_TargetFilter
	RuntimeObject* ___m_TargetFilter_21;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowHover
	bool ___m_AllowHover_22;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowSelect
	bool ___m_AllowSelect_23;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_IsPerformingManualInteraction
	bool ___m_IsPerformingManualInteraction_24;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractablesHovered
	HashSetList_1_t05E59557D5A33180E62364E2B7D7B9494206C217 * ___m_InteractablesHovered_25;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractablesSelected
	HashSetList_1_t069B6D38EDE7FCBD4A12B9E50E9EA6F33FFB5A84 * ___m_InteractablesSelected_26;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<firstInteractableSelected>k__BackingField
	RuntimeObject* ___U3CfirstInteractableSelectedU3Ek__BackingField_27;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<isInteractingWithUI>k__BackingField
	bool ___U3CisInteractingWithUIU3Ek__BackingField_28;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingHoverFilters
	List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * ___m_StartingHoverFilters_29;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverFilters
	ExposedRegistrationList_1_t5ECEBE78A1A1B74E793C57E99502825849754A91 * ___m_HoverFilters_30;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectFilters
	List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * ___m_StartingSelectFilters_31;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectFilters
	ExposedRegistrationList_1_t2925F032505D027FCBA7F35721D8B3461BE44E08 * ___m_SelectFilters_32;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LargestInteractionStrength
	BindableVariable_1_t641E63CD40F300CB5D8FEEF146957925F9A9A3FD * ___m_LargestInteractionStrength_33;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPoseOnSelect
	Dictionary_2_t6A653984EB988FC39CFB8D564C2AC1D6FA223119 * ___m_AttachPoseOnSelect_34;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LocalAttachPoseOnSelect
	Dictionary_2_t6A653984EB988FC39CFB8D564C2AC1D6FA223119 * ___m_LocalAttachPoseOnSelect_35;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionStrengthInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionStrengthInteractables
	HashSetList_1_t214A30468B56AFA2290A752D5BF63D41095E02A2 * ___m_InteractionStrengthInteractables_36;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionStrengths
	Dictionary_2_t86132C0F8B31101EE4D1A23B71484DB7D3AD6F35 * ___m_InteractionStrengths_37;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_ManualInteractionInteractable
	RuntimeObject* ___m_ManualInteractionInteractable_38;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_RegisteredInteractionManager
	XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * ___m_RegisteredInteractionManager_39;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<useAttachPointVelocity>k__BackingField
	bool ___U3CuseAttachPointVelocityU3Ek__BackingField_42;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<attachPointVelocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CattachPointVelocityU3Ek__BackingField_43;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<attachPointAngularVelocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CattachPointAngularVelocityU3Ek__BackingField_44;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetPriorityMode>k__BackingField
	int32_t ___U3CtargetPriorityModeU3Ek__BackingField_45;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetsForSelection>k__BackingField
	List_1_t471EBB9BADE4A0B8711AC39DEF94BC759D83FC6E * ___U3CtargetsForSelectionU3Ek__BackingField_46;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_DeltaTimeStart
	float ___m_DeltaTimeStart_47;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_FrameOn
	int32_t ___m_FrameOn_49;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityPositionsCache
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_VelocityPositionsCache_50;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityNormalsCache
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_VelocityNormalsCache_51;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityPositionsSum
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_VelocityPositionsSum_52;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityNormalsSum
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_VelocityNormalsSum_53;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverEntered
	XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 * ___m_OnHoverEntered_54;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverExited
	XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 * ___m_OnHoverExited_55;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectEntered
	XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 * ___m_OnSelectEntered_56;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectExited
	XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 * ___m_OnSelectExited_57;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<hoverTargets>k__BackingField
	List_1_t8F9C188959ECAB5554BCCA621026A2CC5EE3DE91 * ___U3ChoverTargetsU3Ek__BackingField_58;

public:
	inline static int32_t get_offset_of_registered_6() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___registered_6)); }
	inline Action_1_t6051DEDF984988738563FB98BD7D78AD81A0C77D * get_registered_6() const { return ___registered_6; }
	inline Action_1_t6051DEDF984988738563FB98BD7D78AD81A0C77D ** get_address_of_registered_6() { return &___registered_6; }
	inline void set_registered_6(Action_1_t6051DEDF984988738563FB98BD7D78AD81A0C77D * value)
	{
		___registered_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registered_6), (void*)value);
	}

	inline static int32_t get_offset_of_unregistered_7() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___unregistered_7)); }
	inline Action_1_tE6C3262B5BB25E9A20BA4358C5687205008A1261 * get_unregistered_7() const { return ___unregistered_7; }
	inline Action_1_tE6C3262B5BB25E9A20BA4358C5687205008A1261 ** get_address_of_unregistered_7() { return &___unregistered_7; }
	inline void set_unregistered_7(Action_1_tE6C3262B5BB25E9A20BA4358C5687205008A1261 * value)
	{
		___unregistered_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unregistered_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_InteractionManager_8() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_InteractionManager_8)); }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * get_m_InteractionManager_8() const { return ___m_InteractionManager_8; }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 ** get_address_of_m_InteractionManager_8() { return &___m_InteractionManager_8; }
	inline void set_m_InteractionManager_8(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * value)
	{
		___m_InteractionManager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InteractionManager_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcontainingGroupU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___U3CcontainingGroupU3Ek__BackingField_9)); }
	inline RuntimeObject* get_U3CcontainingGroupU3Ek__BackingField_9() const { return ___U3CcontainingGroupU3Ek__BackingField_9; }
	inline RuntimeObject** get_address_of_U3CcontainingGroupU3Ek__BackingField_9() { return &___U3CcontainingGroupU3Ek__BackingField_9; }
	inline void set_U3CcontainingGroupU3Ek__BackingField_9(RuntimeObject* value)
	{
		___U3CcontainingGroupU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcontainingGroupU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_InteractionLayerMask_10() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_InteractionLayerMask_10)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_m_InteractionLayerMask_10() const { return ___m_InteractionLayerMask_10; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_m_InteractionLayerMask_10() { return &___m_InteractionLayerMask_10; }
	inline void set_m_InteractionLayerMask_10(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___m_InteractionLayerMask_10 = value;
	}

	inline static int32_t get_offset_of_m_InteractionLayers_11() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_InteractionLayers_11)); }
	inline InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47  get_m_InteractionLayers_11() const { return ___m_InteractionLayers_11; }
	inline InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47 * get_address_of_m_InteractionLayers_11() { return &___m_InteractionLayers_11; }
	inline void set_m_InteractionLayers_11(InteractionLayerMask_t9AFE7E0AC5956A410A71C6C26CB6793B882C3D47  value)
	{
		___m_InteractionLayers_11 = value;
	}

	inline static int32_t get_offset_of_m_AttachTransform_12() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_AttachTransform_12)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_AttachTransform_12() const { return ___m_AttachTransform_12; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_AttachTransform_12() { return &___m_AttachTransform_12; }
	inline void set_m_AttachTransform_12(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_AttachTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AttachTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_KeepSelectedTargetValid_13() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_KeepSelectedTargetValid_13)); }
	inline bool get_m_KeepSelectedTargetValid_13() const { return ___m_KeepSelectedTargetValid_13; }
	inline bool* get_address_of_m_KeepSelectedTargetValid_13() { return &___m_KeepSelectedTargetValid_13; }
	inline void set_m_KeepSelectedTargetValid_13(bool value)
	{
		___m_KeepSelectedTargetValid_13 = value;
	}

	inline static int32_t get_offset_of_m_DisableVisualsWhenBlockedInGroup_14() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_DisableVisualsWhenBlockedInGroup_14)); }
	inline bool get_m_DisableVisualsWhenBlockedInGroup_14() const { return ___m_DisableVisualsWhenBlockedInGroup_14; }
	inline bool* get_address_of_m_DisableVisualsWhenBlockedInGroup_14() { return &___m_DisableVisualsWhenBlockedInGroup_14; }
	inline void set_m_DisableVisualsWhenBlockedInGroup_14(bool value)
	{
		___m_DisableVisualsWhenBlockedInGroup_14 = value;
	}

	inline static int32_t get_offset_of_m_StartingSelectedInteractable_15() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_StartingSelectedInteractable_15)); }
	inline XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF * get_m_StartingSelectedInteractable_15() const { return ___m_StartingSelectedInteractable_15; }
	inline XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF ** get_address_of_m_StartingSelectedInteractable_15() { return &___m_StartingSelectedInteractable_15; }
	inline void set_m_StartingSelectedInteractable_15(XRBaseInteractable_t6D8F476542495E625DE6A3454D4BC9323B6EDCBF * value)
	{
		___m_StartingSelectedInteractable_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StartingSelectedInteractable_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartingTargetFilter_16() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_StartingTargetFilter_16)); }
	inline XRBaseTargetFilter_t001E08BCBD22D6BC11D71ADBE870533A84B5C31C * get_m_StartingTargetFilter_16() const { return ___m_StartingTargetFilter_16; }
	inline XRBaseTargetFilter_t001E08BCBD22D6BC11D71ADBE870533A84B5C31C ** get_address_of_m_StartingTargetFilter_16() { return &___m_StartingTargetFilter_16; }
	inline void set_m_StartingTargetFilter_16(XRBaseTargetFilter_t001E08BCBD22D6BC11D71ADBE870533A84B5C31C * value)
	{
		___m_StartingTargetFilter_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StartingTargetFilter_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_HoverEntered_17() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_HoverEntered_17)); }
	inline HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6 * get_m_HoverEntered_17() const { return ___m_HoverEntered_17; }
	inline HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6 ** get_address_of_m_HoverEntered_17() { return &___m_HoverEntered_17; }
	inline void set_m_HoverEntered_17(HoverEnterEvent_t0CC8E826E7F14B3A2B7A343424C3533BFCE32FC6 * value)
	{
		___m_HoverEntered_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HoverEntered_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_HoverExited_18() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_HoverExited_18)); }
	inline HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341 * get_m_HoverExited_18() const { return ___m_HoverExited_18; }
	inline HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341 ** get_address_of_m_HoverExited_18() { return &___m_HoverExited_18; }
	inline void set_m_HoverExited_18(HoverExitEvent_tAAF1D57BA8CEBA5B39F1409EBD6978CE06A5B341 * value)
	{
		___m_HoverExited_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HoverExited_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectEntered_19() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_SelectEntered_19)); }
	inline SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 * get_m_SelectEntered_19() const { return ___m_SelectEntered_19; }
	inline SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 ** get_address_of_m_SelectEntered_19() { return &___m_SelectEntered_19; }
	inline void set_m_SelectEntered_19(SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 * value)
	{
		___m_SelectEntered_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectEntered_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectExited_20() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_SelectExited_20)); }
	inline SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 * get_m_SelectExited_20() const { return ___m_SelectExited_20; }
	inline SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 ** get_address_of_m_SelectExited_20() { return &___m_SelectExited_20; }
	inline void set_m_SelectExited_20(SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 * value)
	{
		___m_SelectExited_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectExited_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_TargetFilter_21() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_TargetFilter_21)); }
	inline RuntimeObject* get_m_TargetFilter_21() const { return ___m_TargetFilter_21; }
	inline RuntimeObject** get_address_of_m_TargetFilter_21() { return &___m_TargetFilter_21; }
	inline void set_m_TargetFilter_21(RuntimeObject* value)
	{
		___m_TargetFilter_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetFilter_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowHover_22() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_AllowHover_22)); }
	inline bool get_m_AllowHover_22() const { return ___m_AllowHover_22; }
	inline bool* get_address_of_m_AllowHover_22() { return &___m_AllowHover_22; }
	inline void set_m_AllowHover_22(bool value)
	{
		___m_AllowHover_22 = value;
	}

	inline static int32_t get_offset_of_m_AllowSelect_23() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_AllowSelect_23)); }
	inline bool get_m_AllowSelect_23() const { return ___m_AllowSelect_23; }
	inline bool* get_address_of_m_AllowSelect_23() { return &___m_AllowSelect_23; }
	inline void set_m_AllowSelect_23(bool value)
	{
		___m_AllowSelect_23 = value;
	}

	inline static int32_t get_offset_of_m_IsPerformingManualInteraction_24() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_IsPerformingManualInteraction_24)); }
	inline bool get_m_IsPerformingManualInteraction_24() const { return ___m_IsPerformingManualInteraction_24; }
	inline bool* get_address_of_m_IsPerformingManualInteraction_24() { return &___m_IsPerformingManualInteraction_24; }
	inline void set_m_IsPerformingManualInteraction_24(bool value)
	{
		___m_IsPerformingManualInteraction_24 = value;
	}

	inline static int32_t get_offset_of_m_InteractablesHovered_25() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_InteractablesHovered_25)); }
	inline HashSetList_1_t05E59557D5A33180E62364E2B7D7B9494206C217 * get_m_InteractablesHovered_25() const { return ___m_InteractablesHovered_25; }
	inline HashSetList_1_t05E59557D5A33180E62364E2B7D7B9494206C217 ** get_address_of_m_InteractablesHovered_25() { return &___m_InteractablesHovered_25; }
	inline void set_m_InteractablesHovered_25(HashSetList_1_t05E59557D5A33180E62364E2B7D7B9494206C217 * value)
	{
		___m_InteractablesHovered_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InteractablesHovered_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_InteractablesSelected_26() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_InteractablesSelected_26)); }
	inline HashSetList_1_t069B6D38EDE7FCBD4A12B9E50E9EA6F33FFB5A84 * get_m_InteractablesSelected_26() const { return ___m_InteractablesSelected_26; }
	inline HashSetList_1_t069B6D38EDE7FCBD4A12B9E50E9EA6F33FFB5A84 ** get_address_of_m_InteractablesSelected_26() { return &___m_InteractablesSelected_26; }
	inline void set_m_InteractablesSelected_26(HashSetList_1_t069B6D38EDE7FCBD4A12B9E50E9EA6F33FFB5A84 * value)
	{
		___m_InteractablesSelected_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InteractablesSelected_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfirstInteractableSelectedU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___U3CfirstInteractableSelectedU3Ek__BackingField_27)); }
	inline RuntimeObject* get_U3CfirstInteractableSelectedU3Ek__BackingField_27() const { return ___U3CfirstInteractableSelectedU3Ek__BackingField_27; }
	inline RuntimeObject** get_address_of_U3CfirstInteractableSelectedU3Ek__BackingField_27() { return &___U3CfirstInteractableSelectedU3Ek__BackingField_27; }
	inline void set_U3CfirstInteractableSelectedU3Ek__BackingField_27(RuntimeObject* value)
	{
		___U3CfirstInteractableSelectedU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfirstInteractableSelectedU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisInteractingWithUIU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___U3CisInteractingWithUIU3Ek__BackingField_28)); }
	inline bool get_U3CisInteractingWithUIU3Ek__BackingField_28() const { return ___U3CisInteractingWithUIU3Ek__BackingField_28; }
	inline bool* get_address_of_U3CisInteractingWithUIU3Ek__BackingField_28() { return &___U3CisInteractingWithUIU3Ek__BackingField_28; }
	inline void set_U3CisInteractingWithUIU3Ek__BackingField_28(bool value)
	{
		___U3CisInteractingWithUIU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_m_StartingHoverFilters_29() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_StartingHoverFilters_29)); }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * get_m_StartingHoverFilters_29() const { return ___m_StartingHoverFilters_29; }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 ** get_address_of_m_StartingHoverFilters_29() { return &___m_StartingHoverFilters_29; }
	inline void set_m_StartingHoverFilters_29(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * value)
	{
		___m_StartingHoverFilters_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StartingHoverFilters_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_HoverFilters_30() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_HoverFilters_30)); }
	inline ExposedRegistrationList_1_t5ECEBE78A1A1B74E793C57E99502825849754A91 * get_m_HoverFilters_30() const { return ___m_HoverFilters_30; }
	inline ExposedRegistrationList_1_t5ECEBE78A1A1B74E793C57E99502825849754A91 ** get_address_of_m_HoverFilters_30() { return &___m_HoverFilters_30; }
	inline void set_m_HoverFilters_30(ExposedRegistrationList_1_t5ECEBE78A1A1B74E793C57E99502825849754A91 * value)
	{
		___m_HoverFilters_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HoverFilters_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartingSelectFilters_31() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_StartingSelectFilters_31)); }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * get_m_StartingSelectFilters_31() const { return ___m_StartingSelectFilters_31; }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 ** get_address_of_m_StartingSelectFilters_31() { return &___m_StartingSelectFilters_31; }
	inline void set_m_StartingSelectFilters_31(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * value)
	{
		___m_StartingSelectFilters_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StartingSelectFilters_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectFilters_32() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_SelectFilters_32)); }
	inline ExposedRegistrationList_1_t2925F032505D027FCBA7F35721D8B3461BE44E08 * get_m_SelectFilters_32() const { return ___m_SelectFilters_32; }
	inline ExposedRegistrationList_1_t2925F032505D027FCBA7F35721D8B3461BE44E08 ** get_address_of_m_SelectFilters_32() { return &___m_SelectFilters_32; }
	inline void set_m_SelectFilters_32(ExposedRegistrationList_1_t2925F032505D027FCBA7F35721D8B3461BE44E08 * value)
	{
		___m_SelectFilters_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectFilters_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_LargestInteractionStrength_33() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_LargestInteractionStrength_33)); }
	inline BindableVariable_1_t641E63CD40F300CB5D8FEEF146957925F9A9A3FD * get_m_LargestInteractionStrength_33() const { return ___m_LargestInteractionStrength_33; }
	inline BindableVariable_1_t641E63CD40F300CB5D8FEEF146957925F9A9A3FD ** get_address_of_m_LargestInteractionStrength_33() { return &___m_LargestInteractionStrength_33; }
	inline void set_m_LargestInteractionStrength_33(BindableVariable_1_t641E63CD40F300CB5D8FEEF146957925F9A9A3FD * value)
	{
		___m_LargestInteractionStrength_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LargestInteractionStrength_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_AttachPoseOnSelect_34() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_AttachPoseOnSelect_34)); }
	inline Dictionary_2_t6A653984EB988FC39CFB8D564C2AC1D6FA223119 * get_m_AttachPoseOnSelect_34() const { return ___m_AttachPoseOnSelect_34; }
	inline Dictionary_2_t6A653984EB988FC39CFB8D564C2AC1D6FA223119 ** get_address_of_m_AttachPoseOnSelect_34() { return &___m_AttachPoseOnSelect_34; }
	inline void set_m_AttachPoseOnSelect_34(Dictionary_2_t6A653984EB988FC39CFB8D564C2AC1D6FA223119 * value)
	{
		___m_AttachPoseOnSelect_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AttachPoseOnSelect_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_LocalAttachPoseOnSelect_35() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_LocalAttachPoseOnSelect_35)); }
	inline Dictionary_2_t6A653984EB988FC39CFB8D564C2AC1D6FA223119 * get_m_LocalAttachPoseOnSelect_35() const { return ___m_LocalAttachPoseOnSelect_35; }
	inline Dictionary_2_t6A653984EB988FC39CFB8D564C2AC1D6FA223119 ** get_address_of_m_LocalAttachPoseOnSelect_35() { return &___m_LocalAttachPoseOnSelect_35; }
	inline void set_m_LocalAttachPoseOnSelect_35(Dictionary_2_t6A653984EB988FC39CFB8D564C2AC1D6FA223119 * value)
	{
		___m_LocalAttachPoseOnSelect_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocalAttachPoseOnSelect_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_InteractionStrengthInteractables_36() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_InteractionStrengthInteractables_36)); }
	inline HashSetList_1_t214A30468B56AFA2290A752D5BF63D41095E02A2 * get_m_InteractionStrengthInteractables_36() const { return ___m_InteractionStrengthInteractables_36; }
	inline HashSetList_1_t214A30468B56AFA2290A752D5BF63D41095E02A2 ** get_address_of_m_InteractionStrengthInteractables_36() { return &___m_InteractionStrengthInteractables_36; }
	inline void set_m_InteractionStrengthInteractables_36(HashSetList_1_t214A30468B56AFA2290A752D5BF63D41095E02A2 * value)
	{
		___m_InteractionStrengthInteractables_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InteractionStrengthInteractables_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_InteractionStrengths_37() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_InteractionStrengths_37)); }
	inline Dictionary_2_t86132C0F8B31101EE4D1A23B71484DB7D3AD6F35 * get_m_InteractionStrengths_37() const { return ___m_InteractionStrengths_37; }
	inline Dictionary_2_t86132C0F8B31101EE4D1A23B71484DB7D3AD6F35 ** get_address_of_m_InteractionStrengths_37() { return &___m_InteractionStrengths_37; }
	inline void set_m_InteractionStrengths_37(Dictionary_2_t86132C0F8B31101EE4D1A23B71484DB7D3AD6F35 * value)
	{
		___m_InteractionStrengths_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InteractionStrengths_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_ManualInteractionInteractable_38() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_ManualInteractionInteractable_38)); }
	inline RuntimeObject* get_m_ManualInteractionInteractable_38() const { return ___m_ManualInteractionInteractable_38; }
	inline RuntimeObject** get_address_of_m_ManualInteractionInteractable_38() { return &___m_ManualInteractionInteractable_38; }
	inline void set_m_ManualInteractionInteractable_38(RuntimeObject* value)
	{
		___m_ManualInteractionInteractable_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ManualInteractionInteractable_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_RegisteredInteractionManager_39() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_RegisteredInteractionManager_39)); }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * get_m_RegisteredInteractionManager_39() const { return ___m_RegisteredInteractionManager_39; }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 ** get_address_of_m_RegisteredInteractionManager_39() { return &___m_RegisteredInteractionManager_39; }
	inline void set_m_RegisteredInteractionManager_39(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * value)
	{
		___m_RegisteredInteractionManager_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RegisteredInteractionManager_39), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseAttachPointVelocityU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___U3CuseAttachPointVelocityU3Ek__BackingField_42)); }
	inline bool get_U3CuseAttachPointVelocityU3Ek__BackingField_42() const { return ___U3CuseAttachPointVelocityU3Ek__BackingField_42; }
	inline bool* get_address_of_U3CuseAttachPointVelocityU3Ek__BackingField_42() { return &___U3CuseAttachPointVelocityU3Ek__BackingField_42; }
	inline void set_U3CuseAttachPointVelocityU3Ek__BackingField_42(bool value)
	{
		___U3CuseAttachPointVelocityU3Ek__BackingField_42 = value;
	}

	inline static int32_t get_offset_of_U3CattachPointVelocityU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___U3CattachPointVelocityU3Ek__BackingField_43)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CattachPointVelocityU3Ek__BackingField_43() const { return ___U3CattachPointVelocityU3Ek__BackingField_43; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CattachPointVelocityU3Ek__BackingField_43() { return &___U3CattachPointVelocityU3Ek__BackingField_43; }
	inline void set_U3CattachPointVelocityU3Ek__BackingField_43(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CattachPointVelocityU3Ek__BackingField_43 = value;
	}

	inline static int32_t get_offset_of_U3CattachPointAngularVelocityU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___U3CattachPointAngularVelocityU3Ek__BackingField_44)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CattachPointAngularVelocityU3Ek__BackingField_44() const { return ___U3CattachPointAngularVelocityU3Ek__BackingField_44; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CattachPointAngularVelocityU3Ek__BackingField_44() { return &___U3CattachPointAngularVelocityU3Ek__BackingField_44; }
	inline void set_U3CattachPointAngularVelocityU3Ek__BackingField_44(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CattachPointAngularVelocityU3Ek__BackingField_44 = value;
	}

	inline static int32_t get_offset_of_U3CtargetPriorityModeU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___U3CtargetPriorityModeU3Ek__BackingField_45)); }
	inline int32_t get_U3CtargetPriorityModeU3Ek__BackingField_45() const { return ___U3CtargetPriorityModeU3Ek__BackingField_45; }
	inline int32_t* get_address_of_U3CtargetPriorityModeU3Ek__BackingField_45() { return &___U3CtargetPriorityModeU3Ek__BackingField_45; }
	inline void set_U3CtargetPriorityModeU3Ek__BackingField_45(int32_t value)
	{
		___U3CtargetPriorityModeU3Ek__BackingField_45 = value;
	}

	inline static int32_t get_offset_of_U3CtargetsForSelectionU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___U3CtargetsForSelectionU3Ek__BackingField_46)); }
	inline List_1_t471EBB9BADE4A0B8711AC39DEF94BC759D83FC6E * get_U3CtargetsForSelectionU3Ek__BackingField_46() const { return ___U3CtargetsForSelectionU3Ek__BackingField_46; }
	inline List_1_t471EBB9BADE4A0B8711AC39DEF94BC759D83FC6E ** get_address_of_U3CtargetsForSelectionU3Ek__BackingField_46() { return &___U3CtargetsForSelectionU3Ek__BackingField_46; }
	inline void set_U3CtargetsForSelectionU3Ek__BackingField_46(List_1_t471EBB9BADE4A0B8711AC39DEF94BC759D83FC6E * value)
	{
		___U3CtargetsForSelectionU3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtargetsForSelectionU3Ek__BackingField_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeltaTimeStart_47() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_DeltaTimeStart_47)); }
	inline float get_m_DeltaTimeStart_47() const { return ___m_DeltaTimeStart_47; }
	inline float* get_address_of_m_DeltaTimeStart_47() { return &___m_DeltaTimeStart_47; }
	inline void set_m_DeltaTimeStart_47(float value)
	{
		___m_DeltaTimeStart_47 = value;
	}

	inline static int32_t get_offset_of_m_FrameOn_49() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_FrameOn_49)); }
	inline int32_t get_m_FrameOn_49() const { return ___m_FrameOn_49; }
	inline int32_t* get_address_of_m_FrameOn_49() { return &___m_FrameOn_49; }
	inline void set_m_FrameOn_49(int32_t value)
	{
		___m_FrameOn_49 = value;
	}

	inline static int32_t get_offset_of_m_VelocityPositionsCache_50() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_VelocityPositionsCache_50)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_VelocityPositionsCache_50() const { return ___m_VelocityPositionsCache_50; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_VelocityPositionsCache_50() { return &___m_VelocityPositionsCache_50; }
	inline void set_m_VelocityPositionsCache_50(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_VelocityPositionsCache_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VelocityPositionsCache_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_VelocityNormalsCache_51() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_VelocityNormalsCache_51)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_VelocityNormalsCache_51() const { return ___m_VelocityNormalsCache_51; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_VelocityNormalsCache_51() { return &___m_VelocityNormalsCache_51; }
	inline void set_m_VelocityNormalsCache_51(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_VelocityNormalsCache_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VelocityNormalsCache_51), (void*)value);
	}

	inline static int32_t get_offset_of_m_VelocityPositionsSum_52() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_VelocityPositionsSum_52)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_VelocityPositionsSum_52() const { return ___m_VelocityPositionsSum_52; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_VelocityPositionsSum_52() { return &___m_VelocityPositionsSum_52; }
	inline void set_m_VelocityPositionsSum_52(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_VelocityPositionsSum_52 = value;
	}

	inline static int32_t get_offset_of_m_VelocityNormalsSum_53() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_VelocityNormalsSum_53)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_VelocityNormalsSum_53() const { return ___m_VelocityNormalsSum_53; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_VelocityNormalsSum_53() { return &___m_VelocityNormalsSum_53; }
	inline void set_m_VelocityNormalsSum_53(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_VelocityNormalsSum_53 = value;
	}

	inline static int32_t get_offset_of_m_OnHoverEntered_54() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_OnHoverEntered_54)); }
	inline XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 * get_m_OnHoverEntered_54() const { return ___m_OnHoverEntered_54; }
	inline XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 ** get_address_of_m_OnHoverEntered_54() { return &___m_OnHoverEntered_54; }
	inline void set_m_OnHoverEntered_54(XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 * value)
	{
		___m_OnHoverEntered_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHoverEntered_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHoverExited_55() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_OnHoverExited_55)); }
	inline XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 * get_m_OnHoverExited_55() const { return ___m_OnHoverExited_55; }
	inline XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 ** get_address_of_m_OnHoverExited_55() { return &___m_OnHoverExited_55; }
	inline void set_m_OnHoverExited_55(XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 * value)
	{
		___m_OnHoverExited_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHoverExited_55), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSelectEntered_56() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_OnSelectEntered_56)); }
	inline XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 * get_m_OnSelectEntered_56() const { return ___m_OnSelectEntered_56; }
	inline XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 ** get_address_of_m_OnSelectEntered_56() { return &___m_OnSelectEntered_56; }
	inline void set_m_OnSelectEntered_56(XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 * value)
	{
		___m_OnSelectEntered_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSelectEntered_56), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSelectExited_57() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___m_OnSelectExited_57)); }
	inline XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 * get_m_OnSelectExited_57() const { return ___m_OnSelectExited_57; }
	inline XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 ** get_address_of_m_OnSelectExited_57() { return &___m_OnSelectExited_57; }
	inline void set_m_OnSelectExited_57(XRInteractorEvent_t9DCC223AAFEFEB69B54EE515291C79BEC6189A98 * value)
	{
		___m_OnSelectExited_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSelectExited_57), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChoverTargetsU3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F, ___U3ChoverTargetsU3Ek__BackingField_58)); }
	inline List_1_t8F9C188959ECAB5554BCCA621026A2CC5EE3DE91 * get_U3ChoverTargetsU3Ek__BackingField_58() const { return ___U3ChoverTargetsU3Ek__BackingField_58; }
	inline List_1_t8F9C188959ECAB5554BCCA621026A2CC5EE3DE91 ** get_address_of_U3ChoverTargetsU3Ek__BackingField_58() { return &___U3ChoverTargetsU3Ek__BackingField_58; }
	inline void set_U3ChoverTargetsU3Ek__BackingField_58(List_1_t8F9C188959ECAB5554BCCA621026A2CC5EE3DE91 * value)
	{
		___U3ChoverTargetsU3Ek__BackingField_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ChoverTargetsU3Ek__BackingField_58), (void*)value);
	}
};


// UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup
struct XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::registered
	Action_1_t47B49096A3F3DD81951D8486B69487104F4AA2F7 * ___registered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractionGroupUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::unregistered
	Action_1_t7A87D8669B23C029E3558AC726CF997A94F23E71 * ___unregistered_5;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_InteractionManager
	XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * ___m_InteractionManager_6;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_RegisteredInteractionManager
	XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * ___m_RegisteredInteractionManager_7;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::<containingGroup>k__BackingField
	RuntimeObject* ___U3CcontainingGroupU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_StartingGroupMembers
	List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * ___m_StartingGroupMembers_9;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractor UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::<activeInteractor>k__BackingField
	RuntimeObject* ___U3CactiveInteractorU3Ek__BackingField_10;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.RegistrationList`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_GroupMembers
	RegistrationList_1_t74EC1F9716A3D2DFF8076D934B6D948E3CC3B395 * ___m_GroupMembers_11;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_TempGroupMembers
	List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA * ___m_TempGroupMembers_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_IsProcessingGroupMembers
	bool ___m_IsProcessingGroupMembers_13;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_ValidTargets
	List_1_tA0AA68EBEDA30BFC60B674328ADD3173B39F3B23 * ___m_ValidTargets_14;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::m_DeprecatedValidTargets
	List_1_t8F9C188959ECAB5554BCCA621026A2CC5EE3DE91 * ___m_DeprecatedValidTargets_15;

public:
	inline static int32_t get_offset_of_registered_4() { return static_cast<int32_t>(offsetof(XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC, ___registered_4)); }
	inline Action_1_t47B49096A3F3DD81951D8486B69487104F4AA2F7 * get_registered_4() const { return ___registered_4; }
	inline Action_1_t47B49096A3F3DD81951D8486B69487104F4AA2F7 ** get_address_of_registered_4() { return &___registered_4; }
	inline void set_registered_4(Action_1_t47B49096A3F3DD81951D8486B69487104F4AA2F7 * value)
	{
		___registered_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registered_4), (void*)value);
	}

	inline static int32_t get_offset_of_unregistered_5() { return static_cast<int32_t>(offsetof(XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC, ___unregistered_5)); }
	inline Action_1_t7A87D8669B23C029E3558AC726CF997A94F23E71 * get_unregistered_5() const { return ___unregistered_5; }
	inline Action_1_t7A87D8669B23C029E3558AC726CF997A94F23E71 ** get_address_of_unregistered_5() { return &___unregistered_5; }
	inline void set_unregistered_5(Action_1_t7A87D8669B23C029E3558AC726CF997A94F23E71 * value)
	{
		___unregistered_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unregistered_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_InteractionManager_6() { return static_cast<int32_t>(offsetof(XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC, ___m_InteractionManager_6)); }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * get_m_InteractionManager_6() const { return ___m_InteractionManager_6; }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 ** get_address_of_m_InteractionManager_6() { return &___m_InteractionManager_6; }
	inline void set_m_InteractionManager_6(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * value)
	{
		___m_InteractionManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InteractionManager_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_RegisteredInteractionManager_7() { return static_cast<int32_t>(offsetof(XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC, ___m_RegisteredInteractionManager_7)); }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * get_m_RegisteredInteractionManager_7() const { return ___m_RegisteredInteractionManager_7; }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 ** get_address_of_m_RegisteredInteractionManager_7() { return &___m_RegisteredInteractionManager_7; }
	inline void set_m_RegisteredInteractionManager_7(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * value)
	{
		___m_RegisteredInteractionManager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RegisteredInteractionManager_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcontainingGroupU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC, ___U3CcontainingGroupU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CcontainingGroupU3Ek__BackingField_8() const { return ___U3CcontainingGroupU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CcontainingGroupU3Ek__BackingField_8() { return &___U3CcontainingGroupU3Ek__BackingField_8; }
	inline void set_U3CcontainingGroupU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CcontainingGroupU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcontainingGroupU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartingGroupMembers_9() { return static_cast<int32_t>(offsetof(XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC, ___m_StartingGroupMembers_9)); }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * get_m_StartingGroupMembers_9() const { return ___m_StartingGroupMembers_9; }
	inline List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 ** get_address_of_m_StartingGroupMembers_9() { return &___m_StartingGroupMembers_9; }
	inline void set_m_StartingGroupMembers_9(List_1_t9D216521E6A213FF8562D215598D336ABB5474F4 * value)
	{
		___m_StartingGroupMembers_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StartingGroupMembers_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CactiveInteractorU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC, ___U3CactiveInteractorU3Ek__BackingField_10)); }
	inline RuntimeObject* get_U3CactiveInteractorU3Ek__BackingField_10() const { return ___U3CactiveInteractorU3Ek__BackingField_10; }
	inline RuntimeObject** get_address_of_U3CactiveInteractorU3Ek__BackingField_10() { return &___U3CactiveInteractorU3Ek__BackingField_10; }
	inline void set_U3CactiveInteractorU3Ek__BackingField_10(RuntimeObject* value)
	{
		___U3CactiveInteractorU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CactiveInteractorU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupMembers_11() { return static_cast<int32_t>(offsetof(XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC, ___m_GroupMembers_11)); }
	inline RegistrationList_1_t74EC1F9716A3D2DFF8076D934B6D948E3CC3B395 * get_m_GroupMembers_11() const { return ___m_GroupMembers_11; }
	inline RegistrationList_1_t74EC1F9716A3D2DFF8076D934B6D948E3CC3B395 ** get_address_of_m_GroupMembers_11() { return &___m_GroupMembers_11; }
	inline void set_m_GroupMembers_11(RegistrationList_1_t74EC1F9716A3D2DFF8076D934B6D948E3CC3B395 * value)
	{
		___m_GroupMembers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GroupMembers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_TempGroupMembers_12() { return static_cast<int32_t>(offsetof(XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC, ___m_TempGroupMembers_12)); }
	inline List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA * get_m_TempGroupMembers_12() const { return ___m_TempGroupMembers_12; }
	inline List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA ** get_address_of_m_TempGroupMembers_12() { return &___m_TempGroupMembers_12; }
	inline void set_m_TempGroupMembers_12(List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA * value)
	{
		___m_TempGroupMembers_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempGroupMembers_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsProcessingGroupMembers_13() { return static_cast<int32_t>(offsetof(XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC, ___m_IsProcessingGroupMembers_13)); }
	inline bool get_m_IsProcessingGroupMembers_13() const { return ___m_IsProcessingGroupMembers_13; }
	inline bool* get_address_of_m_IsProcessingGroupMembers_13() { return &___m_IsProcessingGroupMembers_13; }
	inline void set_m_IsProcessingGroupMembers_13(bool value)
	{
		___m_IsProcessingGroupMembers_13 = value;
	}

	inline static int32_t get_offset_of_m_ValidTargets_14() { return static_cast<int32_t>(offsetof(XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC, ___m_ValidTargets_14)); }
	inline List_1_tA0AA68EBEDA30BFC60B674328ADD3173B39F3B23 * get_m_ValidTargets_14() const { return ___m_ValidTargets_14; }
	inline List_1_tA0AA68EBEDA30BFC60B674328ADD3173B39F3B23 ** get_address_of_m_ValidTargets_14() { return &___m_ValidTargets_14; }
	inline void set_m_ValidTargets_14(List_1_tA0AA68EBEDA30BFC60B674328ADD3173B39F3B23 * value)
	{
		___m_ValidTargets_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ValidTargets_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeprecatedValidTargets_15() { return static_cast<int32_t>(offsetof(XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC, ___m_DeprecatedValidTargets_15)); }
	inline List_1_t8F9C188959ECAB5554BCCA621026A2CC5EE3DE91 * get_m_DeprecatedValidTargets_15() const { return ___m_DeprecatedValidTargets_15; }
	inline List_1_t8F9C188959ECAB5554BCCA621026A2CC5EE3DE91 ** get_address_of_m_DeprecatedValidTargets_15() { return &___m_DeprecatedValidTargets_15; }
	inline void set_m_DeprecatedValidTargets_15(List_1_t8F9C188959ECAB5554BCCA621026A2CC5EE3DE91 * value)
	{
		___m_DeprecatedValidTargets_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeprecatedValidTargets_15), (void*)value);
	}
};


// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Camera Unity.XR.CoreUtils.XROrigin::m_Camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_Camera_4;
	// UnityEngine.Transform Unity.XR.CoreUtils.XROrigin::<TrackablesParent>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CTrackablesParentU3Ek__BackingField_5;
	// System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs> Unity.XR.CoreUtils.XROrigin::TrackablesParentTransformChanged
	Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * ___TrackablesParentTransformChanged_6;
	// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::m_OriginBaseGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_OriginBaseGameObject_8;
	// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::m_CameraFloorOffsetObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CameraFloorOffsetObject_9;
	// Unity.XR.CoreUtils.XROrigin/TrackingOriginMode Unity.XR.CoreUtils.XROrigin::m_RequestedTrackingOriginMode
	int32_t ___m_RequestedTrackingOriginMode_10;
	// System.Single Unity.XR.CoreUtils.XROrigin::m_CameraYOffset
	float ___m_CameraYOffset_11;
	// UnityEngine.XR.TrackingOriginModeFlags Unity.XR.CoreUtils.XROrigin::<CurrentTrackingOriginMode>k__BackingField
	int32_t ___U3CCurrentTrackingOriginModeU3Ek__BackingField_12;
	// System.Boolean Unity.XR.CoreUtils.XROrigin::m_CameraInitialized
	bool ___m_CameraInitialized_14;
	// System.Boolean Unity.XR.CoreUtils.XROrigin::m_CameraInitializing
	bool ___m_CameraInitializing_15;

public:
	inline static int32_t get_offset_of_m_Camera_4() { return static_cast<int32_t>(offsetof(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D, ___m_Camera_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_Camera_4() const { return ___m_Camera_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_Camera_4() { return &___m_Camera_4; }
	inline void set_m_Camera_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_Camera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrackablesParentU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D, ___U3CTrackablesParentU3Ek__BackingField_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CTrackablesParentU3Ek__BackingField_5() const { return ___U3CTrackablesParentU3Ek__BackingField_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CTrackablesParentU3Ek__BackingField_5() { return &___U3CTrackablesParentU3Ek__BackingField_5; }
	inline void set_U3CTrackablesParentU3Ek__BackingField_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CTrackablesParentU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrackablesParentU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_TrackablesParentTransformChanged_6() { return static_cast<int32_t>(offsetof(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D, ___TrackablesParentTransformChanged_6)); }
	inline Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * get_TrackablesParentTransformChanged_6() const { return ___TrackablesParentTransformChanged_6; }
	inline Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E ** get_address_of_TrackablesParentTransformChanged_6() { return &___TrackablesParentTransformChanged_6; }
	inline void set_TrackablesParentTransformChanged_6(Action_1_t61B82ED6C34AFA284483A0FB8F1E0D07BA0C266E * value)
	{
		___TrackablesParentTransformChanged_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrackablesParentTransformChanged_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginBaseGameObject_8() { return static_cast<int32_t>(offsetof(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D, ___m_OriginBaseGameObject_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_OriginBaseGameObject_8() const { return ___m_OriginBaseGameObject_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_OriginBaseGameObject_8() { return &___m_OriginBaseGameObject_8; }
	inline void set_m_OriginBaseGameObject_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_OriginBaseGameObject_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginBaseGameObject_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_CameraFloorOffsetObject_9() { return static_cast<int32_t>(offsetof(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D, ___m_CameraFloorOffsetObject_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CameraFloorOffsetObject_9() const { return ___m_CameraFloorOffsetObject_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CameraFloorOffsetObject_9() { return &___m_CameraFloorOffsetObject_9; }
	inline void set_m_CameraFloorOffsetObject_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CameraFloorOffsetObject_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CameraFloorOffsetObject_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_RequestedTrackingOriginMode_10() { return static_cast<int32_t>(offsetof(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D, ___m_RequestedTrackingOriginMode_10)); }
	inline int32_t get_m_RequestedTrackingOriginMode_10() const { return ___m_RequestedTrackingOriginMode_10; }
	inline int32_t* get_address_of_m_RequestedTrackingOriginMode_10() { return &___m_RequestedTrackingOriginMode_10; }
	inline void set_m_RequestedTrackingOriginMode_10(int32_t value)
	{
		___m_RequestedTrackingOriginMode_10 = value;
	}

	inline static int32_t get_offset_of_m_CameraYOffset_11() { return static_cast<int32_t>(offsetof(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D, ___m_CameraYOffset_11)); }
	inline float get_m_CameraYOffset_11() const { return ___m_CameraYOffset_11; }
	inline float* get_address_of_m_CameraYOffset_11() { return &___m_CameraYOffset_11; }
	inline void set_m_CameraYOffset_11(float value)
	{
		___m_CameraYOffset_11 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentTrackingOriginModeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D, ___U3CCurrentTrackingOriginModeU3Ek__BackingField_12)); }
	inline int32_t get_U3CCurrentTrackingOriginModeU3Ek__BackingField_12() const { return ___U3CCurrentTrackingOriginModeU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CCurrentTrackingOriginModeU3Ek__BackingField_12() { return &___U3CCurrentTrackingOriginModeU3Ek__BackingField_12; }
	inline void set_U3CCurrentTrackingOriginModeU3Ek__BackingField_12(int32_t value)
	{
		___U3CCurrentTrackingOriginModeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_m_CameraInitialized_14() { return static_cast<int32_t>(offsetof(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D, ___m_CameraInitialized_14)); }
	inline bool get_m_CameraInitialized_14() const { return ___m_CameraInitialized_14; }
	inline bool* get_address_of_m_CameraInitialized_14() { return &___m_CameraInitialized_14; }
	inline void set_m_CameraInitialized_14(bool value)
	{
		___m_CameraInitialized_14 = value;
	}

	inline static int32_t get_offset_of_m_CameraInitializing_15() { return static_cast<int32_t>(offsetof(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D, ___m_CameraInitializing_15)); }
	inline bool get_m_CameraInitializing_15() const { return ___m_CameraInitializing_15; }
	inline bool* get_address_of_m_CameraInitializing_15() { return &___m_CameraInitializing_15; }
	inline void set_m_CameraInitializing_15(bool value)
	{
		___m_CameraInitializing_15 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance
struct XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_PokeFollowTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_PokeFollowTransform_4;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_SmoothingSpeed
	float ___m_SmoothingSpeed_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_ReturnToInitialPosition
	bool ___m_ReturnToInitialPosition_6;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_ApplyIfChildIsTarget
	bool ___m_ApplyIfChildIsTarget_7;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_ClampToMaxDistance
	bool ___m_ClampToMaxDistance_8;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_MaxDistance
	float ___m_MaxDistance_9;
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.IPokeStateDataProvider UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_PokeDataProvider
	RuntimeObject* ___m_PokeDataProvider_10;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.Vector3TweenableVariable UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_TransformTweenableVariable
	Vector3TweenableVariable_tED608C05E502A2D74AC2E7031CC90D00D92C9917 * ___m_TransformTweenableVariable_11;
	// Unity.XR.CoreUtils.Bindings.BindingsGroup UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_BindingsGroup
	BindingsGroup_tFD7DAAAD7DD40D8180050DA4BE2BF93754B4F2AE * ___m_BindingsGroup_12;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_InitialPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_InitialPosition_13;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::m_IsFirstFrame
	bool ___m_IsFirstFrame_14;

public:
	inline static int32_t get_offset_of_m_PokeFollowTransform_4() { return static_cast<int32_t>(offsetof(XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC, ___m_PokeFollowTransform_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_PokeFollowTransform_4() const { return ___m_PokeFollowTransform_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_PokeFollowTransform_4() { return &___m_PokeFollowTransform_4; }
	inline void set_m_PokeFollowTransform_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_PokeFollowTransform_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PokeFollowTransform_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SmoothingSpeed_5() { return static_cast<int32_t>(offsetof(XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC, ___m_SmoothingSpeed_5)); }
	inline float get_m_SmoothingSpeed_5() const { return ___m_SmoothingSpeed_5; }
	inline float* get_address_of_m_SmoothingSpeed_5() { return &___m_SmoothingSpeed_5; }
	inline void set_m_SmoothingSpeed_5(float value)
	{
		___m_SmoothingSpeed_5 = value;
	}

	inline static int32_t get_offset_of_m_ReturnToInitialPosition_6() { return static_cast<int32_t>(offsetof(XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC, ___m_ReturnToInitialPosition_6)); }
	inline bool get_m_ReturnToInitialPosition_6() const { return ___m_ReturnToInitialPosition_6; }
	inline bool* get_address_of_m_ReturnToInitialPosition_6() { return &___m_ReturnToInitialPosition_6; }
	inline void set_m_ReturnToInitialPosition_6(bool value)
	{
		___m_ReturnToInitialPosition_6 = value;
	}

	inline static int32_t get_offset_of_m_ApplyIfChildIsTarget_7() { return static_cast<int32_t>(offsetof(XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC, ___m_ApplyIfChildIsTarget_7)); }
	inline bool get_m_ApplyIfChildIsTarget_7() const { return ___m_ApplyIfChildIsTarget_7; }
	inline bool* get_address_of_m_ApplyIfChildIsTarget_7() { return &___m_ApplyIfChildIsTarget_7; }
	inline void set_m_ApplyIfChildIsTarget_7(bool value)
	{
		___m_ApplyIfChildIsTarget_7 = value;
	}

	inline static int32_t get_offset_of_m_ClampToMaxDistance_8() { return static_cast<int32_t>(offsetof(XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC, ___m_ClampToMaxDistance_8)); }
	inline bool get_m_ClampToMaxDistance_8() const { return ___m_ClampToMaxDistance_8; }
	inline bool* get_address_of_m_ClampToMaxDistance_8() { return &___m_ClampToMaxDistance_8; }
	inline void set_m_ClampToMaxDistance_8(bool value)
	{
		___m_ClampToMaxDistance_8 = value;
	}

	inline static int32_t get_offset_of_m_MaxDistance_9() { return static_cast<int32_t>(offsetof(XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC, ___m_MaxDistance_9)); }
	inline float get_m_MaxDistance_9() const { return ___m_MaxDistance_9; }
	inline float* get_address_of_m_MaxDistance_9() { return &___m_MaxDistance_9; }
	inline void set_m_MaxDistance_9(float value)
	{
		___m_MaxDistance_9 = value;
	}

	inline static int32_t get_offset_of_m_PokeDataProvider_10() { return static_cast<int32_t>(offsetof(XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC, ___m_PokeDataProvider_10)); }
	inline RuntimeObject* get_m_PokeDataProvider_10() const { return ___m_PokeDataProvider_10; }
	inline RuntimeObject** get_address_of_m_PokeDataProvider_10() { return &___m_PokeDataProvider_10; }
	inline void set_m_PokeDataProvider_10(RuntimeObject* value)
	{
		___m_PokeDataProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PokeDataProvider_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_TransformTweenableVariable_11() { return static_cast<int32_t>(offsetof(XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC, ___m_TransformTweenableVariable_11)); }
	inline Vector3TweenableVariable_tED608C05E502A2D74AC2E7031CC90D00D92C9917 * get_m_TransformTweenableVariable_11() const { return ___m_TransformTweenableVariable_11; }
	inline Vector3TweenableVariable_tED608C05E502A2D74AC2E7031CC90D00D92C9917 ** get_address_of_m_TransformTweenableVariable_11() { return &___m_TransformTweenableVariable_11; }
	inline void set_m_TransformTweenableVariable_11(Vector3TweenableVariable_tED608C05E502A2D74AC2E7031CC90D00D92C9917 * value)
	{
		___m_TransformTweenableVariable_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TransformTweenableVariable_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingsGroup_12() { return static_cast<int32_t>(offsetof(XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC, ___m_BindingsGroup_12)); }
	inline BindingsGroup_tFD7DAAAD7DD40D8180050DA4BE2BF93754B4F2AE * get_m_BindingsGroup_12() const { return ___m_BindingsGroup_12; }
	inline BindingsGroup_tFD7DAAAD7DD40D8180050DA4BE2BF93754B4F2AE ** get_address_of_m_BindingsGroup_12() { return &___m_BindingsGroup_12; }
	inline void set_m_BindingsGroup_12(BindingsGroup_tFD7DAAAD7DD40D8180050DA4BE2BF93754B4F2AE * value)
	{
		___m_BindingsGroup_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BindingsGroup_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_InitialPosition_13() { return static_cast<int32_t>(offsetof(XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC, ___m_InitialPosition_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_InitialPosition_13() const { return ___m_InitialPosition_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_InitialPosition_13() { return &___m_InitialPosition_13; }
	inline void set_m_InitialPosition_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_InitialPosition_13 = value;
	}

	inline static int32_t get_offset_of_m_IsFirstFrame_14() { return static_cast<int32_t>(offsetof(XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC, ___m_IsFirstFrame_14)); }
	inline bool get_m_IsFirstFrame_14() const { return ___m_IsFirstFrame_14; }
	inline bool* get_address_of_m_IsFirstFrame_14() { return &___m_IsFirstFrame_14; }
	inline void set_m_IsFirstFrame_14(bool value)
	{
		___m_IsFirstFrame_14 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase
struct ContinuousMoveProviderBase_tEEA003EAE25A3AAEEF9FF9B39FA30EE046059044  : public LocomotionProvider_tF07C5527C6B8CDB38B435E8EDC50DF8CA86C6448
{
public:
	// System.Single UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_MoveSpeed
	float ___m_MoveSpeed_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_EnableStrafe
	bool ___m_EnableStrafe_10;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_EnableFly
	bool ___m_EnableFly_11;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_UseGravity
	bool ___m_UseGravity_12;
	// UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase/GravityApplicationMode UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_GravityApplicationMode
	int32_t ___m_GravityApplicationMode_13;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_ForwardSource
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_ForwardSource_14;
	// UnityEngine.CharacterController UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_CharacterController
	CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * ___m_CharacterController_15;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_AttemptedGetCharacterController
	bool ___m_AttemptedGetCharacterController_16;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_IsMovingXROrigin
	bool ___m_IsMovingXROrigin_17;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::m_VerticalVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_VerticalVelocity_18;

public:
	inline static int32_t get_offset_of_m_MoveSpeed_9() { return static_cast<int32_t>(offsetof(ContinuousMoveProviderBase_tEEA003EAE25A3AAEEF9FF9B39FA30EE046059044, ___m_MoveSpeed_9)); }
	inline float get_m_MoveSpeed_9() const { return ___m_MoveSpeed_9; }
	inline float* get_address_of_m_MoveSpeed_9() { return &___m_MoveSpeed_9; }
	inline void set_m_MoveSpeed_9(float value)
	{
		___m_MoveSpeed_9 = value;
	}

	inline static int32_t get_offset_of_m_EnableStrafe_10() { return static_cast<int32_t>(offsetof(ContinuousMoveProviderBase_tEEA003EAE25A3AAEEF9FF9B39FA30EE046059044, ___m_EnableStrafe_10)); }
	inline bool get_m_EnableStrafe_10() const { return ___m_EnableStrafe_10; }
	inline bool* get_address_of_m_EnableStrafe_10() { return &___m_EnableStrafe_10; }
	inline void set_m_EnableStrafe_10(bool value)
	{
		___m_EnableStrafe_10 = value;
	}

	inline static int32_t get_offset_of_m_EnableFly_11() { return static_cast<int32_t>(offsetof(ContinuousMoveProviderBase_tEEA003EAE25A3AAEEF9FF9B39FA30EE046059044, ___m_EnableFly_11)); }
	inline bool get_m_EnableFly_11() const { return ___m_EnableFly_11; }
	inline bool* get_address_of_m_EnableFly_11() { return &___m_EnableFly_11; }
	inline void set_m_EnableFly_11(bool value)
	{
		___m_EnableFly_11 = value;
	}

	inline static int32_t get_offset_of_m_UseGravity_12() { return static_cast<int32_t>(offsetof(ContinuousMoveProviderBase_tEEA003EAE25A3AAEEF9FF9B39FA30EE046059044, ___m_UseGravity_12)); }
	inline bool get_m_UseGravity_12() const { return ___m_UseGravity_12; }
	inline bool* get_address_of_m_UseGravity_12() { return &___m_UseGravity_12; }
	inline void set_m_UseGravity_12(bool value)
	{
		___m_UseGravity_12 = value;
	}

	inline static int32_t get_offset_of_m_GravityApplicationMode_13() { return static_cast<int32_t>(offsetof(ContinuousMoveProviderBase_tEEA003EAE25A3AAEEF9FF9B39FA30EE046059044, ___m_GravityApplicationMode_13)); }
	inline int32_t get_m_GravityApplicationMode_13() const { return ___m_GravityApplicationMode_13; }
	inline int32_t* get_address_of_m_GravityApplicationMode_13() { return &___m_GravityApplicationMode_13; }
	inline void set_m_GravityApplicationMode_13(int32_t value)
	{
		___m_GravityApplicationMode_13 = value;
	}

	inline static int32_t get_offset_of_m_ForwardSource_14() { return static_cast<int32_t>(offsetof(ContinuousMoveProviderBase_tEEA003EAE25A3AAEEF9FF9B39FA30EE046059044, ___m_ForwardSource_14)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_ForwardSource_14() const { return ___m_ForwardSource_14; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_ForwardSource_14() { return &___m_ForwardSource_14; }
	inline void set_m_ForwardSource_14(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_ForwardSource_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ForwardSource_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_CharacterController_15() { return static_cast<int32_t>(offsetof(ContinuousMoveProviderBase_tEEA003EAE25A3AAEEF9FF9B39FA30EE046059044, ___m_CharacterController_15)); }
	inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * get_m_CharacterController_15() const { return ___m_CharacterController_15; }
	inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E ** get_address_of_m_CharacterController_15() { return &___m_CharacterController_15; }
	inline void set_m_CharacterController_15(CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * value)
	{
		___m_CharacterController_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CharacterController_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_AttemptedGetCharacterController_16() { return static_cast<int32_t>(offsetof(ContinuousMoveProviderBase_tEEA003EAE25A3AAEEF9FF9B39FA30EE046059044, ___m_AttemptedGetCharacterController_16)); }
	inline bool get_m_AttemptedGetCharacterController_16() const { return ___m_AttemptedGetCharacterController_16; }
	inline bool* get_address_of_m_AttemptedGetCharacterController_16() { return &___m_AttemptedGetCharacterController_16; }
	inline void set_m_AttemptedGetCharacterController_16(bool value)
	{
		___m_AttemptedGetCharacterController_16 = value;
	}

	inline static int32_t get_offset_of_m_IsMovingXROrigin_17() { return static_cast<int32_t>(offsetof(ContinuousMoveProviderBase_tEEA003EAE25A3AAEEF9FF9B39FA30EE046059044, ___m_IsMovingXROrigin_17)); }
	inline bool get_m_IsMovingXROrigin_17() const { return ___m_IsMovingXROrigin_17; }
	inline bool* get_address_of_m_IsMovingXROrigin_17() { return &___m_IsMovingXROrigin_17; }
	inline void set_m_IsMovingXROrigin_17(bool value)
	{
		___m_IsMovingXROrigin_17 = value;
	}

	inline static int32_t get_offset_of_m_VerticalVelocity_18() { return static_cast<int32_t>(offsetof(ContinuousMoveProviderBase_tEEA003EAE25A3AAEEF9FF9B39FA30EE046059044, ___m_VerticalVelocity_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_VerticalVelocity_18() const { return ___m_VerticalVelocity_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_VerticalVelocity_18() { return &___m_VerticalVelocity_18; }
	inline void set_m_VerticalVelocity_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_VerticalVelocity_18 = value;
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


// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor
struct XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884  : public XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F
{
public:
	// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor/InputTriggerType UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_SelectActionTrigger
	int32_t ___m_SelectActionTrigger_59;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HideControllerOnSelect
	bool ___m_HideControllerOnSelect_60;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoveredActivate
	bool ___m_AllowHoveredActivate_61;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_TargetPriorityMode
	int32_t ___m_TargetPriorityMode_62;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectEntered
	bool ___m_PlayAudioClipOnSelectEntered_63;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectEntered
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___m_AudioClipForOnSelectEntered_64;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectExited
	bool ___m_PlayAudioClipOnSelectExited_65;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectExited
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___m_AudioClipForOnSelectExited_66;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectCanceled
	bool ___m_PlayAudioClipOnSelectCanceled_67;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectCanceled
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___m_AudioClipForOnSelectCanceled_68;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverEntered
	bool ___m_PlayAudioClipOnHoverEntered_69;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverEntered
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___m_AudioClipForOnHoverEntered_70;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverExited
	bool ___m_PlayAudioClipOnHoverExited_71;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverExited
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___m_AudioClipForOnHoverExited_72;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverCanceled
	bool ___m_PlayAudioClipOnHoverCanceled_73;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverCanceled
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___m_AudioClipForOnHoverCanceled_74;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoverAudioWhileSelecting
	bool ___m_AllowHoverAudioWhileSelecting_75;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectEntered
	bool ___m_PlayHapticsOnSelectEntered_76;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterIntensity
	float ___m_HapticSelectEnterIntensity_77;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterDuration
	float ___m_HapticSelectEnterDuration_78;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectExited
	bool ___m_PlayHapticsOnSelectExited_79;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitIntensity
	float ___m_HapticSelectExitIntensity_80;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitDuration
	float ___m_HapticSelectExitDuration_81;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectCanceled
	bool ___m_PlayHapticsOnSelectCanceled_82;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelIntensity
	float ___m_HapticSelectCancelIntensity_83;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelDuration
	float ___m_HapticSelectCancelDuration_84;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverEntered
	bool ___m_PlayHapticsOnHoverEntered_85;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterIntensity
	float ___m_HapticHoverEnterIntensity_86;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterDuration
	float ___m_HapticHoverEnterDuration_87;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverExited
	bool ___m_PlayHapticsOnHoverExited_88;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitIntensity
	float ___m_HapticHoverExitIntensity_89;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitDuration
	float ___m_HapticHoverExitDuration_90;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverCanceled
	bool ___m_PlayHapticsOnHoverCanceled_91;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelIntensity
	float ___m_HapticHoverCancelIntensity_92;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelDuration
	float ___m_HapticHoverCancelDuration_93;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoverHapticsWhileSelecting
	bool ___m_AllowHoverHapticsWhileSelecting_94;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowActivate
	bool ___m_AllowActivate_95;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_Controller
	XRBaseController_t3CC6EAD1F83B61B2E06AC2D1575A289CCD6437AF * ___m_Controller_96;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ActivateEventArgs
	LinkedPool_1_tE2753A4A1780F82E95F490886556F9A2E579A0A2 * ___m_ActivateEventArgs_97;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_DeactivateEventArgs
	LinkedPool_1_tBAA3185B83FAC3FF354A3FB48E8BEDDD52ED54A5 * ___m_DeactivateEventArgs_98;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectActive
	bool ___m_ToggleSelectActive_100;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectDeactivatedThisFrame
	bool ___m_ToggleSelectDeactivatedThisFrame_101;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_WaitingForSelectDeactivate
	bool ___m_WaitingForSelectDeactivate_102;
	// UnityEngine.AudioSource UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_EffectsAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___m_EffectsAudioSource_103;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::<validTargets>k__BackingField
	List_1_t8F9C188959ECAB5554BCCA621026A2CC5EE3DE91 * ___U3CvalidTargetsU3Ek__BackingField_104;

public:
	inline static int32_t get_offset_of_m_SelectActionTrigger_59() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_SelectActionTrigger_59)); }
	inline int32_t get_m_SelectActionTrigger_59() const { return ___m_SelectActionTrigger_59; }
	inline int32_t* get_address_of_m_SelectActionTrigger_59() { return &___m_SelectActionTrigger_59; }
	inline void set_m_SelectActionTrigger_59(int32_t value)
	{
		___m_SelectActionTrigger_59 = value;
	}

	inline static int32_t get_offset_of_m_HideControllerOnSelect_60() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_HideControllerOnSelect_60)); }
	inline bool get_m_HideControllerOnSelect_60() const { return ___m_HideControllerOnSelect_60; }
	inline bool* get_address_of_m_HideControllerOnSelect_60() { return &___m_HideControllerOnSelect_60; }
	inline void set_m_HideControllerOnSelect_60(bool value)
	{
		___m_HideControllerOnSelect_60 = value;
	}

	inline static int32_t get_offset_of_m_AllowHoveredActivate_61() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_AllowHoveredActivate_61)); }
	inline bool get_m_AllowHoveredActivate_61() const { return ___m_AllowHoveredActivate_61; }
	inline bool* get_address_of_m_AllowHoveredActivate_61() { return &___m_AllowHoveredActivate_61; }
	inline void set_m_AllowHoveredActivate_61(bool value)
	{
		___m_AllowHoveredActivate_61 = value;
	}

	inline static int32_t get_offset_of_m_TargetPriorityMode_62() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_TargetPriorityMode_62)); }
	inline int32_t get_m_TargetPriorityMode_62() const { return ___m_TargetPriorityMode_62; }
	inline int32_t* get_address_of_m_TargetPriorityMode_62() { return &___m_TargetPriorityMode_62; }
	inline void set_m_TargetPriorityMode_62(int32_t value)
	{
		___m_TargetPriorityMode_62 = value;
	}

	inline static int32_t get_offset_of_m_PlayAudioClipOnSelectEntered_63() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_PlayAudioClipOnSelectEntered_63)); }
	inline bool get_m_PlayAudioClipOnSelectEntered_63() const { return ___m_PlayAudioClipOnSelectEntered_63; }
	inline bool* get_address_of_m_PlayAudioClipOnSelectEntered_63() { return &___m_PlayAudioClipOnSelectEntered_63; }
	inline void set_m_PlayAudioClipOnSelectEntered_63(bool value)
	{
		___m_PlayAudioClipOnSelectEntered_63 = value;
	}

	inline static int32_t get_offset_of_m_AudioClipForOnSelectEntered_64() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_AudioClipForOnSelectEntered_64)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_m_AudioClipForOnSelectEntered_64() const { return ___m_AudioClipForOnSelectEntered_64; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_m_AudioClipForOnSelectEntered_64() { return &___m_AudioClipForOnSelectEntered_64; }
	inline void set_m_AudioClipForOnSelectEntered_64(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___m_AudioClipForOnSelectEntered_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AudioClipForOnSelectEntered_64), (void*)value);
	}

	inline static int32_t get_offset_of_m_PlayAudioClipOnSelectExited_65() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_PlayAudioClipOnSelectExited_65)); }
	inline bool get_m_PlayAudioClipOnSelectExited_65() const { return ___m_PlayAudioClipOnSelectExited_65; }
	inline bool* get_address_of_m_PlayAudioClipOnSelectExited_65() { return &___m_PlayAudioClipOnSelectExited_65; }
	inline void set_m_PlayAudioClipOnSelectExited_65(bool value)
	{
		___m_PlayAudioClipOnSelectExited_65 = value;
	}

	inline static int32_t get_offset_of_m_AudioClipForOnSelectExited_66() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_AudioClipForOnSelectExited_66)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_m_AudioClipForOnSelectExited_66() const { return ___m_AudioClipForOnSelectExited_66; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_m_AudioClipForOnSelectExited_66() { return &___m_AudioClipForOnSelectExited_66; }
	inline void set_m_AudioClipForOnSelectExited_66(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___m_AudioClipForOnSelectExited_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AudioClipForOnSelectExited_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_PlayAudioClipOnSelectCanceled_67() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_PlayAudioClipOnSelectCanceled_67)); }
	inline bool get_m_PlayAudioClipOnSelectCanceled_67() const { return ___m_PlayAudioClipOnSelectCanceled_67; }
	inline bool* get_address_of_m_PlayAudioClipOnSelectCanceled_67() { return &___m_PlayAudioClipOnSelectCanceled_67; }
	inline void set_m_PlayAudioClipOnSelectCanceled_67(bool value)
	{
		___m_PlayAudioClipOnSelectCanceled_67 = value;
	}

	inline static int32_t get_offset_of_m_AudioClipForOnSelectCanceled_68() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_AudioClipForOnSelectCanceled_68)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_m_AudioClipForOnSelectCanceled_68() const { return ___m_AudioClipForOnSelectCanceled_68; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_m_AudioClipForOnSelectCanceled_68() { return &___m_AudioClipForOnSelectCanceled_68; }
	inline void set_m_AudioClipForOnSelectCanceled_68(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___m_AudioClipForOnSelectCanceled_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AudioClipForOnSelectCanceled_68), (void*)value);
	}

	inline static int32_t get_offset_of_m_PlayAudioClipOnHoverEntered_69() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_PlayAudioClipOnHoverEntered_69)); }
	inline bool get_m_PlayAudioClipOnHoverEntered_69() const { return ___m_PlayAudioClipOnHoverEntered_69; }
	inline bool* get_address_of_m_PlayAudioClipOnHoverEntered_69() { return &___m_PlayAudioClipOnHoverEntered_69; }
	inline void set_m_PlayAudioClipOnHoverEntered_69(bool value)
	{
		___m_PlayAudioClipOnHoverEntered_69 = value;
	}

	inline static int32_t get_offset_of_m_AudioClipForOnHoverEntered_70() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_AudioClipForOnHoverEntered_70)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_m_AudioClipForOnHoverEntered_70() const { return ___m_AudioClipForOnHoverEntered_70; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_m_AudioClipForOnHoverEntered_70() { return &___m_AudioClipForOnHoverEntered_70; }
	inline void set_m_AudioClipForOnHoverEntered_70(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___m_AudioClipForOnHoverEntered_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AudioClipForOnHoverEntered_70), (void*)value);
	}

	inline static int32_t get_offset_of_m_PlayAudioClipOnHoverExited_71() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_PlayAudioClipOnHoverExited_71)); }
	inline bool get_m_PlayAudioClipOnHoverExited_71() const { return ___m_PlayAudioClipOnHoverExited_71; }
	inline bool* get_address_of_m_PlayAudioClipOnHoverExited_71() { return &___m_PlayAudioClipOnHoverExited_71; }
	inline void set_m_PlayAudioClipOnHoverExited_71(bool value)
	{
		___m_PlayAudioClipOnHoverExited_71 = value;
	}

	inline static int32_t get_offset_of_m_AudioClipForOnHoverExited_72() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_AudioClipForOnHoverExited_72)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_m_AudioClipForOnHoverExited_72() const { return ___m_AudioClipForOnHoverExited_72; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_m_AudioClipForOnHoverExited_72() { return &___m_AudioClipForOnHoverExited_72; }
	inline void set_m_AudioClipForOnHoverExited_72(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___m_AudioClipForOnHoverExited_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AudioClipForOnHoverExited_72), (void*)value);
	}

	inline static int32_t get_offset_of_m_PlayAudioClipOnHoverCanceled_73() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_PlayAudioClipOnHoverCanceled_73)); }
	inline bool get_m_PlayAudioClipOnHoverCanceled_73() const { return ___m_PlayAudioClipOnHoverCanceled_73; }
	inline bool* get_address_of_m_PlayAudioClipOnHoverCanceled_73() { return &___m_PlayAudioClipOnHoverCanceled_73; }
	inline void set_m_PlayAudioClipOnHoverCanceled_73(bool value)
	{
		___m_PlayAudioClipOnHoverCanceled_73 = value;
	}

	inline static int32_t get_offset_of_m_AudioClipForOnHoverCanceled_74() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_AudioClipForOnHoverCanceled_74)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_m_AudioClipForOnHoverCanceled_74() const { return ___m_AudioClipForOnHoverCanceled_74; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_m_AudioClipForOnHoverCanceled_74() { return &___m_AudioClipForOnHoverCanceled_74; }
	inline void set_m_AudioClipForOnHoverCanceled_74(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___m_AudioClipForOnHoverCanceled_74 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AudioClipForOnHoverCanceled_74), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowHoverAudioWhileSelecting_75() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_AllowHoverAudioWhileSelecting_75)); }
	inline bool get_m_AllowHoverAudioWhileSelecting_75() const { return ___m_AllowHoverAudioWhileSelecting_75; }
	inline bool* get_address_of_m_AllowHoverAudioWhileSelecting_75() { return &___m_AllowHoverAudioWhileSelecting_75; }
	inline void set_m_AllowHoverAudioWhileSelecting_75(bool value)
	{
		___m_AllowHoverAudioWhileSelecting_75 = value;
	}

	inline static int32_t get_offset_of_m_PlayHapticsOnSelectEntered_76() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_PlayHapticsOnSelectEntered_76)); }
	inline bool get_m_PlayHapticsOnSelectEntered_76() const { return ___m_PlayHapticsOnSelectEntered_76; }
	inline bool* get_address_of_m_PlayHapticsOnSelectEntered_76() { return &___m_PlayHapticsOnSelectEntered_76; }
	inline void set_m_PlayHapticsOnSelectEntered_76(bool value)
	{
		___m_PlayHapticsOnSelectEntered_76 = value;
	}

	inline static int32_t get_offset_of_m_HapticSelectEnterIntensity_77() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_HapticSelectEnterIntensity_77)); }
	inline float get_m_HapticSelectEnterIntensity_77() const { return ___m_HapticSelectEnterIntensity_77; }
	inline float* get_address_of_m_HapticSelectEnterIntensity_77() { return &___m_HapticSelectEnterIntensity_77; }
	inline void set_m_HapticSelectEnterIntensity_77(float value)
	{
		___m_HapticSelectEnterIntensity_77 = value;
	}

	inline static int32_t get_offset_of_m_HapticSelectEnterDuration_78() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_HapticSelectEnterDuration_78)); }
	inline float get_m_HapticSelectEnterDuration_78() const { return ___m_HapticSelectEnterDuration_78; }
	inline float* get_address_of_m_HapticSelectEnterDuration_78() { return &___m_HapticSelectEnterDuration_78; }
	inline void set_m_HapticSelectEnterDuration_78(float value)
	{
		___m_HapticSelectEnterDuration_78 = value;
	}

	inline static int32_t get_offset_of_m_PlayHapticsOnSelectExited_79() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_PlayHapticsOnSelectExited_79)); }
	inline bool get_m_PlayHapticsOnSelectExited_79() const { return ___m_PlayHapticsOnSelectExited_79; }
	inline bool* get_address_of_m_PlayHapticsOnSelectExited_79() { return &___m_PlayHapticsOnSelectExited_79; }
	inline void set_m_PlayHapticsOnSelectExited_79(bool value)
	{
		___m_PlayHapticsOnSelectExited_79 = value;
	}

	inline static int32_t get_offset_of_m_HapticSelectExitIntensity_80() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_HapticSelectExitIntensity_80)); }
	inline float get_m_HapticSelectExitIntensity_80() const { return ___m_HapticSelectExitIntensity_80; }
	inline float* get_address_of_m_HapticSelectExitIntensity_80() { return &___m_HapticSelectExitIntensity_80; }
	inline void set_m_HapticSelectExitIntensity_80(float value)
	{
		___m_HapticSelectExitIntensity_80 = value;
	}

	inline static int32_t get_offset_of_m_HapticSelectExitDuration_81() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_HapticSelectExitDuration_81)); }
	inline float get_m_HapticSelectExitDuration_81() const { return ___m_HapticSelectExitDuration_81; }
	inline float* get_address_of_m_HapticSelectExitDuration_81() { return &___m_HapticSelectExitDuration_81; }
	inline void set_m_HapticSelectExitDuration_81(float value)
	{
		___m_HapticSelectExitDuration_81 = value;
	}

	inline static int32_t get_offset_of_m_PlayHapticsOnSelectCanceled_82() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_PlayHapticsOnSelectCanceled_82)); }
	inline bool get_m_PlayHapticsOnSelectCanceled_82() const { return ___m_PlayHapticsOnSelectCanceled_82; }
	inline bool* get_address_of_m_PlayHapticsOnSelectCanceled_82() { return &___m_PlayHapticsOnSelectCanceled_82; }
	inline void set_m_PlayHapticsOnSelectCanceled_82(bool value)
	{
		___m_PlayHapticsOnSelectCanceled_82 = value;
	}

	inline static int32_t get_offset_of_m_HapticSelectCancelIntensity_83() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_HapticSelectCancelIntensity_83)); }
	inline float get_m_HapticSelectCancelIntensity_83() const { return ___m_HapticSelectCancelIntensity_83; }
	inline float* get_address_of_m_HapticSelectCancelIntensity_83() { return &___m_HapticSelectCancelIntensity_83; }
	inline void set_m_HapticSelectCancelIntensity_83(float value)
	{
		___m_HapticSelectCancelIntensity_83 = value;
	}

	inline static int32_t get_offset_of_m_HapticSelectCancelDuration_84() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_HapticSelectCancelDuration_84)); }
	inline float get_m_HapticSelectCancelDuration_84() const { return ___m_HapticSelectCancelDuration_84; }
	inline float* get_address_of_m_HapticSelectCancelDuration_84() { return &___m_HapticSelectCancelDuration_84; }
	inline void set_m_HapticSelectCancelDuration_84(float value)
	{
		___m_HapticSelectCancelDuration_84 = value;
	}

	inline static int32_t get_offset_of_m_PlayHapticsOnHoverEntered_85() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_PlayHapticsOnHoverEntered_85)); }
	inline bool get_m_PlayHapticsOnHoverEntered_85() const { return ___m_PlayHapticsOnHoverEntered_85; }
	inline bool* get_address_of_m_PlayHapticsOnHoverEntered_85() { return &___m_PlayHapticsOnHoverEntered_85; }
	inline void set_m_PlayHapticsOnHoverEntered_85(bool value)
	{
		___m_PlayHapticsOnHoverEntered_85 = value;
	}

	inline static int32_t get_offset_of_m_HapticHoverEnterIntensity_86() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_HapticHoverEnterIntensity_86)); }
	inline float get_m_HapticHoverEnterIntensity_86() const { return ___m_HapticHoverEnterIntensity_86; }
	inline float* get_address_of_m_HapticHoverEnterIntensity_86() { return &___m_HapticHoverEnterIntensity_86; }
	inline void set_m_HapticHoverEnterIntensity_86(float value)
	{
		___m_HapticHoverEnterIntensity_86 = value;
	}

	inline static int32_t get_offset_of_m_HapticHoverEnterDuration_87() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_HapticHoverEnterDuration_87)); }
	inline float get_m_HapticHoverEnterDuration_87() const { return ___m_HapticHoverEnterDuration_87; }
	inline float* get_address_of_m_HapticHoverEnterDuration_87() { return &___m_HapticHoverEnterDuration_87; }
	inline void set_m_HapticHoverEnterDuration_87(float value)
	{
		___m_HapticHoverEnterDuration_87 = value;
	}

	inline static int32_t get_offset_of_m_PlayHapticsOnHoverExited_88() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_PlayHapticsOnHoverExited_88)); }
	inline bool get_m_PlayHapticsOnHoverExited_88() const { return ___m_PlayHapticsOnHoverExited_88; }
	inline bool* get_address_of_m_PlayHapticsOnHoverExited_88() { return &___m_PlayHapticsOnHoverExited_88; }
	inline void set_m_PlayHapticsOnHoverExited_88(bool value)
	{
		___m_PlayHapticsOnHoverExited_88 = value;
	}

	inline static int32_t get_offset_of_m_HapticHoverExitIntensity_89() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_HapticHoverExitIntensity_89)); }
	inline float get_m_HapticHoverExitIntensity_89() const { return ___m_HapticHoverExitIntensity_89; }
	inline float* get_address_of_m_HapticHoverExitIntensity_89() { return &___m_HapticHoverExitIntensity_89; }
	inline void set_m_HapticHoverExitIntensity_89(float value)
	{
		___m_HapticHoverExitIntensity_89 = value;
	}

	inline static int32_t get_offset_of_m_HapticHoverExitDuration_90() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_HapticHoverExitDuration_90)); }
	inline float get_m_HapticHoverExitDuration_90() const { return ___m_HapticHoverExitDuration_90; }
	inline float* get_address_of_m_HapticHoverExitDuration_90() { return &___m_HapticHoverExitDuration_90; }
	inline void set_m_HapticHoverExitDuration_90(float value)
	{
		___m_HapticHoverExitDuration_90 = value;
	}

	inline static int32_t get_offset_of_m_PlayHapticsOnHoverCanceled_91() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_PlayHapticsOnHoverCanceled_91)); }
	inline bool get_m_PlayHapticsOnHoverCanceled_91() const { return ___m_PlayHapticsOnHoverCanceled_91; }
	inline bool* get_address_of_m_PlayHapticsOnHoverCanceled_91() { return &___m_PlayHapticsOnHoverCanceled_91; }
	inline void set_m_PlayHapticsOnHoverCanceled_91(bool value)
	{
		___m_PlayHapticsOnHoverCanceled_91 = value;
	}

	inline static int32_t get_offset_of_m_HapticHoverCancelIntensity_92() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_HapticHoverCancelIntensity_92)); }
	inline float get_m_HapticHoverCancelIntensity_92() const { return ___m_HapticHoverCancelIntensity_92; }
	inline float* get_address_of_m_HapticHoverCancelIntensity_92() { return &___m_HapticHoverCancelIntensity_92; }
	inline void set_m_HapticHoverCancelIntensity_92(float value)
	{
		___m_HapticHoverCancelIntensity_92 = value;
	}

	inline static int32_t get_offset_of_m_HapticHoverCancelDuration_93() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_HapticHoverCancelDuration_93)); }
	inline float get_m_HapticHoverCancelDuration_93() const { return ___m_HapticHoverCancelDuration_93; }
	inline float* get_address_of_m_HapticHoverCancelDuration_93() { return &___m_HapticHoverCancelDuration_93; }
	inline void set_m_HapticHoverCancelDuration_93(float value)
	{
		___m_HapticHoverCancelDuration_93 = value;
	}

	inline static int32_t get_offset_of_m_AllowHoverHapticsWhileSelecting_94() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_AllowHoverHapticsWhileSelecting_94)); }
	inline bool get_m_AllowHoverHapticsWhileSelecting_94() const { return ___m_AllowHoverHapticsWhileSelecting_94; }
	inline bool* get_address_of_m_AllowHoverHapticsWhileSelecting_94() { return &___m_AllowHoverHapticsWhileSelecting_94; }
	inline void set_m_AllowHoverHapticsWhileSelecting_94(bool value)
	{
		___m_AllowHoverHapticsWhileSelecting_94 = value;
	}

	inline static int32_t get_offset_of_m_AllowActivate_95() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_AllowActivate_95)); }
	inline bool get_m_AllowActivate_95() const { return ___m_AllowActivate_95; }
	inline bool* get_address_of_m_AllowActivate_95() { return &___m_AllowActivate_95; }
	inline void set_m_AllowActivate_95(bool value)
	{
		___m_AllowActivate_95 = value;
	}

	inline static int32_t get_offset_of_m_Controller_96() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_Controller_96)); }
	inline XRBaseController_t3CC6EAD1F83B61B2E06AC2D1575A289CCD6437AF * get_m_Controller_96() const { return ___m_Controller_96; }
	inline XRBaseController_t3CC6EAD1F83B61B2E06AC2D1575A289CCD6437AF ** get_address_of_m_Controller_96() { return &___m_Controller_96; }
	inline void set_m_Controller_96(XRBaseController_t3CC6EAD1F83B61B2E06AC2D1575A289CCD6437AF * value)
	{
		___m_Controller_96 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Controller_96), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActivateEventArgs_97() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_ActivateEventArgs_97)); }
	inline LinkedPool_1_tE2753A4A1780F82E95F490886556F9A2E579A0A2 * get_m_ActivateEventArgs_97() const { return ___m_ActivateEventArgs_97; }
	inline LinkedPool_1_tE2753A4A1780F82E95F490886556F9A2E579A0A2 ** get_address_of_m_ActivateEventArgs_97() { return &___m_ActivateEventArgs_97; }
	inline void set_m_ActivateEventArgs_97(LinkedPool_1_tE2753A4A1780F82E95F490886556F9A2E579A0A2 * value)
	{
		___m_ActivateEventArgs_97 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActivateEventArgs_97), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeactivateEventArgs_98() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_DeactivateEventArgs_98)); }
	inline LinkedPool_1_tBAA3185B83FAC3FF354A3FB48E8BEDDD52ED54A5 * get_m_DeactivateEventArgs_98() const { return ___m_DeactivateEventArgs_98; }
	inline LinkedPool_1_tBAA3185B83FAC3FF354A3FB48E8BEDDD52ED54A5 ** get_address_of_m_DeactivateEventArgs_98() { return &___m_DeactivateEventArgs_98; }
	inline void set_m_DeactivateEventArgs_98(LinkedPool_1_tBAA3185B83FAC3FF354A3FB48E8BEDDD52ED54A5 * value)
	{
		___m_DeactivateEventArgs_98 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeactivateEventArgs_98), (void*)value);
	}

	inline static int32_t get_offset_of_m_ToggleSelectActive_100() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_ToggleSelectActive_100)); }
	inline bool get_m_ToggleSelectActive_100() const { return ___m_ToggleSelectActive_100; }
	inline bool* get_address_of_m_ToggleSelectActive_100() { return &___m_ToggleSelectActive_100; }
	inline void set_m_ToggleSelectActive_100(bool value)
	{
		___m_ToggleSelectActive_100 = value;
	}

	inline static int32_t get_offset_of_m_ToggleSelectDeactivatedThisFrame_101() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_ToggleSelectDeactivatedThisFrame_101)); }
	inline bool get_m_ToggleSelectDeactivatedThisFrame_101() const { return ___m_ToggleSelectDeactivatedThisFrame_101; }
	inline bool* get_address_of_m_ToggleSelectDeactivatedThisFrame_101() { return &___m_ToggleSelectDeactivatedThisFrame_101; }
	inline void set_m_ToggleSelectDeactivatedThisFrame_101(bool value)
	{
		___m_ToggleSelectDeactivatedThisFrame_101 = value;
	}

	inline static int32_t get_offset_of_m_WaitingForSelectDeactivate_102() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_WaitingForSelectDeactivate_102)); }
	inline bool get_m_WaitingForSelectDeactivate_102() const { return ___m_WaitingForSelectDeactivate_102; }
	inline bool* get_address_of_m_WaitingForSelectDeactivate_102() { return &___m_WaitingForSelectDeactivate_102; }
	inline void set_m_WaitingForSelectDeactivate_102(bool value)
	{
		___m_WaitingForSelectDeactivate_102 = value;
	}

	inline static int32_t get_offset_of_m_EffectsAudioSource_103() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___m_EffectsAudioSource_103)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_m_EffectsAudioSource_103() const { return ___m_EffectsAudioSource_103; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_m_EffectsAudioSource_103() { return &___m_EffectsAudioSource_103; }
	inline void set_m_EffectsAudioSource_103(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___m_EffectsAudioSource_103 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EffectsAudioSource_103), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvalidTargetsU3Ek__BackingField_104() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884, ___U3CvalidTargetsU3Ek__BackingField_104)); }
	inline List_1_t8F9C188959ECAB5554BCCA621026A2CC5EE3DE91 * get_U3CvalidTargetsU3Ek__BackingField_104() const { return ___U3CvalidTargetsU3Ek__BackingField_104; }
	inline List_1_t8F9C188959ECAB5554BCCA621026A2CC5EE3DE91 ** get_address_of_U3CvalidTargetsU3Ek__BackingField_104() { return &___U3CvalidTargetsU3Ek__BackingField_104; }
	inline void set_U3CvalidTargetsU3Ek__BackingField_104(List_1_t8F9C188959ECAB5554BCCA621026A2CC5EE3DE91 * value)
	{
		___U3CvalidTargetsU3Ek__BackingField_104 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvalidTargetsU3Ek__BackingField_104), (void*)value);
	}
};


// UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider
struct ActionBasedContinuousMoveProvider_tA1E91E01A6936255752856265BCBFBDBA093293A  : public ContinuousMoveProviderBase_tEEA003EAE25A3AAEEF9FF9B39FA30EE046059044
{
public:
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider::m_LeftHandMoveAction
	InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443  ___m_LeftHandMoveAction_19;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider::m_RightHandMoveAction
	InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443  ___m_RightHandMoveAction_20;

public:
	inline static int32_t get_offset_of_m_LeftHandMoveAction_19() { return static_cast<int32_t>(offsetof(ActionBasedContinuousMoveProvider_tA1E91E01A6936255752856265BCBFBDBA093293A, ___m_LeftHandMoveAction_19)); }
	inline InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443  get_m_LeftHandMoveAction_19() const { return ___m_LeftHandMoveAction_19; }
	inline InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443 * get_address_of_m_LeftHandMoveAction_19() { return &___m_LeftHandMoveAction_19; }
	inline void set_m_LeftHandMoveAction_19(InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443  value)
	{
		___m_LeftHandMoveAction_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_LeftHandMoveAction_19))->___m_Action_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_LeftHandMoveAction_19))->___m_Reference_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_RightHandMoveAction_20() { return static_cast<int32_t>(offsetof(ActionBasedContinuousMoveProvider_tA1E91E01A6936255752856265BCBFBDBA093293A, ___m_RightHandMoveAction_20)); }
	inline InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443  get_m_RightHandMoveAction_20() const { return ___m_RightHandMoveAction_20; }
	inline InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443 * get_address_of_m_RightHandMoveAction_20() { return &___m_RightHandMoveAction_20; }
	inline void set_m_RightHandMoveAction_20(InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443  value)
	{
		___m_RightHandMoveAction_20 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_RightHandMoveAction_20))->___m_Action_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_RightHandMoveAction_20))->___m_Reference_2), (void*)NULL);
		#endif
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


// UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor
struct XRDirectInteractor_t2F00E9B79629EFA648D4DF02F8FF034DD99812D5  : public XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::<unsortedValidTargets>k__BackingField
	List_1_tA0AA68EBEDA30BFC60B674328ADD3173B39F3B23 * ___U3CunsortedValidTargetsU3Ek__BackingField_105;
	// System.Collections.Generic.HashSet`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::m_StayedColliders
	HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA * ___m_StayedColliders_106;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.TriggerContactMonitor UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::m_TriggerContactMonitor
	TriggerContactMonitor_t041FDA658746E866D9AD6C84F039343A1AD51CB5 * ___m_TriggerContactMonitor_107;
	// System.Collections.IEnumerator UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::m_UpdateCollidersAfterTriggerStay
	RuntimeObject* ___m_UpdateCollidersAfterTriggerStay_109;

public:
	inline static int32_t get_offset_of_U3CunsortedValidTargetsU3Ek__BackingField_105() { return static_cast<int32_t>(offsetof(XRDirectInteractor_t2F00E9B79629EFA648D4DF02F8FF034DD99812D5, ___U3CunsortedValidTargetsU3Ek__BackingField_105)); }
	inline List_1_tA0AA68EBEDA30BFC60B674328ADD3173B39F3B23 * get_U3CunsortedValidTargetsU3Ek__BackingField_105() const { return ___U3CunsortedValidTargetsU3Ek__BackingField_105; }
	inline List_1_tA0AA68EBEDA30BFC60B674328ADD3173B39F3B23 ** get_address_of_U3CunsortedValidTargetsU3Ek__BackingField_105() { return &___U3CunsortedValidTargetsU3Ek__BackingField_105; }
	inline void set_U3CunsortedValidTargetsU3Ek__BackingField_105(List_1_tA0AA68EBEDA30BFC60B674328ADD3173B39F3B23 * value)
	{
		___U3CunsortedValidTargetsU3Ek__BackingField_105 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CunsortedValidTargetsU3Ek__BackingField_105), (void*)value);
	}

	inline static int32_t get_offset_of_m_StayedColliders_106() { return static_cast<int32_t>(offsetof(XRDirectInteractor_t2F00E9B79629EFA648D4DF02F8FF034DD99812D5, ___m_StayedColliders_106)); }
	inline HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA * get_m_StayedColliders_106() const { return ___m_StayedColliders_106; }
	inline HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA ** get_address_of_m_StayedColliders_106() { return &___m_StayedColliders_106; }
	inline void set_m_StayedColliders_106(HashSet_1_tE4535201ED12CB585DB82A688DBE933550FDFDCA * value)
	{
		___m_StayedColliders_106 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StayedColliders_106), (void*)value);
	}

	inline static int32_t get_offset_of_m_TriggerContactMonitor_107() { return static_cast<int32_t>(offsetof(XRDirectInteractor_t2F00E9B79629EFA648D4DF02F8FF034DD99812D5, ___m_TriggerContactMonitor_107)); }
	inline TriggerContactMonitor_t041FDA658746E866D9AD6C84F039343A1AD51CB5 * get_m_TriggerContactMonitor_107() const { return ___m_TriggerContactMonitor_107; }
	inline TriggerContactMonitor_t041FDA658746E866D9AD6C84F039343A1AD51CB5 ** get_address_of_m_TriggerContactMonitor_107() { return &___m_TriggerContactMonitor_107; }
	inline void set_m_TriggerContactMonitor_107(TriggerContactMonitor_t041FDA658746E866D9AD6C84F039343A1AD51CB5 * value)
	{
		___m_TriggerContactMonitor_107 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TriggerContactMonitor_107), (void*)value);
	}

	inline static int32_t get_offset_of_m_UpdateCollidersAfterTriggerStay_109() { return static_cast<int32_t>(offsetof(XRDirectInteractor_t2F00E9B79629EFA648D4DF02F8FF034DD99812D5, ___m_UpdateCollidersAfterTriggerStay_109)); }
	inline RuntimeObject* get_m_UpdateCollidersAfterTriggerStay_109() const { return ___m_UpdateCollidersAfterTriggerStay_109; }
	inline RuntimeObject** get_address_of_m_UpdateCollidersAfterTriggerStay_109() { return &___m_UpdateCollidersAfterTriggerStay_109; }
	inline void set_m_UpdateCollidersAfterTriggerStay_109(RuntimeObject* value)
	{
		___m_UpdateCollidersAfterTriggerStay_109 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UpdateCollidersAfterTriggerStay_109), (void*)value);
	}
};


// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
struct XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A  : public XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884
{
public:
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/LineType UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LineType
	int32_t ___m_LineType_109;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_BlendVisualLinePoints
	bool ___m_BlendVisualLinePoints_110;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_MaxRaycastDistance
	float ___m_MaxRaycastDistance_111;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RayOriginTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_RayOriginTransform_112;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ReferenceFrame
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_ReferenceFrame_113;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_Velocity
	float ___m_Velocity_114;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_Acceleration
	float ___m_Acceleration_115;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AdditionalGroundHeight
	float ___m_AdditionalGroundHeight_116;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AdditionalFlightTime
	float ___m_AdditionalFlightTime_117;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EndPointDistance
	float ___m_EndPointDistance_118;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EndPointHeight
	float ___m_EndPointHeight_119;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPointDistance
	float ___m_ControlPointDistance_120;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPointHeight
	float ___m_ControlPointHeight_121;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SampleFrequency
	int32_t ___m_SampleFrequency_122;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/HitDetectionType UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitDetectionType
	int32_t ___m_HitDetectionType_123;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SphereCastRadius
	float ___m_SphereCastRadius_124;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___m_RaycastMask_125;
	// UnityEngine.QueryTriggerInteraction UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastTriggerInteraction
	int32_t ___m_RaycastTriggerInteraction_126;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/QuerySnapVolumeInteraction UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastSnapVolumeInteraction
	int32_t ___m_RaycastSnapVolumeInteraction_127;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitClosestOnly
	bool ___m_HitClosestOnly_128;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HoverToSelect
	bool ___m_HoverToSelect_129;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HoverTimeToSelect
	float ___m_HoverTimeToSelect_130;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AutoDeselect
	bool ___m_AutoDeselect_131;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_TimeToAutoDeselect
	float ___m_TimeToAutoDeselect_132;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EnableUIInteraction
	bool ___m_EnableUIInteraction_133;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AllowAnchorControl
	bool ___m_AllowAnchorControl_134;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UseForceGrab
	bool ___m_UseForceGrab_135;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RotateSpeed
	float ___m_RotateSpeed_136;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_TranslateSpeed
	float ___m_TranslateSpeed_137;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AnchorRotateReferenceFrame
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_AnchorRotateReferenceFrame_138;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/AnchorRotationMode UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AnchorRotationMode
	int32_t ___m_AnchorRotationMode_139;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::<currentNearestValidTarget>k__BackingField
	RuntimeObject* ___U3CcurrentNearestValidTargetU3Ek__BackingField_140;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ValidTargets
	List_1_tA0AA68EBEDA30BFC60B674328ADD3173B39F3B23 * ___m_ValidTargets_141;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LastTimeHoveredObjectChanged
	float ___m_LastTimeHoveredObjectChanged_142;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_PassedHoverTimeToSelect
	bool ___m_PassedHoverTimeToSelect_143;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LastTimeAutoSelected
	float ___m_LastTimeAutoSelected_144;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_PassedTimeToAutoDeselect
	bool ___m_PassedTimeToAutoDeselect_145;
	// UnityEngine.RaycastHit[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHits
	RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* ___m_RaycastHits_146;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitsCount
	int32_t ___m_RaycastHitsCount_147;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/RaycastHitComparer UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitComparer
	RaycastHitComparer_t209097E1021D62724BE24F45D1DF2A977B591EDE * ___m_RaycastHitComparer_148;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SamplePoints
	List_1_t8F4B8FD04A1AA2BC3EDCB13F4EB43036E073DBE8 * ___m_SamplePoints_149;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SamplePointsFrameUpdated
	int32_t ___m_SamplePointsFrameUpdated_150;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitEndpointIndex
	int32_t ___m_RaycastHitEndpointIndex_151;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UIRaycastHitEndpointIndex
	int32_t ___m_UIRaycastHitEndpointIndex_152;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPoints
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_ControlPoints_153;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitChordControlPoints
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_HitChordControlPoints_154;
	// UnityEngine.PhysicsScene UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LocalPhysicsScene
	PhysicsScene_tEDFCAA935450E8EBB7732353D9AA264A5F711678  ___m_LocalPhysicsScene_157;
	// UnityEngine.XR.Interaction.Toolkit.UI.RegisteredUIInteractorCache UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RegisteredUIInteractorCache
	RegisteredUIInteractorCache_tC27FB1D8B4497ED9031EBC4B283DC395E15DABCF * ___m_RegisteredUIInteractorCache_158;

public:
	inline static int32_t get_offset_of_m_LineType_109() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_LineType_109)); }
	inline int32_t get_m_LineType_109() const { return ___m_LineType_109; }
	inline int32_t* get_address_of_m_LineType_109() { return &___m_LineType_109; }
	inline void set_m_LineType_109(int32_t value)
	{
		___m_LineType_109 = value;
	}

	inline static int32_t get_offset_of_m_BlendVisualLinePoints_110() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_BlendVisualLinePoints_110)); }
	inline bool get_m_BlendVisualLinePoints_110() const { return ___m_BlendVisualLinePoints_110; }
	inline bool* get_address_of_m_BlendVisualLinePoints_110() { return &___m_BlendVisualLinePoints_110; }
	inline void set_m_BlendVisualLinePoints_110(bool value)
	{
		___m_BlendVisualLinePoints_110 = value;
	}

	inline static int32_t get_offset_of_m_MaxRaycastDistance_111() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_MaxRaycastDistance_111)); }
	inline float get_m_MaxRaycastDistance_111() const { return ___m_MaxRaycastDistance_111; }
	inline float* get_address_of_m_MaxRaycastDistance_111() { return &___m_MaxRaycastDistance_111; }
	inline void set_m_MaxRaycastDistance_111(float value)
	{
		___m_MaxRaycastDistance_111 = value;
	}

	inline static int32_t get_offset_of_m_RayOriginTransform_112() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_RayOriginTransform_112)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_RayOriginTransform_112() const { return ___m_RayOriginTransform_112; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_RayOriginTransform_112() { return &___m_RayOriginTransform_112; }
	inline void set_m_RayOriginTransform_112(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_RayOriginTransform_112 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RayOriginTransform_112), (void*)value);
	}

	inline static int32_t get_offset_of_m_ReferenceFrame_113() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_ReferenceFrame_113)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_ReferenceFrame_113() const { return ___m_ReferenceFrame_113; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_ReferenceFrame_113() { return &___m_ReferenceFrame_113; }
	inline void set_m_ReferenceFrame_113(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_ReferenceFrame_113 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReferenceFrame_113), (void*)value);
	}

	inline static int32_t get_offset_of_m_Velocity_114() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_Velocity_114)); }
	inline float get_m_Velocity_114() const { return ___m_Velocity_114; }
	inline float* get_address_of_m_Velocity_114() { return &___m_Velocity_114; }
	inline void set_m_Velocity_114(float value)
	{
		___m_Velocity_114 = value;
	}

	inline static int32_t get_offset_of_m_Acceleration_115() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_Acceleration_115)); }
	inline float get_m_Acceleration_115() const { return ___m_Acceleration_115; }
	inline float* get_address_of_m_Acceleration_115() { return &___m_Acceleration_115; }
	inline void set_m_Acceleration_115(float value)
	{
		___m_Acceleration_115 = value;
	}

	inline static int32_t get_offset_of_m_AdditionalGroundHeight_116() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_AdditionalGroundHeight_116)); }
	inline float get_m_AdditionalGroundHeight_116() const { return ___m_AdditionalGroundHeight_116; }
	inline float* get_address_of_m_AdditionalGroundHeight_116() { return &___m_AdditionalGroundHeight_116; }
	inline void set_m_AdditionalGroundHeight_116(float value)
	{
		___m_AdditionalGroundHeight_116 = value;
	}

	inline static int32_t get_offset_of_m_AdditionalFlightTime_117() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_AdditionalFlightTime_117)); }
	inline float get_m_AdditionalFlightTime_117() const { return ___m_AdditionalFlightTime_117; }
	inline float* get_address_of_m_AdditionalFlightTime_117() { return &___m_AdditionalFlightTime_117; }
	inline void set_m_AdditionalFlightTime_117(float value)
	{
		___m_AdditionalFlightTime_117 = value;
	}

	inline static int32_t get_offset_of_m_EndPointDistance_118() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_EndPointDistance_118)); }
	inline float get_m_EndPointDistance_118() const { return ___m_EndPointDistance_118; }
	inline float* get_address_of_m_EndPointDistance_118() { return &___m_EndPointDistance_118; }
	inline void set_m_EndPointDistance_118(float value)
	{
		___m_EndPointDistance_118 = value;
	}

	inline static int32_t get_offset_of_m_EndPointHeight_119() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_EndPointHeight_119)); }
	inline float get_m_EndPointHeight_119() const { return ___m_EndPointHeight_119; }
	inline float* get_address_of_m_EndPointHeight_119() { return &___m_EndPointHeight_119; }
	inline void set_m_EndPointHeight_119(float value)
	{
		___m_EndPointHeight_119 = value;
	}

	inline static int32_t get_offset_of_m_ControlPointDistance_120() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_ControlPointDistance_120)); }
	inline float get_m_ControlPointDistance_120() const { return ___m_ControlPointDistance_120; }
	inline float* get_address_of_m_ControlPointDistance_120() { return &___m_ControlPointDistance_120; }
	inline void set_m_ControlPointDistance_120(float value)
	{
		___m_ControlPointDistance_120 = value;
	}

	inline static int32_t get_offset_of_m_ControlPointHeight_121() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_ControlPointHeight_121)); }
	inline float get_m_ControlPointHeight_121() const { return ___m_ControlPointHeight_121; }
	inline float* get_address_of_m_ControlPointHeight_121() { return &___m_ControlPointHeight_121; }
	inline void set_m_ControlPointHeight_121(float value)
	{
		___m_ControlPointHeight_121 = value;
	}

	inline static int32_t get_offset_of_m_SampleFrequency_122() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_SampleFrequency_122)); }
	inline int32_t get_m_SampleFrequency_122() const { return ___m_SampleFrequency_122; }
	inline int32_t* get_address_of_m_SampleFrequency_122() { return &___m_SampleFrequency_122; }
	inline void set_m_SampleFrequency_122(int32_t value)
	{
		___m_SampleFrequency_122 = value;
	}

	inline static int32_t get_offset_of_m_HitDetectionType_123() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_HitDetectionType_123)); }
	inline int32_t get_m_HitDetectionType_123() const { return ___m_HitDetectionType_123; }
	inline int32_t* get_address_of_m_HitDetectionType_123() { return &___m_HitDetectionType_123; }
	inline void set_m_HitDetectionType_123(int32_t value)
	{
		___m_HitDetectionType_123 = value;
	}

	inline static int32_t get_offset_of_m_SphereCastRadius_124() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_SphereCastRadius_124)); }
	inline float get_m_SphereCastRadius_124() const { return ___m_SphereCastRadius_124; }
	inline float* get_address_of_m_SphereCastRadius_124() { return &___m_SphereCastRadius_124; }
	inline void set_m_SphereCastRadius_124(float value)
	{
		___m_SphereCastRadius_124 = value;
	}

	inline static int32_t get_offset_of_m_RaycastMask_125() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_RaycastMask_125)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_m_RaycastMask_125() const { return ___m_RaycastMask_125; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_m_RaycastMask_125() { return &___m_RaycastMask_125; }
	inline void set_m_RaycastMask_125(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___m_RaycastMask_125 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTriggerInteraction_126() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_RaycastTriggerInteraction_126)); }
	inline int32_t get_m_RaycastTriggerInteraction_126() const { return ___m_RaycastTriggerInteraction_126; }
	inline int32_t* get_address_of_m_RaycastTriggerInteraction_126() { return &___m_RaycastTriggerInteraction_126; }
	inline void set_m_RaycastTriggerInteraction_126(int32_t value)
	{
		___m_RaycastTriggerInteraction_126 = value;
	}

	inline static int32_t get_offset_of_m_RaycastSnapVolumeInteraction_127() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_RaycastSnapVolumeInteraction_127)); }
	inline int32_t get_m_RaycastSnapVolumeInteraction_127() const { return ___m_RaycastSnapVolumeInteraction_127; }
	inline int32_t* get_address_of_m_RaycastSnapVolumeInteraction_127() { return &___m_RaycastSnapVolumeInteraction_127; }
	inline void set_m_RaycastSnapVolumeInteraction_127(int32_t value)
	{
		___m_RaycastSnapVolumeInteraction_127 = value;
	}

	inline static int32_t get_offset_of_m_HitClosestOnly_128() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_HitClosestOnly_128)); }
	inline bool get_m_HitClosestOnly_128() const { return ___m_HitClosestOnly_128; }
	inline bool* get_address_of_m_HitClosestOnly_128() { return &___m_HitClosestOnly_128; }
	inline void set_m_HitClosestOnly_128(bool value)
	{
		___m_HitClosestOnly_128 = value;
	}

	inline static int32_t get_offset_of_m_HoverToSelect_129() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_HoverToSelect_129)); }
	inline bool get_m_HoverToSelect_129() const { return ___m_HoverToSelect_129; }
	inline bool* get_address_of_m_HoverToSelect_129() { return &___m_HoverToSelect_129; }
	inline void set_m_HoverToSelect_129(bool value)
	{
		___m_HoverToSelect_129 = value;
	}

	inline static int32_t get_offset_of_m_HoverTimeToSelect_130() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_HoverTimeToSelect_130)); }
	inline float get_m_HoverTimeToSelect_130() const { return ___m_HoverTimeToSelect_130; }
	inline float* get_address_of_m_HoverTimeToSelect_130() { return &___m_HoverTimeToSelect_130; }
	inline void set_m_HoverTimeToSelect_130(float value)
	{
		___m_HoverTimeToSelect_130 = value;
	}

	inline static int32_t get_offset_of_m_AutoDeselect_131() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_AutoDeselect_131)); }
	inline bool get_m_AutoDeselect_131() const { return ___m_AutoDeselect_131; }
	inline bool* get_address_of_m_AutoDeselect_131() { return &___m_AutoDeselect_131; }
	inline void set_m_AutoDeselect_131(bool value)
	{
		___m_AutoDeselect_131 = value;
	}

	inline static int32_t get_offset_of_m_TimeToAutoDeselect_132() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_TimeToAutoDeselect_132)); }
	inline float get_m_TimeToAutoDeselect_132() const { return ___m_TimeToAutoDeselect_132; }
	inline float* get_address_of_m_TimeToAutoDeselect_132() { return &___m_TimeToAutoDeselect_132; }
	inline void set_m_TimeToAutoDeselect_132(float value)
	{
		___m_TimeToAutoDeselect_132 = value;
	}

	inline static int32_t get_offset_of_m_EnableUIInteraction_133() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_EnableUIInteraction_133)); }
	inline bool get_m_EnableUIInteraction_133() const { return ___m_EnableUIInteraction_133; }
	inline bool* get_address_of_m_EnableUIInteraction_133() { return &___m_EnableUIInteraction_133; }
	inline void set_m_EnableUIInteraction_133(bool value)
	{
		___m_EnableUIInteraction_133 = value;
	}

	inline static int32_t get_offset_of_m_AllowAnchorControl_134() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_AllowAnchorControl_134)); }
	inline bool get_m_AllowAnchorControl_134() const { return ___m_AllowAnchorControl_134; }
	inline bool* get_address_of_m_AllowAnchorControl_134() { return &___m_AllowAnchorControl_134; }
	inline void set_m_AllowAnchorControl_134(bool value)
	{
		___m_AllowAnchorControl_134 = value;
	}

	inline static int32_t get_offset_of_m_UseForceGrab_135() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_UseForceGrab_135)); }
	inline bool get_m_UseForceGrab_135() const { return ___m_UseForceGrab_135; }
	inline bool* get_address_of_m_UseForceGrab_135() { return &___m_UseForceGrab_135; }
	inline void set_m_UseForceGrab_135(bool value)
	{
		___m_UseForceGrab_135 = value;
	}

	inline static int32_t get_offset_of_m_RotateSpeed_136() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_RotateSpeed_136)); }
	inline float get_m_RotateSpeed_136() const { return ___m_RotateSpeed_136; }
	inline float* get_address_of_m_RotateSpeed_136() { return &___m_RotateSpeed_136; }
	inline void set_m_RotateSpeed_136(float value)
	{
		___m_RotateSpeed_136 = value;
	}

	inline static int32_t get_offset_of_m_TranslateSpeed_137() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_TranslateSpeed_137)); }
	inline float get_m_TranslateSpeed_137() const { return ___m_TranslateSpeed_137; }
	inline float* get_address_of_m_TranslateSpeed_137() { return &___m_TranslateSpeed_137; }
	inline void set_m_TranslateSpeed_137(float value)
	{
		___m_TranslateSpeed_137 = value;
	}

	inline static int32_t get_offset_of_m_AnchorRotateReferenceFrame_138() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_AnchorRotateReferenceFrame_138)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_AnchorRotateReferenceFrame_138() const { return ___m_AnchorRotateReferenceFrame_138; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_AnchorRotateReferenceFrame_138() { return &___m_AnchorRotateReferenceFrame_138; }
	inline void set_m_AnchorRotateReferenceFrame_138(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_AnchorRotateReferenceFrame_138 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnchorRotateReferenceFrame_138), (void*)value);
	}

	inline static int32_t get_offset_of_m_AnchorRotationMode_139() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_AnchorRotationMode_139)); }
	inline int32_t get_m_AnchorRotationMode_139() const { return ___m_AnchorRotationMode_139; }
	inline int32_t* get_address_of_m_AnchorRotationMode_139() { return &___m_AnchorRotationMode_139; }
	inline void set_m_AnchorRotationMode_139(int32_t value)
	{
		___m_AnchorRotationMode_139 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentNearestValidTargetU3Ek__BackingField_140() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___U3CcurrentNearestValidTargetU3Ek__BackingField_140)); }
	inline RuntimeObject* get_U3CcurrentNearestValidTargetU3Ek__BackingField_140() const { return ___U3CcurrentNearestValidTargetU3Ek__BackingField_140; }
	inline RuntimeObject** get_address_of_U3CcurrentNearestValidTargetU3Ek__BackingField_140() { return &___U3CcurrentNearestValidTargetU3Ek__BackingField_140; }
	inline void set_U3CcurrentNearestValidTargetU3Ek__BackingField_140(RuntimeObject* value)
	{
		___U3CcurrentNearestValidTargetU3Ek__BackingField_140 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurrentNearestValidTargetU3Ek__BackingField_140), (void*)value);
	}

	inline static int32_t get_offset_of_m_ValidTargets_141() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_ValidTargets_141)); }
	inline List_1_tA0AA68EBEDA30BFC60B674328ADD3173B39F3B23 * get_m_ValidTargets_141() const { return ___m_ValidTargets_141; }
	inline List_1_tA0AA68EBEDA30BFC60B674328ADD3173B39F3B23 ** get_address_of_m_ValidTargets_141() { return &___m_ValidTargets_141; }
	inline void set_m_ValidTargets_141(List_1_tA0AA68EBEDA30BFC60B674328ADD3173B39F3B23 * value)
	{
		___m_ValidTargets_141 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ValidTargets_141), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastTimeHoveredObjectChanged_142() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_LastTimeHoveredObjectChanged_142)); }
	inline float get_m_LastTimeHoveredObjectChanged_142() const { return ___m_LastTimeHoveredObjectChanged_142; }
	inline float* get_address_of_m_LastTimeHoveredObjectChanged_142() { return &___m_LastTimeHoveredObjectChanged_142; }
	inline void set_m_LastTimeHoveredObjectChanged_142(float value)
	{
		___m_LastTimeHoveredObjectChanged_142 = value;
	}

	inline static int32_t get_offset_of_m_PassedHoverTimeToSelect_143() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_PassedHoverTimeToSelect_143)); }
	inline bool get_m_PassedHoverTimeToSelect_143() const { return ___m_PassedHoverTimeToSelect_143; }
	inline bool* get_address_of_m_PassedHoverTimeToSelect_143() { return &___m_PassedHoverTimeToSelect_143; }
	inline void set_m_PassedHoverTimeToSelect_143(bool value)
	{
		___m_PassedHoverTimeToSelect_143 = value;
	}

	inline static int32_t get_offset_of_m_LastTimeAutoSelected_144() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_LastTimeAutoSelected_144)); }
	inline float get_m_LastTimeAutoSelected_144() const { return ___m_LastTimeAutoSelected_144; }
	inline float* get_address_of_m_LastTimeAutoSelected_144() { return &___m_LastTimeAutoSelected_144; }
	inline void set_m_LastTimeAutoSelected_144(float value)
	{
		___m_LastTimeAutoSelected_144 = value;
	}

	inline static int32_t get_offset_of_m_PassedTimeToAutoDeselect_145() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_PassedTimeToAutoDeselect_145)); }
	inline bool get_m_PassedTimeToAutoDeselect_145() const { return ___m_PassedTimeToAutoDeselect_145; }
	inline bool* get_address_of_m_PassedTimeToAutoDeselect_145() { return &___m_PassedTimeToAutoDeselect_145; }
	inline void set_m_PassedTimeToAutoDeselect_145(bool value)
	{
		___m_PassedTimeToAutoDeselect_145 = value;
	}

	inline static int32_t get_offset_of_m_RaycastHits_146() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_RaycastHits_146)); }
	inline RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* get_m_RaycastHits_146() const { return ___m_RaycastHits_146; }
	inline RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09** get_address_of_m_RaycastHits_146() { return &___m_RaycastHits_146; }
	inline void set_m_RaycastHits_146(RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* value)
	{
		___m_RaycastHits_146 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastHits_146), (void*)value);
	}

	inline static int32_t get_offset_of_m_RaycastHitsCount_147() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_RaycastHitsCount_147)); }
	inline int32_t get_m_RaycastHitsCount_147() const { return ___m_RaycastHitsCount_147; }
	inline int32_t* get_address_of_m_RaycastHitsCount_147() { return &___m_RaycastHitsCount_147; }
	inline void set_m_RaycastHitsCount_147(int32_t value)
	{
		___m_RaycastHitsCount_147 = value;
	}

	inline static int32_t get_offset_of_m_RaycastHitComparer_148() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_RaycastHitComparer_148)); }
	inline RaycastHitComparer_t209097E1021D62724BE24F45D1DF2A977B591EDE * get_m_RaycastHitComparer_148() const { return ___m_RaycastHitComparer_148; }
	inline RaycastHitComparer_t209097E1021D62724BE24F45D1DF2A977B591EDE ** get_address_of_m_RaycastHitComparer_148() { return &___m_RaycastHitComparer_148; }
	inline void set_m_RaycastHitComparer_148(RaycastHitComparer_t209097E1021D62724BE24F45D1DF2A977B591EDE * value)
	{
		___m_RaycastHitComparer_148 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastHitComparer_148), (void*)value);
	}

	inline static int32_t get_offset_of_m_SamplePoints_149() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_SamplePoints_149)); }
	inline List_1_t8F4B8FD04A1AA2BC3EDCB13F4EB43036E073DBE8 * get_m_SamplePoints_149() const { return ___m_SamplePoints_149; }
	inline List_1_t8F4B8FD04A1AA2BC3EDCB13F4EB43036E073DBE8 ** get_address_of_m_SamplePoints_149() { return &___m_SamplePoints_149; }
	inline void set_m_SamplePoints_149(List_1_t8F4B8FD04A1AA2BC3EDCB13F4EB43036E073DBE8 * value)
	{
		___m_SamplePoints_149 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SamplePoints_149), (void*)value);
	}

	inline static int32_t get_offset_of_m_SamplePointsFrameUpdated_150() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_SamplePointsFrameUpdated_150)); }
	inline int32_t get_m_SamplePointsFrameUpdated_150() const { return ___m_SamplePointsFrameUpdated_150; }
	inline int32_t* get_address_of_m_SamplePointsFrameUpdated_150() { return &___m_SamplePointsFrameUpdated_150; }
	inline void set_m_SamplePointsFrameUpdated_150(int32_t value)
	{
		___m_SamplePointsFrameUpdated_150 = value;
	}

	inline static int32_t get_offset_of_m_RaycastHitEndpointIndex_151() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_RaycastHitEndpointIndex_151)); }
	inline int32_t get_m_RaycastHitEndpointIndex_151() const { return ___m_RaycastHitEndpointIndex_151; }
	inline int32_t* get_address_of_m_RaycastHitEndpointIndex_151() { return &___m_RaycastHitEndpointIndex_151; }
	inline void set_m_RaycastHitEndpointIndex_151(int32_t value)
	{
		___m_RaycastHitEndpointIndex_151 = value;
	}

	inline static int32_t get_offset_of_m_UIRaycastHitEndpointIndex_152() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_UIRaycastHitEndpointIndex_152)); }
	inline int32_t get_m_UIRaycastHitEndpointIndex_152() const { return ___m_UIRaycastHitEndpointIndex_152; }
	inline int32_t* get_address_of_m_UIRaycastHitEndpointIndex_152() { return &___m_UIRaycastHitEndpointIndex_152; }
	inline void set_m_UIRaycastHitEndpointIndex_152(int32_t value)
	{
		___m_UIRaycastHitEndpointIndex_152 = value;
	}

	inline static int32_t get_offset_of_m_ControlPoints_153() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_ControlPoints_153)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_ControlPoints_153() const { return ___m_ControlPoints_153; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_ControlPoints_153() { return &___m_ControlPoints_153; }
	inline void set_m_ControlPoints_153(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_ControlPoints_153 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlPoints_153), (void*)value);
	}

	inline static int32_t get_offset_of_m_HitChordControlPoints_154() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_HitChordControlPoints_154)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_HitChordControlPoints_154() const { return ___m_HitChordControlPoints_154; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_HitChordControlPoints_154() { return &___m_HitChordControlPoints_154; }
	inline void set_m_HitChordControlPoints_154(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_HitChordControlPoints_154 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HitChordControlPoints_154), (void*)value);
	}

	inline static int32_t get_offset_of_m_LocalPhysicsScene_157() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_LocalPhysicsScene_157)); }
	inline PhysicsScene_tEDFCAA935450E8EBB7732353D9AA264A5F711678  get_m_LocalPhysicsScene_157() const { return ___m_LocalPhysicsScene_157; }
	inline PhysicsScene_tEDFCAA935450E8EBB7732353D9AA264A5F711678 * get_address_of_m_LocalPhysicsScene_157() { return &___m_LocalPhysicsScene_157; }
	inline void set_m_LocalPhysicsScene_157(PhysicsScene_tEDFCAA935450E8EBB7732353D9AA264A5F711678  value)
	{
		___m_LocalPhysicsScene_157 = value;
	}

	inline static int32_t get_offset_of_m_RegisteredUIInteractorCache_158() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A, ___m_RegisteredUIInteractorCache_158)); }
	inline RegisteredUIInteractorCache_tC27FB1D8B4497ED9031EBC4B283DC395E15DABCF * get_m_RegisteredUIInteractorCache_158() const { return ___m_RegisteredUIInteractorCache_158; }
	inline RegisteredUIInteractorCache_tC27FB1D8B4497ED9031EBC4B283DC395E15DABCF ** get_address_of_m_RegisteredUIInteractorCache_158() { return &___m_RegisteredUIInteractorCache_158; }
	inline void set_m_RegisteredUIInteractorCache_158(RegisteredUIInteractorCache_tC27FB1D8B4497ED9031EBC4B283DC395E15DABCF * value)
	{
		___m_RegisteredUIInteractorCache_158 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RegisteredUIInteractorCache_158), (void*)value);
	}
};


// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider
struct DynamicMoveProvider_t8B602D8A503C9409E356CFD397192F178225DC72  : public ActionBasedContinuousMoveProvider_tA1E91E01A6936255752856265BCBFBDBA093293A
{
public:
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_HeadTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HeadTransform_21;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_LeftControllerTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_LeftControllerTransform_22;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_RightControllerTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_RightControllerTransform_23;
	// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_LeftHandMovementDirection
	int32_t ___m_LeftHandMovementDirection_24;
	// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_RightHandMovementDirection
	int32_t ___m_RightHandMovementDirection_25;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_CombinedTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_CombinedTransform_26;
	// UnityEngine.Pose UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_LeftMovementPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_LeftMovementPose_27;
	// UnityEngine.Pose UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::m_RightMovementPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_RightMovementPose_28;

public:
	inline static int32_t get_offset_of_m_HeadTransform_21() { return static_cast<int32_t>(offsetof(DynamicMoveProvider_t8B602D8A503C9409E356CFD397192F178225DC72, ___m_HeadTransform_21)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HeadTransform_21() const { return ___m_HeadTransform_21; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HeadTransform_21() { return &___m_HeadTransform_21; }
	inline void set_m_HeadTransform_21(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HeadTransform_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HeadTransform_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_LeftControllerTransform_22() { return static_cast<int32_t>(offsetof(DynamicMoveProvider_t8B602D8A503C9409E356CFD397192F178225DC72, ___m_LeftControllerTransform_22)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_LeftControllerTransform_22() const { return ___m_LeftControllerTransform_22; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_LeftControllerTransform_22() { return &___m_LeftControllerTransform_22; }
	inline void set_m_LeftControllerTransform_22(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_LeftControllerTransform_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LeftControllerTransform_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_RightControllerTransform_23() { return static_cast<int32_t>(offsetof(DynamicMoveProvider_t8B602D8A503C9409E356CFD397192F178225DC72, ___m_RightControllerTransform_23)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_RightControllerTransform_23() const { return ___m_RightControllerTransform_23; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_RightControllerTransform_23() { return &___m_RightControllerTransform_23; }
	inline void set_m_RightControllerTransform_23(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_RightControllerTransform_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RightControllerTransform_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_LeftHandMovementDirection_24() { return static_cast<int32_t>(offsetof(DynamicMoveProvider_t8B602D8A503C9409E356CFD397192F178225DC72, ___m_LeftHandMovementDirection_24)); }
	inline int32_t get_m_LeftHandMovementDirection_24() const { return ___m_LeftHandMovementDirection_24; }
	inline int32_t* get_address_of_m_LeftHandMovementDirection_24() { return &___m_LeftHandMovementDirection_24; }
	inline void set_m_LeftHandMovementDirection_24(int32_t value)
	{
		___m_LeftHandMovementDirection_24 = value;
	}

	inline static int32_t get_offset_of_m_RightHandMovementDirection_25() { return static_cast<int32_t>(offsetof(DynamicMoveProvider_t8B602D8A503C9409E356CFD397192F178225DC72, ___m_RightHandMovementDirection_25)); }
	inline int32_t get_m_RightHandMovementDirection_25() const { return ___m_RightHandMovementDirection_25; }
	inline int32_t* get_address_of_m_RightHandMovementDirection_25() { return &___m_RightHandMovementDirection_25; }
	inline void set_m_RightHandMovementDirection_25(int32_t value)
	{
		___m_RightHandMovementDirection_25 = value;
	}

	inline static int32_t get_offset_of_m_CombinedTransform_26() { return static_cast<int32_t>(offsetof(DynamicMoveProvider_t8B602D8A503C9409E356CFD397192F178225DC72, ___m_CombinedTransform_26)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_CombinedTransform_26() const { return ___m_CombinedTransform_26; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_CombinedTransform_26() { return &___m_CombinedTransform_26; }
	inline void set_m_CombinedTransform_26(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_CombinedTransform_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CombinedTransform_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_LeftMovementPose_27() { return static_cast<int32_t>(offsetof(DynamicMoveProvider_t8B602D8A503C9409E356CFD397192F178225DC72, ___m_LeftMovementPose_27)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_LeftMovementPose_27() const { return ___m_LeftMovementPose_27; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_LeftMovementPose_27() { return &___m_LeftMovementPose_27; }
	inline void set_m_LeftMovementPose_27(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_LeftMovementPose_27 = value;
	}

	inline static int32_t get_offset_of_m_RightMovementPose_28() { return static_cast<int32_t>(offsetof(DynamicMoveProvider_t8B602D8A503C9409E356CFD397192F178225DC72, ___m_RightMovementPose_28)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_RightMovementPose_28() const { return ___m_RightMovementPose_28; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_RightMovementPose_28() { return &___m_RightMovementPose_28; }
	inline void set_m_RightMovementPose_28(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_RightMovementPose_28 = value;
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


// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>

struct List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IXRGroupMemberU5BU5D_tCCBD4AAC89936993CAED6A9DE25C793BF55DFB24* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA_StaticFields, ____emptyArray_5)); }
	inline IXRGroupMemberU5BU5D_tCCBD4AAC89936993CAED6A9DE25C793BF55DFB24* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IXRGroupMemberU5BU5D_tCCBD4AAC89936993CAED6A9DE25C793BF55DFB24** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IXRGroupMemberU5BU5D_tCCBD4AAC89936993CAED6A9DE25C793BF55DFB24* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>


// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>

struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_StaticFields, ____emptyArray_5)); }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>


// System.Collections.Generic.List`1<System.Object>

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>

struct Il2CppArrayBounds;

// System.Array

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs


// UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs


// Unity.XR.CoreUtils.Bindings.BindingsGroup


// Unity.XR.CoreUtils.Bindings.BindingsGroup


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


// UnityEngine.Events.UnityEventBase


// UnityEngine.Events.UnityEventBase


// System.ValueType


// System.ValueType


// UnityEngine.YieldInstruction


// UnityEngine.YieldInstruction


// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__31


// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__31


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<System.Object>


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<System.Object>


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>


// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>


// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>


// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>


// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>


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


// UnityEngine.InputSystem.InputActionProperty


// UnityEngine.InputSystem.InputActionProperty


// UnityEngine.XR.InputDevice

struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * ___s_InputSubsystemCache_0;

public:
	inline static int32_t get_offset_of_s_InputSubsystemCache_0() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_StaticFields, ___s_InputSubsystemCache_0)); }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * get_s_InputSubsystemCache_0() const { return ___s_InputSubsystemCache_0; }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 ** get_address_of_s_InputSubsystemCache_0() { return &___s_InputSubsystemCache_0; }
	inline void set_s_InputSubsystemCache_0(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * value)
	{
		___s_InputSubsystemCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InputSubsystemCache_0), (void*)value);
	}
};


// UnityEngine.XR.InputDevice


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


// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask


// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask


// UnityEngine.InputSystem.Utilities.InternedString


// UnityEngine.InputSystem.Utilities.InternedString


// UnityEngine.LayerMask


// UnityEngine.LayerMask


// UnityEngine.Mathf

struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
	}
};


// UnityEngine.Mathf


// UnityEngine.PhysicsScene


// UnityEngine.PhysicsScene


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


// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs


// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs


// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs


// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs


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


// Unity.Mathematics.float3

struct float3_t9500D105F273B3D86BD354142E891C48FFF9F71D_StaticFields
{
public:
	// Unity.Mathematics.float3 Unity.Mathematics.float3::zero
	float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  ___zero_3;

public:
	inline static int32_t get_offset_of_zero_3() { return static_cast<int32_t>(offsetof(float3_t9500D105F273B3D86BD354142E891C48FFF9F71D_StaticFields, ___zero_3)); }
	inline float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  get_zero_3() const { return ___zero_3; }
	inline float3_t9500D105F273B3D86BD354142E891C48FFF9F71D * get_address_of_zero_3() { return &___zero_3; }
	inline void set_zero_3(float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  value)
	{
		___zero_3 = value;
	}
};


// Unity.Mathematics.float3


// UnityEngine.InputSystem.InputAction/CallbackContext


// UnityEngine.InputSystem.InputAction/CallbackContext


// Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<Unity.Mathematics.float3>


// Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<Unity.Mathematics.float3>


// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>


// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>


// Unity.Collections.Allocator


// Unity.Collections.Allocator


// UnityEngine.Coroutine


// UnityEngine.Coroutine


// System.Delegate


// System.Delegate


// System.Exception

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};


// System.Exception


// UnityEngine.InputSystem.InputActionType


// UnityEngine.InputSystem.InputActionType


// UnityEngine.InputSystem.InputDeviceChange


// UnityEngine.InputSystem.InputDeviceChange


// UnityEngine.XR.InputDeviceCharacteristics


// UnityEngine.XR.InputDeviceCharacteristics


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


// Unity.Jobs.JobHandle


// Unity.Jobs.JobHandle


// UnityEngine.XR.Interaction.Toolkit.LocomotionPhase


// UnityEngine.XR.Interaction.Toolkit.LocomotionPhase


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


// UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData


// UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData


// UnityEngine.Pose

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.Pose


// Unity.Profiling.ProfilerMarker


// Unity.Profiling.ProfilerMarker


// UnityEngine.QueryTriggerInteraction


// UnityEngine.QueryTriggerInteraction


// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent


// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent


// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent


// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent


// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode


// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode


// UnityEngine.XR.TrackingOriginModeFlags


// UnityEngine.XR.TrackingOriginModeFlags


// System.TypeCode


// System.TypeCode


// UnityEngine.WrapMode


// UnityEngine.WrapMode


// UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase/GravityApplicationMode


// UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase/GravityApplicationMode


// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection


// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection


// UnityEngine.InputSystem.InputAction/ActionFlags


// UnityEngine.InputSystem.InputAction/ActionFlags


// UnityEngine.InputSystem.InputBinding/Flags


// UnityEngine.InputSystem.InputBinding/Flags


// UnityEngine.InputSystem.InputControl/ControlFlags


// UnityEngine.InputSystem.InputControl/ControlFlags


// UnityEngine.InputSystem.InputDevice/DeviceFlags


// UnityEngine.InputSystem.InputDevice/DeviceFlags


// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor/InputTriggerType


// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor/InputTriggerType


// Unity.XR.CoreUtils.XROrigin/TrackingOriginMode


// Unity.XR.CoreUtils.XROrigin/TrackingOriginMode


// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/AnchorRotationMode


// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/AnchorRotationMode


// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/HitDetectionType


// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/HitDetectionType


// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/LineType


// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/LineType


// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/QuerySnapVolumeInteraction


// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/QuerySnapVolumeInteraction


// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float3>


// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<Unity.Mathematics.float3>


// Unity.Collections.NativeArray`1<System.Single>


// Unity.Collections.NativeArray`1<System.Single>


// Unity.Collections.NativeArray`1<Unity.Mathematics.float3>


// Unity.Collections.NativeArray`1<Unity.Mathematics.float3>


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


// System.SystemException


// System.SystemException


// System.Action`1<UnityEngine.XR.InputDevice>


// System.Action`1<UnityEngine.XR.InputDevice>


// System.Action`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>


// System.Action`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>


// System.Action`1<Unity.Mathematics.float3>


// System.Action`1<Unity.Mathematics.float3>


// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>


// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>


// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>


// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>


// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.Mathematics.float3>


// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.Mathematics.float3>


// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>


// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>


// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>


// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>


// UnityEngine.Behaviour


// UnityEngine.Behaviour


// UnityEngine.InputSystem.InputActionReference


// UnityEngine.InputSystem.InputActionReference


// UnityEngine.InputSystem.InputControl


// UnityEngine.InputSystem.InputControl


// UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve


// UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.NativeCurve


// System.NotSupportedException


// System.NotSupportedException


// UnityEngine.Transform


// UnityEngine.Transform


// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1<Unity.Mathematics.float3>


// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1<Unity.Mathematics.float3>


// UnityEngine.Camera

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Camera


// UnityEngine.InputSystem.InputAction


// UnityEngine.InputSystem.InputAction


// UnityEngine.InputSystem.InputDevice


// UnityEngine.InputSystem.InputDevice


// UnityEngine.MonoBehaviour


// UnityEngine.MonoBehaviour


// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager

struct ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember> UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::s_GroupMembers
	List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA * ___s_GroupMembers_17;

public:
	inline static int32_t get_offset_of_s_GroupMembers_17() { return static_cast<int32_t>(offsetof(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_StaticFields, ___s_GroupMembers_17)); }
	inline List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA * get_s_GroupMembers_17() const { return ___s_GroupMembers_17; }
	inline List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA ** get_address_of_s_GroupMembers_17() { return &___s_GroupMembers_17; }
	inline void set_s_GroupMembers_17(List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA * value)
	{
		___s_GroupMembers_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_GroupMembers_17), (void*)value);
	}
};


// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager


// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager


// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager


// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText


// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText


// UnityEngine.XR.Interaction.Toolkit.LocomotionProvider


// UnityEngine.XR.Interaction.Toolkit.LocomotionProvider


// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem


// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem


// UnityEngine.EventSystems.UIBehaviour


// UnityEngine.EventSystems.UIBehaviour


// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.Vector3TweenableVariable


// UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.Vector3TweenableVariable


// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor

struct XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F_StaticFields
{
public:
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::s_InteractionManagerCache
	XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * ___s_InteractionManagerCache_40;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::s_ProcessInteractionStrengthMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___s_ProcessInteractionStrengthMarker_41;

public:
	inline static int32_t get_offset_of_s_InteractionManagerCache_40() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F_StaticFields, ___s_InteractionManagerCache_40)); }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * get_s_InteractionManagerCache_40() const { return ___s_InteractionManagerCache_40; }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 ** get_address_of_s_InteractionManagerCache_40() { return &___s_InteractionManagerCache_40; }
	inline void set_s_InteractionManagerCache_40(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * value)
	{
		___s_InteractionManagerCache_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InteractionManagerCache_40), (void*)value);
	}

	inline static int32_t get_offset_of_s_ProcessInteractionStrengthMarker_41() { return static_cast<int32_t>(offsetof(XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F_StaticFields, ___s_ProcessInteractionStrengthMarker_41)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_s_ProcessInteractionStrengthMarker_41() const { return ___s_ProcessInteractionStrengthMarker_41; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_s_ProcessInteractionStrengthMarker_41() { return &___s_ProcessInteractionStrengthMarker_41; }
	inline void set_s_ProcessInteractionStrengthMarker_41(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___s_ProcessInteractionStrengthMarker_41 = value;
	}
};


// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor


// UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup

struct XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC_StaticFields
{
public:
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::s_InteractionManagerCache
	XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * ___s_InteractionManagerCache_16;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::s_InteractablesSelected
	List_1_t471EBB9BADE4A0B8711AC39DEF94BC759D83FC6E * ___s_InteractablesSelected_17;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::s_InteractablesHovered
	List_1_t0EDE7B646794983AD89A3E567022A7A1C17FB365 * ___s_InteractablesHovered_18;

public:
	inline static int32_t get_offset_of_s_InteractionManagerCache_16() { return static_cast<int32_t>(offsetof(XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC_StaticFields, ___s_InteractionManagerCache_16)); }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * get_s_InteractionManagerCache_16() const { return ___s_InteractionManagerCache_16; }
	inline XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 ** get_address_of_s_InteractionManagerCache_16() { return &___s_InteractionManagerCache_16; }
	inline void set_s_InteractionManagerCache_16(XRInteractionManager_tDAFFE50E3E31F73912C35D646ED70337C27F53F4 * value)
	{
		___s_InteractionManagerCache_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InteractionManagerCache_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_InteractablesSelected_17() { return static_cast<int32_t>(offsetof(XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC_StaticFields, ___s_InteractablesSelected_17)); }
	inline List_1_t471EBB9BADE4A0B8711AC39DEF94BC759D83FC6E * get_s_InteractablesSelected_17() const { return ___s_InteractablesSelected_17; }
	inline List_1_t471EBB9BADE4A0B8711AC39DEF94BC759D83FC6E ** get_address_of_s_InteractablesSelected_17() { return &___s_InteractablesSelected_17; }
	inline void set_s_InteractablesSelected_17(List_1_t471EBB9BADE4A0B8711AC39DEF94BC759D83FC6E * value)
	{
		___s_InteractablesSelected_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InteractablesSelected_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_InteractablesHovered_18() { return static_cast<int32_t>(offsetof(XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC_StaticFields, ___s_InteractablesHovered_18)); }
	inline List_1_t0EDE7B646794983AD89A3E567022A7A1C17FB365 * get_s_InteractablesHovered_18() const { return ___s_InteractablesHovered_18; }
	inline List_1_t0EDE7B646794983AD89A3E567022A7A1C17FB365 ** get_address_of_s_InteractablesHovered_18() { return &___s_InteractablesHovered_18; }
	inline void set_s_InteractablesHovered_18(List_1_t0EDE7B646794983AD89A3E567022A7A1C17FB365 * value)
	{
		___s_InteractablesHovered_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InteractablesHovered_18), (void*)value);
	}
};


// UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup


// Unity.XR.CoreUtils.XROrigin

struct XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> Unity.XR.CoreUtils.XROrigin::s_InputSubsystems
	List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * ___s_InputSubsystems_13;

public:
	inline static int32_t get_offset_of_s_InputSubsystems_13() { return static_cast<int32_t>(offsetof(XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D_StaticFields, ___s_InputSubsystems_13)); }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * get_s_InputSubsystems_13() const { return ___s_InputSubsystems_13; }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 ** get_address_of_s_InputSubsystems_13() { return &___s_InputSubsystems_13; }
	inline void set_s_InputSubsystems_13(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * value)
	{
		___s_InputSubsystems_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InputSubsystems_13), (void*)value);
	}
};


// Unity.XR.CoreUtils.XROrigin


// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance


// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance


// UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase


// UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase


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


// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor

struct XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::s_ActivateTargets
	List_1_t9B3FEB201619069FD56EE104A4B4CC597EB7F99A * ___s_ActivateTargets_99;

public:
	inline static int32_t get_offset_of_s_ActivateTargets_99() { return static_cast<int32_t>(offsetof(XRBaseControllerInteractor_t280A674CF61A88980D65C9C3F66BD2078AB1D884_StaticFields, ___s_ActivateTargets_99)); }
	inline List_1_t9B3FEB201619069FD56EE104A4B4CC597EB7F99A * get_s_ActivateTargets_99() const { return ___s_ActivateTargets_99; }
	inline List_1_t9B3FEB201619069FD56EE104A4B4CC597EB7F99A ** get_address_of_s_ActivateTargets_99() { return &___s_ActivateTargets_99; }
	inline void set_s_ActivateTargets_99(List_1_t9B3FEB201619069FD56EE104A4B4CC597EB7F99A * value)
	{
		___s_ActivateTargets_99 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActivateTargets_99), (void*)value);
	}
};


// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor


// UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider


// UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider


// UnityEngine.UI.MaskableGraphic


// UnityEngine.UI.MaskableGraphic


// UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor

struct XRDirectInteractor_t2F00E9B79629EFA648D4DF02F8FF034DD99812D5_StaticFields
{
public:
	// UnityEngine.WaitForFixedUpdate UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor::s_WaitForFixedUpdate
	WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * ___s_WaitForFixedUpdate_108;

public:
	inline static int32_t get_offset_of_s_WaitForFixedUpdate_108() { return static_cast<int32_t>(offsetof(XRDirectInteractor_t2F00E9B79629EFA648D4DF02F8FF034DD99812D5_StaticFields, ___s_WaitForFixedUpdate_108)); }
	inline WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * get_s_WaitForFixedUpdate_108() const { return ___s_WaitForFixedUpdate_108; }
	inline WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 ** get_address_of_s_WaitForFixedUpdate_108() { return &___s_WaitForFixedUpdate_108; }
	inline void set_s_WaitForFixedUpdate_108(WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * value)
	{
		___s_WaitForFixedUpdate_108 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WaitForFixedUpdate_108), (void*)value);
	}
};


// UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor


// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor

struct XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_Results
	List_1_tA0AA68EBEDA30BFC60B674328ADD3173B39F3B23 * ___s_Results_105;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_ScratchSamplePoints
	List_1_t8F4B8FD04A1AA2BC3EDCB13F4EB43036E073DBE8 * ___s_ScratchSamplePoints_155;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_ScratchControlPoints
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_ScratchControlPoints_156;

public:
	inline static int32_t get_offset_of_s_Results_105() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A_StaticFields, ___s_Results_105)); }
	inline List_1_tA0AA68EBEDA30BFC60B674328ADD3173B39F3B23 * get_s_Results_105() const { return ___s_Results_105; }
	inline List_1_tA0AA68EBEDA30BFC60B674328ADD3173B39F3B23 ** get_address_of_s_Results_105() { return &___s_Results_105; }
	inline void set_s_Results_105(List_1_tA0AA68EBEDA30BFC60B674328ADD3173B39F3B23 * value)
	{
		___s_Results_105 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Results_105), (void*)value);
	}

	inline static int32_t get_offset_of_s_ScratchSamplePoints_155() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A_StaticFields, ___s_ScratchSamplePoints_155)); }
	inline List_1_t8F4B8FD04A1AA2BC3EDCB13F4EB43036E073DBE8 * get_s_ScratchSamplePoints_155() const { return ___s_ScratchSamplePoints_155; }
	inline List_1_t8F4B8FD04A1AA2BC3EDCB13F4EB43036E073DBE8 ** get_address_of_s_ScratchSamplePoints_155() { return &___s_ScratchSamplePoints_155; }
	inline void set_s_ScratchSamplePoints_155(List_1_t8F4B8FD04A1AA2BC3EDCB13F4EB43036E073DBE8 * value)
	{
		___s_ScratchSamplePoints_155 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ScratchSamplePoints_155), (void*)value);
	}

	inline static int32_t get_offset_of_s_ScratchControlPoints_156() { return static_cast<int32_t>(offsetof(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A_StaticFields, ___s_ScratchControlPoints_156)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_ScratchControlPoints_156() const { return ___s_ScratchControlPoints_156; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_ScratchControlPoints_156() { return &___s_ScratchControlPoints_156; }
	inline void set_s_ScratchControlPoints_156(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_ScratchControlPoints_156 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ScratchControlPoints_156), (void*)value);
	}
};


// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor


// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider


// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider


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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_gshared (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m55B41842E98953761E95E07523F94EA16C7834D1_gshared (InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_gshared (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_gshared_inline (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<!0> UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF5F7C66D929E846719C4FE7803DFDC7B69575883  ReadOnlyArray_1_GetEnumerator_m338BC7F27FD251E544AC5E1CF84A7DC8523D8C62_gshared (ReadOnlyArray_1_t9584B0851320AB0F5BC8FF261C123F5994A081B7 * __this, const RuntimeMethod* method);
// !0 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mBA41AAFC5E468E2099F23B73ECBE687E9840567D_gshared (Enumerator_tF5F7C66D929E846719C4FE7803DFDC7B69575883 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB60EE7786DDAB340301E7728C39A4849DB77D41A_gshared (Enumerator_tF5F7C66D929E846719C4FE7803DFDC7B69575883 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m13C8A37FC6CB05F10852C4F5C115BA5F170BC68F_gshared (Enumerator_tF5F7C66D929E846719C4FE7803DFDC7B69575883 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.InputDevice>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m07FF556D7B40C6C60B7A93C2ADBD5215ED162551_gshared (Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m60DAAA2A0145306F160B759BC2135A372C0E40B3_gshared (Action_2_t961B8FC40C595B3E8948D3CB85E51EB90540D7EF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<Unity.Mathematics.float3>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mBF67781D64A58A12B7F2B0B4949711B2BB69919D_gshared (Action_1_t59633D5754271108E50B86A3AE18D14982D2D472 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Unity.XR.CoreUtils.Bindings.IEventBinding Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<Unity.Mathematics.float3>::Subscribe(System.Action`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BindableVariableBase_1_Subscribe_mBB14D62DDCA115C882CAF39FA7C29D969425935B_gshared (BindableVariableBase_1_t1567FA968C8EC72C6319A892236CFAAF828710AB * __this, Action_1_t59633D5754271108E50B86A3AE18D14982D2D472 * ___callback0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m7E84356074E72345303580C158E3FCF0BB703260_gshared (Action_1_t86411888FFBF948F6F03B645D9DA11165B50C96F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1<Unity.Mathematics.float3>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_Dispose_m7F04550044E1B7C7C8D3677152F64CFC4552EE2B_gshared (TweenableVariableAsyncBase_1_t0964B044416FEA2F724DE35FE65712594E80649D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.Mathematics.float3>::HandleTween(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_HandleTween_m76840F115C312908B57559DC90FD2DDD85617472_gshared (TweenableVariableBase_1_t211ADF995AD7DF7DF484BB8E09E4EE1DCEFF73AF * __this, float ___tweenTarget0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.Mathematics.float3>::set_target(!0)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_target_mA1AE83F0B29D2D881A099C03217C8429D419F174_gshared_inline (TweenableVariableBase_1_t211ADF995AD7DF7DF484BB8E09E4EE1DCEFF73AF * __this, float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  ___value0, const RuntimeMethod* method);

// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::UpdateLocomotionActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_UpdateLocomotionActions_m5225BD850811B9A75EE80F2D1BA3E2C1255C6FCA (ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::get_selectEntered()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 * XRBaseInteractor_get_selectEntered_m957269B06CBB2BB5CBF550B0B7853F0CE296DF64_inline (XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mA4D71D6981C540F8442974C5E02BCC92128EAEA6 (UnityAction_1_t94B67181746C0497C7552A3A1A7B603CF7589E44 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t94B67181746C0497C7552A3A1A7B603CF7589E44 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_mD52E08F240BDB2B0569328F9300CDA17CA9E9C97 (UnityEvent_1_t793F3D070F12FF57919C6FA8BDDA742A3D75773D * __this, UnityAction_1_t94B67181746C0497C7552A3A1A7B603CF7589E44 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t793F3D070F12FF57919C6FA8BDDA742A3D75773D *, UnityAction_1_t94B67181746C0497C7552A3A1A7B603CF7589E44 *, const RuntimeMethod*))UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared)(__this, ___call0, method);
}
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::get_selectExited()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 * XRBaseInteractor_get_selectExited_m05B02D438D30646B7AD5827FCEBCA401E8AA0C23_inline (XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mD92F2074D1F4BE70CE631962FA9781DC50A652A8 (UnityAction_1_tD7929AD3E8F3644E9E0C9C7590E7B967E96F5783 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tD7929AD3E8F3644E9E0C9C7590E7B967E96F5783 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_mB17050568D58A879D64EE283A868EF7FCFBE0159 (UnityEvent_1_tC7D1BD63B6A342C8CAF366C3242C680CC371BE61 * __this, UnityAction_1_tD7929AD3E8F3644E9E0C9C7590E7B967E96F5783 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC7D1BD63B6A342C8CAF366C3242C680CC371BE61 *, UnityAction_1_tD7929AD3E8F3644E9E0C9C7590E7B967E96F5783 *, const RuntimeMethod*))UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared)(__this, ___call0, method);
}
// UnityEngine.InputSystem.InputAction UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::GetInputAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * ActionBasedControllerManager_GetInputAction_m4FAD588A9268D9FDF17658903B7E87CC62DD812C (InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___actionReference0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m9FF12F3D5C984DB93D2DD75667F3B53D7B66C0A3 (InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * __this, Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_m07229F73CE0F7D5679F422DBAA9B287CFDF68AFE (InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * __this, Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_RemoveListener_mE5B6E24B4CA6C6434448A0DFEEF593BD995652A1 (UnityEvent_1_t793F3D070F12FF57919C6FA8BDDA742A3D75773D * __this, UnityAction_1_t94B67181746C0497C7552A3A1A7B603CF7589E44 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t793F3D070F12FF57919C6FA8BDDA742A3D75773D *, UnityAction_1_t94B67181746C0497C7552A3A1A7B603CF7589E44 *, const RuntimeMethod*))UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_RemoveListener_m7DAB81E8D3103C1E8EAC392EC56E6F7CD62853D3 (UnityEvent_1_tC7D1BD63B6A342C8CAF366C3242C680CC371BE61 * __this, UnityAction_1_tD7929AD3E8F3644E9E0C9C7590E7B967E96F5783 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC7D1BD63B6A342C8CAF366C3242C680CC371BE61 *, UnityAction_1_tD7929AD3E8F3644E9E0C9C7590E7B967E96F5783 *, const RuntimeMethod*))UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m141C0FA72906BDF08A33EF3728C0193EFD0AAB06 (InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * __this, Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::remove_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_canceled_m69E70B6BAFF763F524D38F2D0346911A80C5B7C5 (InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * __this, Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::RayInteractorUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_RayInteractorUpdate_mDE49B1CE6A93EE8B2237DAB76FEE14CCDE5C195E (ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::DisableLocomotionActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_DisableLocomotionActions_m7B0A9D2C2B479FAE07CB8A0F08CEF38F3CCE9B86 (ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::OnAfterInteractionEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActionBasedControllerManager_OnAfterInteractionEvents_m341C204BE246555170020F689877C5C0C89A6369 (ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::SetupInteractorEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_SetupInteractorEvents_m8B70630630373D4E9A4E9612B869176547BD2853 (ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::TeardownInteractorEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_TeardownInteractorEvents_m34E8544A4AE8A0331A0A22C102A917DD6D676258 (ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8F0BF6D19FDEAA41F027A734D6EE2CA2E4BCA1B3 (RuntimeObject * ___message0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::GetGroupMembers(System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInteractionGroup_GetGroupMembers_mC491BA9577F8E1322502D8FD4932A12725FD0712 (XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC * __this, List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA * ___results0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m60F63519705ABA5BD6C0197C020C0AFBFD655EE3_inline (List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>::get_Count()
inline int32_t List_1_get_Count_m0EB8130F8F618CD66D8635BF535EC28E90DD1675_inline (List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::AddGroupMember(UnityEngine.XR.Interaction.Toolkit.IXRGroupMember)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInteractionGroup_AddGroupMember_m070F81BB848732A3E340C94529DFCAA41B016925 (XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC * __this, RuntimeObject* ___groupMember0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup::MoveGroupMemberTo(UnityEngine.XR.Interaction.Toolkit.IXRGroupMember,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInteractionGroup_MoveGroupMemberTo_mBD1CA8030769F379FC19C78D224AC0C0C2EE5A23 (XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC * __this, RuntimeObject* ___groupMember0, int32_t ___newIndex1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnAfterInteractionEventsU3Ed__31__ctor_m601BAF99E1B6B511FDE379A1905DF3D6AB047D83 (U3COnAfterInteractionEventsU3Ed__31_tA2C50022A2D30059BB0285E87EE43DECF8920956 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::SetEnabled(UnityEngine.InputSystem.InputActionReference,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_SetEnabled_m53304D4FA8BC86A9561A5071D5433EFD3C157101 (InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___actionReference0, bool ___enabled1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::DisableAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_DisableAction_m2036C3B4B949793C92BF82D4138B9AEDFA88C8C9 (InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___actionReference0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::EnableAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_EnableAction_m12645D06ABA32F88B1DDE6692FE16CEC6FEFB001 (InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___actionReference0, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.InputAction::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_get_enabled_m12F68C1B6DFFDD654EC9657E6FA4B86E607A4812 (InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_Enable_mF937726A4E92A3B9300B7E6D0F9A1B56ACFEA573 (InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_Disable_m8AF74C528E03865CDE66A6885C323538FDEAD2C3 (InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9 (InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRGroupMember>::.ctor()
inline void List_1__ctor_m2AFFB86C7A3ED83885BD69DD46534436966EBB48 (List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocomotionProvider_Awake_m8C8152BA75A1C6E84378FDA7EFD28B527A81F0A5 (LocomotionProvider_tF07C5527C6B8CDB38B435E8EDC50DF8CA86C6448 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mB872ACF032ACC4D32EE3472D98A9694205AE2C8D (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::set_forwardSource(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ContinuousMoveProviderBase_set_forwardSource_mFC654F04903F2517D5AF32028B2216DEFF341BEB_inline (ContinuousMoveProviderBase_tEEA003EAE25A3AAEEF9FF9B39FA30EE046059044 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_mD28A0EC932762710AFA0BBB9CCC63716C3BD064D (const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m3548B3539928E88F2CE523A070D30609C8FEC225_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method);
// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::get_system()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocomotionSystem_tEF4F8D19A639BFEBBD4C52AE52AB74D337BB4C5D * LocomotionProvider_get_system_m03FA085476B700DA9942A3B6DF3B8D3C2D7D36F1_inline (LocomotionProvider_tF07C5527C6B8CDB38B435E8EDC50DF8CA86C6448 * __this, const RuntimeMethod* method);
// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::get_xrOrigin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * LocomotionSystem_get_xrOrigin_m2B3172A766D97744D3D575CC9174EE5C37E80D1B_inline (LocomotionSystem_tEF4F8D19A639BFEBBD4C52AE52AB74D337BB4C5D * __this, const RuntimeMethod* method);
// UnityEngine.Camera Unity.XR.CoreUtils.XROrigin::get_Camera()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * XROrigin_get_Camera_mDEC1EA5E15968845DA812397BBA4506A88B0F9FF_inline (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method);
// UnityEngine.Pose Unity.XR.CoreUtils.TransformExtensions::GetWorldPose(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  TransformExtensions_GetWorldPose_m6FE72295A60A6AC84B1831D49EB5926817B3682F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void UnityEngine.Assertions.Assert::IsTrue(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_m813519A98594F349DE019223ED871AE1B61615D7 (bool ___condition0, String_t* ___message1, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider::get_leftHandMoveAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443  ActionBasedContinuousMoveProvider_get_leftHandMoveAction_m1C39E15479E4A961A8ED123466C6D1FF4A166B81_inline (ActionBasedContinuousMoveProvider_tA1E91E01A6936255752856265BCBFBDBA093293A * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * InputActionProperty_get_action_m4F5C6388D4710CC2CDD4F01672A2C547AC329908 (InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m55B41842E98953761E95E07523F94EA16C7834D1 (InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * __this, const RuntimeMethod* method)
{
	return ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B *, const RuntimeMethod*))InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m55B41842E98953761E95E07523F94EA16C7834D1_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider::get_rightHandMoveAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443  ActionBasedContinuousMoveProvider_get_rightHandMoveAction_m786CBFBF3C9C3E0630EC04FD5FD1A35C5F17D712_inline (ActionBasedContinuousMoveProvider_tA1E91E01A6936255752856265BCBFBDBA093293A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m5E223DB365EAC8F6625C169E927527FFB8CC88DB_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m248F79C5788A4A059F1394DEC120F23B67EFE541 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m33418A6BDFB6395B98D0B5733F5E522B7EEDDCDE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.ContinuousMoveProviderBase::ComputeDesiredMove(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ContinuousMoveProviderBase_ComputeDesiredMove_m1ED66E077EE95558BB97BE6FC237EA3B33039747 (ContinuousMoveProviderBase_tEEA003EAE25A3AAEEF9FF9B39FA30EE046059044 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___input0, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  Pose_get_identity_m48C568C5B6D5507D8D7B6E7C8EE7345A16E3F300 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedContinuousMoveProvider__ctor_m38CF25142F1C48B3EADD8239E98859588C046D45 (ActionBasedContinuousMoveProvider_tA1E91E01A6936255752856265BCBFBDBA093293A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
inline void List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1 (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *, const RuntimeMethod*))List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_gshared)(__this, method);
}
// System.Void UnityEngine.XR.InputDevices::GetDevicesWithCharacteristics(UnityEngine.XR.InputDeviceCharacteristics,System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_GetDevicesWithCharacteristics_m8E01909248CE8295B99FC5D27CCD63E51A44E5BC (uint32_t ___desiredCharacteristics0, List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevices1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
inline int32_t List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_inline (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *, const RuntimeMethod*))List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m494F184C7E314B19A4DDAE5E1ABB9106886ED86A (RuntimeObject * ___message0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context1, const RuntimeMethod* method);
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.InputSystem::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_tACB506541C5CC2CCA16D8065F5F949D9874C78D0  InputSystem_get_devices_mB346D1402C607C5EEF4CBAED94C3DADF52CF3831 (const RuntimeMethod* method);
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<!0> UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>::GetEnumerator()
inline Enumerator_tD1AA7B3BA0B028284BEC7AB59A86AEA47553FF2C  ReadOnlyArray_1_GetEnumerator_m4DB2F36A677C515C0826FECFB55A531029BE8EF3 (ReadOnlyArray_1_tACB506541C5CC2CCA16D8065F5F949D9874C78D0 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD1AA7B3BA0B028284BEC7AB59A86AEA47553FF2C  (*) (ReadOnlyArray_1_tACB506541C5CC2CCA16D8065F5F949D9874C78D0 *, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_m338BC7F27FD251E544AC5E1CF84A7DC8523D8C62_gshared)(__this, method);
}
// !0 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>::get_Current()
inline InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * Enumerator_get_Current_mE0FA132D78425C004BD2F06C3F96F23E84D039A7 (Enumerator_tD1AA7B3BA0B028284BEC7AB59A86AEA47553FF2C * __this, const RuntimeMethod* method)
{
	return ((  InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * (*) (Enumerator_tD1AA7B3BA0B028284BEC7AB59A86AEA47553FF2C *, const RuntimeMethod*))Enumerator_get_Current_mBA41AAFC5E468E2099F23B73ECBE687E9840567D_gshared)(__this, method);
}
// System.String UnityEngine.InputSystem.InputControl::get_layout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputControl_get_layout_m6A38EE2D15A5FCFDEE94B4056DD1565E17378454 (InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>::MoveNext()
inline bool Enumerator_MoveNext_m7B98E1E5167F455581477D2C8285D0447A53FCCC (Enumerator_tD1AA7B3BA0B028284BEC7AB59A86AEA47553FF2C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD1AA7B3BA0B028284BEC7AB59A86AEA47553FF2C *, const RuntimeMethod*))Enumerator_MoveNext_mB60EE7786DDAB340301E7728C39A4849DB77D41A_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>::Dispose()
inline void Enumerator_Dispose_m2254852747D86D319AB23DAC16B3E59A9726F8F4 (Enumerator_tD1AA7B3BA0B028284BEC7AB59A86AEA47553FF2C * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD1AA7B3BA0B028284BEC7AB59A86AEA47553FF2C *, const RuntimeMethod*))Enumerator_Dispose_m13C8A37FC6CB05F10852C4F5C115BA5F170BC68F_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mFCC4F73CACBC055EBB4CE9891F564B80B81B5F0E (RuntimeObject * ___message0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.InputDevice>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m07FF556D7B40C6C60B7A93C2ADBD5215ED162551 (Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m07FF556D7B40C6C60B7A93C2ADBD5215ED162551_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.InputDevices::add_deviceConnected(System.Action`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_add_deviceConnected_m49C5FD5111FCD2A554F8DB09DEB1B10C14712A34 (Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 * ___value0, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m11077C7022CE6CBAAAC763380F883C54AA772954 (Action_2_tA58D913EBCC7FD3E95DEC877EDB4363CD3051DF4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tA58D913EBCC7FD3E95DEC877EDB4363CD3051DF4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m60DAAA2A0145306F160B759BC2135A372C0E40B3_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::add_onDeviceChange(System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_add_onDeviceChange_mD7FEFA78E945496C2C34F5EF4DAC8E09FD3CAFBE (Action_2_tA58D913EBCC7FD3E95DEC877EDB4363CD3051DF4 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputDevices::remove_deviceConnected(System.Action`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_remove_deviceConnected_m0DC6FD2F872E31761DCACF4A66CCF1EE15D7CE71 (Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputSystem::remove_onDeviceChange(System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_remove_onDeviceChange_mA3C70EFFE9F1F01FD23A9C8454D3757E9FCFD1A9 (Action_2_tA58D913EBCC7FD3E95DEC877EDB4363CD3051DF4 * ___value0, const RuntimeMethod* method);
// UnityEngine.XR.InputDeviceCharacteristics UnityEngine.XR.InputDevice::get_characteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, const RuntimeMethod* method);
// System.Boolean System.Enum::HasFlag(System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E (RuntimeObject * __this, Enum_t23B90B40F60E677A8025267341651C94AE079CDA * ___flag0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.IPokeStateDataProvider>()
inline RuntimeObject* Component_GetComponentInParent_TisIPokeStateDataProvider_t8CBEF15D28B76453F7F2612922899EA7D641040A_mBB9E9686DECFE37063B1E30A9FC022BCEEB7F2D0 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<Unity.Mathematics.float3>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mBF67781D64A58A12B7F2B0B4949711B2BB69919D (Action_1_t59633D5754271108E50B86A3AE18D14982D2D472 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t59633D5754271108E50B86A3AE18D14982D2D472 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mBF67781D64A58A12B7F2B0B4949711B2BB69919D_gshared)(__this, ___object0, ___method1, method);
}
// Unity.XR.CoreUtils.Bindings.IEventBinding Unity.XR.CoreUtils.Bindings.Variables.BindableVariableBase`1<Unity.Mathematics.float3>::Subscribe(System.Action`1<!0>)
inline RuntimeObject* BindableVariableBase_1_Subscribe_mBB14D62DDCA115C882CAF39FA7C29D969425935B (BindableVariableBase_1_t1567FA968C8EC72C6319A892236CFAAF828710AB * __this, Action_1_t59633D5754271108E50B86A3AE18D14982D2D472 * ___callback0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BindableVariableBase_1_t1567FA968C8EC72C6319A892236CFAAF828710AB *, Action_1_t59633D5754271108E50B86A3AE18D14982D2D472 *, const RuntimeMethod*))BindableVariableBase_1_Subscribe_mBB14D62DDCA115C882CAF39FA7C29D969425935B_gshared)(__this, ___callback0, method);
}
// System.Void Unity.XR.CoreUtils.Bindings.BindingsGroup::AddBinding(Unity.XR.CoreUtils.Bindings.IEventBinding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsGroup_AddBinding_mB862CA624836F2F41878A83077484E5D4F51BBDC (BindingsGroup_tFD7DAAAD7DD40D8180050DA4BE2BF93754B4F2AE * __this, RuntimeObject* ___binding0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m7E84356074E72345303580C158E3FCF0BB703260 (Action_1_t86411888FFBF948F6F03B645D9DA11165B50C96F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t86411888FFBF948F6F03B645D9DA11165B50C96F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m7E84356074E72345303580C158E3FCF0BB703260_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.XR.CoreUtils.Bindings.BindingsGroup::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsGroup_Clear_mB28C44D8FC5CBEDCBE41D99AC52A06AD3D3C0024 (BindingsGroup_tFD7DAAAD7DD40D8180050DA4BE2BF93754B4F2AE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableAsyncBase`1<Unity.Mathematics.float3>::Dispose()
inline void TweenableVariableAsyncBase_1_Dispose_m7F04550044E1B7C7C8D3677152F64CFC4552EE2B (TweenableVariableAsyncBase_1_t0964B044416FEA2F724DE35FE65712594E80649D * __this, const RuntimeMethod* method)
{
	((  void (*) (TweenableVariableAsyncBase_1_t0964B044416FEA2F724DE35FE65712594E80649D *, const RuntimeMethod*))TweenableVariableAsyncBase_1_Dispose_m7F04550044E1B7C7C8D3677152F64CFC4552EE2B_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.Mathematics.float3>::HandleTween(System.Single)
inline void TweenableVariableBase_1_HandleTween_m76840F115C312908B57559DC90FD2DDD85617472 (TweenableVariableBase_1_t211ADF995AD7DF7DF484BB8E09E4EE1DCEFF73AF * __this, float ___tweenTarget0, const RuntimeMethod* method)
{
	((  void (*) (TweenableVariableBase_1_t211ADF995AD7DF7DF484BB8E09E4EE1DCEFF73AF *, float, const RuntimeMethod*))TweenableVariableBase_1_HandleTween_m76840F115C312908B57559DC90FD2DDD85617472_gshared)(__this, ___tweenTarget0, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1 (const RuntimeMethod* method);
// UnityEngine.Vector3 Unity.Mathematics.float3::op_Implicit(Unity.Mathematics.float3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  float3_op_Implicit_mF3897B2F87EEB82C8D46016ADADD80B4279D9F8B (float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  ___v0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::get_target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * PokeStateData_get_target_m77F0F835C5C583CDD2FF72D2AE63D6A8CA34CD65_inline (PokeStateData_tD7AE4FF9FE42F143B310C489FD9A9CAFEEEE2EC6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Transform::IsChildOf(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transform_IsChildOf_m1783A88A490931E98F4D5E361595A518E09FD4BC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::get_axisAlignedPokeInteractionPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PokeStateData_get_axisAlignedPokeInteractionPoint_m7046CD3B468BD8DF1988F15E476CC851F6DCA57B_inline (PokeStateData_tD7AE4FF9FE42F143B310C489FD9A9CAFEEEE2EC6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_ClampMagnitude_m11A2FD0BD3D54B25CEE4657DF713A5C8C60B0297 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, float ___maxLength1, const RuntimeMethod* method);
// Unity.Mathematics.float3 Unity.Mathematics.float3::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  float3_op_Implicit_m52E7BAC4F651B42D13F635E5942FA9FD73F9084C (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.TweenableVariableBase`1<Unity.Mathematics.float3>::set_target(!0)
inline void TweenableVariableBase_1_set_target_mA1AE83F0B29D2D881A099C03217C8429D419F174_inline (TweenableVariableBase_1_t211ADF995AD7DF7DF484BB8E09E4EE1DCEFF73AF * __this, float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  ___value0, const RuntimeMethod* method)
{
	((  void (*) (TweenableVariableBase_1_t211ADF995AD7DF7DF484BB8E09E4EE1DCEFF73AF *, float3_t9500D105F273B3D86BD354142E891C48FFF9F71D , const RuntimeMethod*))TweenableVariableBase_1_set_target_mA1AE83F0B29D2D881A099C03217C8429D419F174_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables.Primitives.Vector3TweenableVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3TweenableVariable__ctor_m610E3A31946F704EC17D9967052107D5E596FA4C (Vector3TweenableVariable_tED608C05E502A2D74AC2E7031CC90D00D92C9917 * __this, const RuntimeMethod* method);
// System.Void Unity.XR.CoreUtils.Bindings.BindingsGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindingsGroup__ctor_m134F76F56E968839A28997A80A0B8F7272F0B745 (BindingsGroup_tFD7DAAAD7DD40D8180050DA4BE2BF93754B4F2AE * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m831CBA1D198C3CDE660E8172A67A4E41BD0D0171 (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBCBF2D9FD1B5F0D8D8595B15B7460889D60C8070 (const RuntimeMethod* method);
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
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::get_smoothMotionEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActionBasedControllerManager_get_smoothMotionEnabled_m16D7F568356B54A2E5B5F4D8667E838E5C510A98 (ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * __this, const RuntimeMethod* method)
{
	{
		// get => m_SmoothMotionEnabled;
		bool L_0 = __this->get_m_SmoothMotionEnabled_14();
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::set_smoothMotionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_set_smoothMotionEnabled_m25BEEABCF36985D1F5A144695345A49AF11D7B97 (ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// m_SmoothMotionEnabled = value;
		bool L_0 = ___value0;
		__this->set_m_SmoothMotionEnabled_14(L_0);
		// UpdateLocomotionActions();
		ActionBasedControllerManager_UpdateLocomotionActions_m5225BD850811B9A75EE80F2D1BA3E2C1255C6FCA(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::get_smoothTurnEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ActionBasedControllerManager_get_smoothTurnEnabled_m1B39311D29EC81F9D4E6C97437C93DA365313773 (ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * __this, const RuntimeMethod* method)
{
	{
		// get => m_SmoothTurnEnabled;
		bool L_0 = __this->get_m_SmoothTurnEnabled_15();
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::set_smoothTurnEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_set_smoothTurnEnabled_m317ECF8C7BB4A81AC1F3F15DC30C39EF9AB8F4D6 (ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// m_SmoothTurnEnabled = value;
		bool L_0 = ___value0;
		__this->set_m_SmoothTurnEnabled_15(L_0);
		// UpdateLocomotionActions();
		ActionBasedControllerManager_UpdateLocomotionActions_m5225BD850811B9A75EE80F2D1BA3E2C1255C6FCA(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::SetupInteractorEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_SetupInteractorEvents_m8B70630630373D4E9A4E9612B869176547BD2853 (ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnCancelTeleport_m9AB7C027FA810AB29241AE6B45FB0BE37672BB0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnRaySelectEntered_m67E441C036776297554DCF1B31212A7A1EDC8EF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnRaySelectExited_m89533D6795CCF346FDEFBEE08949011C930D09A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnStartTeleport_mF1134B8F8B1C1F07D92D9AD994C06C8495D6B215_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_mA4D71D6981C540F8442974C5E02BCC92128EAEA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_mD92F2074D1F4BE70CE631962FA9781DC50A652A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t94B67181746C0497C7552A3A1A7B603CF7589E44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD7929AD3E8F3644E9E0C9C7590E7B967E96F5783_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB17050568D58A879D64EE283A868EF7FCFBE0159_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mD52E08F240BDB2B0569328F9300CDA17CA9E9C97_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * V_0 = NULL;
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (m_RayInteractor != null)
		XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A * L_0 = __this->get_m_RayInteractor_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		// m_RayInteractor.selectEntered.AddListener(OnRaySelectEntered);
		XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A * L_3 = __this->get_m_RayInteractor_7();
		NullCheck(L_3);
		SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 * L_4;
		L_4 = XRBaseInteractor_get_selectEntered_m957269B06CBB2BB5CBF550B0B7853F0CE296DF64_inline(L_3, /*hidden argument*/NULL);
		UnityAction_1_t94B67181746C0497C7552A3A1A7B603CF7589E44 * L_5 = (UnityAction_1_t94B67181746C0497C7552A3A1A7B603CF7589E44 *)il2cpp_codegen_object_new(UnityAction_1_t94B67181746C0497C7552A3A1A7B603CF7589E44_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mA4D71D6981C540F8442974C5E02BCC92128EAEA6(L_5, __this, (intptr_t)((intptr_t)ActionBasedControllerManager_OnRaySelectEntered_m67E441C036776297554DCF1B31212A7A1EDC8EF3_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mA4D71D6981C540F8442974C5E02BCC92128EAEA6_RuntimeMethod_var);
		NullCheck(L_4);
		UnityEvent_1_AddListener_mD52E08F240BDB2B0569328F9300CDA17CA9E9C97(L_4, L_5, /*hidden argument*/UnityEvent_1_AddListener_mD52E08F240BDB2B0569328F9300CDA17CA9E9C97_RuntimeMethod_var);
		// m_RayInteractor.selectExited.AddListener(OnRaySelectExited);
		XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A * L_6 = __this->get_m_RayInteractor_7();
		NullCheck(L_6);
		SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 * L_7;
		L_7 = XRBaseInteractor_get_selectExited_m05B02D438D30646B7AD5827FCEBCA401E8AA0C23_inline(L_6, /*hidden argument*/NULL);
		UnityAction_1_tD7929AD3E8F3644E9E0C9C7590E7B967E96F5783 * L_8 = (UnityAction_1_tD7929AD3E8F3644E9E0C9C7590E7B967E96F5783 *)il2cpp_codegen_object_new(UnityAction_1_tD7929AD3E8F3644E9E0C9C7590E7B967E96F5783_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mD92F2074D1F4BE70CE631962FA9781DC50A652A8(L_8, __this, (intptr_t)((intptr_t)ActionBasedControllerManager_OnRaySelectExited_m89533D6795CCF346FDEFBEE08949011C930D09A7_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mD92F2074D1F4BE70CE631962FA9781DC50A652A8_RuntimeMethod_var);
		NullCheck(L_7);
		UnityEvent_1_AddListener_mB17050568D58A879D64EE283A868EF7FCFBE0159(L_7, L_8, /*hidden argument*/UnityEvent_1_AddListener_mB17050568D58A879D64EE283A868EF7FCFBE0159_RuntimeMethod_var);
	}

IL_004d:
	{
		// var teleportModeActivateAction = GetInputAction(m_TeleportModeActivate);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_9 = __this->get_m_TeleportModeActivate_9();
		IL2CPP_RUNTIME_CLASS_INIT(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_10;
		L_10 = ActionBasedControllerManager_GetInputAction_m4FAD588A9268D9FDF17658903B7E87CC62DD812C(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		// if (teleportModeActivateAction != null)
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_11 = V_0;
		V_3 = (bool)((!(((RuntimeObject*)(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		// teleportModeActivateAction.performed += OnStartTeleport;
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_13 = V_0;
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_14 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_14, __this, (intptr_t)((intptr_t)ActionBasedControllerManager_OnStartTeleport_mF1134B8F8B1C1F07D92D9AD994C06C8495D6B215_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		NullCheck(L_13);
		InputAction_add_performed_m9FF12F3D5C984DB93D2DD75667F3B53D7B66C0A3(L_13, L_14, /*hidden argument*/NULL);
		// teleportModeActivateAction.canceled += OnCancelTeleport;
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_15 = V_0;
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_16 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_16, __this, (intptr_t)((intptr_t)ActionBasedControllerManager_OnCancelTeleport_m9AB7C027FA810AB29241AE6B45FB0BE37672BB0A_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		NullCheck(L_15);
		InputAction_add_canceled_m07229F73CE0F7D5679F422DBAA9B287CFDF68AFE(L_15, L_16, /*hidden argument*/NULL);
	}

IL_0089:
	{
		// var teleportModeCancelAction = GetInputAction(m_TeleportModeCancel);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_17 = __this->get_m_TeleportModeCancel_10();
		IL2CPP_RUNTIME_CLASS_INIT(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_18;
		L_18 = ActionBasedControllerManager_GetInputAction_m4FAD588A9268D9FDF17658903B7E87CC62DD812C(L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		// if (teleportModeCancelAction != null)
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_19 = V_1;
		V_4 = (bool)((!(((RuntimeObject*)(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B *)L_19) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_00b4;
		}
	}
	{
		// teleportModeCancelAction.performed += OnCancelTeleport;
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_21 = V_1;
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_22 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_22, __this, (intptr_t)((intptr_t)ActionBasedControllerManager_OnCancelTeleport_m9AB7C027FA810AB29241AE6B45FB0BE37672BB0A_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		NullCheck(L_21);
		InputAction_add_performed_m9FF12F3D5C984DB93D2DD75667F3B53D7B66C0A3(L_21, L_22, /*hidden argument*/NULL);
	}

IL_00b4:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::TeardownInteractorEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_TeardownInteractorEvents_m34E8544A4AE8A0331A0A22C102A917DD6D676258 (ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnCancelTeleport_m9AB7C027FA810AB29241AE6B45FB0BE37672BB0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnRaySelectEntered_m67E441C036776297554DCF1B31212A7A1EDC8EF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnRaySelectExited_m89533D6795CCF346FDEFBEE08949011C930D09A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnStartTeleport_mF1134B8F8B1C1F07D92D9AD994C06C8495D6B215_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_mA4D71D6981C540F8442974C5E02BCC92128EAEA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_mD92F2074D1F4BE70CE631962FA9781DC50A652A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t94B67181746C0497C7552A3A1A7B603CF7589E44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD7929AD3E8F3644E9E0C9C7590E7B967E96F5783_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m7DAB81E8D3103C1E8EAC392EC56E6F7CD62853D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mE5B6E24B4CA6C6434448A0DFEEF593BD995652A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * V_0 = NULL;
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (m_RayInteractor != null)
		XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A * L_0 = __this->get_m_RayInteractor_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		// m_RayInteractor.selectEntered.RemoveListener(OnRaySelectEntered);
		XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A * L_3 = __this->get_m_RayInteractor_7();
		NullCheck(L_3);
		SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 * L_4;
		L_4 = XRBaseInteractor_get_selectEntered_m957269B06CBB2BB5CBF550B0B7853F0CE296DF64_inline(L_3, /*hidden argument*/NULL);
		UnityAction_1_t94B67181746C0497C7552A3A1A7B603CF7589E44 * L_5 = (UnityAction_1_t94B67181746C0497C7552A3A1A7B603CF7589E44 *)il2cpp_codegen_object_new(UnityAction_1_t94B67181746C0497C7552A3A1A7B603CF7589E44_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mA4D71D6981C540F8442974C5E02BCC92128EAEA6(L_5, __this, (intptr_t)((intptr_t)ActionBasedControllerManager_OnRaySelectEntered_m67E441C036776297554DCF1B31212A7A1EDC8EF3_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mA4D71D6981C540F8442974C5E02BCC92128EAEA6_RuntimeMethod_var);
		NullCheck(L_4);
		UnityEvent_1_RemoveListener_mE5B6E24B4CA6C6434448A0DFEEF593BD995652A1(L_4, L_5, /*hidden argument*/UnityEvent_1_RemoveListener_mE5B6E24B4CA6C6434448A0DFEEF593BD995652A1_RuntimeMethod_var);
		// m_RayInteractor.selectExited.RemoveListener(OnRaySelectExited);
		XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A * L_6 = __this->get_m_RayInteractor_7();
		NullCheck(L_6);
		SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 * L_7;
		L_7 = XRBaseInteractor_get_selectExited_m05B02D438D30646B7AD5827FCEBCA401E8AA0C23_inline(L_6, /*hidden argument*/NULL);
		UnityAction_1_tD7929AD3E8F3644E9E0C9C7590E7B967E96F5783 * L_8 = (UnityAction_1_tD7929AD3E8F3644E9E0C9C7590E7B967E96F5783 *)il2cpp_codegen_object_new(UnityAction_1_tD7929AD3E8F3644E9E0C9C7590E7B967E96F5783_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mD92F2074D1F4BE70CE631962FA9781DC50A652A8(L_8, __this, (intptr_t)((intptr_t)ActionBasedControllerManager_OnRaySelectExited_m89533D6795CCF346FDEFBEE08949011C930D09A7_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mD92F2074D1F4BE70CE631962FA9781DC50A652A8_RuntimeMethod_var);
		NullCheck(L_7);
		UnityEvent_1_RemoveListener_m7DAB81E8D3103C1E8EAC392EC56E6F7CD62853D3(L_7, L_8, /*hidden argument*/UnityEvent_1_RemoveListener_m7DAB81E8D3103C1E8EAC392EC56E6F7CD62853D3_RuntimeMethod_var);
	}

IL_004d:
	{
		// var teleportModeActivateAction = GetInputAction(m_TeleportModeActivate);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_9 = __this->get_m_TeleportModeActivate_9();
		IL2CPP_RUNTIME_CLASS_INIT(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_10;
		L_10 = ActionBasedControllerManager_GetInputAction_m4FAD588A9268D9FDF17658903B7E87CC62DD812C(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		// if (teleportModeActivateAction != null)
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_11 = V_0;
		V_3 = (bool)((!(((RuntimeObject*)(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		// teleportModeActivateAction.performed -= OnStartTeleport;
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_13 = V_0;
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_14 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_14, __this, (intptr_t)((intptr_t)ActionBasedControllerManager_OnStartTeleport_mF1134B8F8B1C1F07D92D9AD994C06C8495D6B215_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		NullCheck(L_13);
		InputAction_remove_performed_m141C0FA72906BDF08A33EF3728C0193EFD0AAB06(L_13, L_14, /*hidden argument*/NULL);
		// teleportModeActivateAction.canceled -= OnCancelTeleport;
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_15 = V_0;
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_16 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_16, __this, (intptr_t)((intptr_t)ActionBasedControllerManager_OnCancelTeleport_m9AB7C027FA810AB29241AE6B45FB0BE37672BB0A_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		NullCheck(L_15);
		InputAction_remove_canceled_m69E70B6BAFF763F524D38F2D0346911A80C5B7C5(L_15, L_16, /*hidden argument*/NULL);
	}

IL_0089:
	{
		// var teleportModeCancelAction = GetInputAction(m_TeleportModeCancel);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_17 = __this->get_m_TeleportModeCancel_10();
		IL2CPP_RUNTIME_CLASS_INIT(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_18;
		L_18 = ActionBasedControllerManager_GetInputAction_m4FAD588A9268D9FDF17658903B7E87CC62DD812C(L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		// if (teleportModeCancelAction != null)
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_19 = V_1;
		V_4 = (bool)((!(((RuntimeObject*)(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B *)L_19) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_00b4;
		}
	}
	{
		// teleportModeCancelAction.performed -= OnCancelTeleport;
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_21 = V_1;
		Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 * L_22 = (Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81 *)il2cpp_codegen_object_new(Action_1_tF027A14E846C2C7B23079AF50A99AF77371FFC81_il2cpp_TypeInfo_var);
		Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D(L_22, __this, (intptr_t)((intptr_t)ActionBasedControllerManager_OnCancelTeleport_m9AB7C027FA810AB29241AE6B45FB0BE37672BB0A_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m04144F3B7A32C0FF2AEDAEB50A76180CE70EB27D_RuntimeMethod_var);
		NullCheck(L_21);
		InputAction_remove_performed_m141C0FA72906BDF08A33EF3728C0193EFD0AAB06(L_21, L_22, /*hidden argument*/NULL);
	}

IL_00b4:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::OnStartTeleport(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnStartTeleport_mF1134B8F8B1C1F07D92D9AD994C06C8495D6B215 (ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * __this, CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D  ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// m_Teleporting = true;
		__this->set_m_Teleporting_16((bool)1);
		// if (m_TeleportInteractor != null)
		XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A * L_0 = __this->get_m_TeleportInteractor_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// m_TeleportInteractor.gameObject.SetActive(true);
		XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A * L_3 = __this->get_m_TeleportInteractor_8();
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// RayInteractorUpdate();
		ActionBasedControllerManager_RayInteractorUpdate_mDE49B1CE6A93EE8B2237DAB76FEE14CCDE5C195E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::OnCancelTeleport(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnCancelTeleport_m9AB7C027FA810AB29241AE6B45FB0BE37672BB0A (ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * __this, CallbackContext_t073FE0294FFA91086DA1D1A0C2F33A7F8F9F025D  ___context0, const RuntimeMethod* method)
{
	{
		// m_Teleporting = false;
		__this->set_m_Teleporting_16((bool)0);
		// RayInteractorUpdate();
		ActionBasedControllerManager_RayInteractorUpdate_mDE49B1CE6A93EE8B2237DAB76FEE14CCDE5C195E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::RayInteractorUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_RayInteractorUpdate_mDE49B1CE6A93EE8B2237DAB76FEE14CCDE5C195E (ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_RayInteractor != null)
		XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A * L_0 = __this->get_m_RayInteractor_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// m_RayInteractor.gameObject.SetActive(!m_Teleporting);
		XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A * L_3 = __this->get_m_RayInteractor_7();
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		bool L_5 = __this->get_m_Teleporting_16();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::OnRaySelectEntered(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnRaySelectEntered_m67E441C036776297554DCF1B31212A7A1EDC8EF3 (ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * __this, SelectEnterEventArgs_tEB89AEF4AAB84886C278347B17FCA2C4C3C956DE * ___args0, const RuntimeMethod* method)
{
	{
		// DisableLocomotionActions();
		ActionBasedControllerManager_DisableLocomotionActions_m7B0A9D2C2B479FAE07CB8A0F08CEF38F3CCE9B86(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::OnRaySelectExited(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnRaySelectExited_m89533D6795CCF346FDEFBEE08949011C930D09A7 (ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * __this, SelectExitEventArgs_t5BD68DE25AAF50453DF01C76A1A637D3187F264E * ___args0, const RuntimeMethod* method)
{
	{
		// UpdateLocomotionActions();
		ActionBasedControllerManager_UpdateLocomotionActions_m5225BD850811B9A75EE80F2D1BA3E2C1255C6FCA(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_Awake_mC70562CBE09E147EA60D53E9819219E208FCD73B (ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(OnAfterInteractionEvents());
		RuntimeObject* L_0;
		L_0 = ActionBasedControllerManager_OnAfterInteractionEvents_m341C204BE246555170020F689877C5C0C89A6369(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnEnable_mEE3D19B7D0440A5E4A194FD48AAA963F8A463EE2 (ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_TeleportInteractor != null)
		XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A * L_0 = __this->get_m_TeleportInteractor_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// m_TeleportInteractor.gameObject.SetActive(false);
		XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A * L_3 = __this->get_m_TeleportInteractor_8();
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// SetupInteractorEvents();
		ActionBasedControllerManager_SetupInteractorEvents_m8B70630630373D4E9A4E9612B869176547BD2853(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnDisable_m001D6F4FD22DB7F115829C25D1EAFCE71AE51E25 (ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * __this, const RuntimeMethod* method)
{
	{
		// TeardownInteractorEvents();
		ActionBasedControllerManager_TeardownInteractorEvents_m34E8544A4AE8A0331A0A22C102A917DD6D676258(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_Start_m711290499089C44DA8770631E5BECFBF0F06B951 (ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0EB8130F8F618CD66D8635BF535EC28E90DD1675_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m60F63519705ABA5BD6C0197C020C0AFBFD655EE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1109D191766120E6AE6C1E227D686E0DF3130138);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	{
		// UpdateLocomotionActions();
		ActionBasedControllerManager_UpdateLocomotionActions_m5225BD850811B9A75EE80F2D1BA3E2C1255C6FCA(__this, /*hidden argument*/NULL);
		// if (m_ManipulationInteractionGroup == null)
		XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC * L_0 = __this->get_m_ManipulationInteractionGroup_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// Debug.LogError("Missing required Manipulation Interaction Group reference. Use the Inspector window to assign the XR Interaction Group component reference.", this);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8F0BF6D19FDEAA41F027A734D6EE2CA2E4BCA1B3(_stringLiteral1109D191766120E6AE6C1E227D686E0DF3130138, __this, /*hidden argument*/NULL);
		// return;
		goto IL_0127;
	}

IL_002a:
	{
		// var directInteractorIndex = -1;
		V_0 = (-1);
		// var rayInteractorIndex = -1;
		V_1 = (-1);
		// m_ManipulationInteractionGroup.GetGroupMembers(s_GroupMembers);
		XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC * L_3 = __this->get_m_ManipulationInteractionGroup_5();
		IL2CPP_RUNTIME_CLASS_INIT(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var);
		List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA * L_4 = ((ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_StaticFields*)il2cpp_codegen_static_fields_for(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var))->get_s_GroupMembers_17();
		NullCheck(L_3);
		XRInteractionGroup_GetGroupMembers_mC491BA9577F8E1322502D8FD4932A12725FD0712(L_3, L_4, /*hidden argument*/NULL);
		// for (var i = 0; i < s_GroupMembers.Count; ++i)
		V_3 = 0;
		goto IL_007c;
	}

IL_0043:
	{
		// var groupMember = s_GroupMembers[i];
		IL2CPP_RUNTIME_CLASS_INIT(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var);
		List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA * L_5 = ((ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_StaticFields*)il2cpp_codegen_static_fields_for(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var))->get_s_GroupMembers_17();
		int32_t L_6 = V_3;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = List_1_get_Item_m60F63519705ABA5BD6C0197C020C0AFBFD655EE3_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m60F63519705ABA5BD6C0197C020C0AFBFD655EE3_RuntimeMethod_var);
		V_4 = L_7;
		// if (ReferenceEquals(groupMember, m_DirectInteractor))
		RuntimeObject* L_8 = V_4;
		XRDirectInteractor_t2F00E9B79629EFA648D4DF02F8FF034DD99812D5 * L_9 = __this->get_m_DirectInteractor_6();
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(XRDirectInteractor_t2F00E9B79629EFA648D4DF02F8FF034DD99812D5 *)L_9))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		// directInteractorIndex = i;
		int32_t L_11 = V_3;
		V_0 = L_11;
		goto IL_0077;
	}

IL_0065:
	{
		// else if (ReferenceEquals(groupMember, m_RayInteractor))
		RuntimeObject* L_12 = V_4;
		XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A * L_13 = __this->get_m_RayInteractor_7();
		V_6 = (bool)((((RuntimeObject*)(RuntimeObject*)L_12) == ((RuntimeObject*)(XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A *)L_13))? 1 : 0);
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		// rayInteractorIndex = i;
		int32_t L_15 = V_3;
		V_1 = L_15;
	}

IL_0077:
	{
		// for (var i = 0; i < s_GroupMembers.Count; ++i)
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_007c:
	{
		// for (var i = 0; i < s_GroupMembers.Count; ++i)
		int32_t L_17 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var);
		List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA * L_18 = ((ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_StaticFields*)il2cpp_codegen_static_fields_for(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var))->get_s_GroupMembers_17();
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_m0EB8130F8F618CD66D8635BF535EC28E90DD1675_inline(L_18, /*hidden argument*/List_1_get_Count_m0EB8130F8F618CD66D8635BF535EC28E90DD1675_RuntimeMethod_var);
		V_7 = (bool)((((int32_t)L_17) < ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_7;
		if (L_20)
		{
			goto IL_0043;
		}
	}
	{
		// if (directInteractorIndex < 0)
		int32_t L_21 = V_0;
		V_8 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_00e4;
		}
	}
	{
		// if (rayInteractorIndex < 0)
		int32_t L_23 = V_1;
		V_9 = (bool)((((int32_t)L_23) < ((int32_t)0))? 1 : 0);
		bool L_24 = V_9;
		if (!L_24)
		{
			goto IL_00cc;
		}
	}
	{
		// m_ManipulationInteractionGroup.AddGroupMember(m_DirectInteractor);
		XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC * L_25 = __this->get_m_ManipulationInteractionGroup_5();
		XRDirectInteractor_t2F00E9B79629EFA648D4DF02F8FF034DD99812D5 * L_26 = __this->get_m_DirectInteractor_6();
		NullCheck(L_25);
		XRInteractionGroup_AddGroupMember_m070F81BB848732A3E340C94529DFCAA41B016925(L_25, L_26, /*hidden argument*/NULL);
		// m_ManipulationInteractionGroup.AddGroupMember(m_RayInteractor);
		XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC * L_27 = __this->get_m_ManipulationInteractionGroup_5();
		XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A * L_28 = __this->get_m_RayInteractor_7();
		NullCheck(L_27);
		XRInteractionGroup_AddGroupMember_m070F81BB848732A3E340C94529DFCAA41B016925(L_27, L_28, /*hidden argument*/NULL);
		goto IL_00e1;
	}

IL_00cc:
	{
		// m_ManipulationInteractionGroup.MoveGroupMemberTo(m_DirectInteractor, rayInteractorIndex);
		XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC * L_29 = __this->get_m_ManipulationInteractionGroup_5();
		XRDirectInteractor_t2F00E9B79629EFA648D4DF02F8FF034DD99812D5 * L_30 = __this->get_m_DirectInteractor_6();
		int32_t L_31 = V_1;
		NullCheck(L_29);
		XRInteractionGroup_MoveGroupMemberTo_mBD1CA8030769F379FC19C78D224AC0C0C2EE5A23(L_29, L_30, L_31, /*hidden argument*/NULL);
	}

IL_00e1:
	{
		goto IL_0127;
	}

IL_00e4:
	{
		// if (rayInteractorIndex < 0)
		int32_t L_32 = V_1;
		V_10 = (bool)((((int32_t)L_32) < ((int32_t)0))? 1 : 0);
		bool L_33 = V_10;
		if (!L_33)
		{
			goto IL_0105;
		}
	}
	{
		// m_ManipulationInteractionGroup.AddGroupMember(m_RayInteractor);
		XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC * L_34 = __this->get_m_ManipulationInteractionGroup_5();
		XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A * L_35 = __this->get_m_RayInteractor_7();
		NullCheck(L_34);
		XRInteractionGroup_AddGroupMember_m070F81BB848732A3E340C94529DFCAA41B016925(L_34, L_35, /*hidden argument*/NULL);
		goto IL_0126;
	}

IL_0105:
	{
		// if (rayInteractorIndex < directInteractorIndex)
		int32_t L_36 = V_1;
		int32_t L_37 = V_0;
		V_11 = (bool)((((int32_t)L_36) < ((int32_t)L_37))? 1 : 0);
		bool L_38 = V_11;
		if (!L_38)
		{
			goto IL_0125;
		}
	}
	{
		// m_ManipulationInteractionGroup.MoveGroupMemberTo(m_DirectInteractor, rayInteractorIndex);
		XRInteractionGroup_t5B9B0DB49D63B23BBC853641C9A8ED93A36719FC * L_39 = __this->get_m_ManipulationInteractionGroup_5();
		XRDirectInteractor_t2F00E9B79629EFA648D4DF02F8FF034DD99812D5 * L_40 = __this->get_m_DirectInteractor_6();
		int32_t L_41 = V_1;
		NullCheck(L_39);
		XRInteractionGroup_MoveGroupMemberTo_mBD1CA8030769F379FC19C78D224AC0C0C2EE5A23(L_39, L_40, L_41, /*hidden argument*/NULL);
	}

IL_0125:
	{
	}

IL_0126:
	{
	}

IL_0127:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::OnAfterInteractionEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActionBasedControllerManager_OnAfterInteractionEvents_m341C204BE246555170020F689877C5C0C89A6369 (ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnAfterInteractionEventsU3Ed__31_tA2C50022A2D30059BB0285E87EE43DECF8920956_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COnAfterInteractionEventsU3Ed__31_tA2C50022A2D30059BB0285E87EE43DECF8920956 * L_0 = (U3COnAfterInteractionEventsU3Ed__31_tA2C50022A2D30059BB0285E87EE43DECF8920956 *)il2cpp_codegen_object_new(U3COnAfterInteractionEventsU3Ed__31_tA2C50022A2D30059BB0285E87EE43DECF8920956_il2cpp_TypeInfo_var);
		U3COnAfterInteractionEventsU3Ed__31__ctor_m601BAF99E1B6B511FDE379A1905DF3D6AB047D83(L_0, 0, /*hidden argument*/NULL);
		U3COnAfterInteractionEventsU3Ed__31_tA2C50022A2D30059BB0285E87EE43DECF8920956 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::UpdateLocomotionActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_UpdateLocomotionActions_m5225BD850811B9A75EE80F2D1BA3E2C1255C6FCA (ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * G_B2_0 = NULL;
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * G_B3_1 = NULL;
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * G_B5_0 = NULL;
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * G_B6_1 = NULL;
	{
		// SetEnabled(m_Move, m_SmoothMotionEnabled);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = __this->get_m_Move_13();
		bool L_1 = __this->get_m_SmoothMotionEnabled_14();
		IL2CPP_RUNTIME_CLASS_INIT(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var);
		ActionBasedControllerManager_SetEnabled_m53304D4FA8BC86A9561A5071D5433EFD3C157101(L_0, L_1, /*hidden argument*/NULL);
		// SetEnabled(m_TeleportModeActivate, !m_SmoothMotionEnabled);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_2 = __this->get_m_TeleportModeActivate_9();
		bool L_3 = __this->get_m_SmoothMotionEnabled_14();
		ActionBasedControllerManager_SetEnabled_m53304D4FA8BC86A9561A5071D5433EFD3C157101(L_2, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// SetEnabled(m_TeleportModeCancel, !m_SmoothMotionEnabled);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_4 = __this->get_m_TeleportModeCancel_10();
		bool L_5 = __this->get_m_SmoothMotionEnabled_14();
		ActionBasedControllerManager_SetEnabled_m53304D4FA8BC86A9561A5071D5433EFD3C157101(L_4, (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// SetEnabled(m_Turn, !m_SmoothMotionEnabled && m_SmoothTurnEnabled);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_6 = __this->get_m_Turn_11();
		bool L_7 = __this->get_m_SmoothMotionEnabled_14();
		G_B1_0 = L_6;
		if (L_7)
		{
			G_B2_0 = L_6;
			goto IL_0053;
		}
	}
	{
		bool L_8 = __this->get_m_SmoothTurnEnabled_15();
		G_B3_0 = ((int32_t)(L_8));
		G_B3_1 = G_B1_0;
		goto IL_0054;
	}

IL_0053:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0054:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var);
		ActionBasedControllerManager_SetEnabled_m53304D4FA8BC86A9561A5071D5433EFD3C157101(G_B3_1, (bool)G_B3_0, /*hidden argument*/NULL);
		// SetEnabled(m_SnapTurn, !m_SmoothMotionEnabled && !m_SmoothTurnEnabled);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_9 = __this->get_m_SnapTurn_12();
		bool L_10 = __this->get_m_SmoothMotionEnabled_14();
		G_B4_0 = L_9;
		if (L_10)
		{
			G_B5_0 = L_9;
			goto IL_0073;
		}
	}
	{
		bool L_11 = __this->get_m_SmoothTurnEnabled_15();
		G_B6_0 = ((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_0074;
	}

IL_0073:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0074:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var);
		ActionBasedControllerManager_SetEnabled_m53304D4FA8BC86A9561A5071D5433EFD3C157101(G_B6_1, (bool)G_B6_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::DisableLocomotionActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_DisableLocomotionActions_m7B0A9D2C2B479FAE07CB8A0F08CEF38F3CCE9B86 (ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DisableAction(m_Move);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = __this->get_m_Move_13();
		IL2CPP_RUNTIME_CLASS_INIT(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var);
		ActionBasedControllerManager_DisableAction_m2036C3B4B949793C92BF82D4138B9AEDFA88C8C9(L_0, /*hidden argument*/NULL);
		// DisableAction(m_TeleportModeActivate);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_1 = __this->get_m_TeleportModeActivate_9();
		ActionBasedControllerManager_DisableAction_m2036C3B4B949793C92BF82D4138B9AEDFA88C8C9(L_1, /*hidden argument*/NULL);
		// DisableAction(m_TeleportModeCancel);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_2 = __this->get_m_TeleportModeCancel_10();
		ActionBasedControllerManager_DisableAction_m2036C3B4B949793C92BF82D4138B9AEDFA88C8C9(L_2, /*hidden argument*/NULL);
		// DisableAction(m_Turn);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_3 = __this->get_m_Turn_11();
		ActionBasedControllerManager_DisableAction_m2036C3B4B949793C92BF82D4138B9AEDFA88C8C9(L_3, /*hidden argument*/NULL);
		// DisableAction(m_SnapTurn);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_4 = __this->get_m_SnapTurn_12();
		ActionBasedControllerManager_DisableAction_m2036C3B4B949793C92BF82D4138B9AEDFA88C8C9(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::SetEnabled(UnityEngine.InputSystem.InputActionReference,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_SetEnabled_m53304D4FA8BC86A9561A5071D5433EFD3C157101 (InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___actionReference0, bool ___enabled1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (enabled)
		bool L_0 = ___enabled1;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// EnableAction(actionReference);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_2 = ___actionReference0;
		IL2CPP_RUNTIME_CLASS_INIT(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var);
		ActionBasedControllerManager_EnableAction_m12645D06ABA32F88B1DDE6692FE16CEC6FEFB001(L_2, /*hidden argument*/NULL);
		goto IL_0016;
	}

IL_000f:
	{
		// DisableAction(actionReference);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_3 = ___actionReference0;
		IL2CPP_RUNTIME_CLASS_INIT(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var);
		ActionBasedControllerManager_DisableAction_m2036C3B4B949793C92BF82D4138B9AEDFA88C8C9(L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::EnableAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_EnableAction_m12645D06ABA32F88B1DDE6692FE16CEC6FEFB001 (InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___actionReference0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// var action = GetInputAction(actionReference);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = ___actionReference0;
		IL2CPP_RUNTIME_CLASS_INIT(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_1;
		L_1 = ActionBasedControllerManager_GetInputAction_m4FAD588A9268D9FDF17658903B7E87CC62DD812C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (action != null && !action.enabled)
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = InputAction_get_enabled_m12F68C1B6DFFDD654EC9657E6FA4B86E607A4812(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		// action.Enable();
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_6 = V_0;
		NullCheck(L_6);
		InputAction_Enable_mF937726A4E92A3B9300B7E6D0F9A1B56ACFEA573(L_6, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::DisableAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_DisableAction_m2036C3B4B949793C92BF82D4138B9AEDFA88C8C9 (InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___actionReference0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// var action = GetInputAction(actionReference);
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = ___actionReference0;
		IL2CPP_RUNTIME_CLASS_INIT(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_1;
		L_1 = ActionBasedControllerManager_GetInputAction_m4FAD588A9268D9FDF17658903B7E87CC62DD812C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (action != null && action.enabled)
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = InputAction_get_enabled_m12F68C1B6DFFDD654EC9657E6FA4B86E607A4812(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		// action.Disable();
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_6 = V_0;
		NullCheck(L_6);
		InputAction_Disable_m8AF74C528E03865CDE66A6885C323538FDEAD2C3(L_6, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// UnityEngine.InputSystem.InputAction UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::GetInputAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * ActionBasedControllerManager_GetInputAction_m4FAD588A9268D9FDF17658903B7E87CC62DD812C (InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * ___actionReference0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * V_0 = NULL;
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * G_B3_0 = NULL;
	{
		// return actionReference != null ? actionReference.action : null;
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_0 = ___actionReference0;
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
		InputActionReference_tB1990B9720ED573119B97030753D21C84A6D7621 * L_2 = ___actionReference0;
		NullCheck(L_2);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_3;
		L_3 = InputActionReference_get_action_m8A9C3BDF9E0FC278DC682108E3E97E00F5DAC2A9(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager__ctor_m12779337E6B9105096DB2F2D7F1AD1848FA3237B (ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager__cctor_mBF728A27BC85D65EFF67370236C42BA15708620B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2AFFB86C7A3ED83885BD69DD46534436966EBB48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly List<IXRGroupMember> s_GroupMembers = new List<IXRGroupMember>();
		List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA * L_0 = (List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA *)il2cpp_codegen_object_new(List_1_tA46ABABCEBDD7C0CB16B40C7319B50D182194AEA_il2cpp_TypeInfo_var);
		List_1__ctor_m2AFFB86C7A3ED83885BD69DD46534436966EBB48(L_0, /*hidden argument*/List_1__ctor_m2AFFB86C7A3ED83885BD69DD46534436966EBB48_RuntimeMethod_var);
		((ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_StaticFields*)il2cpp_codegen_static_fields_for(ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392_il2cpp_TypeInfo_var))->set_s_GroupMembers_17(L_0);
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
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::get_headTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * DynamicMoveProvider_get_headTransform_m1BE788B87FC153AC6A9F2F2DFA6E53D76FF3D714 (DynamicMoveProvider_t8B602D8A503C9409E356CFD397192F178225DC72 * __this, const RuntimeMethod* method)
{
	{
		// get => m_HeadTransform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_m_HeadTransform_21();
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::set_headTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider_set_headTransform_m3B119E4F4C758BAF1ED02202692306B5CB037C11 (DynamicMoveProvider_t8B602D8A503C9409E356CFD397192F178225DC72 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	{
		// set => m_HeadTransform = value;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_m_HeadTransform_21(L_0);
		return;
	}
}
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::get_leftControllerTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * DynamicMoveProvider_get_leftControllerTransform_mB0EB8B11217D3FB40E93F28350392B3487325F03 (DynamicMoveProvider_t8B602D8A503C9409E356CFD397192F178225DC72 * __this, const RuntimeMethod* method)
{
	{
		// get => m_LeftControllerTransform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_m_LeftControllerTransform_22();
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::set_leftControllerTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider_set_leftControllerTransform_mED2E8A7090892289404357063F99739E4E03DA2B (DynamicMoveProvider_t8B602D8A503C9409E356CFD397192F178225DC72 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	{
		// set => m_LeftControllerTransform = value;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_m_LeftControllerTransform_22(L_0);
		return;
	}
}
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::get_rightControllerTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * DynamicMoveProvider_get_rightControllerTransform_m777A94D75EFF8DB8873E6CF775317077718D56D8 (DynamicMoveProvider_t8B602D8A503C9409E356CFD397192F178225DC72 * __this, const RuntimeMethod* method)
{
	{
		// get => m_RightControllerTransform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_m_RightControllerTransform_23();
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::set_rightControllerTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider_set_rightControllerTransform_mBA70900575D5AD08F496337F2A23D6E1ED6B3483 (DynamicMoveProvider_t8B602D8A503C9409E356CFD397192F178225DC72 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	{
		// set => m_RightControllerTransform = value;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_m_RightControllerTransform_23(L_0);
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::get_leftHandMovementDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicMoveProvider_get_leftHandMovementDirection_m884EB771E833963DB4F708C546768BEFAB57045D (DynamicMoveProvider_t8B602D8A503C9409E356CFD397192F178225DC72 * __this, const RuntimeMethod* method)
{
	{
		// get => m_LeftHandMovementDirection;
		int32_t L_0 = __this->get_m_LeftHandMovementDirection_24();
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::set_leftHandMovementDirection(UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider_set_leftHandMovementDirection_m2971F50C334616D25ADF9B93AAF966463D875476 (DynamicMoveProvider_t8B602D8A503C9409E356CFD397192F178225DC72 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => m_LeftHandMovementDirection = value;
		int32_t L_0 = ___value0;
		__this->set_m_LeftHandMovementDirection_24(L_0);
		return;
	}
}
// UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::get_rightHandMovementDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicMoveProvider_get_rightHandMovementDirection_m61F470D45EE5A8183BAFF3A90E2B51C74D4BD874 (DynamicMoveProvider_t8B602D8A503C9409E356CFD397192F178225DC72 * __this, const RuntimeMethod* method)
{
	{
		// get => m_RightHandMovementDirection;
		int32_t L_0 = __this->get_m_RightHandMovementDirection_25();
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::set_rightHandMovementDirection(UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider/MovementDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider_set_rightHandMovementDirection_mFE6B926CA98F32BE722CE02FA8433D798B3B2952 (DynamicMoveProvider_t8B602D8A503C9409E356CFD397192F178225DC72 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => m_RightHandMovementDirection = value;
		int32_t L_0 = ___value0;
		__this->set_m_RightHandMovementDirection_25(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider_Awake_m690247DF2E97A598687A1A438D4FD26B577BFF67 (DynamicMoveProvider_t8B602D8A503C9409E356CFD397192F178225DC72 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral011D3DCC095E581ECDB235DA85D0318CB7DAE281);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		LocomotionProvider_Awake_m8C8152BA75A1C6E84378FDA7EFD28B527A81F0A5(__this, /*hidden argument*/NULL);
		// m_CombinedTransform = new GameObject("[Dynamic Move Provider] Combined Forward Source").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_0, _stringLiteral011D3DCC095E581ECDB235DA85D0318CB7DAE281, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		__this->set_m_CombinedTransform_26(L_1);
		// m_CombinedTransform.SetParent(transform, false);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_m_CombinedTransform_26();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_2, L_3, (bool)0, /*hidden argument*/NULL);
		// m_CombinedTransform.localPosition = Vector3.zero;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_m_CombinedTransform_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_4, L_5, /*hidden argument*/NULL);
		// m_CombinedTransform.localRotation = Quaternion.identity;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_m_CombinedTransform_26();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Quaternion_get_identity_mB872ACF032ACC4D32EE3472D98A9694205AE2C8D(/*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_6, L_7, /*hidden argument*/NULL);
		// forwardSource = m_CombinedTransform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_m_CombinedTransform_26();
		ContinuousMoveProviderBase_set_forwardSource_mFC654F04903F2517D5AF32028B2216DEFF341BEB_inline(__this, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::ComputeDesiredMove(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  DynamicMoveProvider_ComputeDesiredMove_m52145D0B7D3869D766293EEB19A6162E7E5F8B10 (DynamicMoveProvider_t8B602D8A503C9409E356CFD397192F178225DC72 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m55B41842E98953761E95E07523F94EA16C7834D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MovementDirection_tED2EC5790F5B09C089825B7F7E1B0A0A5CEB17B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3FB88DDD46531AE82CBA3C68DE5F2B43578B1DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD689EACA9A810383FB2DD66A0BB9FAE341BDC5F6);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * V_9 = NULL;
	bool V_10 = false;
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * V_11 = NULL;
	bool V_12 = false;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	bool V_15 = false;
	bool V_16 = false;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	bool V_19 = false;
	bool V_20 = false;
	InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443  V_21;
	memset((&V_21), 0, sizeof(V_21));
	bool V_22 = false;
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * G_B32_0 = NULL;
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * G_B31_0 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  G_B33_0;
	memset((&G_B33_0), 0, sizeof(G_B33_0));
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * G_B35_0 = NULL;
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * G_B34_0 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  G_B36_0;
	memset((&G_B36_0), 0, sizeof(G_B36_0));
	{
		// if (input == Vector2.zero)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___input0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_get_zero_mD28A0EC932762710AFA0BBB9CCC63716C3BD064D(/*hidden argument*/NULL);
		bool L_2;
		L_2 = Vector2_op_Equality_m3548B3539928E88F2CE523A070D30609C8FEC225_inline(L_0, L_1, /*hidden argument*/NULL);
		V_6 = L_2;
		bool L_3 = V_6;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
		V_7 = L_4;
		goto IL_0244;
	}

IL_001e:
	{
		// if (m_HeadTransform == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_m_HeadTransform_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_8 = L_6;
		bool L_7 = V_8;
		if (!L_7)
		{
			goto IL_0073;
		}
	}
	{
		// var xrOrigin = system.xrOrigin;
		LocomotionSystem_tEF4F8D19A639BFEBBD4C52AE52AB74D337BB4C5D * L_8;
		L_8 = LocomotionProvider_get_system_m03FA085476B700DA9942A3B6DF3B8D3C2D7D36F1_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * L_9;
		L_9 = LocomotionSystem_get_xrOrigin_m2B3172A766D97744D3D575CC9174EE5C37E80D1B_inline(L_8, /*hidden argument*/NULL);
		V_9 = L_9;
		// if (xrOrigin != null)
		XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * L_10 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_10 = L_11;
		bool L_12 = V_10;
		if (!L_12)
		{
			goto IL_0072;
		}
	}
	{
		// var xrCamera = xrOrigin.Camera;
		XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * L_13 = V_9;
		NullCheck(L_13);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_14;
		L_14 = XROrigin_get_Camera_mDEC1EA5E15968845DA812397BBA4506A88B0F9FF_inline(L_13, /*hidden argument*/NULL);
		V_11 = L_14;
		// if (xrCamera != null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_12 = L_16;
		bool L_17 = V_12;
		if (!L_17)
		{
			goto IL_0071;
		}
	}
	{
		// m_HeadTransform = xrCamera.transform;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_18 = V_11;
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		__this->set_m_HeadTransform_21(L_19);
	}

IL_0071:
	{
	}

IL_0072:
	{
	}

IL_0073:
	{
		// switch (m_LeftHandMovementDirection)
		int32_t L_20 = __this->get_m_LeftHandMovementDirection_24();
		V_14 = L_20;
		int32_t L_21 = V_14;
		V_13 = L_21;
		int32_t L_22 = V_13;
		if (!L_22)
		{
			goto IL_008c;
		}
	}
	{
		goto IL_0085;
	}

IL_0085:
	{
		int32_t L_23 = V_13;
		if ((((int32_t)L_23) == ((int32_t)1)))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_00d6;
	}

IL_008c:
	{
		// if (m_HeadTransform != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24 = __this->get_m_HeadTransform_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_15 = L_25;
		bool L_26 = V_15;
		if (!L_26)
		{
			goto IL_00af;
		}
	}
	{
		// m_LeftMovementPose = m_HeadTransform.GetWorldPose();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = __this->get_m_HeadTransform_21();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_28;
		L_28 = TransformExtensions_GetWorldPose_m6FE72295A60A6AC84B1831D49EB5926817B3682F(L_27, /*hidden argument*/NULL);
		__this->set_m_LeftMovementPose_27(L_28);
	}

IL_00af:
	{
		// break;
		goto IL_00f9;
	}

IL_00b1:
	{
		// if (m_LeftControllerTransform != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = __this->get_m_LeftControllerTransform_22();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_29, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_16 = L_30;
		bool L_31 = V_16;
		if (!L_31)
		{
			goto IL_00d4;
		}
	}
	{
		// m_LeftMovementPose = m_LeftControllerTransform.GetWorldPose();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32 = __this->get_m_LeftControllerTransform_22();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_33;
		L_33 = TransformExtensions_GetWorldPose_m6FE72295A60A6AC84B1831D49EB5926817B3682F(L_32, /*hidden argument*/NULL);
		__this->set_m_LeftMovementPose_27(L_33);
	}

IL_00d4:
	{
		// break;
		goto IL_00f9;
	}

IL_00d6:
	{
		// Assert.IsTrue(false, $"Unhandled {nameof(MovementDirection)}={m_LeftHandMovementDirection}");
		int32_t L_34 = __this->get_m_LeftHandMovementDirection_24();
		int32_t L_35 = L_34;
		RuntimeObject * L_36 = Box(MovementDirection_tED2EC5790F5B09C089825B7F7E1B0A0A5CEB17B6_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37;
		L_37 = String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2(_stringLiteralD689EACA9A810383FB2DD66A0BB9FAE341BDC5F6, _stringLiteralA3FB88DDD46531AE82CBA3C68DE5F2B43578B1DA, L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		Assert_IsTrue_m813519A98594F349DE019223ED871AE1B61615D7((bool)0, L_37, /*hidden argument*/NULL);
		// break;
		goto IL_00f9;
	}

IL_00f9:
	{
		// switch (m_RightHandMovementDirection)
		int32_t L_38 = __this->get_m_RightHandMovementDirection_25();
		V_18 = L_38;
		int32_t L_39 = V_18;
		V_17 = L_39;
		int32_t L_40 = V_17;
		if (!L_40)
		{
			goto IL_0112;
		}
	}
	{
		goto IL_010b;
	}

IL_010b:
	{
		int32_t L_41 = V_17;
		if ((((int32_t)L_41) == ((int32_t)1)))
		{
			goto IL_0137;
		}
	}
	{
		goto IL_015c;
	}

IL_0112:
	{
		// if (m_HeadTransform != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42 = __this->get_m_HeadTransform_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_42, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_19 = L_43;
		bool L_44 = V_19;
		if (!L_44)
		{
			goto IL_0135;
		}
	}
	{
		// m_RightMovementPose = m_HeadTransform.GetWorldPose();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45 = __this->get_m_HeadTransform_21();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_46;
		L_46 = TransformExtensions_GetWorldPose_m6FE72295A60A6AC84B1831D49EB5926817B3682F(L_45, /*hidden argument*/NULL);
		__this->set_m_RightMovementPose_28(L_46);
	}

IL_0135:
	{
		// break;
		goto IL_017f;
	}

IL_0137:
	{
		// if (m_RightControllerTransform != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47 = __this->get_m_RightControllerTransform_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_47, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_20 = L_48;
		bool L_49 = V_20;
		if (!L_49)
		{
			goto IL_015a;
		}
	}
	{
		// m_RightMovementPose = m_RightControllerTransform.GetWorldPose();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50 = __this->get_m_RightControllerTransform_23();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_51;
		L_51 = TransformExtensions_GetWorldPose_m6FE72295A60A6AC84B1831D49EB5926817B3682F(L_50, /*hidden argument*/NULL);
		__this->set_m_RightMovementPose_28(L_51);
	}

IL_015a:
	{
		// break;
		goto IL_017f;
	}

IL_015c:
	{
		// Assert.IsTrue(false, $"Unhandled {nameof(MovementDirection)}={m_RightHandMovementDirection}");
		int32_t L_52 = __this->get_m_RightHandMovementDirection_25();
		int32_t L_53 = L_52;
		RuntimeObject * L_54 = Box(MovementDirection_tED2EC5790F5B09C089825B7F7E1B0A0A5CEB17B6_il2cpp_TypeInfo_var, &L_53);
		String_t* L_55;
		L_55 = String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2(_stringLiteralD689EACA9A810383FB2DD66A0BB9FAE341BDC5F6, _stringLiteralA3FB88DDD46531AE82CBA3C68DE5F2B43578B1DA, L_54, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		Assert_IsTrue_m813519A98594F349DE019223ED871AE1B61615D7((bool)0, L_55, /*hidden argument*/NULL);
		// break;
		goto IL_017f;
	}

IL_017f:
	{
		// var leftHandValue = leftHandMoveAction.action?.ReadValue<Vector2>() ?? Vector2.zero;
		InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443  L_56;
		L_56 = ActionBasedContinuousMoveProvider_get_leftHandMoveAction_m1C39E15479E4A961A8ED123466C6D1FF4A166B81_inline(__this, /*hidden argument*/NULL);
		V_21 = L_56;
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_57;
		L_57 = InputActionProperty_get_action_m4F5C6388D4710CC2CDD4F01672A2C547AC329908((InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443 *)(&V_21), /*hidden argument*/NULL);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_58 = L_57;
		G_B31_0 = L_58;
		if (L_58)
		{
			G_B32_0 = L_58;
			goto IL_0199;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_59;
		L_59 = Vector2_get_zero_mD28A0EC932762710AFA0BBB9CCC63716C3BD064D(/*hidden argument*/NULL);
		G_B33_0 = L_59;
		goto IL_019e;
	}

IL_0199:
	{
		NullCheck(G_B32_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_60;
		L_60 = InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m55B41842E98953761E95E07523F94EA16C7834D1(G_B32_0, /*hidden argument*/InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m55B41842E98953761E95E07523F94EA16C7834D1_RuntimeMethod_var);
		G_B33_0 = L_60;
	}

IL_019e:
	{
		V_0 = G_B33_0;
		// var rightHandValue = rightHandMoveAction.action?.ReadValue<Vector2>() ?? Vector2.zero;
		InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443  L_61;
		L_61 = ActionBasedContinuousMoveProvider_get_rightHandMoveAction_m786CBFBF3C9C3E0630EC04FD5FD1A35C5F17D712_inline(__this, /*hidden argument*/NULL);
		V_21 = L_61;
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_62;
		L_62 = InputActionProperty_get_action_m4F5C6388D4710CC2CDD4F01672A2C547AC329908((InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443 *)(&V_21), /*hidden argument*/NULL);
		InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * L_63 = L_62;
		G_B34_0 = L_63;
		if (L_63)
		{
			G_B35_0 = L_63;
			goto IL_01b9;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_64;
		L_64 = Vector2_get_zero_mD28A0EC932762710AFA0BBB9CCC63716C3BD064D(/*hidden argument*/NULL);
		G_B36_0 = L_64;
		goto IL_01be;
	}

IL_01b9:
	{
		NullCheck(G_B35_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_65;
		L_65 = InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m55B41842E98953761E95E07523F94EA16C7834D1(G_B35_0, /*hidden argument*/InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m55B41842E98953761E95E07523F94EA16C7834D1_RuntimeMethod_var);
		G_B36_0 = L_65;
	}

IL_01be:
	{
		V_1 = G_B36_0;
		// var totalSqrMagnitude = leftHandValue.sqrMagnitude + rightHandValue.sqrMagnitude;
		float L_66;
		L_66 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		float L_67;
		L_67 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_add((float)L_66, (float)L_67));
		// var leftHandBlend = 0.5f;
		V_3 = (0.5f);
		// if (totalSqrMagnitude > Mathf.Epsilon)
		float L_68 = V_2;
		float L_69 = ((Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var))->get_Epsilon_0();
		V_22 = (bool)((((float)L_68) > ((float)L_69))? 1 : 0);
		bool L_70 = V_22;
		if (!L_70)
		{
			goto IL_01ed;
		}
	}
	{
		// leftHandBlend = leftHandValue.sqrMagnitude / totalSqrMagnitude;
		float L_71;
		L_71 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		float L_72 = V_2;
		V_3 = ((float)((float)L_71/(float)L_72));
	}

IL_01ed:
	{
		// var combinedPosition = Vector3.Lerp(m_RightMovementPose.position, m_LeftMovementPose.position, leftHandBlend);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_73 = __this->get_address_of_m_RightMovementPose_28();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74 = L_73->get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_75 = __this->get_address_of_m_LeftMovementPose_27();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76 = L_75->get_position_0();
		float L_77 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78;
		L_78 = Vector3_Lerp_m5E223DB365EAC8F6625C169E927527FFB8CC88DB_inline(L_74, L_76, L_77, /*hidden argument*/NULL);
		V_4 = L_78;
		// var combinedRotation = Quaternion.Slerp(m_RightMovementPose.rotation, m_LeftMovementPose.rotation, leftHandBlend);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_79 = __this->get_address_of_m_RightMovementPose_28();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_80 = L_79->get_rotation_1();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_81 = __this->get_address_of_m_LeftMovementPose_27();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_82 = L_81->get_rotation_1();
		float L_83 = V_3;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_84;
		L_84 = Quaternion_Slerp_m248F79C5788A4A059F1394DEC120F23B67EFE541(L_80, L_82, L_83, /*hidden argument*/NULL);
		V_5 = L_84;
		// m_CombinedTransform.SetPositionAndRotation(combinedPosition, combinedRotation);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_85 = __this->get_m_CombinedTransform_26();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_86 = V_4;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_87 = V_5;
		NullCheck(L_85);
		Transform_SetPositionAndRotation_m33418A6BDFB6395B98D0B5733F5E522B7EEDDCDE(L_85, L_86, L_87, /*hidden argument*/NULL);
		// return base.ComputeDesiredMove(input);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_88 = ___input0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89;
		L_89 = ContinuousMoveProviderBase_ComputeDesiredMove_m1ED66E077EE95558BB97BE6FC237EA3B33039747(__this, L_88, /*hidden argument*/NULL);
		V_7 = L_89;
		goto IL_0244;
	}

IL_0244:
	{
		// }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90 = V_7;
		return L_90;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicMoveProvider__ctor_mB081C68BE378B4AF6F67B880278983EED5965680 (DynamicMoveProvider_t8B602D8A503C9409E356CFD397192F178225DC72 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Pose m_LeftMovementPose = Pose.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0;
		L_0 = Pose_get_identity_m48C568C5B6D5507D8D7B6E7C8EE7345A16E3F300(/*hidden argument*/NULL);
		__this->set_m_LeftMovementPose_27(L_0);
		// Pose m_RightMovementPose = Pose.identity;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_1;
		L_1 = Pose_get_identity_m48C568C5B6D5507D8D7B6E7C8EE7345A16E3F300(/*hidden argument*/NULL);
		__this->set_m_RightMovementPose_28(L_1);
		ActionBasedContinuousMoveProvider__ctor_m38CF25142F1C48B3EADD8239E98859588C046D45(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::get_fallbackIfEyeTrackingUnavailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GazeInputManager_get_fallbackIfEyeTrackingUnavailable_m965A679F806217CB78CC24992F12F8831DBA18E3 (GazeInputManager_t066DD55A5B5C68778F240D14E196FEE676998A7A * __this, const RuntimeMethod* method)
{
	{
		// get => m_FallbackIfEyeTrackingUnavailable;
		bool L_0 = __this->get_m_FallbackIfEyeTrackingUnavailable_5();
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::set_fallbackIfEyeTrackingUnavailable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInputManager_set_fallbackIfEyeTrackingUnavailable_m9B377E48E6C5825D73464A9566CF0449BBC87E4F (GazeInputManager_t066DD55A5B5C68778F240D14E196FEE676998A7A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => m_FallbackIfEyeTrackingUnavailable = value;
		bool L_0 = ___value0;
		__this->set_m_FallbackIfEyeTrackingUnavailable_5(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInputManager_Awake_m4CB06A44C024A7751356CFD5A78E824BFCFE7BBD (GazeInputManager_t066DD55A5B5C68778F240D14E196FEE676998A7A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m07FF556D7B40C6C60B7A93C2ADBD5215ED162551_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m11077C7022CE6CBAAAC763380F883C54AA772954_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tA58D913EBCC7FD3E95DEC877EDB4363CD3051DF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2254852747D86D319AB23DAC16B3E59A9726F8F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7B98E1E5167F455581477D2C8285D0447A53FCCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE0FA132D78425C004BD2F06C3F96F23E84D039A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeInputManager_OnDeviceChange_m0A9B99033439B1E79ABB3DD86D7A5BBFCDF8B982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeInputManager_OnDeviceConnected_m9AE8B0F8728D058A01832E1B7A55D440C3105DC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_tB2E105FFA04BBFEF25E381E9FBBE7DA78BB18380_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_GetEnumerator_m4DB2F36A677C515C0826FECFB55A531029BE8EF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08922C02E680D90FAAB0862833A88225C5A1F397);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91BEF5D9E8C19A7BAA9335746C74FFE9F0A218C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAC9FA4EA913C7FEEEFEEA8D8C3FEF0ADF872886);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF35C02D0118C69B6ADE22DDE2F7B35FDD2B1AD7C);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * V_0 = NULL;
	bool V_1 = false;
	Enumerator_tD1AA7B3BA0B028284BEC7AB59A86AEA47553FF2C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ReadOnlyArray_1_tACB506541C5CC2CCA16D8065F5F949D9874C78D0  V_3;
	memset((&V_3), 0, sizeof(V_3));
	InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * V_4 = NULL;
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// var inputDeviceList = new List<InputDevice>();
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_0 = (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *)il2cpp_codegen_object_new(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var);
		List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1(L_0, /*hidden argument*/List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_RuntimeMethod_var);
		V_0 = L_0;
		// InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.EyeTracking, inputDeviceList);
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_1 = V_0;
		InputDevices_GetDevicesWithCharacteristics_m8E01909248CE8295B99FC5D27CCD63E51A44E5BC(((int32_t)16), L_1, /*hidden argument*/NULL);
		// if (inputDeviceList.Count > 0)
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_inline(L_2, /*hidden argument*/List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// Debug.Log("Eye tracking device found!", this);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_m494F184C7E314B19A4DDAE5E1ABB9106886ED86A(_stringLiteralCAC9FA4EA913C7FEEEFEEA8D8C3FEF0ADF872886, __this, /*hidden argument*/NULL);
		// m_EyeTrackingDeviceFound = true;
		__this->set_m_EyeTrackingDeviceFound_6((bool)1);
		// return;
		goto IL_00e1;
	}

IL_0036:
	{
		// foreach (var device in InputSystem.InputSystem.devices)
		IL2CPP_RUNTIME_CLASS_INIT(InputSystem_tB2E105FFA04BBFEF25E381E9FBBE7DA78BB18380_il2cpp_TypeInfo_var);
		ReadOnlyArray_1_tACB506541C5CC2CCA16D8065F5F949D9874C78D0  L_5;
		L_5 = InputSystem_get_devices_mB346D1402C607C5EEF4CBAED94C3DADF52CF3831(/*hidden argument*/NULL);
		V_3 = L_5;
		Enumerator_tD1AA7B3BA0B028284BEC7AB59A86AEA47553FF2C  L_6;
		L_6 = ReadOnlyArray_1_GetEnumerator_m4DB2F36A677C515C0826FECFB55A531029BE8EF3((ReadOnlyArray_1_tACB506541C5CC2CCA16D8065F5F949D9874C78D0 *)(&V_3), /*hidden argument*/ReadOnlyArray_1_GetEnumerator_m4DB2F36A677C515C0826FECFB55A531029BE8EF3_RuntimeMethod_var);
		V_2 = L_6;
	}

IL_0045:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007f;
		}

IL_0047:
		{
			// foreach (var device in InputSystem.InputSystem.devices)
			InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * L_7;
			L_7 = Enumerator_get_Current_mE0FA132D78425C004BD2F06C3F96F23E84D039A7((Enumerator_tD1AA7B3BA0B028284BEC7AB59A86AEA47553FF2C *)(&V_2), /*hidden argument*/Enumerator_get_Current_mE0FA132D78425C004BD2F06C3F96F23E84D039A7_RuntimeMethod_var);
			V_4 = L_7;
			// if (device.layout == k_EyeGazeLayoutName)
			InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * L_8 = V_4;
			NullCheck(L_8);
			String_t* L_9;
			L_9 = InputControl_get_layout_m6A38EE2D15A5FCFDEE94B4056DD1565E17378454(L_8, /*hidden argument*/NULL);
			bool L_10;
			L_10 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_9, _stringLiteralF35C02D0118C69B6ADE22DDE2F7B35FDD2B1AD7C, /*hidden argument*/NULL);
			V_5 = L_10;
			bool L_11 = V_5;
			if (!L_11)
			{
				goto IL_007e;
			}
		}

IL_0068:
		{
			// Debug.Log("Eye gaze device found!", this);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_m494F184C7E314B19A4DDAE5E1ABB9106886ED86A(_stringLiteral91BEF5D9E8C19A7BAA9335746C74FFE9F0A218C1, __this, /*hidden argument*/NULL);
			// m_EyeTrackingDeviceFound = true;
			__this->set_m_EyeTrackingDeviceFound_6((bool)1);
			// return;
			IL2CPP_LEAVE(0xE1, FINALLY_008a);
		}

IL_007e:
		{
		}

IL_007f:
		{
			// foreach (var device in InputSystem.InputSystem.devices)
			bool L_12;
			L_12 = Enumerator_MoveNext_m7B98E1E5167F455581477D2C8285D0447A53FCCC((Enumerator_tD1AA7B3BA0B028284BEC7AB59A86AEA47553FF2C *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m7B98E1E5167F455581477D2C8285D0447A53FCCC_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0047;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0x99, FINALLY_008a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008a;
	}

FINALLY_008a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2254852747D86D319AB23DAC16B3E59A9726F8F4((Enumerator_tD1AA7B3BA0B028284BEC7AB59A86AEA47553FF2C *)(&V_2), /*hidden argument*/Enumerator_Dispose_m2254852747D86D319AB23DAC16B3E59A9726F8F4_RuntimeMethod_var);
		IL2CPP_END_FINALLY(138)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(138)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xE1, IL_00e1)
		IL2CPP_JUMP_TBL(0x99, IL_0099)
	}

IL_0099:
	{
		// Debug.LogWarning($"Could not find a device that supports eye tracking on Awake. {this} has subscribed to device connected events and will activate the GameObject when an eye tracking device is connected.", this);
		String_t* L_13;
		L_13 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994(_stringLiteral08922C02E680D90FAAB0862833A88225C5A1F397, __this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mFCC4F73CACBC055EBB4CE9891F564B80B81B5F0E(L_13, __this, /*hidden argument*/NULL);
		// InputDevices.deviceConnected += OnDeviceConnected;
		Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 * L_14 = (Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 *)il2cpp_codegen_object_new(Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8_il2cpp_TypeInfo_var);
		Action_1__ctor_m07FF556D7B40C6C60B7A93C2ADBD5215ED162551(L_14, __this, (intptr_t)((intptr_t)GazeInputManager_OnDeviceConnected_m9AE8B0F8728D058A01832E1B7A55D440C3105DC4_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m07FF556D7B40C6C60B7A93C2ADBD5215ED162551_RuntimeMethod_var);
		InputDevices_add_deviceConnected_m49C5FD5111FCD2A554F8DB09DEB1B10C14712A34(L_14, /*hidden argument*/NULL);
		// InputSystem.InputSystem.onDeviceChange += OnDeviceChange;
		Action_2_tA58D913EBCC7FD3E95DEC877EDB4363CD3051DF4 * L_15 = (Action_2_tA58D913EBCC7FD3E95DEC877EDB4363CD3051DF4 *)il2cpp_codegen_object_new(Action_2_tA58D913EBCC7FD3E95DEC877EDB4363CD3051DF4_il2cpp_TypeInfo_var);
		Action_2__ctor_m11077C7022CE6CBAAAC763380F883C54AA772954(L_15, __this, (intptr_t)((intptr_t)GazeInputManager_OnDeviceChange_m0A9B99033439B1E79ABB3DD86D7A5BBFCDF8B982_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m11077C7022CE6CBAAAC763380F883C54AA772954_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(InputSystem_tB2E105FFA04BBFEF25E381E9FBBE7DA78BB18380_il2cpp_TypeInfo_var);
		InputSystem_add_onDeviceChange_mD7FEFA78E945496C2C34F5EF4DAC8E09FD3CAFBE(L_15, /*hidden argument*/NULL);
		// gameObject.SetActive(m_FallbackIfEyeTrackingUnavailable);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_17 = __this->get_m_FallbackIfEyeTrackingUnavailable_5();
		NullCheck(L_16);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, L_17, /*hidden argument*/NULL);
	}

IL_00e1:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInputManager_OnDestroy_m3F0923B1A635E497660DEDD2665CEEF3A76B04A9 (GazeInputManager_t066DD55A5B5C68778F240D14E196FEE676998A7A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m07FF556D7B40C6C60B7A93C2ADBD5215ED162551_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m11077C7022CE6CBAAAC763380F883C54AA772954_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tA58D913EBCC7FD3E95DEC877EDB4363CD3051DF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeInputManager_OnDeviceChange_m0A9B99033439B1E79ABB3DD86D7A5BBFCDF8B982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeInputManager_OnDeviceConnected_m9AE8B0F8728D058A01832E1B7A55D440C3105DC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_tB2E105FFA04BBFEF25E381E9FBBE7DA78BB18380_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InputDevices.deviceConnected -= OnDeviceConnected;
		Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 * L_0 = (Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 *)il2cpp_codegen_object_new(Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8_il2cpp_TypeInfo_var);
		Action_1__ctor_m07FF556D7B40C6C60B7A93C2ADBD5215ED162551(L_0, __this, (intptr_t)((intptr_t)GazeInputManager_OnDeviceConnected_m9AE8B0F8728D058A01832E1B7A55D440C3105DC4_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m07FF556D7B40C6C60B7A93C2ADBD5215ED162551_RuntimeMethod_var);
		InputDevices_remove_deviceConnected_m0DC6FD2F872E31761DCACF4A66CCF1EE15D7CE71(L_0, /*hidden argument*/NULL);
		// InputSystem.InputSystem.onDeviceChange -= OnDeviceChange;
		Action_2_tA58D913EBCC7FD3E95DEC877EDB4363CD3051DF4 * L_1 = (Action_2_tA58D913EBCC7FD3E95DEC877EDB4363CD3051DF4 *)il2cpp_codegen_object_new(Action_2_tA58D913EBCC7FD3E95DEC877EDB4363CD3051DF4_il2cpp_TypeInfo_var);
		Action_2__ctor_m11077C7022CE6CBAAAC763380F883C54AA772954(L_1, __this, (intptr_t)((intptr_t)GazeInputManager_OnDeviceChange_m0A9B99033439B1E79ABB3DD86D7A5BBFCDF8B982_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m11077C7022CE6CBAAAC763380F883C54AA772954_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(InputSystem_tB2E105FFA04BBFEF25E381E9FBBE7DA78BB18380_il2cpp_TypeInfo_var);
		InputSystem_remove_onDeviceChange_mA3C70EFFE9F1F01FD23A9C8454D3757E9FCFD1A9(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::OnDeviceConnected(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInputManager_OnDeviceConnected_m9AE8B0F8728D058A01832E1B7A55D440C3105DC4 (GazeInputManager_t066DD55A5B5C68778F240D14E196FEE676998A7A * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAC9FA4EA913C7FEEEFEEA8D8C3FEF0ADF872886);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (m_EyeTrackingDeviceFound || !inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.EyeTracking))
		bool L_0 = __this->get_m_EyeTrackingDeviceFound_6();
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		uint32_t L_1;
		L_1 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
		uint32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_2);
		uint32_t L_4 = ((int32_t)16);
		RuntimeObject * L_5 = Box(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64_il2cpp_TypeInfo_var, &L_4);
		NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_3);
		bool L_6;
		L_6 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_3, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_5, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 1;
	}

IL_0027:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_002d;
		}
	}
	{
		// return;
		goto IL_004d;
	}

IL_002d:
	{
		// Debug.Log("Eye tracking device found!", this);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_m494F184C7E314B19A4DDAE5E1ABB9106886ED86A(_stringLiteralCAC9FA4EA913C7FEEEFEEA8D8C3FEF0ADF872886, __this, /*hidden argument*/NULL);
		// m_EyeTrackingDeviceFound = true;
		__this->set_m_EyeTrackingDeviceFound_6((bool)1);
		// gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)1, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::OnDeviceChange(UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInputManager_OnDeviceChange_m0A9B99033439B1E79ABB3DD86D7A5BBFCDF8B982 (GazeInputManager_t066DD55A5B5C68778F240D14E196FEE676998A7A * __this, InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * ___device0, int32_t ___change1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91BEF5D9E8C19A7BAA9335746C74FFE9F0A218C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF35C02D0118C69B6ADE22DDE2F7B35FDD2B1AD7C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (m_EyeTrackingDeviceFound || change != InputDeviceChange.Added)
		bool L_0 = __this->get_m_EyeTrackingDeviceFound_6();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___change1;
		G_B3_0 = ((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		goto IL_004c;
	}

IL_0016:
	{
		// if (device.layout == k_EyeGazeLayoutName)
		InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * L_3 = ___device0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputControl_get_layout_m6A38EE2D15A5FCFDEE94B4056DD1565E17378454(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_4, _stringLiteralF35C02D0118C69B6ADE22DDE2F7B35FDD2B1AD7C, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		// Debug.Log("Eye gaze device found!", this);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_m494F184C7E314B19A4DDAE5E1ABB9106886ED86A(_stringLiteral91BEF5D9E8C19A7BAA9335746C74FFE9F0A218C1, __this, /*hidden argument*/NULL);
		// m_EyeTrackingDeviceFound = true;
		__this->set_m_EyeTrackingDeviceFound_6((bool)1);
		// gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)1, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInputManager__ctor_mF9AE798E6E91A6193A89AB851760BB2632B73BF5 (GazeInputManager_t066DD55A5B5C68778F240D14E196FEE676998A7A * __this, const RuntimeMethod* method)
{
	{
		// bool m_FallbackIfEyeTrackingUnavailable = true;
		__this->set_m_FallbackIfEyeTrackingUnavailable_5((bool)1);
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
// UnityEngine.UI.Text UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * IncrementUIText_get_text_mF0D3ACAC30B319A1E393A5E69738A64655ED96B5 (IncrementUIText_tA3C6CD00B0EF979DD2366CDD0D227ACD401F5BFA * __this, const RuntimeMethod* method)
{
	{
		// get => m_Text;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_m_Text_4();
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText::set_text(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementUIText_set_text_m26FE5F25DC15D951BF1427B58AE85D2451611FDD (IncrementUIText_tA3C6CD00B0EF979DD2366CDD0D227ACD401F5BFA * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___value0, const RuntimeMethod* method)
{
	{
		// set => m_Text = value;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = ___value0;
		__this->set_m_Text_4(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementUIText_Awake_mCA8197C2E0FE07185DF93BEFC493E6B5363F5471 (IncrementUIText_tA3C6CD00B0EF979DD2366CDD0D227ACD401F5BFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE556C5D923A68B00D17767856C66003D52D6CEC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_Text == null)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_m_Text_4();
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
		// Debug.LogWarning("Missing required Text component reference. Use the Inspector window to assign which Text component to increment.", this);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mFCC4F73CACBC055EBB4CE9891F564B80B81B5F0E(_stringLiteralAE556C5D923A68B00D17767856C66003D52D6CEC, __this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText::IncrementText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementUIText_IncrementText_mD0CD6902A40EACE7E0525B3711E72F58DD979F9F (IncrementUIText_tA3C6CD00B0EF979DD2366CDD0D227ACD401F5BFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// m_Count += 1;
		int32_t L_0 = __this->get_m_Count_5();
		__this->set_m_Count_5(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// if (m_Text != null)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_m_Text_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// m_Text.text = m_Count.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_m_Text_4();
		int32_t* L_5 = __this->get_address_of_m_Count_5();
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_6);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementUIText__ctor_mCFCFD5D7274FA865B83EEFBE0187DEF0B32A3DFA (IncrementUIText_tA3C6CD00B0EF979DD2366CDD0D227ACD401F5BFA * __this, const RuntimeMethod* method)
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
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::get_pokeFollowTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * XRPokeFollowAffordance_get_pokeFollowTransform_mE483FE0B4FEDF7457AD2FDE470BF4F25C0273831 (XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC * __this, const RuntimeMethod* method)
{
	{
		// get => m_PokeFollowTransform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_m_PokeFollowTransform_4();
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::set_pokeFollowTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_set_pokeFollowTransform_mBBBBAC7E5399CD839275ECC977356C27C4572C55 (XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	{
		// set => m_PokeFollowTransform = value;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_m_PokeFollowTransform_4(L_0);
		return;
	}
}
// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::get_smoothingSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRPokeFollowAffordance_get_smoothingSpeed_mB94234E10F7382E621C5A9C768DA160164D89CA0 (XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC * __this, const RuntimeMethod* method)
{
	{
		// get => m_SmoothingSpeed;
		float L_0 = __this->get_m_SmoothingSpeed_5();
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::set_smoothingSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_set_smoothingSpeed_m710DB8C02ED5AA01F2A6A12527A4D35658BFA179 (XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => m_SmoothingSpeed = value;
		float L_0 = ___value0;
		__this->set_m_SmoothingSpeed_5(L_0);
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::get_returnToInitialPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPokeFollowAffordance_get_returnToInitialPosition_m56B72D25AC7073373DC2A7345A99BB396095E4AA (XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC * __this, const RuntimeMethod* method)
{
	{
		// get => m_ReturnToInitialPosition;
		bool L_0 = __this->get_m_ReturnToInitialPosition_6();
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::set_returnToInitialPosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_set_returnToInitialPosition_m9E85F71ACEFA478ED2ACA5A0FA54EFE9F760F815 (XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => m_ReturnToInitialPosition = value;
		bool L_0 = ___value0;
		__this->set_m_ReturnToInitialPosition_6(L_0);
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::get_applyIfChildIsTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPokeFollowAffordance_get_applyIfChildIsTarget_mE84BFB078DD1E97C606094E288A5E8FE2763E901 (XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC * __this, const RuntimeMethod* method)
{
	{
		// get => m_ApplyIfChildIsTarget;
		bool L_0 = __this->get_m_ApplyIfChildIsTarget_7();
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::set_applyIfChildIsTarget(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_set_applyIfChildIsTarget_m130AB6E4AA47ADA10FD7CF455818751CEFE60AFE (XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => m_ApplyIfChildIsTarget = value;
		bool L_0 = ___value0;
		__this->set_m_ApplyIfChildIsTarget_7(L_0);
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::get_clampToMaxDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPokeFollowAffordance_get_clampToMaxDistance_m7B23A304A77D759703A268C7055CC5A51971BEF5 (XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC * __this, const RuntimeMethod* method)
{
	{
		// get => m_ClampToMaxDistance;
		bool L_0 = __this->get_m_ClampToMaxDistance_8();
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::set_clampToMaxDistance(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_set_clampToMaxDistance_mA5EA1B0349D7F2E78B734FDB7FD853FA7ABA36DF (XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => m_ClampToMaxDistance = value;
		bool L_0 = ___value0;
		__this->set_m_ClampToMaxDistance_8(L_0);
		return;
	}
}
// System.Single UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::get_maxDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRPokeFollowAffordance_get_maxDistance_m90631B38677536E266C1D619F301AE96B34E60B5 (XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC * __this, const RuntimeMethod* method)
{
	{
		// get => m_MaxDistance;
		float L_0 = __this->get_m_MaxDistance_9();
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::set_maxDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_set_maxDistance_m73678B810D621DD8AA7819B87425EC03F78D16BB (XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => m_MaxDistance = value;
		float L_0 = ___value0;
		__this->set_m_MaxDistance_9(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_Awake_mC8C690672EC7FE72BB4C04B80577B8B6B694013D (XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisIPokeStateDataProvider_t8CBEF15D28B76453F7F2612922899EA7D641040A_mBB9E9686DECFE37063B1E30A9FC022BCEEB7F2D0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PokeDataProvider = GetComponentInParent<IPokeStateDataProvider>();
		RuntimeObject* L_0;
		L_0 = Component_GetComponentInParent_TisIPokeStateDataProvider_t8CBEF15D28B76453F7F2612922899EA7D641040A_mBB9E9686DECFE37063B1E30A9FC022BCEEB7F2D0(__this, /*hidden argument*/Component_GetComponentInParent_TisIPokeStateDataProvider_t8CBEF15D28B76453F7F2612922899EA7D641040A_mBB9E9686DECFE37063B1E30A9FC022BCEEB7F2D0_RuntimeMethod_var);
		__this->set_m_PokeDataProvider_10(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_Start_mED37B8971121C477CB1B7F9EA14133560BEA5644 (XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m7E84356074E72345303580C158E3FCF0BB703260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mBF67781D64A58A12B7F2B0B4949711B2BB69919D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t59633D5754271108E50B86A3AE18D14982D2D472_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t86411888FFBF948F6F03B645D9DA11165B50C96F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindableVariableBase_1_Subscribe_mBB14D62DDCA115C882CAF39FA7C29D969425935B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPokeStateDataProvider_t8CBEF15D28B76453F7F2612922899EA7D641040A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyBindableVariable_1_tC06DA62C68C80ADDFC2FE6A1351EDAD31282DC33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPokeFollowAffordance_OnPokeStateDataUpdated_m2BB3AAB9FD8A31E16A76BCE02C7C433D53E0D3D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPokeFollowAffordance_OnTransformTweenableVariableUpdated_m8F467B393BD078E4E18BC2C74A33689E27D88476_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral675D495E61C139628601D1F560A558803C58CB67);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_PokeFollowTransform != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_m_PokeFollowTransform_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0071;
		}
	}
	{
		// m_InitialPosition = m_PokeFollowTransform.localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_m_PokeFollowTransform_4();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_3, /*hidden argument*/NULL);
		__this->set_m_InitialPosition_13(L_4);
		// m_BindingsGroup.AddBinding(m_TransformTweenableVariable.Subscribe(OnTransformTweenableVariableUpdated));
		BindingsGroup_tFD7DAAAD7DD40D8180050DA4BE2BF93754B4F2AE * L_5 = __this->get_m_BindingsGroup_12();
		Vector3TweenableVariable_tED608C05E502A2D74AC2E7031CC90D00D92C9917 * L_6 = __this->get_m_TransformTweenableVariable_11();
		Action_1_t59633D5754271108E50B86A3AE18D14982D2D472 * L_7 = (Action_1_t59633D5754271108E50B86A3AE18D14982D2D472 *)il2cpp_codegen_object_new(Action_1_t59633D5754271108E50B86A3AE18D14982D2D472_il2cpp_TypeInfo_var);
		Action_1__ctor_mBF67781D64A58A12B7F2B0B4949711B2BB69919D(L_7, __this, (intptr_t)((intptr_t)XRPokeFollowAffordance_OnTransformTweenableVariableUpdated_m8F467B393BD078E4E18BC2C74A33689E27D88476_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mBF67781D64A58A12B7F2B0B4949711B2BB69919D_RuntimeMethod_var);
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = BindableVariableBase_1_Subscribe_mBB14D62DDCA115C882CAF39FA7C29D969425935B(L_6, L_7, /*hidden argument*/BindableVariableBase_1_Subscribe_mBB14D62DDCA115C882CAF39FA7C29D969425935B_RuntimeMethod_var);
		NullCheck(L_5);
		BindingsGroup_AddBinding_mB862CA624836F2F41878A83077484E5D4F51BBDC(L_5, L_8, /*hidden argument*/NULL);
		// m_BindingsGroup.AddBinding(m_PokeDataProvider.pokeStateData.SubscribeAndUpdate(OnPokeStateDataUpdated));
		BindingsGroup_tFD7DAAAD7DD40D8180050DA4BE2BF93754B4F2AE * L_9 = __this->get_m_BindingsGroup_12();
		RuntimeObject* L_10 = __this->get_m_PokeDataProvider_10();
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Unity.XR.CoreUtils.Bindings.Variables.IReadOnlyBindableVariable`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.IPokeStateDataProvider::get_pokeStateData() */, IPokeStateDataProvider_t8CBEF15D28B76453F7F2612922899EA7D641040A_il2cpp_TypeInfo_var, L_10);
		Action_1_t86411888FFBF948F6F03B645D9DA11165B50C96F * L_12 = (Action_1_t86411888FFBF948F6F03B645D9DA11165B50C96F *)il2cpp_codegen_object_new(Action_1_t86411888FFBF948F6F03B645D9DA11165B50C96F_il2cpp_TypeInfo_var);
		Action_1__ctor_m7E84356074E72345303580C158E3FCF0BB703260(L_12, __this, (intptr_t)((intptr_t)XRPokeFollowAffordance_OnPokeStateDataUpdated_m2BB3AAB9FD8A31E16A76BCE02C7C433D53E0D3D7_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m7E84356074E72345303580C158E3FCF0BB703260_RuntimeMethod_var);
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1< RuntimeObject*, Action_1_t86411888FFBF948F6F03B645D9DA11165B50C96F * >::Invoke(1 /* Unity.XR.CoreUtils.Bindings.IEventBinding Unity.XR.CoreUtils.Bindings.Variables.IReadOnlyBindableVariable`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>::SubscribeAndUpdate(System.Action`1<!0>) */, IReadOnlyBindableVariable_1_tC06DA62C68C80ADDFC2FE6A1351EDAD31282DC33_il2cpp_TypeInfo_var, L_11, L_12);
		NullCheck(L_9);
		BindingsGroup_AddBinding_mB862CA624836F2F41878A83077484E5D4F51BBDC(L_9, L_13, /*hidden argument*/NULL);
		goto IL_008d;
	}

IL_0071:
	{
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		// Debug.LogWarning($"Missing Poke Follow Transform assignment on {this}. Disabling component.", this);
		String_t* L_14;
		L_14 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994(_stringLiteral675D495E61C139628601D1F560A558803C58CB67, __this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mFCC4F73CACBC055EBB4CE9891F564B80B81B5F0E(L_14, __this, /*hidden argument*/NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_OnDestroy_mC0D8439ABCB4C18AF76E2C3A885073C05C934021 (XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenableVariableAsyncBase_1_Dispose_m7F04550044E1B7C7C8D3677152F64CFC4552EE2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3TweenableVariable_tED608C05E502A2D74AC2E7031CC90D00D92C9917 * G_B2_0 = NULL;
	Vector3TweenableVariable_tED608C05E502A2D74AC2E7031CC90D00D92C9917 * G_B1_0 = NULL;
	{
		// m_BindingsGroup.Clear();
		BindingsGroup_tFD7DAAAD7DD40D8180050DA4BE2BF93754B4F2AE * L_0 = __this->get_m_BindingsGroup_12();
		NullCheck(L_0);
		BindingsGroup_Clear_mB28C44D8FC5CBEDCBE41D99AC52A06AD3D3C0024(L_0, /*hidden argument*/NULL);
		// m_TransformTweenableVariable?.Dispose();
		Vector3TweenableVariable_tED608C05E502A2D74AC2E7031CC90D00D92C9917 * L_1 = __this->get_m_TransformTweenableVariable_11();
		Vector3TweenableVariable_tED608C05E502A2D74AC2E7031CC90D00D92C9917 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0019;
		}
	}
	{
		goto IL_001f;
	}

IL_0019:
	{
		NullCheck(G_B2_0);
		TweenableVariableAsyncBase_1_Dispose_m7F04550044E1B7C7C8D3677152F64CFC4552EE2B(G_B2_0, /*hidden argument*/TweenableVariableAsyncBase_1_Dispose_m7F04550044E1B7C7C8D3677152F64CFC4552EE2B_RuntimeMethod_var);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_LateUpdate_mEBB3391863914747A4B67EFED06B0D7666CEC855 (XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenableVariableBase_1_HandleTween_m76840F115C312908B57559DC90FD2DDD85617472_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3TweenableVariable_tED608C05E502A2D74AC2E7031CC90D00D92C9917 * G_B4_0 = NULL;
	Vector3TweenableVariable_tED608C05E502A2D74AC2E7031CC90D00D92C9917 * G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	Vector3TweenableVariable_tED608C05E502A2D74AC2E7031CC90D00D92C9917 * G_B5_1 = NULL;
	{
		// if (m_IsFirstFrame)
		bool L_0 = __this->get_m_IsFirstFrame_14();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// m_TransformTweenableVariable.HandleTween(1f);
		Vector3TweenableVariable_tED608C05E502A2D74AC2E7031CC90D00D92C9917 * L_2 = __this->get_m_TransformTweenableVariable_11();
		NullCheck(L_2);
		TweenableVariableBase_1_HandleTween_m76840F115C312908B57559DC90FD2DDD85617472(L_2, (1.0f), /*hidden argument*/TweenableVariableBase_1_HandleTween_m76840F115C312908B57559DC90FD2DDD85617472_RuntimeMethod_var);
		// m_IsFirstFrame = false;
		__this->set_m_IsFirstFrame_14((bool)0);
		// return;
		goto IL_0052;
	}

IL_0026:
	{
		// m_TransformTweenableVariable.HandleTween(m_SmoothingSpeed > 0f ? Time.deltaTime * m_SmoothingSpeed : 1f);
		Vector3TweenableVariable_tED608C05E502A2D74AC2E7031CC90D00D92C9917 * L_3 = __this->get_m_TransformTweenableVariable_11();
		float L_4 = __this->get_m_SmoothingSpeed_5();
		G_B3_0 = L_3;
		if ((((float)L_4) > ((float)(0.0f))))
		{
			G_B4_0 = L_3;
			goto IL_0040;
		}
	}
	{
		G_B5_0 = (1.0f);
		G_B5_1 = G_B3_0;
		goto IL_004c;
	}

IL_0040:
	{
		float L_5;
		L_5 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		float L_6 = __this->get_m_SmoothingSpeed_5();
		G_B5_0 = ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6));
		G_B5_1 = G_B4_0;
	}

IL_004c:
	{
		NullCheck(G_B5_1);
		TweenableVariableBase_1_HandleTween_m76840F115C312908B57559DC90FD2DDD85617472(G_B5_1, G_B5_0, /*hidden argument*/TweenableVariableBase_1_HandleTween_m76840F115C312908B57559DC90FD2DDD85617472_RuntimeMethod_var);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::OnTransformTweenableVariableUpdated(Unity.Mathematics.float3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_OnTransformTweenableVariableUpdated_m8F467B393BD078E4E18BC2C74A33689E27D88476 (XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC * __this, float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  ___position0, const RuntimeMethod* method)
{
	{
		// m_PokeFollowTransform.localPosition = position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_m_PokeFollowTransform_4();
		float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  L_1 = ___position0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = float3_op_Implicit_mF3897B2F87EEB82C8D46016ADADD80B4279D9F8B(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::OnPokeStateDataUpdated(UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance_OnPokeStateDataUpdated_m2BB3AAB9FD8A31E16A76BCE02C7C433D53E0D3D7 (XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC * __this, PokeStateData_tD7AE4FF9FE42F143B310C489FD9A9CAFEEEE2EC6  ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenableVariableBase_1_set_target_mA1AE83F0B29D2D881A099C03217C8429D419F174_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B9_0 = 0;
	{
		// var pokeTarget = data.target;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = PokeStateData_get_target_m77F0F835C5C583CDD2FF72D2AE63D6A8CA34CD65_inline((PokeStateData_tD7AE4FF9FE42F143B310C489FD9A9CAFEEEE2EC6 *)(&___data0), /*hidden argument*/NULL);
		V_0 = L_0;
		// var applyFollow = m_ApplyIfChildIsTarget
		//     ? pokeTarget != null && pokeTarget.IsChildOf(transform)
		//     : pokeTarget == transform;
		bool L_1 = __this->get_m_ApplyIfChildIsTarget_7();
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_2, L_3, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0037;
	}

IL_001f:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_9;
		L_9 = Transform_IsChildOf_m1783A88A490931E98F4D5E361595A518E09FD4BC(L_7, L_8, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_9));
		goto IL_0037;
	}

IL_0036:
	{
		G_B5_0 = 0;
	}

IL_0037:
	{
		V_1 = (bool)G_B5_0;
		// if (applyFollow)
		bool L_10 = V_1;
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0095;
		}
	}
	{
		// var targetPosition = pokeTarget.InverseTransformPoint(data.axisAlignedPokeInteractionPoint);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = PokeStateData_get_axisAlignedPokeInteractionPoint_m7046CD3B468BD8DF1988F15E476CC851F6DCA57B_inline((PokeStateData_tD7AE4FF9FE42F143B310C489FD9A9CAFEEEE2EC6 *)(&___data0), /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_12, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		// if (m_ClampToMaxDistance && targetPosition.sqrMagnitude > m_MaxDistance * m_MaxDistance)
		bool L_15 = __this->get_m_ClampToMaxDistance_8();
		if (!L_15)
		{
			goto IL_006c;
		}
	}
	{
		float L_16;
		L_16 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
		float L_17 = __this->get_m_MaxDistance_9();
		float L_18 = __this->get_m_MaxDistance_9();
		G_B9_0 = ((((float)L_16) > ((float)((float)il2cpp_codegen_multiply((float)L_17, (float)L_18))))? 1 : 0);
		goto IL_006d;
	}

IL_006c:
	{
		G_B9_0 = 0;
	}

IL_006d:
	{
		V_4 = (bool)G_B9_0;
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_0080;
		}
	}
	{
		// targetPosition = Vector3.ClampMagnitude(targetPosition, m_MaxDistance);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_3;
		float L_21 = __this->get_m_MaxDistance_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_ClampMagnitude_m11A2FD0BD3D54B25CEE4657DF713A5C8C60B0297(L_20, L_21, /*hidden argument*/NULL);
		V_3 = L_22;
	}

IL_0080:
	{
		// m_TransformTweenableVariable.target = targetPosition;
		Vector3TweenableVariable_tED608C05E502A2D74AC2E7031CC90D00D92C9917 * L_23 = __this->get_m_TransformTweenableVariable_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_3;
		float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  L_25;
		L_25 = float3_op_Implicit_m52E7BAC4F651B42D13F635E5942FA9FD73F9084C(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		TweenableVariableBase_1_set_target_mA1AE83F0B29D2D881A099C03217C8429D419F174_inline(L_23, L_25, /*hidden argument*/TweenableVariableBase_1_set_target_mA1AE83F0B29D2D881A099C03217C8429D419F174_RuntimeMethod_var);
		goto IL_00ba;
	}

IL_0095:
	{
		// else if (m_ReturnToInitialPosition)
		bool L_26 = __this->get_m_ReturnToInitialPosition_6();
		V_5 = L_26;
		bool L_27 = V_5;
		if (!L_27)
		{
			goto IL_00ba;
		}
	}
	{
		// m_TransformTweenableVariable.target = m_InitialPosition;
		Vector3TweenableVariable_tED608C05E502A2D74AC2E7031CC90D00D92C9917 * L_28 = __this->get_m_TransformTweenableVariable_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = __this->get_m_InitialPosition_13();
		float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  L_30;
		L_30 = float3_op_Implicit_m52E7BAC4F651B42D13F635E5942FA9FD73F9084C(L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		TweenableVariableBase_1_set_target_mA1AE83F0B29D2D881A099C03217C8429D419F174_inline(L_28, L_30, /*hidden argument*/TweenableVariableBase_1_set_target_mA1AE83F0B29D2D881A099C03217C8429D419F174_RuntimeMethod_var);
	}

IL_00ba:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowAffordance__ctor_mAEC2CD4B54DF36D37C9CE2EB7D3984369613EB7D (XRPokeFollowAffordance_t4B638D15B822C0F7A1939591487725A204DD15CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindingsGroup_tFD7DAAAD7DD40D8180050DA4BE2BF93754B4F2AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3TweenableVariable_tED608C05E502A2D74AC2E7031CC90D00D92C9917_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float m_SmoothingSpeed = 16f;
		__this->set_m_SmoothingSpeed_5((16.0f));
		// bool m_ReturnToInitialPosition = true;
		__this->set_m_ReturnToInitialPosition_6((bool)1);
		// bool m_ApplyIfChildIsTarget = true;
		__this->set_m_ApplyIfChildIsTarget_7((bool)1);
		// readonly Vector3TweenableVariable m_TransformTweenableVariable = new Vector3TweenableVariable();
		Vector3TweenableVariable_tED608C05E502A2D74AC2E7031CC90D00D92C9917 * L_0 = (Vector3TweenableVariable_tED608C05E502A2D74AC2E7031CC90D00D92C9917 *)il2cpp_codegen_object_new(Vector3TweenableVariable_tED608C05E502A2D74AC2E7031CC90D00D92C9917_il2cpp_TypeInfo_var);
		Vector3TweenableVariable__ctor_m610E3A31946F704EC17D9967052107D5E596FA4C(L_0, /*hidden argument*/NULL);
		__this->set_m_TransformTweenableVariable_11(L_0);
		// readonly BindingsGroup m_BindingsGroup = new BindingsGroup();
		BindingsGroup_tFD7DAAAD7DD40D8180050DA4BE2BF93754B4F2AE * L_1 = (BindingsGroup_tFD7DAAAD7DD40D8180050DA4BE2BF93754B4F2AE *)il2cpp_codegen_object_new(BindingsGroup_tFD7DAAAD7DD40D8180050DA4BE2BF93754B4F2AE_il2cpp_TypeInfo_var);
		BindingsGroup__ctor_m134F76F56E968839A28997A80A0B8F7272F0B745(L_1, /*hidden argument*/NULL);
		__this->set_m_BindingsGroup_12(L_1);
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
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnAfterInteractionEventsU3Ed__31__ctor_m601BAF99E1B6B511FDE379A1905DF3D6AB047D83 (U3COnAfterInteractionEventsU3Ed__31_tA2C50022A2D30059BB0285E87EE43DECF8920956 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__31::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnAfterInteractionEventsU3Ed__31_System_IDisposable_Dispose_m7233B0A2488B136B6C81829E7A0DC99F94A21B56 (U3COnAfterInteractionEventsU3Ed__31_tA2C50022A2D30059BB0285E87EE43DECF8920956 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnAfterInteractionEventsU3Ed__31_MoveNext_m07DF8D5BEB815EE46AB877B171990422AB32900D (U3COnAfterInteractionEventsU3Ed__31_tA2C50022A2D30059BB0285E87EE43DECF8920956 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B14_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_004a;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (m_TeleportInteractor == null)
		ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * L_3 = __this->get_U3CU3E4__this_2();
		NullCheck(L_3);
		XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A * L_4 = L_3->get_m_TeleportInteractor_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0037:
	{
		goto IL_0092;
	}

IL_0039:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!m_Teleporting && m_TeleportInteractor.gameObject.activeSelf)
		ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * L_7 = __this->get_U3CU3E4__this_2();
		NullCheck(L_7);
		bool L_8 = L_7->get_m_Teleporting_16();
		if (L_8)
		{
			goto IL_0075;
		}
	}
	{
		ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * L_9 = __this->get_U3CU3E4__this_2();
		NullCheck(L_9);
		XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A * L_10 = L_9->get_m_TeleportInteractor_8();
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_11, /*hidden argument*/NULL);
		G_B14_0 = ((int32_t)(L_12));
		goto IL_0076;
	}

IL_0075:
	{
		G_B14_0 = 0;
	}

IL_0076:
	{
		V_2 = (bool)G_B14_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0091;
		}
	}
	{
		// m_TeleportInteractor.gameObject.SetActive(false);
		ActionBasedControllerManager_tC176850FAF5CEDECEFBB31976966C53297536392 * L_14 = __this->get_U3CU3E4__this_2();
		NullCheck(L_14);
		XRRayInteractor_tB50C1587D5621FD6668F20BA63354060AA2F9D9A * L_15 = L_14->get_m_TeleportInteractor_8();
		NullCheck(L_15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)0, /*hidden argument*/NULL);
	}

IL_0091:
	{
	}

IL_0092:
	{
		// while (true)
		V_3 = (bool)1;
		goto IL_0039;
	}
}
// System.Object UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__31::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3COnAfterInteractionEventsU3Ed__31_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA0DD91EC400EF9990D3E9CC550847B59F248744B (U3COnAfterInteractionEventsU3Ed__31_tA2C50022A2D30059BB0285E87EE43DECF8920956 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__31::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnAfterInteractionEventsU3Ed__31_System_Collections_IEnumerator_Reset_m9EFD83E81ECE8E0F1B0A85074A70C023CE70D514 (U3COnAfterInteractionEventsU3Ed__31_tA2C50022A2D30059BB0285E87EE43DECF8920956 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnAfterInteractionEventsU3Ed__31_System_Collections_IEnumerator_Reset_m9EFD83E81ECE8E0F1B0A85074A70C023CE70D514_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager/<OnAfterInteractionEvents>d__31::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3COnAfterInteractionEventsU3Ed__31_System_Collections_IEnumerator_get_Current_mD6DC1B6341456ADA5613EC7389E05CD5D6B727F4 (U3COnAfterInteractionEventsU3Ed__31_tA2C50022A2D30059BB0285E87EE43DECF8920956 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 * XRBaseInteractor_get_selectEntered_m957269B06CBB2BB5CBF550B0B7853F0CE296DF64_inline (XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F * __this, const RuntimeMethod* method)
{
	{
		// get => m_SelectEntered;
		SelectEnterEvent_t147569BD69EAD584499BE2FC174458E3150C5918 * L_0 = __this->get_m_SelectEntered_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 * XRBaseInteractor_get_selectExited_m05B02D438D30646B7AD5827FCEBCA401E8AA0C23_inline (XRBaseInteractor_t78FB23CA3FFA1C934E25A72B172879C3AE6D887F * __this, const RuntimeMethod* method)
{
	{
		// get => m_SelectExited;
		SelectExitEvent_t8A19A5E960E731FDA7BC2509D96527199FDA57F8 * L_0 = __this->get_m_SelectExited_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ContinuousMoveProviderBase_set_forwardSource_mFC654F04903F2517D5AF32028B2216DEFF341BEB_inline (ContinuousMoveProviderBase_tEEA003EAE25A3AAEEF9FF9B39FA30EE046059044 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	{
		// set => m_ForwardSource = value;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_m_ForwardSource_14(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m3548B3539928E88F2CE523A070D30609C8FEC225_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___rhs1;
		float L_3 = L_2.get_x_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___lhs0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___rhs1;
		float L_7 = L_6.get_y_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocomotionSystem_tEF4F8D19A639BFEBBD4C52AE52AB74D337BB4C5D * LocomotionProvider_get_system_m03FA085476B700DA9942A3B6DF3B8D3C2D7D36F1_inline (LocomotionProvider_tF07C5527C6B8CDB38B435E8EDC50DF8CA86C6448 * __this, const RuntimeMethod* method)
{
	{
		// get => m_System;
		LocomotionSystem_tEF4F8D19A639BFEBBD4C52AE52AB74D337BB4C5D * L_0 = __this->get_m_System_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * LocomotionSystem_get_xrOrigin_m2B3172A766D97744D3D575CC9174EE5C37E80D1B_inline (LocomotionSystem_tEF4F8D19A639BFEBBD4C52AE52AB74D337BB4C5D * __this, const RuntimeMethod* method)
{
	{
		// get => m_XROrigin;
		XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * L_0 = __this->get_m_XROrigin_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * XROrigin_get_Camera_mDEC1EA5E15968845DA812397BBA4506A88B0F9FF_inline (XROrigin_t9B8AF4E46E31903F17DF7A13F317DB1CF366777D * __this, const RuntimeMethod* method)
{
	{
		// get => m_Camera;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_m_Camera_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443  ActionBasedContinuousMoveProvider_get_leftHandMoveAction_m1C39E15479E4A961A8ED123466C6D1FF4A166B81_inline (ActionBasedContinuousMoveProvider_tA1E91E01A6936255752856265BCBFBDBA093293A * __this, const RuntimeMethod* method)
{
	{
		// get => m_LeftHandMoveAction;
		InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443  L_0 = __this->get_m_LeftHandMoveAction_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443  ActionBasedContinuousMoveProvider_get_rightHandMoveAction_m786CBFBF3C9C3E0630EC04FD5FD1A35C5F17D712_inline (ActionBasedContinuousMoveProvider_tA1E91E01A6936255752856265BCBFBDBA093293A * __this, const RuntimeMethod* method)
{
	{
		// get => m_RightHandMoveAction;
		InputActionProperty_t6FBCCCE20F29F1DCC9139A5570FD53D655B5D443  L_0 = __this->get_m_RightHandMoveAction_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m5E223DB365EAC8F6625C169E927527FFB8CC88DB_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m831CBA1D198C3CDE660E8172A67A4E41BD0D0171(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * PokeStateData_get_target_m77F0F835C5C583CDD2FF72D2AE63D6A8CA34CD65_inline (PokeStateData_tD7AE4FF9FE42F143B310C489FD9A9CAFEEEE2EC6 * __this, const RuntimeMethod* method)
{
	{
		// public Transform target { get; set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CtargetU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PokeStateData_get_axisAlignedPokeInteractionPoint_m7046CD3B468BD8DF1988F15E476CC851F6DCA57B_inline (PokeStateData_tD7AE4FF9FE42F143B310C489FD9A9CAFEEEE2EC6 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 axisAlignedPokeInteractionPoint { get; set; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBCBF2D9FD1B5F0D8D8595B15B7460889D60C8070(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_gshared_inline (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_target_mA1AE83F0B29D2D881A099C03217C8429D419F174_gshared_inline (TweenableVariableBase_1_t211ADF995AD7DF7DF484BB8E09E4EE1DCEFF73AF * __this, float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  ___value0, const RuntimeMethod* method)
{
	{
		// public T target { get; set; }
		float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  L_0 = ___value0;
		__this->set_U3CtargetU3Ek__BackingField_8(L_0);
		return;
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
