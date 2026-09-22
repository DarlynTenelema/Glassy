#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct U3CU3Ec__DisplayClass33_0_1_tB6CF9727F3704623A7C8D43E9FEB20554021BFB3;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3;
struct TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D;
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
struct Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DisallowMultipleComponentU5BU5D_tEA69AEA10483E24EB99D75210593E7C9452FD283;
struct ExecuteInEditModeU5BU5D_t57196F1483600AD3B95D1452158E1E10864B12A2;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RequireComponentU5BU5D_t29B8922A4CC605C50E015637033A7A4B0EF564E9;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943;
struct AutoCompletePathVisitor_tF0F2FA82B3F3666F724C75CF0B95E4A420243B15;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IPropertyBagVisitor_tE8B9B7E14DBF946E6E65BD0ECC8679268715BF5A;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E;
struct VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_AssetBundleModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_ScriptingModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UIElementsModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_InputSystem[];
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1865ADD0B2BD98A16ED26B59F57307FBCA54202A;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral67A6B45EDCD9AF8D54D82F87349E9F4D77FC030F;
IL2CPP_EXTERN_C String_t* _stringLiteral699ABA3941867526413B23699BCDD9DC20DA6D7A;
IL2CPP_EXTERN_C String_t* _stringLiteral7F2AA158020B57C11060F4940998AEF1D121EF87;
IL2CPP_EXTERN_C String_t* _stringLiteralC70965A7D491520CA8D04D4EA01613EFED3309E0;
IL2CPP_EXTERN_C const RuntimeType* AssetBundle_tB38418819A49060CD738CB21541649340F082943_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AutoCompletePathVisitor_tF0F2FA82B3F3666F724C75CF0B95E4A420243B15_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ByteU2A_t7A03686A8034AF92EF1EA2D09B280EF590D1174D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeArray_1_t6E2931CC2E1AA6B9F666FF4270BD177E2114779B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Type_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec__DisplayClass33_0_1_tB6CF9727F3704623A7C8D43E9FEB20554021BFB3 : public RuntimeObject {};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct ArrayHelpers_t1E3489005D45A29B838AE159F19B43B9A6A6F08B  : public RuntimeObject
{
};
struct Assert_tDC16963451AC4364803739B73A4477ADCB365863  : public RuntimeObject
{
};
struct AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09  : public RuntimeObject
{
};
struct AttributeHelperEngine_t6B3D8969EF52C428F6DD05AB6A788FB43FD69520  : public RuntimeObject
{
};
struct AutoCompletePathVisitor_tF0F2FA82B3F3666F724C75CF0B95E4A420243B15  : public RuntimeObject
{
	VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* ___m_VisitContext;
	int32_t ___U3CmaxDepthU3Ek__BackingField;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E  : public RuntimeObject
{
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_context;
	RuntimeObject* ___m_stateMachine;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	RuntimeObject* ___m_stateMachine;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction;
};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine;
	Il2CppMethodPointer ___m_defaultContextAction;
};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine;
	Il2CppMethodPointer ___m_defaultContextAction;
};
struct AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 
{
	void* ___nativeArrayBuffer;
	int64_t ___lengthInBytes;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E 
{
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ec;
};
struct Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshaled_pinvoke
{
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ec;
};
struct Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshaled_com
{
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ec;
};
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task;
};
struct AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_task;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 
{
	intptr_t ___m_Ptr;
	int32_t ___m_Version;
};
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task;
};
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task;
};
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task;
};
struct CausalityTraceLevel_t672BEB68BD9D2ED72A9EE022D37D68A28FA9939A 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708 
{
	Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E ___outerEC;
	bool ___outerECBelongsToScope;
	RuntimeObject* ___hecsw;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___thread;
};
struct ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshaled_pinvoke
{
	Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshaled_pinvoke ___outerEC;
	int32_t ___outerECBelongsToScope;
	Il2CppIUnknown* ___hecsw;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___thread;
};
struct ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshaled_com
{
	Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshaled_com ___outerEC;
	int32_t ___outerECBelongsToScope;
	Il2CppIUnknown* ___hecsw;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___thread;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SynchronizationContextProperties_t5ED82C778B4C396AD94A93CFBEF00022BDECF058 
{
	int32_t ___value__;
};
struct TaskCreationOptions_tB15CB42D61B8958640A7C702A79097B56D5C7ABA 
{
	int32_t ___value__;
};
struct VisitExceptionKind_t7E6C3EABD5439F2B4CA31C246B2AA4AC16A77DF5 
{
	int32_t ___value__;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder;
};
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder;
};
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	int32_t ____props;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE 
{
	int32_t ___U3CIgnoreExceptionsU3Ek__BackingField;
};
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107  : public MulticastDelegate_t
{
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticFields
{
	bool ___raiseExceptions;
};
struct AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields
{
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___TrueTask;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___FalseTask;
	Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8* ___Int32Tasks;
};
struct AttributeHelperEngine_t6B3D8969EF52C428F6DD05AB6A788FB43FD69520_StaticFields
{
	DisallowMultipleComponentU5BU5D_tEA69AEA10483E24EB99D75210593E7C9452FD283* ____disallowMultipleComponentArray;
	ExecuteInEditModeU5BU5D_t57196F1483600AD3B95D1452158E1E10864B12A2* ____executeInEditModeArray;
	RequireComponentU5BU5D_t29B8922A4CC605C50E015637033A7A4B0EF564E9* ____requireComponentArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	int32_t ___s_taskIdCounter;
	RuntimeObject* ___s_taskCompletionSentinel;
	bool ___s_asyncDebuggingEnabled;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback;
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties;
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField;
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate;
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback;
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate;
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks;
	RuntimeObject* ___s_activeTasksLock;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask;
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard;
};
struct MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E_StaticFields
{
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_invokeMoveNext;
};
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9_StaticFields
{
	TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D* ___s_defaultFactory;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_StaticFields
{
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_defaultResultTask;
};
struct AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4_StaticFields
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___s_defaultResultTask;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_GrowBy_TisIl2CppFullySharedGenericStruct_m3207ED244F78F91CC60669ABCD40E0A771259A83_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, int32_t ___1_count, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayHelpers_ContainsReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_m59D107BB44B8288769823B89C364E56B40A38C38_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_count, Il2CppSharedGenericObject* ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_IndexOfReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_m60416BEF0E8CE7F477DCE5190C46FE653FBF073F_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppSharedGenericObject* ___1_value, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_IndexOfReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_mCABB5666122B3A1059EE927F255C7CE0D63A2DD8_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppSharedGenericObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_DuplicateWithCapacity_TisIl2CppFullySharedGenericAny_m999C8490A8E2CEECDAD14B7C1D14306C87780B69_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_count, int32_t ___2_capacity, int32_t ___3_capacityIncrement, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_IndexOf_TisIl2CppFullySharedGenericAny_mA69C0EC67C2CED022FC1E530F4CEDD66405578E4_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_EraseAt_TisIl2CppFullySharedGenericAny_m825F0F2B3908C7DAA2F2B1BEB69DE9D2708BC23E_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_GrowBy_TisIl2CppFullySharedGenericAny_m66D71A6A77985EC6147CE145D53655DDE0D6B96E_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_fshared (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_EnsureCapacity_TisIl2CppFullySharedGenericAny_m6E67B3033A66A334BFE5A7E0B9D2C07CE296646E_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_count, int32_t ___2_capacity, int32_t ___3_capacityIncrement, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m44DED39FFEBC8F2ACF6162DB065B649E888B9C57_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0_1__ctor_mC44A3BA6167DEC9FB9BC98B780FEA04F563736E2_fshared (U3CU3Ec__DisplayClass33_0_1_tB6CF9727F3704623A7C8D43E9FEB20554021BFB3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m2B0279AF2950764FCBFEF3BC1BF616854B3EE3AC_fshared (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_m4D844228EBB80F1DFE1D49094731494B09C2B4E8_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_fshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_fshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_Swap_TisIl2CppFullySharedGenericAny_mFD6379496AFF06FEA77AE92F9F19FB56F34C7B2F_fshared (Il2CppFullySharedGenericAny* ___0_first, Il2CppFullySharedGenericAny* ___1_second, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_LengthSafe_TisIl2CppFullySharedGenericAny_mC6EB691A32F53AF8E73702B746EF72A5256E43C0_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1_Invoke_m35CBC166F464B8A1169583672025E6D64211856C_fshared (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_fshared (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, Il2CppFullySharedGenericAny ___0_arg, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryHelpers_Swap_TisIl2CppFullySharedGenericAny_m1715B6AE84465D838F0FE8BA00E5AA4DB2EBACC1_fshared (Il2CppFullySharedGenericAny* ___0_a, Il2CppFullySharedGenericAny* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreEqual_TisIl2CppFullySharedGenericAny_m0F394E700B5869B9BB20B6ED32461F1F56B870DA_fshared (Il2CppFullySharedGenericAny ___0_expected, Il2CppFullySharedGenericAny ___1_actual, String_t* ___2_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreEqual_TisIl2CppFullySharedGenericAny_m61C4BE5E4D8C4E643FEF0B1A04B51A9EC6636229_fshared (Il2CppFullySharedGenericAny ___0_expected, Il2CppFullySharedGenericAny ___1_actual, String_t* ___2_message, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreNotEqual_TisIl2CppFullySharedGenericAny_m7F2737935E00ECF8D9342F309CB63B21F5BE498B_fshared (Il2CppFullySharedGenericAny ___0_expected, Il2CppFullySharedGenericAny ___1_actual, String_t* ___2_message, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNotNull_TisIl2CppSharedGenericObject_m955F3178A0FAAAC07C8029B85CBDB4DE65AC0A61_gshared (Il2CppSharedGenericObject* ___0_value, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNull_TisIl2CppSharedGenericObject_m20BA4B8FF59E76850C490945432E7C0FD8F8D830_gshared (Il2CppSharedGenericObject* ___0_value, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mF395D7774F2ADB85151FF4EDD37C2A9FAB1001E3_fshared (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* __this, bool ___0_canceled, Il2CppFullySharedGenericAny ___1_result, int32_t ___2_creationOptions, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_ct, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0B984271E33D944D547FB29917733016C411E5EB_fshared (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, Il2CppFullySharedGenericAny* ___0_awaiter, Il2CppFullySharedGenericAny* ___1_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_m1B11483698339D3A0D40CD7247EE834DA473E24A_fshared (RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_fshared_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_fshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_fshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_fshared_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_fshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
inline void Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, const RuntimeMethod*))Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712_fshared)(___0_array, ___1_newSize, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
inline int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_fshared_inline)(__this, method);
}
inline int32_t ArrayHelpers_GrowBy_TisIl2CppFullySharedGenericStruct_m3207ED244F78F91CC60669ABCD40E0A771259A83 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, int32_t ___1_count, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, const RuntimeMethod*))ArrayHelpers_GrowBy_TisIl2CppFullySharedGenericStruct_m3207ED244F78F91CC60669ABCD40E0A771259A83_fshared)(___0_array, ___1_count, ___2_allocator, method);
}
inline void NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, Il2CppFullySharedGenericStruct, const RuntimeMethod*))NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_fshared_inline)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_fshared_inline)(method);
}
inline bool ArrayHelpers_ContainsReference_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_mDBD10B5D02BDEC69E575A2C75EFB3546AF92CC78 (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_count, Il2CppSharedGenericObject* ___2_value, const RuntimeMethod* method)
{
	return ((  bool (*) (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t, Il2CppSharedGenericObject*, const RuntimeMethod*))ArrayHelpers_ContainsReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_m59D107BB44B8288769823B89C364E56B40A38C38_fshared)(___0_array, ___1_count, ___2_value, method);
}
inline int32_t ArrayHelpers_IndexOfReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_m60416BEF0E8CE7F477DCE5190C46FE653FBF073F (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppSharedGenericObject* ___1_value, int32_t ___2_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppSharedGenericObject*, int32_t, const RuntimeMethod*))ArrayHelpers_IndexOfReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_m60416BEF0E8CE7F477DCE5190C46FE653FBF073F_fshared)(___0_array, ___1_value, ___2_count, method);
}
inline int32_t ArrayHelpers_IndexOfReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_mCABB5666122B3A1059EE927F255C7CE0D63A2DD8 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppSharedGenericObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppSharedGenericObject*, int32_t, int32_t, const RuntimeMethod*))ArrayHelpers_IndexOfReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_mCABB5666122B3A1059EE927F255C7CE0D63A2DD8_fshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___0_sourceArray, RuntimeArray* ___1_destinationArray, int32_t ___2_length, const RuntimeMethod* method) ;
inline void ArrayHelpers_DuplicateWithCapacity_TisIl2CppFullySharedGenericAny_m999C8490A8E2CEECDAD14B7C1D14306C87780B69 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_count, int32_t ___2_capacity, int32_t ___3_capacityIncrement, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, int32_t, int32_t, const RuntimeMethod*))ArrayHelpers_DuplicateWithCapacity_TisIl2CppFullySharedGenericAny_m999C8490A8E2CEECDAD14B7C1D14306C87780B69_fshared)(___0_array, ___1_count, ___2_capacity, ___3_capacityIncrement, method);
}
inline int32_t ArrayHelpers_IndexOf_TisIl2CppFullySharedGenericAny_mA69C0EC67C2CED022FC1E530F4CEDD66405578E4 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t, const RuntimeMethod*))ArrayHelpers_IndexOf_TisIl2CppFullySharedGenericAny_mA69C0EC67C2CED022FC1E530F4CEDD66405578E4_fshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void ArrayHelpers_EraseAt_TisIl2CppFullySharedGenericAny_m825F0F2B3908C7DAA2F2B1BEB69DE9D2708BC23E (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, const RuntimeMethod*))ArrayHelpers_EraseAt_TisIl2CppFullySharedGenericAny_m825F0F2B3908C7DAA2F2B1BEB69DE9D2708BC23E_fshared)(___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D (bool ___0_condition, const RuntimeMethod* method) ;
inline bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline)(__this, method);
}
inline int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_fshared_inline)(method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
inline void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_fshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline)(___0_nativeArray, method);
}
inline void NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80_fshared)(__this, method);
}
inline int32_t ArrayHelpers_GrowBy_TisIl2CppFullySharedGenericAny_m66D71A6A77985EC6147CE145D53655DDE0D6B96E (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, const RuntimeMethod*))ArrayHelpers_GrowBy_TisIl2CppFullySharedGenericAny_m66D71A6A77985EC6147CE145D53655DDE0D6B96E_fshared)(___0_array, ___1_count, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
inline bool Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1 (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_fshared)((Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*)__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void ArrayHelpers_EnsureCapacity_TisIl2CppFullySharedGenericAny_m6E67B3033A66A334BFE5A7E0B9D2C07CE296646E (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_count, int32_t ___2_capacity, int32_t ___3_capacityIncrement, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, int32_t, int32_t, const RuntimeMethod*))ArrayHelpers_EnsureCapacity_TisIl2CppFullySharedGenericAny_m6E67B3033A66A334BFE5A7E0B9D2C07CE296646E_fshared)(___0_array, ___1_count, ___2_capacity, ___3_capacityIncrement, method);
}
inline void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_fshared)(__this, method);
}
inline void List_1_AddRange_m44DED39FFEBC8F2ACF6162DB065B649E888B9C57 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m44DED39FFEBC8F2ACF6162DB065B649E888B9C57_fshared)(__this, ___0_collection, method);
}
inline void U3CU3Ec__DisplayClass33_0_1__ctor_mC44A3BA6167DEC9FB9BC98B780FEA04F563736E2 (U3CU3Ec__DisplayClass33_0_1_tB6CF9727F3704623A7C8D43E9FEB20554021BFB3* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ec__DisplayClass33_0_1_tB6CF9727F3704623A7C8D43E9FEB20554021BFB3*, const RuntimeMethod*))U3CU3Ec__DisplayClass33_0_1__ctor_mC44A3BA6167DEC9FB9BC98B780FEA04F563736E2_fshared)(__this, method);
}
inline void Predicate_1__ctor_m2B0279AF2950764FCBFEF3BC1BF616854B3EE3AC (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m2B0279AF2950764FCBFEF3BC1BF616854B3EE3AC_fshared)(__this, ___0_object, ___1_method, method);
}
inline bool List_1_Exists_m4D844228EBB80F1DFE1D49094731494B09C2B4E8 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, const RuntimeMethod*))List_1_Exists_m4D844228EBB80F1DFE1D49094731494B09C2B4E8_fshared)(__this, ___0_match, method);
}
inline void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_fshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_item, method);
}
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_fshared)(__this, method);
}
inline void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_fshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, il2cppRetVal, method);
}
inline void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_fshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, il2cppRetVal, method);
}
inline bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_fshared)(__this, method);
}
inline void ArrayHelpers_Swap_TisIl2CppFullySharedGenericAny_mFD6379496AFF06FEA77AE92F9F19FB56F34C7B2F (Il2CppFullySharedGenericAny* ___0_first, Il2CppFullySharedGenericAny* ___1_second, const RuntimeMethod* method)
{
	((  void (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))ArrayHelpers_Swap_TisIl2CppFullySharedGenericAny_mFD6379496AFF06FEA77AE92F9F19FB56F34C7B2F_fshared)(___0_first, ___1_second, method);
}
inline int32_t ArrayHelpers_LengthSafe_TisIl2CppFullySharedGenericAny_mC6EB691A32F53AF8E73702B746EF72A5256E43C0 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))ArrayHelpers_LengthSafe_TisIl2CppFullySharedGenericAny_mC6EB691A32F53AF8E73702B746EF72A5256E43C0_fshared)(___0_array, method);
}
inline void Func_1_Invoke_m35CBC166F464B8A1169583672025E6D64211856C (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Func_1_Invoke_m35CBC166F464B8A1169583672025E6D64211856C_fshared)((Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*)__this, il2cppRetVal, method);
}
inline void Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, Il2CppFullySharedGenericAny ___0_arg, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_fshared)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___0_arg, il2cppRetVal, method);
}
inline void NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_fshared_inline)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, ___0_index, il2cppRetVal, method);
}
inline void MemoryHelpers_Swap_TisIl2CppFullySharedGenericAny_m1715B6AE84465D838F0FE8BA00E5AA4DB2EBACC1 (Il2CppFullySharedGenericAny* ___0_a, Il2CppFullySharedGenericAny* ___1_b, const RuntimeMethod* method)
{
	((  void (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))MemoryHelpers_Swap_TisIl2CppFullySharedGenericAny_m1715B6AE84465D838F0FE8BA00E5AA4DB2EBACC1_fshared)(___0_a, ___1_b, method);
}
inline void Assert_AreEqual_TisIl2CppFullySharedGenericAny_m0F394E700B5869B9BB20B6ED32461F1F56B870DA (Il2CppFullySharedGenericAny ___0_expected, Il2CppFullySharedGenericAny ___1_actual, String_t* ___2_message, const RuntimeMethod* method)
{
	((  void (*) (Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, String_t*, const RuntimeMethod*))Assert_AreEqual_TisIl2CppFullySharedGenericAny_m0F394E700B5869B9BB20B6ED32461F1F56B870DA_fshared)(___0_expected, ___1_actual, ___2_message, method);
}
inline void Assert_AreEqual_TisIl2CppFullySharedGenericAny_m61C4BE5E4D8C4E643FEF0B1A04B51A9EC6636229 (Il2CppFullySharedGenericAny ___0_expected, Il2CppFullySharedGenericAny ___1_actual, String_t* ___2_message, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, String_t*, RuntimeObject*, const RuntimeMethod*))Assert_AreEqual_TisIl2CppFullySharedGenericAny_m61C4BE5E4D8C4E643FEF0B1A04B51A9EC6636229_fshared)(___0_expected, ___1_actual, ___2_message, ___3_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreEqual_mA4CD725133015119B0219ABAA6337650814B803B (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_expected, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_actual, String_t* ___2_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssertionMessageUtil_GetEqualityMessage_m64D77BB9CA4284DD9561C238BB1F97B566830DBB (RuntimeObject* ___0_actual, RuntimeObject* ___1_expected, bool ___2_expectEqual, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA (String_t* ___0_message, String_t* ___1_userMessage, const RuntimeMethod* method) ;
inline void Assert_AreNotEqual_TisIl2CppFullySharedGenericAny_m7F2737935E00ECF8D9342F309CB63B21F5BE498B (Il2CppFullySharedGenericAny ___0_expected, Il2CppFullySharedGenericAny ___1_actual, String_t* ___2_message, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, String_t*, RuntimeObject*, const RuntimeMethod*))Assert_AreNotEqual_TisIl2CppFullySharedGenericAny_m7F2737935E00ECF8D9342F309CB63B21F5BE498B_fshared)(___0_expected, ___1_actual, ___2_message, ___3_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreNotEqual_m4E953971244A0BEACD42190612093ACC87C1A26F (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_expected, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_actual, String_t* ___2_message, const RuntimeMethod* method) ;
inline void Assert_IsNotNull_TisIl2CppSharedGenericObject_m955F3178A0FAAAC07C8029B85CBDB4DE65AC0A61 (Il2CppSharedGenericObject* ___0_value, String_t* ___1_message, const RuntimeMethod* method)
{
	((  void (*) (Il2CppSharedGenericObject*, String_t*, const RuntimeMethod*))Assert_IsNotNull_TisIl2CppSharedGenericObject_m955F3178A0FAAAC07C8029B85CBDB4DE65AC0A61_gshared)(___0_value, ___1_message, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNotNull_mB889D13B7935F20A9CE32629C00434099E30D931 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_value, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssertionMessageUtil_NullFailureMessage_mECBDB36C0C5433898BC4D3CF0AE55CEFBBCC9A50 (RuntimeObject* ___0_value, bool ___1_expectNull, const RuntimeMethod* method) ;
inline void Assert_IsNull_TisIl2CppSharedGenericObject_m20BA4B8FF59E76850C490945432E7C0FD8F8D830 (Il2CppSharedGenericObject* ___0_value, String_t* ___1_message, const RuntimeMethod* method)
{
	((  void (*) (Il2CppSharedGenericObject*, String_t*, const RuntimeMethod*))Assert_IsNull_TisIl2CppSharedGenericObject_m20BA4B8FF59E76850C490945432E7C0FD8F8D830_gshared)(___0_value, ___1_message, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNull_mB7DAD5AA378E4A36BC1D27B88CFADD31023530BB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_value, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* AssetBundle_LoadAsset_m021FE0B52DD660E54AE4C225D9AE66147902B8FE (AssetBundle_tB38418819A49060CD738CB21541649340F082943* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncGPUReadbackRequest_get_done_mC042016E5BE850F18995831CBB4F06655914798C (AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncGPUReadbackRequest_get_hasError_m374BB20A32B9DCDBFD8F81BBE542847B82F04EE5 (AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncGPUReadbackRequest_get_layerCount_m70DE577E87B38E6621851F88542E252123147501 (AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AsyncGPUReadbackRequest_GetDataRaw_m73EA05E0647ED7BCB73E95C3C3E73F9C0B2F963C (AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7* __this, int32_t ___0_layer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncGPUReadbackRequest_get_layerDataSize_mCAE8CCE76C830532015EFC47D062917900DB749B (AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7* __this, const RuntimeMethod* method) ;
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline void Task_1__ctor_mF395D7774F2ADB85151FF4EDD37C2A9FAB1001E3 (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* __this, bool ___0_canceled, Il2CppFullySharedGenericAny ___1_result, int32_t ___2_creationOptions, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_ct, const RuntimeMethod* method)
{
	((  void (*) (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, bool, Il2CppFullySharedGenericAny, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))Task_1__ctor_mF395D7774F2ADB85151FF4EDD37C2A9FAB1001E3_fshared)((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)__this, ___0_canceled, ___1_result, ___2_creationOptions, ___3_ct, method);
}
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m39A3830208CA3BE2081EDF44D100C5DFE73C1B6C (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, Il2CppFullySharedGenericAny* ___0_awaiter, Il2CppFullySharedGenericAny* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0B984271E33D944D547FB29917733016C411E5EB_fshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_PrepareConstrainedRegions_mE852B0F834DB13A23B1CB04B359F81734FBB592C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContextSwitcher_Undo_m683D21973AF9E2E19D0662BBC9F266D79EC53886 (ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_EstablishCopyOnWriteScope_mE8BF2610B2AD4835A14D4FF78E16B8E132C4E759 (ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708* ___0_ecsw, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncVoidMethodBuilder_get_Task_m229538FE6AE7089FA46E87C5720256A0CC727B8F (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* AsyncMethodBuilderCore_GetCompletionAction_mC8FA54136A05CD45BA09560748F864AF93DDFDFD (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_taskForTracing, MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E** ___1_runnerToInitialize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void AsyncCausalityTracer_TraceOperationCreation_m3C51C98DC960894FD740429D1A9BBC209FB65A8F (int32_t ___0_traceLevel, int32_t ___1_taskId, String_t* ___2_operationName, uint64_t ___3_relatedContext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncMethodBuilderCore_PostBoxInitialization_mB531930E3F2FE5A9D31E4233429FAD0AFA6E8E9A (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* __this, RuntimeObject* ___0_stateMachine, MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* ___1_runner, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___2_builtTask, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncMethodBuilderCore_ThrowAsync_m07C1067BBFF7C572C5DCEBD96C7327D94DE67330 (Exception_t* ___0_exception, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___1_targetContext, const RuntimeMethod* method) ;
inline bool PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_m1B11483698339D3A0D40CD7247EE834DA473E24A (RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Il2CppFullySharedGenericAny*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_m1B11483698339D3A0D40CD7247EE834DA473E24A_fshared)(___0_visitor, ___1_container, ___2_parameters, method);
}
inline void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericStruct ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_fshared_inline)(___0_destination, ___1_index, (Il2CppFullySharedGenericAny)___2_value, method);
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_fshared)(method);
}
inline int32_t UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_fshared_inline)(method);
}
inline void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_fshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_item, method);
}
inline void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_fshared_inline)(___0_source, ___1_index, il2cppRetVal, method);
}
inline void UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_fshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_fshared_inline)(___0_source, ___1_index, il2cppRetVal, method);
}
// Method Definition Index: 34279
// Method Definition Index: 34279
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_AppendListWithCapacity_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m1CBB5582C50CB34DDEE37258F6C470B7B18046E4_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t* ___1_length, Il2CppFullySharedGenericAny ___2_values, int32_t ___3_capacityIncrement, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_0 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	void* L_18 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_TValue_tB5631509E96AF7BE84071B21AF51F9E9E4C71205 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 6));
	void* L_53 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TValue_tB5631509E96AF7BE84071B21AF51F9E9E4C71205);
	const Il2CppFullySharedGenericAny L_56 = L_21;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_length), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_values : &___2_values), (&___3_capacityIncrement));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_4), (&V_5), (&V_9));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76722));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76723));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76724));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:343>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76725));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76726));
		Il2CppConstrainedCallData L_1;
		Il2CppMethodPointer L_2 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 1), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_values : &___2_values), &L_1, L_0);
		typedef int32_t ( *func_L_3)(void*,const RuntimeMethod*);
		int32_t L_4 = ((func_L_3)L_2)(L_1.thisPtr,L_1.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76726));
		V_0 = L_4;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:344>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76727));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_5 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_5);
		V_3 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76728));
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0064;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76729));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:346>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76730));
		int32_t L_8 = V_0;
		int32_t L_9 = ___3_capacityIncrement;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76731));
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_10;
		L_10 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_8, L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76731));
		V_4 = L_10;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:347>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76732));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_11 = ___0_array;
		int32_t L_12 = V_4;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 3), (uint32_t)L_12);
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_11, (RuntimeObject*)L_13);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_11, (void*)(RuntimeObject*)L_13);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:348>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76733));
		V_5 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76734));
		goto IL_004e;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:349>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76735));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_14 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_14);
		int32_t L_16 = V_5;
		int32_t L_17 = V_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76736));
		Il2CppConstrainedCallData L_19;
		Il2CppMethodPointer L_20 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_values : &___2_values), &L_19, L_18);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(L_20, L_19.method,L_19.thisPtr, L_17,(Il2CppFullySharedGenericAny*)L_21);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76736));
		NullCheck(L_15);
		il2cpp_codegen_memcpy((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)), L_21, SizeOf_TValue_tB5631509E96AF7BE84071B21AF51F9E9E4C71205);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)), (void*)L_21);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:348>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76737));
		int32_t L_22 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_004e:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:348>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76738));
		int32_t L_23 = V_5;
		int32_t L_24 = V_0;
		V_6 = (bool)((((int32_t)L_23) < ((int32_t)L_24))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76739));
		bool L_25 = V_6;
		if (L_25)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:350>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76740));
		int32_t* L_26 = ___1_length;
		int32_t* L_27 = ___1_length;
		int32_t L_28 = il2cpp_codegen_ldind<int32_t, int32_t>(L_27);
		int32_t L_29 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_26, (int32_t)((int32_t)il2cpp_codegen_add(L_28, L_29)));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:351>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76741));
		V_7 = 0;
		goto IL_00cb;
	}

IL_0064:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:354>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76742));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_30 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_31 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_30);
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		V_1 = L_32;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:355>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76743));
		int32_t L_33 = V_1;
		int32_t* L_34 = ___1_length;
		int32_t L_35 = il2cpp_codegen_ldind<int32_t, int32_t>(L_34);
		int32_t L_36 = V_0;
		V_8 = (bool)((((int32_t)L_33) < ((int32_t)((int32_t)il2cpp_codegen_add(L_35, L_36))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76744));
		bool L_37 = V_8;
		if (!L_37)
		{
			goto IL_008d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76745));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:357>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76746));
		int32_t L_38 = V_1;
		int32_t* L_39 = ___1_length;
		int32_t L_40 = il2cpp_codegen_ldind<int32_t, int32_t>(L_39);
		int32_t L_41 = V_0;
		int32_t L_42 = ___3_capacityIncrement;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76747));
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_43;
		L_43 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)il2cpp_codegen_add(L_40, L_41)), L_42, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76747));
		V_1 = ((int32_t)il2cpp_codegen_add(L_38, L_43));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:358>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76748));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_44 = ___0_array;
		int32_t L_45 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76749));
		Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712(L_44, L_45, il2cpp_rgctx_method(method->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76749));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76750));
	}

IL_008d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:361>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76751));
		int32_t* L_46 = ___1_length;
		int32_t L_47 = il2cpp_codegen_ldind<int32_t, int32_t>(L_46);
		V_2 = L_47;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:362>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76752));
		V_9 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76753));
		goto IL_00b5;
	}

IL_0095:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:363>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76754));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_48 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_49 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_48);
		int32_t L_50 = V_2;
		int32_t L_51 = V_9;
		int32_t L_52 = V_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76755));
		Il2CppConstrainedCallData L_54;
		Il2CppMethodPointer L_55 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_values : &___2_values), &L_54, L_53);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(L_55, L_54.method,L_54.thisPtr, L_52,(Il2CppFullySharedGenericAny*)L_56);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76755));
		NullCheck(L_49);
		il2cpp_codegen_memcpy((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_50, L_51)))), L_56, SizeOf_TValue_tB5631509E96AF7BE84071B21AF51F9E9E4C71205);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_50, L_51)))), (void*)L_56);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:362>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76756));
		int32_t L_57 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_00b5:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:362>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76757));
		int32_t L_58 = V_9;
		int32_t L_59 = V_0;
		V_10 = (bool)((((int32_t)L_58) < ((int32_t)L_59))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76758));
		bool L_60 = V_10;
		if (L_60)
		{
			goto IL_0095;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:364>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76759));
		int32_t* L_61 = ___1_length;
		int32_t* L_62 = ___1_length;
		int32_t L_63 = il2cpp_codegen_ldind<int32_t, int32_t>(L_62);
		int32_t L_64 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_61, (int32_t)((int32_t)il2cpp_codegen_add(L_63, L_64)));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:366>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76760));
		int32_t L_65 = V_2;
		V_7 = L_65;
		goto IL_00cb;
	}

IL_00cb:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:367>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76761));
		int32_t L_66 = V_7;
		return L_66;
	}
}
// Method Definition Index: 34277
// Method Definition Index: 34277
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_AppendToImmutable_TisIl2CppFullySharedGenericAny_m375667A970431E381B0E7BE7293D1B350E147A5A_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_values));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76679));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76680));
	int32_t G_B5_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76681));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:298>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76682));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_0);
		V_0 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76683));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76684));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:300>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76685));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_3 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___1_values;
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_3, (RuntimeObject*)L_4);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_4);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:301>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76686));
		V_1 = 0;
		goto IL_004f;
	}

IL_0012:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:304>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76687));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___1_values;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___1_values;
		NullCheck(L_6);
		G_B5_0 = ((!(((uint64_t)(((RuntimeArray*)L_6)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B5_0 = 0;
	}

IL_001d:
	{
		V_2 = (bool)G_B5_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76688));
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76689));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:306>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76690));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_8 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_8);
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		V_3 = L_10;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:307>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76691));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___1_values;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		V_4 = L_12;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:308>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76692));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_13 = ___0_array;
		int32_t L_14 = V_3;
		int32_t L_15 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76693));
		Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712(L_13, ((int32_t)il2cpp_codegen_add(L_14, L_15)), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76693));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:309>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76694));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = ___1_values;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_17 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_17);
		int32_t L_19 = V_3;
		int32_t L_20 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76695));
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_18, L_19, L_20, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76695));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:310>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76696));
		int32_t L_21 = V_3;
		V_1 = L_21;
		goto IL_004f;
	}

IL_0048:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:313>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76697));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_22 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_22);
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		V_1 = L_24;
		goto IL_004f;
	}

IL_004f:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:314>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76698));
		int32_t L_25 = V_1;
		return L_25;
	}
}
// Method Definition Index: 34278
// Method Definition Index: 34278
// Method Definition Index: 34278
// Method Definition Index: 34278
// Method Definition Index: 34278
// Method Definition Index: 34278
// Method Definition Index: 34278
// Method Definition Index: 34278
// Method Definition Index: 34278
// Method Definition Index: 34278
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_AppendWithCapacity_TisIl2CppFullySharedGenericAny_m9F7345A47A2A570DC1D4E1EB2FB6EE86F5323295_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t* ___1_count, Il2CppFullySharedGenericAny ___2_value, int32_t ___3_capacityIncrement, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t7AF967B9C4841147C2CE4DFE5FFFC150FC708DAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TValue_t7AF967B9C4841147C2CE4DFE5FFFC150FC708DAB);
	const Il2CppFullySharedGenericAny L_28 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_count), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_value : &___2_value), (&___3_capacityIncrement));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76699));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76700));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76701));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:318>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76702));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_0);
		V_2 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76703));
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76704));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:320>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76705));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_3 = ___0_array;
		int32_t L_4 = ___3_capacityIncrement;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_4);
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_3, (RuntimeObject*)L_5);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_5);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:321>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76706));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_6 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_6);
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_value : &___2_value), SizeOf_TValue_t7AF967B9C4841147C2CE4DFE5FFFC150FC708DAB);
		NullCheck(L_7);
		il2cpp_codegen_memcpy((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)), L_8, SizeOf_TValue_t7AF967B9C4841147C2CE4DFE5FFFC150FC708DAB);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)), (void*)L_8);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:322>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76707));
		int32_t* L_9 = ___1_count;
		int32_t* L_10 = ___1_count;
		int32_t L_11 = il2cpp_codegen_ldind<int32_t, int32_t>(L_10);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_9, (int32_t)((int32_t)il2cpp_codegen_add(L_11, 1)));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:323>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76708));
		V_3 = 0;
		goto IL_005a;
	}

IL_0026:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:326>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76709));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_12 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_12);
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		V_0 = L_14;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:327>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76710));
		int32_t L_15 = V_0;
		int32_t* L_16 = ___1_count;
		int32_t L_17 = il2cpp_codegen_ldind<int32_t, int32_t>(L_16);
		V_4 = (bool)((((int32_t)L_15) == ((int32_t)L_17))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76711));
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0044;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76712));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:329>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76713));
		int32_t L_19 = V_0;
		int32_t L_20 = ___3_capacityIncrement;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, L_20));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:330>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76714));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_21 = ___0_array;
		int32_t L_22 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76715));
		Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712(L_21, L_22, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76715));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76716));
	}

IL_0044:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:333>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76717));
		int32_t* L_23 = ___1_count;
		int32_t L_24 = il2cpp_codegen_ldind<int32_t, int32_t>(L_23);
		V_1 = L_24;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:334>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76718));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_25 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_25);
		int32_t L_27 = V_1;
		il2cpp_codegen_memcpy(L_28, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_value : &___2_value), SizeOf_TValue_t7AF967B9C4841147C2CE4DFE5FFFC150FC708DAB);
		NullCheck(L_26);
		il2cpp_codegen_memcpy((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)), L_28, SizeOf_TValue_t7AF967B9C4841147C2CE4DFE5FFFC150FC708DAB);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)), (void*)L_28);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:335>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76719));
		int32_t* L_29 = ___1_count;
		int32_t* L_30 = ___1_count;
		int32_t L_31 = il2cpp_codegen_ldind<int32_t, int32_t>(L_30);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_29, (int32_t)((int32_t)il2cpp_codegen_add(L_31, 1)));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:337>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76720));
		int32_t L_32 = V_1;
		V_3 = L_32;
		goto IL_005a;
	}

IL_005a:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:338>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76721));
		int32_t L_33 = V_3;
		return L_33;
	}
}
// Method Definition Index: 34278
// Method Definition Index: 34278
// Method Definition Index: 34278
// Method Definition Index: 34278
// Method Definition Index: 34278
// Method Definition Index: 34278
// Method Definition Index: 34278
// Method Definition Index: 34278
// Method Definition Index: 34278
// Method Definition Index: 34280
// Method Definition Index: 34280
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_AppendWithCapacity_TisIl2CppFullySharedGenericStruct_m3CE052066E241AAEA49347EE03362D788D2C4AB9_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, int32_t* ___1_count, Il2CppFullySharedGenericStruct ___2_value, int32_t ___3_capacityIncrement, int32_t ___4_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tCAC4A327282A169606A0AE13B9148994A3D89E0F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_15 = alloca(SizeOf_TValue_tCAC4A327282A169606A0AE13B9148994A3D89E0F);
	const Il2CppFullySharedGenericStruct L_16 = alloca(SizeOf_TValue_tCAC4A327282A169606A0AE13B9148994A3D89E0F);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_count), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___2_value : &___2_value), (&___3_capacityIncrement), (&___4_allocator));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76762));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76763));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* G_B3_0 = NULL;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* G_B4_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76764));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:373>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76765));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76766));
		int32_t L_1;
		L_1 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76766));
		V_0 = L_1;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:374>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76767));
		int32_t L_2 = V_0;
		int32_t* L_3 = ___1_count;
		int32_t L_4 = il2cpp_codegen_ldind<int32_t, int32_t>(L_3);
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)L_4))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76768));
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:375>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76769));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_6 = ___0_array;
		int32_t L_7 = ___3_capacityIncrement;
		if ((((int32_t)L_7) > ((int32_t)1)))
		{
			G_B3_0 = L_6;
			goto IL_0019;
		}
		G_B2_0 = L_6;
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_001a;
	}

IL_0019:
	{
		int32_t L_8 = ___3_capacityIncrement;
		G_B4_0 = L_8;
		G_B4_1 = G_B3_0;
	}

IL_001a:
	{
		int32_t L_9 = ___4_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76770));
		int32_t L_10;
		L_10 = ArrayHelpers_GrowBy_TisIl2CppFullySharedGenericStruct_m3207ED244F78F91CC60669ABCD40E0A771259A83(G_B4_1, G_B4_0, L_9, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76770));
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:377>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76771));
		int32_t* L_11 = ___1_count;
		int32_t L_12 = il2cpp_codegen_ldind<int32_t, int32_t>(L_11);
		V_1 = L_12;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:378>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76772));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_13 = ___0_array;
		int32_t L_14 = V_1;
		il2cpp_codegen_memcpy(L_15, ___2_value, SizeOf_TValue_tCAC4A327282A169606A0AE13B9148994A3D89E0F);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76773));
		NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline(L_13, L_14, il2cpp_codegen_memcpy(L_16, L_15, SizeOf_TValue_tCAC4A327282A169606A0AE13B9148994A3D89E0F), il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76773));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:379>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76774));
		int32_t* L_17 = ___1_count;
		int32_t* L_18 = ___1_count;
		int32_t L_19 = il2cpp_codegen_ldind<int32_t, int32_t>(L_18);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_17, (int32_t)((int32_t)il2cpp_codegen_add(L_19, 1)));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:381>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76775));
		int32_t L_20 = V_1;
		V_3 = L_20;
		goto IL_0038;
	}

IL_0038:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:382>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76776));
		int32_t L_21 = V_3;
		return L_21;
	}
}
// Method Definition Index: 34257
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_Clear_TisIl2CppFullySharedGenericAny_mDA6E66CD9C546C5DA0D4FA723AFC9DFAC98A2C8F_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76345));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76346));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76347));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:27>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76348));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		V_0 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76349));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:28>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76350));
		goto IL_0016;
	}

IL_000b:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:30>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76351));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76352));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76352));
	}

IL_0016:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:31>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76353));
		return;
	}
}
// Method Definition Index: 34259
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_Clear_TisIl2CppFullySharedGenericAny_mC1E55A958C784C58A9AE19B6B44EDCCF352B721D_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t* ___1_count, const RuntimeMethod* method) 
{
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_count));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76363));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76364));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76365));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:42>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76366));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		V_0 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76367));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:43>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76368));
		goto IL_0018;
	}

IL_000b:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:45>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76369));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		int32_t* L_3 = ___1_count;
		int32_t L_4 = il2cpp_codegen_ldind<int32_t, int32_t>(L_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76370));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76370));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:46>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76371));
		int32_t* L_5 = ___1_count;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_5, (int32_t)0);
	}

IL_0018:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:47>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76372));
		return;
	}
}
// Method Definition Index: 34258
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_Clear_TisIl2CppFullySharedGenericAny_mE9C1C3D5BC54AB4710B0F74FEF64EEAE839BD8C7_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_count, const RuntimeMethod* method) 
{
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_count));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76354));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76355));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76356));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:35>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76357));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		V_0 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76358));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:36>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76359));
		goto IL_0014;
	}

IL_000b:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:37>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76360));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		int32_t L_3 = ___1_count;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76361));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76361));
	}

IL_0014:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:38>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76362));
		return;
	}
}
// Method Definition Index: 34258
// Method Definition Index: 34297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArrayHelpers_Clone_TisIl2CppFullySharedGenericAny_m80EBB3D969F52B3357D325636834E5535503D374_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const uint32_t SizeOf_TValue_tF57DE14787C0C68EFD323EE3734435355FCF770C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_TValue_tF57DE14787C0C68EFD323EE3734435355FCF770C);
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	bool V_2 = false;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77109));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77110));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77111));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:681>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77112));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		V_2 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77113));
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:682>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77114));
		V_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
		goto IL_0054;
	}

IL_000d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:684>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77115));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_0 = L_3;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:685>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77116));
		int32_t L_4 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_4);
		V_1 = L_5;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:687>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77117));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77118));
		goto IL_0045;
	}

IL_001d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:688>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77119));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_1;
		int32_t L_7 = V_4;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77120));
		Il2CppConstrainedCallData L_11;
		Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)((Il2CppFullySharedGenericAny*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), &L_11, L_10);
		typedef RuntimeObject* ( *func_L_13)(void*,const RuntimeMethod*);
		RuntimeObject* L_14 = ((func_L_13)L_12)(L_11.thisPtr,L_11.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77120));
		void* L_16 = UnBox_Any(L_14, il2cpp_rgctx_data(method->rgctx_data, 1), L_15);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_16)), SizeOf_TValue_tF57DE14787C0C68EFD323EE3734435355FCF770C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_16)));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:687>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77121));
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0045:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:687>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77122));
		int32_t L_18 = V_4;
		int32_t L_19 = V_0;
		V_5 = (bool)((((int32_t)L_18) < ((int32_t)L_19))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77123));
		bool L_20 = V_5;
		if (L_20)
		{
			goto IL_001d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:690>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77124));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = V_1;
		V_3 = L_21;
		goto IL_0054;
	}

IL_0054:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:691>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77125));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = V_3;
		return L_22;
	}
}
// Method Definition Index: 34262
// Method Definition Index: 34262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayHelpers_Contains_TisIl2CppFullySharedGenericAny_mA89DDF88A042F73DC9EC069A84D326CD062820FE_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t5D217D1CF3A1C3582D89863D1A28E7517C30C0C2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t5D217D1CF3A1C3582D89863D1A28E7517C30C0C2);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TValue_t5D217D1CF3A1C3582D89863D1A28E7517C30C0C2);
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76408));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76409));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76410));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:83>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76411));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		V_1 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76412));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:84>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76413));
		V_2 = (bool)0;
		goto IL_0043;
	}

IL_000d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:86>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76414));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76415));
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_2;
		L_2 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76415));
		V_0 = L_2;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:87>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76416));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76417));
		goto IL_0033;
	}

IL_0017:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:88>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76418));
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_TValue_t5D217D1CF3A1C3582D89863D1A28E7517C30C0C2);
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_TValue_t5D217D1CF3A1C3582D89863D1A28E7517C30C0C2);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76419));
		NullCheck(L_3);
		bool L_9;
		L_9 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_8: *(void**)L_8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76419));
		V_4 = L_9;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76420));
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_002f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:89>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76421));
		V_2 = (bool)1;
		goto IL_0043;
	}

IL_002f:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:87>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76422));
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0033:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:87>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76423));
		int32_t L_12 = V_3;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		V_5 = (bool)((((int32_t)L_12) < ((int32_t)L_14))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76424));
		bool L_15 = V_5;
		if (L_15)
		{
			goto IL_0017;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:91>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76425));
		V_2 = (bool)0;
		goto IL_0043;
	}

IL_0043:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:92>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76426));
		bool L_16 = V_2;
		return L_16;
	}
}
// Method Definition Index: 34263
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayHelpers_ContainsReference_TisIl2CppSharedGenericObject_m1BE5049CCBA2A9B3143293082C4202BBF5F6D1A3_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76427));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76428));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76429));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:97>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76430));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ___0_array;
		V_0 = (bool)((((RuntimeObject*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76431));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:98>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76432));
		V_1 = (bool)0;
		goto IL_001a;
	}

IL_000d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:100>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76433));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_2 = ___0_array;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		Il2CppSharedGenericObject* L_5 = ___1_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76434));
		bool L_6;
		L_6 = ArrayHelpers_ContainsReference_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_mDBD10B5D02BDEC69E575A2C75EFB3546AF92CC78(L_2, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76434));
		V_1 = L_6;
		goto IL_001a;
	}

IL_001a:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:101>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76435));
		bool L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 34264
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayHelpers_ContainsReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_m59D107BB44B8288769823B89C364E56B40A38C38_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_count, Il2CppSharedGenericObject* ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_count), (&___2_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76436));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76437));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76438));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:107>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76439));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		Il2CppSharedGenericObject* L_1 = ___2_value;
		int32_t L_2 = ___1_count;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76440));
		int32_t L_3;
		L_3 = ArrayHelpers_IndexOfReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_m60416BEF0E8CE7F477DCE5190C46FE653FBF073F(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76440));
		V_0 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:108>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76441));
		bool L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 34265
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayHelpers_ContainsReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_mB0F6455D7B14D5C3C04474462BA6956A6307603C_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_startIndex, int32_t ___2_count, Il2CppSharedGenericObject* ___3_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_startIndex), (&___2_count), (&___3_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76442));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76443));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76444));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:114>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76445));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		Il2CppSharedGenericObject* L_1 = ___3_value;
		int32_t L_2 = ___1_startIndex;
		int32_t L_3 = ___2_count;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76446));
		int32_t L_4;
		L_4 = ArrayHelpers_IndexOfReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_mCABB5666122B3A1059EE927F255C7CE0D63A2DD8(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76446));
		V_0 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0013:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:115>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76447));
		bool L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 34296
// Method Definition Index: 34296
// Method Definition Index: 34296
// Method Definition Index: 34296
// Method Definition Index: 34296
// Method Definition Index: 34296
// Method Definition Index: 34296
// Method Definition Index: 34296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArrayHelpers_Copy_TisIl2CppFullySharedGenericAny_mCBAFE4FAA00288B66F1CCF0385F38023009DFF0F_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	bool V_2 = false;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_3 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77097));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77098));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77099));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:669>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77100));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		V_2 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77101));
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:670>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77102));
		V_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
		goto IL_0025;
	}

IL_000d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:672>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77103));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_0 = L_3;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:673>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77104));
		int32_t L_4 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_4);
		V_1 = L_5;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:674>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77105));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = V_1;
		int32_t L_8 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77106));
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_6, (RuntimeArray*)L_7, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77106));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:675>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77107));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = V_1;
		V_3 = L_9;
		goto IL_0025;
	}

IL_0025:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:676>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77108));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = V_3;
		return L_10;
	}
}
// Method Definition Index: 34296
// Method Definition Index: 34296
// Method Definition Index: 34296
// Method Definition Index: 34261
// Method Definition Index: 34261
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_DuplicateWithCapacity_TisIl2CppFullySharedGenericAny_m999C8490A8E2CEECDAD14B7C1D14306C87780B69_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_count, int32_t ___2_capacity, int32_t ___3_capacityIncrement, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	bool V_2 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_count), (&___2_capacity), (&___3_capacityIncrement));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76392));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76393));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76394));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:69>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76395));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_0);
		V_2 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76396));
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76397));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:71>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76398));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_3 = ___0_array;
		int32_t L_4 = ___2_capacity;
		int32_t L_5 = ___3_capacityIncrement;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76399));
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_6;
		L_6 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76399));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_6);
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_3, (RuntimeObject*)L_7);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:72>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76400));
		goto IL_0039;
	}

IL_001b:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:75>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76401));
		int32_t L_8 = ___1_count;
		int32_t L_9 = ___2_capacity;
		int32_t L_10 = ___3_capacityIncrement;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76402));
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_9, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76402));
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, L_11));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:76>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76403));
		int32_t L_12 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_12);
		V_1 = L_13;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:77>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76404));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_14 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_14);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = V_1;
		int32_t L_17 = ___1_count;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76405));
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_15, (RuntimeArray*)L_16, L_17, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76405));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:78>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76406));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_18 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = V_1;
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_18, (RuntimeObject*)L_19);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_18, (void*)(RuntimeObject*)L_19);
	}

IL_0039:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:79>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76407));
		return;
	}
}
// Method Definition Index: 34260
// Method Definition Index: 34260
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_EnsureCapacity_TisIl2CppFullySharedGenericAny_m6E67B3033A66A334BFE5A7E0B9D2C07CE296646E_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_count, int32_t ___2_capacity, int32_t ___3_capacityIncrement, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_count), (&___2_capacity), (&___3_capacityIncrement));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76373));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76374));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76375));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:51>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76376));
		int32_t L_0 = ___2_capacity;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76377));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:52>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76378));
		goto IL_0043;
	}

IL_000b:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:54>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76379));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_2 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_2);
		V_2 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76380));
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76381));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:56>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76382));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_5 = ___0_array;
		int32_t L_6 = ___2_capacity;
		int32_t L_7 = ___3_capacityIncrement;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76383));
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_8;
		L_8 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_6, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76383));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_8);
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_5, (RuntimeObject*)L_9);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_9);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:57>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76384));
		goto IL_0043;
	}

IL_0025:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:60>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76385));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_10 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_10);
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, L_13));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:61>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76386));
		int32_t L_14 = V_0;
		int32_t L_15 = ___2_capacity;
		V_3 = (bool)((((int32_t)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76387));
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0039;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:62>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76388));
		goto IL_0043;
	}

IL_0039:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:64>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76389));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_17 = ___0_array;
		int32_t L_18 = ___1_count;
		int32_t L_19 = ___2_capacity;
		int32_t L_20 = ___3_capacityIncrement;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76390));
		ArrayHelpers_DuplicateWithCapacity_TisIl2CppFullySharedGenericAny_m999C8490A8E2CEECDAD14B7C1D14306C87780B69(L_17, L_18, L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76390));
	}

IL_0043:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:65>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76391));
		return;
	}
}
// Method Definition Index: 34294
// Method Definition Index: 34294
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayHelpers_Erase_TisIl2CppFullySharedGenericAny_m38A0CF397A3D61CE43AA04317DFC9380FDAFFB90_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t08BF9978BD85DA97D8C39D83FB777D1706C5865F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t08BF9978BD85DA97D8C39D83FB777D1706C5865F);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_t08BF9978BD85DA97D8C39D83FB777D1706C5865F);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77065));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77066));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77067));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:630>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77068));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_0);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_TValue_t08BF9978BD85DA97D8C39D83FB777D1706C5865F);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77069));
		int32_t L_4;
		L_4 = ArrayHelpers_IndexOf_TisIl2CppFullySharedGenericAny_mA69C0EC67C2CED022FC1E530F4CEDD66405578E4(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_3, L_2, SizeOf_TValue_t08BF9978BD85DA97D8C39D83FB777D1706C5865F): *(void**)L_2), 0, (-1), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77069));
		V_0 = L_4;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:631>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77070));
		int32_t L_5 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77071));
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77072));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:633>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77073));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_7 = ___0_array;
		int32_t L_8 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77074));
		ArrayHelpers_EraseAt_TisIl2CppFullySharedGenericAny_m825F0F2B3908C7DAA2F2B1BEB69DE9D2708BC23E(L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77074));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:634>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77075));
		V_2 = (bool)1;
		goto IL_0028;
	}

IL_0024:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:636>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77076));
		V_2 = (bool)0;
		goto IL_0028;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:637>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77077));
		bool L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 34291
// Method Definition Index: 34291
// Method Definition Index: 34291
// Method Definition Index: 34291
// Method Definition Index: 34291
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_EraseAt_TisIl2CppFullySharedGenericAny_m825F0F2B3908C7DAA2F2B1BEB69DE9D2708BC23E_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_index));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77004));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77005));
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77006));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:574>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77007));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77008));
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((!(((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77008));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:575>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77009));
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_3 = ___1_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_4 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_4);
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		G_B3_0 = ((((int32_t)L_3) < ((int32_t)L_6))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77010));
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)G_B3_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77010));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:577>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77011));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_7 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_7);
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_0 = L_9;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:578>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77012));
		int32_t L_10 = ___1_index;
		if (L_10)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_11 = V_0;
		G_B6_0 = ((((int32_t)L_11) == ((int32_t)1))? 1 : 0);
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 0;
	}

IL_002f:
	{
		V_1 = (bool)G_B6_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77013));
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_0039;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77014));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:580>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77015));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_13 = ___0_array;
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_13, (RuntimeObject*)NULL);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_13, (void*)(RuntimeObject*)NULL);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:581>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77016));
		goto IL_0060;
	}

IL_0039:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:584>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77017));
		int32_t L_14 = ___1_index;
		int32_t L_15 = V_0;
		V_2 = (bool)((((int32_t)L_14) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_15, 1))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77018));
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_0056;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:585>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77019));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_17 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_17);
		int32_t L_19 = ___1_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_20 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_20);
		int32_t L_22 = ___1_index;
		int32_t L_23 = V_0;
		int32_t L_24 = ___1_index;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77020));
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_18, ((int32_t)il2cpp_codegen_add(L_19, 1)), (RuntimeArray*)L_21, L_22, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_23, L_24)), 1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77020));
	}

IL_0056:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:587>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77021));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_25 = ___0_array;
		int32_t L_26 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77022));
		Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712(L_25, ((int32_t)il2cpp_codegen_subtract(L_26, 1)), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77022));
	}

IL_0060:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:588>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77023));
		return;
	}
}
// Method Definition Index: 34291
// Method Definition Index: 34295
// Method Definition Index: 34295
// Method Definition Index: 34295
// Method Definition Index: 34295
// Method Definition Index: 34295
// Method Definition Index: 34295
// Method Definition Index: 34295
// Method Definition Index: 34295
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_EraseAtByMovingTail_TisIl2CppFullySharedGenericAny_m8DD3D84F1C2708D1A4E4DE97376266B0131F9302_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t* ___1_count, int32_t ___2_index, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TValue_tE959E0B453B8A0B35569B48F1E8916F5141760E6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_TValue_tE959E0B453B8A0B35569B48F1E8916F5141760E6);
	const Il2CppFullySharedGenericAny L_31 = L_24;
	bool V_0 = false;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TValue_tE959E0B453B8A0B35569B48F1E8916F5141760E6);
	memset(V_2, 0, SizeOf_TValue_tE959E0B453B8A0B35569B48F1E8916F5141760E6);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_count), (&___2_index));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77078));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77079));
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77080));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:652>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77081));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77082));
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((!(((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77082));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:653>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77083));
		int32_t L_1 = ___2_index;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = ___2_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		G_B3_0 = ((((int32_t)L_2) < ((int32_t)L_4))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77084));
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)G_B3_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77084));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:654>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77085));
		int32_t* L_5 = ___1_count;
		int32_t L_6 = il2cpp_codegen_ldind<int32_t, int32_t>(L_5);
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t* L_7 = ___1_count;
		int32_t L_8 = il2cpp_codegen_ldind<int32_t, int32_t>(L_7);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = ___0_array;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		G_B6_0 = ((((int32_t)((((int32_t)L_8) > ((int32_t)L_10))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 0;
	}

IL_0030:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77086));
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)G_B6_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77086));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:655>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77087));
		int32_t L_11 = ___2_index;
		int32_t* L_12 = ___1_count;
		int32_t L_13 = il2cpp_codegen_ldind<int32_t, int32_t>(L_12);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77088));
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)L_11) < ((int32_t)L_13))? 1 : 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77088));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:658>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77089));
		int32_t L_14 = ___2_index;
		int32_t* L_15 = ___1_count;
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(L_15);
		V_0 = (bool)((((int32_t)((((int32_t)L_14) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_16, 1))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77090));
		bool L_17 = V_0;
		if (!L_17)
		{
			goto IL_0060;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:659>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77091));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = ___0_array;
		int32_t L_19 = ___2_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = ___0_array;
		int32_t* L_21 = ___1_count;
		int32_t L_22 = il2cpp_codegen_ldind<int32_t, int32_t>(L_21);
		NullCheck(L_20);
		int32_t L_23 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		il2cpp_codegen_memcpy(L_24, (L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)), SizeOf_TValue_tE959E0B453B8A0B35569B48F1E8916F5141760E6);
		NullCheck(L_18);
		il2cpp_codegen_memcpy((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)), L_24, SizeOf_TValue_tE959E0B453B8A0B35569B48F1E8916F5141760E6);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)), (void*)L_24);
	}

IL_0060:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:662>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77092));
		int32_t* L_25 = ___1_count;
		int32_t L_26 = il2cpp_codegen_ldind<int32_t, int32_t>(L_25);
		V_1 = (bool)((((int32_t)((((int32_t)L_26) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77093));
		bool L_27 = V_1;
		if (!L_27)
		{
			goto IL_007f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:663>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77094));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_28 = ___0_array;
		int32_t* L_29 = ___1_count;
		int32_t L_30 = il2cpp_codegen_ldind<int32_t, int32_t>(L_29);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_TValue_tE959E0B453B8A0B35569B48F1E8916F5141760E6);
		il2cpp_codegen_memcpy(L_31, V_2, SizeOf_TValue_tE959E0B453B8A0B35569B48F1E8916F5141760E6);
		NullCheck(L_28);
		il2cpp_codegen_memcpy((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_30, 1)))), L_31, SizeOf_TValue_tE959E0B453B8A0B35569B48F1E8916F5141760E6);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_30, 1)))), (void*)L_31);
	}

IL_007f:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:664>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77095));
		int32_t* L_32 = ___1_count;
		int32_t* L_33 = ___1_count;
		int32_t L_34 = il2cpp_codegen_ldind<int32_t, int32_t>(L_33);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_32, (int32_t)((int32_t)il2cpp_codegen_subtract(L_34, 1)));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:665>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77096));
		return;
	}
}
// Method Definition Index: 34295
// Method Definition Index: 34295
// Method Definition Index: 34295
// Method Definition Index: 34292
// Method Definition Index: 34292
// Method Definition Index: 34292
// Method Definition Index: 34292
// Method Definition Index: 34292
// Method Definition Index: 34292
// Method Definition Index: 34292
// Method Definition Index: 34292
// Method Definition Index: 34293
// Method Definition Index: 34292
// Method Definition Index: 34293
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_EraseAtWithCapacity_TisIl2CppFullySharedGenericStruct_m5A97B43CBBF791242EAC04B5E8CC3D9701690DD7_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t* ___1_count, int32_t ___2_index, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	bool V_0 = false;
	int32_t V_1 = 0;
	uint8_t* V_2 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_count), (&___2_index));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77042));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77043));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77044));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:610>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77045));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77046));
		bool L_0;
		L_0 = NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline((&___0_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77046));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77047));
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77047));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:611>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77048));
		int32_t* L_1 = ___1_count;
		int32_t L_2 = il2cpp_codegen_ldind<int32_t, int32_t>(L_1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77049));
		int32_t L_3;
		L_3 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___0_array), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77049));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77050));
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77050));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:612>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77051));
		int32_t L_4 = ___2_index;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_5 = ___2_index;
		int32_t* L_6 = ___1_count;
		int32_t L_7 = il2cpp_codegen_ldind<int32_t, int32_t>(L_6);
		G_B3_0 = ((((int32_t)L_5) < ((int32_t)L_7))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77052));
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)G_B3_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77052));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:616>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77053));
		int32_t L_8 = ___2_index;
		int32_t* L_9 = ___1_count;
		int32_t L_10 = il2cpp_codegen_ldind<int32_t, int32_t>(L_9);
		V_0 = (bool)((((int32_t)L_8) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_10, 1))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77054));
		bool L_11 = V_0;
		if (!L_11)
		{
			goto IL_0069;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77055));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:618>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77056));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77057));
		int32_t L_12;
		L_12 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77057));
		V_1 = L_12;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:619>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77058));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_13 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77059));
		void* L_14;
		L_14 = NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_inline(L_13, il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77059));
		V_2 = (uint8_t*)L_14;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:621>
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:622>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77060));
		uint8_t* L_15 = V_2;
		int32_t L_16 = V_1;
		int32_t L_17 = ___2_index;
		uint8_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = ___2_index;
		int32_t* L_21 = ___1_count;
		int32_t L_22 = il2cpp_codegen_ldind<int32_t, int32_t>(L_21);
		int32_t L_23 = ___2_index;
		int32_t L_24 = V_1;
		int64_t L_25 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_22, L_23)), 1)), L_24)),NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77061));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((int32_t)il2cpp_codegen_multiply(L_16, L_17)))), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_18, ((int32_t)il2cpp_codegen_multiply(L_19, ((int32_t)il2cpp_codegen_add(L_20, 1)))))), L_25, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77061));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77062));
	}

IL_0069:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:625>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77063));
		int32_t* L_26 = ___1_count;
		int32_t* L_27 = ___1_count;
		int32_t L_28 = il2cpp_codegen_ldind<int32_t, int32_t>(L_27);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_26, (int32_t)((int32_t)il2cpp_codegen_subtract(L_28, 1)));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:626>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77064));
		return;
	}
}
// Method Definition Index: 34292
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_EraseAtWithCapacity_TisIl2CppFullySharedGenericAny_m9459CCF36C0A36FDBD1E4C86B7C9E1F891EB6DA1_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t* ___1_count, int32_t ___2_index, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TValue_t82DA9A372DD280D4054C5316102A420AFCA2C382 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_TValue_t82DA9A372DD280D4054C5316102A420AFCA2C382);
	bool V_0 = false;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_t82DA9A372DD280D4054C5316102A420AFCA2C382);
	memset(V_1, 0, SizeOf_TValue_t82DA9A372DD280D4054C5316102A420AFCA2C382);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_count), (&___2_index));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77024));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77025));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77026));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:592>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77027));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77028));
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((!(((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77028));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:593>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77029));
		int32_t* L_1 = ___1_count;
		int32_t L_2 = il2cpp_codegen_ldind<int32_t, int32_t>(L_1);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77030));
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_2) > ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77030));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:594>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77031));
		int32_t L_5 = ___2_index;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_6 = ___2_index;
		int32_t* L_7 = ___1_count;
		int32_t L_8 = il2cpp_codegen_ldind<int32_t, int32_t>(L_7);
		G_B3_0 = ((((int32_t)L_6) < ((int32_t)L_8))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 0;
	}

IL_0027:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77032));
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)G_B3_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77032));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:598>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77033));
		int32_t L_9 = ___2_index;
		int32_t* L_10 = ___1_count;
		int32_t L_11 = il2cpp_codegen_ldind<int32_t, int32_t>(L_10);
		V_0 = (bool)((((int32_t)L_9) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_11, 1))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77034));
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77035));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:600>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77036));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ___0_array;
		int32_t L_14 = ___2_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = ___0_array;
		int32_t L_16 = ___2_index;
		int32_t* L_17 = ___1_count;
		int32_t L_18 = il2cpp_codegen_ldind<int32_t, int32_t>(L_17);
		int32_t L_19 = ___2_index;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77037));
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_13, ((int32_t)il2cpp_codegen_add(L_14, 1)), (RuntimeArray*)L_15, L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_18, L_19)), 1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77037));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77038));
	}

IL_004c:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:603>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77039));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = ___0_array;
		int32_t* L_21 = ___1_count;
		int32_t L_22 = il2cpp_codegen_ldind<int32_t, int32_t>(L_21);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_TValue_t82DA9A372DD280D4054C5316102A420AFCA2C382);
		il2cpp_codegen_memcpy(L_23, V_1, SizeOf_TValue_t82DA9A372DD280D4054C5316102A420AFCA2C382);
		NullCheck(L_20);
		il2cpp_codegen_memcpy((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_22, 1)))), L_23, SizeOf_TValue_t82DA9A372DD280D4054C5316102A420AFCA2C382);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_22, 1)))), (void*)L_23);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:604>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77040));
		int32_t* L_24 = ___1_count;
		int32_t* L_25 = ___1_count;
		int32_t L_26 = il2cpp_codegen_ldind<int32_t, int32_t>(L_25);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_24, (int32_t)((int32_t)il2cpp_codegen_subtract(L_26, 1)));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:605>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77041));
		return;
	}
}
// Method Definition Index: 34292
// Method Definition Index: 34292
// Method Definition Index: 34292
// Method Definition Index: 34292
// Method Definition Index: 34292
// Method Definition Index: 34292
// Method Definition Index: 34292
// Method Definition Index: 34292
// Method Definition Index: 34301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_EraseSliceWithCapacity_TisIl2CppFullySharedGenericAny_mCB8AF95CD3863A90BB23649525C8436F4D347AB6_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t* ___1_length, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t2C9FCA3B0B5C4A2AF1EA356C754966CC1770F0F2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TValue_t2C9FCA3B0B5C4A2AF1EA356C754966CC1770F0F2);
	bool V_0 = false;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TValue_t2C9FCA3B0B5C4A2AF1EA356C754966CC1770F0F2);
	memset(V_2, 0, SizeOf_TValue_t2C9FCA3B0B5C4A2AF1EA356C754966CC1770F0F2);
	bool V_3 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_length), (&___2_index), (&___3_count));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77203));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77204));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77205));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:798>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77206));
		int32_t L_0 = ___3_count;
		int32_t* L_1 = ___1_length;
		int32_t L_2 = il2cpp_codegen_ldind<int32_t, int32_t>(L_1);
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_2))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77207));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:799>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77208));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_4 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_4);
		int32_t L_6 = ___2_index;
		int32_t L_7 = ___3_count;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_8 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_8);
		int32_t L_10 = ___2_index;
		int32_t* L_11 = ___1_length;
		int32_t L_12 = il2cpp_codegen_ldind<int32_t, int32_t>(L_11);
		int32_t L_13 = ___2_index;
		int32_t L_14 = ___3_count;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77209));
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, L_7)), (RuntimeArray*)L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_12, L_13)), L_14)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77209));
	}

IL_001e:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:802>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77210));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77211));
		goto IL_003c;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:803>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77212));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_15 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_15);
		int32_t* L_17 = ___1_length;
		int32_t L_18 = il2cpp_codegen_ldind<int32_t, int32_t>(L_17);
		int32_t L_19 = V_1;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_TValue_t2C9FCA3B0B5C4A2AF1EA356C754966CC1770F0F2);
		il2cpp_codegen_memcpy(L_20, V_2, SizeOf_TValue_t2C9FCA3B0B5C4A2AF1EA356C754966CC1770F0F2);
		NullCheck(L_16);
		il2cpp_codegen_memcpy((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_18, L_19)), 1)))), L_20, SizeOf_TValue_t2C9FCA3B0B5C4A2AF1EA356C754966CC1770F0F2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_18, L_19)), 1)))), (void*)L_20);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:802>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77213));
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_003c:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:802>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77214));
		int32_t L_22 = V_1;
		int32_t L_23 = ___3_count;
		V_3 = (bool)((((int32_t)L_22) < ((int32_t)L_23))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77215));
		bool L_24 = V_3;
		if (L_24)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:805>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77216));
		int32_t* L_25 = ___1_length;
		int32_t* L_26 = ___1_length;
		int32_t L_27 = il2cpp_codegen_ldind<int32_t, int32_t>(L_26);
		int32_t L_28 = ___3_count;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_25, (int32_t)((int32_t)il2cpp_codegen_subtract(L_27, L_28)));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:806>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77217));
		return;
	}
}
// Method Definition Index: 34284
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_GrowBy_TisIl2CppFullySharedGenericAny_m66D71A6A77985EC6147CE145D53655DDE0D6B96E_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_count));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76826));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76827));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76828));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:431>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76829));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_0);
		V_1 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76830));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76831));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:433>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76832));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_3 = ___0_array;
		int32_t L_4 = ___1_count;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_4);
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_3, (RuntimeObject*)L_5);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_5);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:434>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76833));
		V_2 = 0;
		goto IL_002a;
	}

IL_0017:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:437>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76834));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_6 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_6);
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		V_0 = L_8;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:438>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76835));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_9 = ___0_array;
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_count;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76836));
		Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712(L_9, ((int32_t)il2cpp_codegen_add(L_10, L_11)), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76836));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:439>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76837));
		int32_t L_12 = V_0;
		V_2 = L_12;
		goto IL_002a;
	}

IL_002a:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:440>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76838));
		int32_t L_13 = V_2;
		return L_13;
	}
}
// Method Definition Index: 34285
// Method Definition Index: 34285
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_GrowBy_TisIl2CppFullySharedGenericStruct_m3207ED244F78F91CC60669ABCD40E0A771259A83_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, int32_t ___1_count, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_count), (&___2_allocator));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76839));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76840));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76841));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:445>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76842));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76843));
		int32_t L_1;
		L_1 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76843));
		V_0 = L_1;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:446>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76844));
		int32_t L_2 = V_0;
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76845));
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76846));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:448>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76847));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_4 = ___0_array;
		int32_t L_5 = ___1_count;
		int32_t L_6 = ___2_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76848));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_7;
		memset((&L_7), 0, sizeof(L_7));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_7), L_5, L_6, 1, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76848));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_4 = L_7;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:449>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76849));
		V_3 = 0;
		goto IL_0061;
	}

IL_0023:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:452>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76850));
		int32_t L_8 = V_0;
		int32_t L_9 = ___1_count;
		int32_t L_10 = ___2_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76851));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&V_1), ((int32_t)il2cpp_codegen_add(L_8, L_9)), L_10, 1, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76851));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:454>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76852));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_11 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76853));
		void* L_12;
		L_12 = NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_inline(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76853));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_13 = ___0_array;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_14 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_13);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76854));
		void* L_15;
		L_15 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_inline(L_14, il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76854));
		int32_t L_16 = V_0;
		int64_t L_17 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_16,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76855));
		int32_t L_18;
		L_18 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76855));
		int64_t L_19 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_18,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76856));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_12, L_15, ((int64_t)il2cpp_codegen_multiply(L_17, L_19)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76856));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:455>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76857));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_20 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76858));
		NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80(L_20, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76858));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:456>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76859));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_21 = ___0_array;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_22 = V_1;
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_21 = L_22;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:458>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76860));
		int32_t L_23 = V_0;
		V_3 = L_23;
		goto IL_0061;
	}

IL_0061:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:459>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76861));
		int32_t L_24 = V_3;
		return L_24;
	}
}
// Method Definition Index: 34286
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_GrowWithCapacity_TisIl2CppFullySharedGenericAny_m869F7F86C46BC29ABC74C20B11F88CF5E2D8C1C2_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t* ___1_count, int32_t ___2_growBy, int32_t ___3_capacityIncrement, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_count), (&___2_growBy), (&___3_capacityIncrement));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76862));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76863));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76864));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:463>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76865));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_0);
		if (L_1)
		{
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000c;
	}

IL_0008:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_2 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_2);
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		G_B3_0 = L_4;
	}

IL_000c:
	{
		V_0 = G_B3_0;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:464>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76866));
		int32_t L_5 = V_0;
		int32_t* L_6 = ___1_count;
		int32_t L_7 = il2cpp_codegen_ldind<int32_t, int32_t>(L_6);
		int32_t L_8 = ___2_growBy;
		V_2 = (bool)((((int32_t)L_5) < ((int32_t)((int32_t)il2cpp_codegen_add(L_7, L_8))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76867));
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_002d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76868));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:466>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76869));
		int32_t L_10 = ___3_capacityIncrement;
		int32_t L_11 = ___2_growBy;
		V_3 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76870));
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0024;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:467>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76871));
		int32_t L_13 = ___2_growBy;
		___3_capacityIncrement = L_13;
	}

IL_0024:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:468>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76872));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_14 = ___0_array;
		int32_t L_15 = ___3_capacityIncrement;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76873));
		int32_t L_16;
		L_16 = ArrayHelpers_GrowBy_TisIl2CppFullySharedGenericAny_m66D71A6A77985EC6147CE145D53655DDE0D6B96E(L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76873));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76874));
	}

IL_002d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:471>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76875));
		int32_t* L_17 = ___1_count;
		int32_t L_18 = il2cpp_codegen_ldind<int32_t, int32_t>(L_17);
		V_1 = L_18;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:472>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76876));
		int32_t* L_19 = ___1_count;
		int32_t* L_20 = ___1_count;
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(L_20);
		int32_t L_22 = ___2_growBy;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_19, (int32_t)((int32_t)il2cpp_codegen_add(L_21, L_22)));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:473>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76877));
		int32_t L_23 = V_1;
		V_4 = L_23;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:474>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76878));
		int32_t L_24 = V_4;
		return L_24;
	}
}
// Method Definition Index: 34287
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_GrowWithCapacity_TisIl2CppFullySharedGenericStruct_m1A0EBAC641E36FA8CB41214602DD2DD1F7A98C1C_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, int32_t* ___1_count, int32_t ___2_growBy, int32_t ___3_capacityIncrement, int32_t ___4_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_count), (&___2_growBy), (&___3_capacityIncrement), (&___4_allocator));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76879));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76880));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76881));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:480>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76882));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76883));
		int32_t L_1;
		L_1 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76883));
		V_0 = L_1;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:481>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76884));
		int32_t L_2 = V_0;
		int32_t* L_3 = ___1_count;
		int32_t L_4 = il2cpp_codegen_ldind<int32_t, int32_t>(L_3);
		int32_t L_5 = ___2_growBy;
		V_2 = (bool)((((int32_t)L_2) < ((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76885));
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76886));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:483>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76887));
		int32_t L_7 = ___3_capacityIncrement;
		int32_t L_8 = ___2_growBy;
		V_3 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76888));
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_001f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:484>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76889));
		int32_t L_10 = ___2_growBy;
		___3_capacityIncrement = L_10;
	}

IL_001f:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:485>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76890));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_11 = ___0_array;
		int32_t L_12 = ___3_capacityIncrement;
		int32_t L_13 = ___4_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76891));
		int32_t L_14;
		L_14 = ArrayHelpers_GrowBy_TisIl2CppFullySharedGenericStruct_m3207ED244F78F91CC60669ABCD40E0A771259A83(L_11, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76891));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76892));
	}

IL_002a:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:488>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76893));
		int32_t* L_15 = ___1_count;
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(L_15);
		V_1 = L_16;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:489>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76894));
		int32_t* L_17 = ___1_count;
		int32_t* L_18 = ___1_count;
		int32_t L_19 = il2cpp_codegen_ldind<int32_t, int32_t>(L_18);
		int32_t L_20 = ___2_growBy;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_17, (int32_t)((int32_t)il2cpp_codegen_add(L_19, L_20)));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:490>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76895));
		int32_t L_21 = V_1;
		V_4 = L_21;
		goto IL_0038;
	}

IL_0038:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:491>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76896));
		int32_t L_22 = V_4;
		return L_22;
	}
}
// Method Definition Index: 34266
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayHelpers_HaveDuplicateReferences_TisIl2CppSharedGenericObject_m06388DC72E845AD44F5E2C9185125398AD872B36_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_first, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_first), (&___1_index), (&___2_count));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76448));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76449));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76450));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:119>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76451));
		int32_t L_0 = ___1_index;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76452));
		goto IL_0048;
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76453));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:121>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76454));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = ___0_first;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Il2CppSharedGenericObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:122>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76455));
		int32_t L_5 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76456));
		goto IL_0037;
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76457));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:124>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76458));
		Il2CppSharedGenericObject* L_6 = V_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = ___0_first;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Il2CppSharedGenericObject* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = (bool)((((RuntimeObject*)(Il2CppSharedGenericObject*)L_6) == ((RuntimeObject*)(Il2CppSharedGenericObject*)L_10))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76459));
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0032;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:125>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76460));
		V_4 = (bool)1;
		goto IL_0059;
	}

IL_0032:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76461));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:122>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76462));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:122>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76463));
		int32_t L_13 = V_2;
		int32_t L_14 = ___1_index;
		int32_t L_15 = ___2_count;
		V_5 = (bool)((((int32_t)L_13) < ((int32_t)((int32_t)il2cpp_codegen_add(L_14, L_15))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76464));
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_0014;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76465));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:119>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76466));
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0048:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:119>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76467));
		int32_t L_18 = V_0;
		int32_t L_19 = ___1_index;
		int32_t L_20 = ___2_count;
		V_6 = (bool)((((int32_t)L_18) < ((int32_t)((int32_t)il2cpp_codegen_add(L_19, L_20))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76468));
		bool L_21 = V_6;
		if (L_21)
		{
			goto IL_0005;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:128>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76469));
		V_4 = (bool)0;
		goto IL_0059;
	}

IL_0059:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:129>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76470));
		bool L_22 = V_4;
		return L_22;
	}
}
// Method Definition Index: 34267
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayHelpers_HaveEqualElements_TisIl2CppFullySharedGenericAny_mC2F3CF468BBB8EB771FA2F07B8A68AA8BFB0C578_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_first, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_second, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	const uint32_t SizeOf_TValue_tB0720748C9C02220B54D2BAF1D9A80BB37C8F6BC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TValue_tB0720748C9C02220B54D2BAF1D9A80BB37C8F6BC);
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_TValue_tB0720748C9C02220B54D2BAF1D9A80BB37C8F6BC);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_first), (&___1_second), (&___2_count));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_6));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76471));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76472));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76473));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:133>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76474));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_first;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___1_second;
		G_B3_0 = ((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_000b;
	}

IL_000a:
	{
		G_B3_0 = 1;
	}

IL_000b:
	{
		V_3 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76475));
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:134>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76476));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_second;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_first;
		V_4 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_3) == ((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_4))? 1 : 0);
		goto IL_0082;
	}

IL_0017:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:136>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76477));
		int32_t L_5 = ___2_count;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___0_first;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76478));
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_8;
		L_8 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_5, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76478));
		V_0 = L_8;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:137>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76479));
		int32_t L_9 = ___2_count;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___1_second;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76480));
		int32_t L_12;
		L_12 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_9, L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76480));
		V_1 = L_12;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:139>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76481));
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		V_5 = (bool)((((int32_t)((((int32_t)L_13) == ((int32_t)L_14))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76482));
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_003d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:140>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76483));
		V_4 = (bool)0;
		goto IL_0082;
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:142>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76484));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76485));
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_16;
		L_16 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76485));
		V_2 = L_16;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:143>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76486));
		V_6 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76487));
		goto IL_0072;
	}

IL_0048:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:144>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76488));
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_17 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = ___0_first;
		int32_t L_19 = V_6;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		il2cpp_codegen_memcpy(L_21, (L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), SizeOf_TValue_tB0720748C9C02220B54D2BAF1D9A80BB37C8F6BC);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = ___1_second;
		int32_t L_23 = V_6;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		il2cpp_codegen_memcpy(L_25, (L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)), SizeOf_TValue_tB0720748C9C02220B54D2BAF1D9A80BB37C8F6BC);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76489));
		NullCheck(L_17);
		bool L_26;
		L_26 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_21: *(void**)L_21), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_25: *(void**)L_25));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76489));
		V_7 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76490));
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_006c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:145>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76491));
		V_4 = (bool)0;
		goto IL_0082;
	}

IL_006c:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:143>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76492));
		int32_t L_28 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0072:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:143>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76493));
		int32_t L_29 = V_6;
		int32_t L_30 = V_0;
		V_8 = (bool)((((int32_t)L_29) < ((int32_t)L_30))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76494));
		bool L_31 = V_8;
		if (L_31)
		{
			goto IL_0048;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:147>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76495));
		V_4 = (bool)1;
		goto IL_0082;
	}

IL_0082:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:148>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76496));
		bool L_32 = V_4;
		return L_32;
	}
}
// Method Definition Index: 34269
// Method Definition Index: 34269
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_IndexOf_TisIl2CppFullySharedGenericAny_m96704E2F360C2548EBEACBA3AE7A7BBE31CB98AB_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___1_predicate, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t8B684A9C8C70F5BDEC5C2E7B5327BEA4FF90B74E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TValue_t8B684A9C8C70F5BDEC5C2E7B5327BEA4FF90B74E);
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_predicate));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76519));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76520));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76521));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:168>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76522));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		V_1 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76523));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:169>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76524));
		V_2 = (-1);
		goto IL_003e;
	}

IL_000d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:171>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76525));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_0 = L_3;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:172>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76526));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76527));
		goto IL_0030;
	}

IL_0015:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:173>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76528));
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_4 = ___1_predicate;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		il2cpp_codegen_memcpy(L_8, (L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_TValue_t8B684A9C8C70F5BDEC5C2E7B5327BEA4FF90B74E);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76529));
		NullCheck(L_4);
		bool L_9;
		L_9 = Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_8: *(void**)L_8), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76529));
		V_4 = L_9;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76530));
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_002c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:174>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76531));
		int32_t L_11 = V_3;
		V_2 = L_11;
		goto IL_003e;
	}

IL_002c:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:172>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76532));
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:172>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76533));
		int32_t L_13 = V_3;
		int32_t L_14 = V_0;
		V_5 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76534));
		bool L_15 = V_5;
		if (L_15)
		{
			goto IL_0015;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:176>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76535));
		V_2 = (-1);
		goto IL_003e;
	}

IL_003e:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:177>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76536));
		int32_t L_16 = V_2;
		return L_16;
	}
}
// Method Definition Index: 34268
// Method Definition Index: 34268
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_IndexOf_TisIl2CppFullySharedGenericAny_mA69C0EC67C2CED022FC1E530F4CEDD66405578E4_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t0DAFB589E6355313CB0EE4E909D3E9EB1ACD5628 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TValue_t0DAFB589E6355313CB0EE4E909D3E9EB1ACD5628);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TValue_t0DAFB589E6355313CB0EE4E909D3E9EB1ACD5628);
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), (&___2_startIndex), (&___3_count));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76497));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76498));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76499));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:153>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76500));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		V_1 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76501));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:154>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76502));
		V_2 = (-1);
		goto IL_0058;
	}

IL_000d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:156>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76503));
		int32_t L_2 = ___3_count;
		V_3 = (bool)((((int32_t)L_2) < ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76504));
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:157>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76505));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___2_startIndex;
		___3_count = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
	}

IL_001c:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:158>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76506));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76507));
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_7;
		L_7 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76507));
		V_0 = L_7;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:159>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76508));
		int32_t L_8 = ___2_startIndex;
		V_4 = L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76509));
		goto IL_0047;
	}

IL_0027:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:160>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76510));
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_9 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___0_array;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		il2cpp_codegen_memcpy(L_13, (L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)), SizeOf_TValue_t0DAFB589E6355313CB0EE4E909D3E9EB1ACD5628);
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_TValue_t0DAFB589E6355313CB0EE4E909D3E9EB1ACD5628);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76511));
		NullCheck(L_9);
		bool L_15;
		L_15 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_13: *(void**)L_13), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_14: *(void**)L_14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76511));
		V_5 = L_15;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76512));
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0041;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:161>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76513));
		int32_t L_17 = V_4;
		V_2 = L_17;
		goto IL_0058;
	}

IL_0041:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:159>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76514));
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0047:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:159>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76515));
		int32_t L_19 = V_4;
		int32_t L_20 = ___2_startIndex;
		int32_t L_21 = ___3_count;
		V_6 = (bool)((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_add(L_20, L_21))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76516));
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_0027;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:163>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76517));
		V_2 = (-1);
		goto IL_0058;
	}

IL_0058:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:164>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76518));
		int32_t L_23 = V_2;
		return L_23;
	}
}
// Method Definition Index: 34270
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_IndexOf_TisIl2CppFullySharedGenericAny_m520565C91C971DF1D11D7CF7F773CD0EDCA48E21_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___1_predicate, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tF983B6DE4D7947D4A4691028BFCACCB87D7AAB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TValue_tF983B6DE4D7947D4A4691028BFCACCB87D7AAB60);
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_predicate), (&___2_startIndex), (&___3_count));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76537));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76538));
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76539));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:181>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76540));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		V_1 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76541));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:182>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76542));
		V_2 = (-1);
		goto IL_004b;
	}

IL_000d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:184>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76543));
		int32_t L_2 = ___2_startIndex;
		int32_t L_3 = ___3_count;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			G_B4_0 = L_2;
			goto IL_0015;
		}
		G_B3_0 = L_2;
	}
	{
		int32_t L_4 = ___3_count;
		G_B5_0 = L_4;
		G_B5_1 = G_B3_0;
		goto IL_001a;
	}

IL_0015:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		int32_t L_7 = ___2_startIndex;
		G_B5_0 = ((int32_t)il2cpp_codegen_subtract(L_6, L_7));
		G_B5_1 = G_B4_0;
	}

IL_001a:
	{
		V_0 = ((int32_t)il2cpp_codegen_add(G_B5_1, G_B5_0));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:185>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76544));
		int32_t L_8 = ___2_startIndex;
		V_3 = L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76545));
		goto IL_003d;
	}

IL_0020:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76546));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:187>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76547));
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_9 = ___1_predicate;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___0_array;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		il2cpp_codegen_memcpy(L_13, (L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)), SizeOf_TValue_tF983B6DE4D7947D4A4691028BFCACCB87D7AAB60);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76548));
		NullCheck(L_9);
		bool L_14;
		L_14 = Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_13: *(void**)L_13), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76548));
		V_4 = L_14;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76549));
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0038;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:188>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76550));
		int32_t L_16 = V_3;
		V_2 = L_16;
		goto IL_004b;
	}

IL_0038:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76551));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:185>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76552));
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_003d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:185>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76553));
		int32_t L_18 = V_3;
		int32_t L_19 = V_0;
		V_5 = (bool)((((int32_t)L_18) < ((int32_t)L_19))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76554));
		bool L_20 = V_5;
		if (L_20)
		{
			goto IL_0020;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:191>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76555));
		V_2 = (-1);
		goto IL_004b;
	}

IL_004b:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:192>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76556));
		int32_t L_21 = V_2;
		return L_21;
	}
}
// Method Definition Index: 34271
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_IndexOfReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_m60416BEF0E8CE7F477DCE5190C46FE653FBF073F_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppSharedGenericObject* ___1_value, int32_t ___2_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_value), (&___2_count));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76557));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76558));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76559));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:198>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76560));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		int32_t L_2 = ___2_count;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76561));
		int32_t L_3;
		L_3 = ArrayHelpers_IndexOfReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_mCABB5666122B3A1059EE927F255C7CE0D63A2DD8(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76561));
		V_0 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:199>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76562));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 34272
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_IndexOfReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_mCABB5666122B3A1059EE927F255C7CE0D63A2DD8_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppSharedGenericObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TFirst_tCAC9DAA5E28F4F04B33EB1D830057704704E0E8D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TFirst_tCAC9DAA5E28F4F04B33EB1D830057704704E0E8D);
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_value), (&___2_startIndex), (&___3_count));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76563));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76564));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76565));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:205>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76566));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		V_0 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76567));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:206>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76568));
		V_1 = (-1);
		goto IL_0052;
	}

IL_000d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:208>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76569));
		int32_t L_2 = ___3_count;
		V_2 = (bool)((((int32_t)L_2) < ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76570));
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:209>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76571));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___2_startIndex;
		___3_count = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
	}

IL_001c:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:210>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76572));
		int32_t L_7 = ___2_startIndex;
		V_3 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76573));
		goto IL_0042;
	}

IL_0020:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:211>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76574));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_TFirst_tCAC9DAA5E28F4F04B33EB1D830057704704E0E8D);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), L_11);
		Il2CppSharedGenericObject* L_13 = ___1_value;
		V_4 = (bool)((((RuntimeObject*)(RuntimeObject*)L_12) == ((RuntimeObject*)(Il2CppSharedGenericObject*)L_13))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76575));
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_003e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:212>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76576));
		int32_t L_15 = V_3;
		V_1 = L_15;
		goto IL_0052;
	}

IL_003e:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:210>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76577));
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0042:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:210>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76578));
		int32_t L_17 = V_3;
		int32_t L_18 = ___2_startIndex;
		int32_t L_19 = ___3_count;
		V_5 = (bool)((((int32_t)L_17) < ((int32_t)((int32_t)il2cpp_codegen_add(L_18, L_19))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76579));
		bool L_20 = V_5;
		if (L_20)
		{
			goto IL_0020;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:214>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76580));
		V_1 = (-1);
		goto IL_0052;
	}

IL_0052:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:215>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76581));
		int32_t L_21 = V_1;
		return L_21;
	}
}
// Method Definition Index: 34273
// Method Definition Index: 34273
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_IndexOfValue_TisIl2CppFullySharedGenericStruct_mEADB0244218E23B857D18463DC2B66D167209222_fshared (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_array, Il2CppFullySharedGenericStruct ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t6676DA175FD912E3F0D1651F217AF54BB4E8E427 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_TValue_t6676DA175FD912E3F0D1651F217AF54BB4E8E427);
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), (&___2_startIndex), (&___3_count));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76582));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76583));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76584));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:220>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76585));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_0 = ___0_array;
		V_0 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76586));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:221>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76587));
		V_1 = (-1);
		goto IL_0052;
	}

IL_000d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:223>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76588));
		int32_t L_2 = ___3_count;
		V_2 = (bool)((((int32_t)L_2) < ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76589));
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:224>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76590));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___2_startIndex;
		___3_count = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
	}

IL_001c:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:225>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76591));
		int32_t L_7 = ___2_startIndex;
		V_3 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76592));
		goto IL_0042;
	}

IL_0020:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:226>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76593));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_8 = ___0_array;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_TValue_t6676DA175FD912E3F0D1651F217AF54BB4E8E427);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76594));
		Il2CppConstrainedCallData L_13;
		Il2CppMethodPointer L_14 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 1), (void*)(Il2CppFullySharedGenericStruct*)___1_value, &L_13, L_12);
		bool L_15 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(L_14, L_13.method,L_13.thisPtr, L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76594));
		V_4 = L_15;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76595));
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_003e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:227>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76596));
		int32_t L_17 = V_3;
		V_1 = L_17;
		goto IL_0052;
	}

IL_003e:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:225>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76597));
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0042:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:225>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76598));
		int32_t L_19 = V_3;
		int32_t L_20 = ___2_startIndex;
		int32_t L_21 = ___3_count;
		V_5 = (bool)((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_add(L_20, L_21))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76599));
		bool L_22 = V_5;
		if (L_22)
		{
			goto IL_0020;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:229>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76600));
		V_1 = (-1);
		goto IL_0052;
	}

IL_0052:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:230>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76601));
		int32_t L_23 = V_1;
		return L_23;
	}
}
// Method Definition Index: 34281
// Method Definition Index: 34281
// Method Definition Index: 34281
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_InsertAt_TisIl2CppFullySharedGenericAny_m3F9D5D9B8CF3750F4C6A5BA4C8664EFB24F3DB40_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tF84232ECAD2F4DC9CB5F2BB2EA88CD44F84598E2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TValue_tF84232ECAD2F4DC9CB5F2BB2EA88CD44F84598E2);
	const Il2CppFullySharedGenericAny L_30 = L_10;
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_index), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_value : &___2_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76777));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76778));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76779));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:386>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76780));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_0);
		V_1 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76781));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76782));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:389>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76783));
		int32_t L_3 = ___1_index;
		V_2 = (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76784));
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:390>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76785));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76786));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76786));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_001e:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:392>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76787));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_6 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)1);
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_6, (RuntimeObject*)L_7);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_7);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:393>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76788));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_8 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_8);
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_value : &___2_value), SizeOf_TValue_tF84232ECAD2F4DC9CB5F2BB2EA88CD44F84598E2);
		NullCheck(L_9);
		il2cpp_codegen_memcpy((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)), L_10, SizeOf_TValue_tF84232ECAD2F4DC9CB5F2BB2EA88CD44F84598E2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)), (void*)L_10);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:394>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76789));
		goto IL_0065;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:398>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76790));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_11 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_11);
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = L_13;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:399>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76791));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_14 = ___0_array;
		int32_t L_15 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76792));
		Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712(L_14, ((int32_t)il2cpp_codegen_add(L_15, 1)), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76792));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:402>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76793));
		int32_t L_16 = ___1_index;
		int32_t L_17 = V_0;
		V_3 = (bool)((((int32_t)((((int32_t)L_16) == ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76794));
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_005c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:403>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76795));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_19 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_19);
		int32_t L_21 = ___1_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_22 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_22);
		int32_t L_24 = ___1_index;
		int32_t L_25 = V_0;
		int32_t L_26 = ___1_index;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76796));
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, L_21, (RuntimeArray*)L_23, ((int32_t)il2cpp_codegen_add(L_24, 1)), ((int32_t)il2cpp_codegen_subtract(L_25, L_26)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76796));
	}

IL_005c:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:405>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76797));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_27 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_28 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_27);
		int32_t L_29 = ___1_index;
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_value : &___2_value), SizeOf_TValue_tF84232ECAD2F4DC9CB5F2BB2EA88CD44F84598E2);
		NullCheck(L_28);
		il2cpp_codegen_memcpy((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)), L_30, SizeOf_TValue_tF84232ECAD2F4DC9CB5F2BB2EA88CD44F84598E2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)), (void*)L_30);
	}

IL_0065:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:406>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76798));
		return;
	}
}
// Method Definition Index: 34282
// Method Definition Index: 34282
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_InsertAtWithCapacity_TisIl2CppFullySharedGenericAny_m2847116CF44E3F9E7C6D3E73A6C174EC9F3A1F66_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t* ___1_count, int32_t ___2_index, Il2CppFullySharedGenericAny ___3_value, int32_t ___4_capacityIncrement, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tC291FFFEC56A1B09FC1DBE45DB181CC4D43F38AF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TValue_tC291FFFEC56A1B09FC1DBE45DB181CC4D43F38AF);
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_count), (&___2_index), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___3_value : &___3_value), (&___4_capacityIncrement));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76799));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76800));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76801));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:410>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76802));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		int32_t* L_1 = ___1_count;
		int32_t L_2 = il2cpp_codegen_ldind<int32_t, int32_t>(L_1);
		int32_t* L_3 = ___1_count;
		int32_t L_4 = il2cpp_codegen_ldind<int32_t, int32_t>(L_3);
		int32_t L_5 = ___4_capacityIncrement;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76803));
		ArrayHelpers_EnsureCapacity_TisIl2CppFullySharedGenericAny_m6E67B3033A66A334BFE5A7E0B9D2C07CE296646E(L_0, L_2, ((int32_t)il2cpp_codegen_add(L_4, 1)), L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76803));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:412>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76804));
		int32_t L_6 = ___2_index;
		int32_t* L_7 = ___1_count;
		int32_t L_8 = il2cpp_codegen_ldind<int32_t, int32_t>(L_7);
		V_0 = (bool)((((int32_t)((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76805));
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:413>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76806));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_10 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_10);
		int32_t L_12 = ___2_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_13 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_13);
		int32_t L_15 = ___2_index;
		int32_t* L_16 = ___1_count;
		int32_t L_17 = il2cpp_codegen_ldind<int32_t, int32_t>(L_16);
		int32_t L_18 = ___2_index;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76807));
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, L_12, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, 1)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76807));
	}

IL_002e:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:415>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76808));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_19 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_19);
		int32_t L_21 = ___2_index;
		il2cpp_codegen_memcpy(L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___3_value : &___3_value), SizeOf_TValue_tC291FFFEC56A1B09FC1DBE45DB181CC4D43F38AF);
		NullCheck(L_20);
		il2cpp_codegen_memcpy((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)), L_22, SizeOf_TValue_tC291FFFEC56A1B09FC1DBE45DB181CC4D43F38AF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)), (void*)L_22);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:416>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76809));
		int32_t* L_23 = ___1_count;
		int32_t* L_24 = ___1_count;
		int32_t L_25 = il2cpp_codegen_ldind<int32_t, int32_t>(L_24);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_23, (int32_t)((int32_t)il2cpp_codegen_add(L_25, 1)));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:417>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76810));
		return;
	}
}
// Method Definition Index: 34288
// Method Definition Index: 34288
// Method Definition Index: 34288
// Method Definition Index: 34288
// Method Definition Index: 34288
// Method Definition Index: 34288
// Method Definition Index: 34288
// Method Definition Index: 34288
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArrayHelpers_Join_TisIl2CppFullySharedGenericAny_mBD7E08FAE557F56197D2EFEFF4F91E6EC8D256BC_fshared (Il2CppFullySharedGenericAny ___0_value, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t165F29F804579DB4785B29C41B0E41C819E68EAD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t165F29F804579DB4785B29C41B0E41C819E68EAD);
	const Il2CppFullySharedGenericAny L_14 = L_0;
	const Il2CppFullySharedGenericAny L_21 = L_0;
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_value : &___0_value), (&___1_values));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76897));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76898));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76899));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:496>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76900));
		V_0 = 0;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:497>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76901));
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_value : &___0_value), SizeOf_TValue_t165F29F804579DB4785B29C41B0E41C819E68EAD);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_0);
		bool L_2 = L_1;
		V_3 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76902));
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:498>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76903));
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0014:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:499>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76904));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___1_values;
		V_4 = (bool)((!(((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76905));
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:500>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76906));
		int32_t L_7 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___1_values;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_9));
	}

IL_0024:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:502>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76907));
		int32_t L_10 = V_0;
		V_5 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76908));
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0033;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:503>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76909));
		V_6 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
		goto IL_0073;
	}

IL_0033:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:505>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76910));
		int32_t L_12 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)L_12);
		V_1 = L_13;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:508>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76911));
		V_2 = 0;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:509>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76912));
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_value : &___0_value), SizeOf_TValue_t165F29F804579DB4785B29C41B0E41C819E68EAD);
		bool L_15 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_14);
		bool L_16 = L_15;
		V_7 = L_16;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76913));
		bool L_17 = V_7;
		if (!L_17)
		{
			goto IL_0057;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:510>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76914));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = V_1;
		int32_t L_19 = V_2;
		int32_t L_20 = L_19;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		il2cpp_codegen_memcpy(L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_value : &___0_value), SizeOf_TValue_t165F29F804579DB4785B29C41B0E41C819E68EAD);
		NullCheck(L_18);
		il2cpp_codegen_memcpy((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), L_21, SizeOf_TValue_t165F29F804579DB4785B29C41B0E41C819E68EAD);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), (void*)L_21);
	}

IL_0057:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:512>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76915));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = ___1_values;
		V_8 = (bool)((!(((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_22) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76916));
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_006e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:513>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76917));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24 = ___1_values;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = V_1;
		int32_t L_26 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_27 = ___1_values;
		NullCheck(L_27);
		int32_t L_28 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_27)->max_length),NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76918));
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, 0, (RuntimeArray*)L_25, L_26, L_28, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76918));
	}

IL_006e:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:515>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76919));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_29 = V_1;
		V_6 = L_29;
		goto IL_0073;
	}

IL_0073:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:516>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76920));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_30 = V_6;
		return L_30;
	}
}
// Method Definition Index: 34288
// Method Definition Index: 34288
// Method Definition Index: 34288
// Method Definition Index: 34256
// Method Definition Index: 34256
// Method Definition Index: 34256
// Method Definition Index: 34256
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_LengthSafe_TisIl2CppFullySharedGenericAny_mC6EB691A32F53AF8E73702B746EF72A5256E43C0_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76337));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76338));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76339));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:20>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76340));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		V_0 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76341));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:21>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76342));
		V_1 = 0;
		goto IL_0013;
	}

IL_000d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:22>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76343));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_1 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:23>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76344));
		int32_t L_4 = V_1;
		return L_4;
	}
}
// Method Definition Index: 34256
// Method Definition Index: 34256
// Method Definition Index: 34256
// Method Definition Index: 34256
// Method Definition Index: 34289
// Method Definition Index: 34289
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArrayHelpers_Merge_TisIl2CppFullySharedGenericAny_mA7996B376EA913DA40AE0CB4B78A197149A3C39D_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_first, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_second, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t061C8A8C6A2C52CBE242842B1815D06D0B88B7FA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TValue_t061C8A8C6A2C52CBE242842B1815D06D0B88B7FA);
	const Il2CppFullySharedGenericAny L_22 = L_14;
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_0 = NULL;
	bool V_1 = false;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	U3CU3Ec__DisplayClass33_0_1_tB6CF9727F3704623A7C8D43E9FEB20554021BFB3* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_first), (&___1_second));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_4), (&V_5));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76921));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76922));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76923));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:521>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76924));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_first;
		V_1 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76925));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:522>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76926));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___1_second;
		V_2 = L_2;
		goto IL_008c;
	}

IL_000d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:523>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76927));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_second;
		V_3 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76928));
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:524>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76929));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_first;
		V_2 = L_5;
		goto IL_008c;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:526>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76930));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76931));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_6 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76931));
		V_0 = L_6;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:527>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76932));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_7 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_first;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76933));
		NullCheck(L_7);
		List_1_AddRange_m44DED39FFEBC8F2ACF6162DB065B649E888B9C57(L_7, (RuntimeObject*)L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76933));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:529>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76934));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76935));
		goto IL_0076;
	}

IL_002c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76936));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76937));
		U3CU3Ec__DisplayClass33_0_1_tB6CF9727F3704623A7C8D43E9FEB20554021BFB3* L_9 = (U3CU3Ec__DisplayClass33_0_1_tB6CF9727F3704623A7C8D43E9FEB20554021BFB3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		U3CU3Ec__DisplayClass33_0_1__ctor_mC44A3BA6167DEC9FB9BC98B780FEA04F563736E2(L_9, il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76937));
		V_5 = L_9;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76938));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:531>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76939));
		U3CU3Ec__DisplayClass33_0_1_tB6CF9727F3704623A7C8D43E9FEB20554021BFB3* L_10 = V_5;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___1_second;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		il2cpp_codegen_memcpy(L_14, (L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), SizeOf_TValue_t061C8A8C6A2C52CBE242842B1815D06D0B88B7FA);
		NullCheck(L_10);
		il2cpp_codegen_write_field_data<true>(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),0), il2cpp_rgctx_offset(method->rgctx_data, 6), L_14, SizeOf_TValue_t061C8A8C6A2C52CBE242842B1815D06D0B88B7FA);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:532>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76940));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_15 = V_0;
		U3CU3Ec__DisplayClass33_0_1_tB6CF9727F3704623A7C8D43E9FEB20554021BFB3* L_16 = V_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76941));
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_17 = (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 8));
		Predicate_1__ctor_m2B0279AF2950764FCBFEF3BC1BF616854B3EE3AC(L_17, (RuntimeObject*)L_16, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 7)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76941));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76942));
		NullCheck(L_15);
		bool L_18;
		L_18 = List_1_Exists_m4D844228EBB80F1DFE1D49094731494B09C2B4E8(L_15, L_17, il2cpp_rgctx_method(method->rgctx_data, 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76942));
		V_6 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76943));
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_006f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76944));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:534>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76945));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_20 = V_0;
		U3CU3Ec__DisplayClass33_0_1_tB6CF9727F3704623A7C8D43E9FEB20554021BFB3* L_21 = V_5;
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_field_data_pointer(L_21, il2cpp_rgctx_offset(method->rgctx_data, 6)), SizeOf_TValue_t061C8A8C6A2C52CBE242842B1815D06D0B88B7FA);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76946));
		NullCheck(L_20);
		List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_inline(L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? L_22: *(void**)L_22), il2cpp_rgctx_method(method->rgctx_data, 11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76946));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76947));
	}

IL_006f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76948));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:529>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76949));
		int32_t L_23 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0076:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:529>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76950));
		int32_t L_24 = V_4;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = ___1_second;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		V_7 = (bool)((((int32_t)L_24) < ((int32_t)L_26))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76951));
		bool L_27 = V_7;
		if (L_27)
		{
			goto IL_002c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:538>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76952));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_28 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76953));
		NullCheck(L_28);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_29;
		L_29 = List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A(L_28, il2cpp_rgctx_method(method->rgctx_data, 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76953));
		V_2 = L_29;
		goto IL_008c;
	}

IL_008c:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:539>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76954));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_30 = V_2;
		return L_30;
	}
}
// Method Definition Index: 34290
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArrayHelpers_Merge_TisIl2CppFullySharedGenericAny_m1CE8205BDD302FB9D56A17817C5BC845149195AE_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_first, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_second, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const uint32_t SizeOf_Enumerator_tABD8900DEA804349CD848377E667DE4FF592CEC2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	void* L_14 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 5)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819);
	const Il2CppFullySharedGenericAny L_18 = L_11;
	const Il2CppFullySharedGenericAny L_28 = L_11;
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819);
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_13 = alloca(SizeOf_Enumerator_tABD8900DEA804349CD848377E667DE4FF592CEC2);
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_0 = NULL;
	bool V_1 = false;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819);
	memset(V_5, 0, SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819);
	bool V_6 = false;
	Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF V_7 = alloca(SizeOf_Enumerator_tABD8900DEA804349CD848377E667DE4FF592CEC2);
	memset(V_7, 0, SizeOf_Enumerator_tABD8900DEA804349CD848377E667DE4FF592CEC2);
	Il2CppFullySharedGenericAny V_8 = alloca(SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819);
	memset(V_8, 0, SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819);
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_first), (&___1_second), (&___2_comparer));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_4), V_5, (&V_6), V_8);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76955));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76956));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76957));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:543>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76958));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_first;
		V_1 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76959));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:544>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76960));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___1_second;
		V_2 = L_2;
		goto IL_00b9;
	}

IL_0010:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:545>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76961));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_second;
		V_3 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76962));
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:546>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76963));
		V_2 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
		goto IL_00b9;
	}

IL_001f:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:548>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76964));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76965));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_5 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76965));
		V_0 = L_5;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:549>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76966));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_6 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = ___0_first;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76967));
		NullCheck(L_6);
		List_1_AddRange_m44DED39FFEBC8F2ACF6162DB065B649E888B9C57(L_6, (RuntimeObject*)L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76967));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:551>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76968));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76969));
		goto IL_00a3;
	}

IL_0032:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76970));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:553>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76971));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___1_second;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819);
		il2cpp_codegen_memcpy(V_5, L_11, SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:554>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76972));
		V_6 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76973));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:555>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76974));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_12 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76975));
		NullCheck(L_12);
		List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61(L_12, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_13, il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76975));
		il2cpp_codegen_memcpy(V_7, L_13, SizeOf_Enumerator_tABD8900DEA804349CD848377E667DE4FF592CEC2);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0077:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76989));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76990));
				Il2CppConstrainedCallData L_15;
				Il2CppMethodPointer L_16 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 5), il2cpp_rgctx_method(method->rgctx_data, 10), (void*)(Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)V_7, &L_15, L_14);
				typedef void ( *func_L_17)(void*,const RuntimeMethod*);
				((func_L_17)L_16)(L_15.thisPtr,L_15.method);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76990));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76976));
				goto IL_006c_1;
			}

IL_004b_1:
			{
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:555>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76977));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76978));
				Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_inline((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)V_7, (Il2CppFullySharedGenericAny*)L_18, il2cpp_rgctx_method(method->rgctx_data, 6));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76978));
				il2cpp_codegen_memcpy(V_8, L_18, SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76979));
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:557>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76980));
				RuntimeObject* L_19 = ___2_comparer;
				il2cpp_codegen_memcpy(L_20, V_8, SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819);
				il2cpp_codegen_memcpy(L_21, V_5, SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819);
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76981));
				NullCheck(L_19);
				bool L_22;
				L_22 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 7), L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_20: *(void**)L_20), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_21: *(void**)L_21));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76981));
				V_9 = L_22;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76982));
				bool L_23 = V_9;
				if (!L_23)
				{
					goto IL_006b_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76983));
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:559>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76984));
				V_6 = (bool)1;
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:560>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76985));
				goto IL_0075_1;
			}

IL_006b_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76986));
			}

IL_006c_1:
			{
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:555>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76987));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76988));
				bool L_24;
				L_24 = Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)V_7, il2cpp_rgctx_method(method->rgctx_data, 9));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76988));
				if (L_24)
				{
					goto IL_004b_1;
				}
			}

IL_0075_1:
			{
				goto IL_0086;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0086:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:563>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76991));
		bool L_25 = V_6;
		V_10 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76992));
		bool L_26 = V_10;
		if (!L_26)
		{
			goto IL_009c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76993));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:565>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76994));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_27 = V_0;
		il2cpp_codegen_memcpy(L_28, V_5, SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76995));
		NullCheck(L_27);
		List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_inline(L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_28: *(void**)L_28), il2cpp_rgctx_method(method->rgctx_data, 11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76995));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76996));
	}

IL_009c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76997));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:551>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76998));
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00a3:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:551>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76999));
		int32_t L_30 = V_4;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_31 = ___1_second;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		V_11 = (bool)((((int32_t)L_30) < ((int32_t)L_32))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77000));
		bool L_33 = V_11;
		if (L_33)
		{
			goto IL_0032;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:569>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77001));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_34 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77002));
		NullCheck(L_34);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_35;
		L_35 = List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A(L_34, il2cpp_rgctx_method(method->rgctx_data, 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77002));
		V_2 = L_35;
		goto IL_00b9;
	}

IL_00b9:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:570>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77003));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_36 = V_2;
		return L_36;
	}
}
// Method Definition Index: 34300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_MoveSlice_TisIl2CppFullySharedGenericAny_m73FB15C6DD7AEBED65AB7C3D0B45377438CA5A16_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_sourceIndex, int32_t ___2_destinationIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_sourceIndex), (&___2_destinationIndex), (&___3_count));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_4), (&V_6), (&V_7), (&V_8));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77150));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77151));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77152));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:729>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77153));
		int32_t L_0 = ___3_count;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___1_sourceIndex;
		int32_t L_2 = ___2_destinationIndex;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		V_1 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77154));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:730>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77155));
		goto IL_00f4;
	}

IL_0015:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:734>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77156));
		int32_t L_4 = ___2_destinationIndex;
		int32_t L_5 = ___1_sourceIndex;
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77157));
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0025;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:735>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77158));
		int32_t L_7 = ___2_destinationIndex;
		int32_t L_8 = ___3_count;
		int32_t L_9 = ___1_sourceIndex;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_7, L_8)), L_9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77159));
		goto IL_002b;
	}

IL_0025:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:737>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77160));
		int32_t L_10 = ___1_sourceIndex;
		int32_t L_11 = ___3_count;
		int32_t L_12 = ___2_destinationIndex;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_10, L_11)), L_12));
	}

IL_002b:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:741>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77161));
		int32_t L_13 = V_0;
		int32_t L_14 = ___3_count;
		V_3 = (bool)((((int32_t)L_13) == ((int32_t)((int32_t)il2cpp_codegen_multiply(L_14, 2))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77162));
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_006c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77163));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:743>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77164));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77165));
		goto IL_005b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:744>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77166));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = ___0_array;
		int32_t L_17 = ___1_sourceIndex;
		int32_t L_18 = V_4;
		NullCheck(L_16);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = ___0_array;
		int32_t L_20 = ___2_destinationIndex;
		int32_t L_21 = V_4;
		NullCheck(L_19);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77167));
		ArrayHelpers_Swap_TisIl2CppFullySharedGenericAny_mFD6379496AFF06FEA77AE92F9F19FB56F34C7B2F(((Il2CppFullySharedGenericAny*)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_17, L_18))))), ((Il2CppFullySharedGenericAny*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_20, L_21))))), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77167));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:743>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77168));
		int32_t L_22 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_005b:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:743>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77169));
		int32_t L_23 = V_4;
		int32_t L_24 = ___3_count;
		V_5 = (bool)((((int32_t)L_23) < ((int32_t)L_24))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77170));
		bool L_25 = V_5;
		if (L_25)
		{
			goto IL_003b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77171));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77172));
		goto IL_00f4;
	}

IL_006c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77173));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:763>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77174));
		int32_t L_26 = V_0;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:768>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77175));
		int32_t L_27 = ___2_destinationIndex;
		V_7 = L_27;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:769>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77176));
		V_8 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77177));
		goto IL_00e7;
	}

IL_007a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77178));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:773>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77179));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_28 = ___0_array;
		int32_t L_29 = V_7;
		NullCheck(L_28);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_30 = ___0_array;
		int32_t L_31 = ___1_sourceIndex;
		NullCheck(L_30);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77180));
		ArrayHelpers_Swap_TisIl2CppFullySharedGenericAny_mFD6379496AFF06FEA77AE92F9F19FB56F34C7B2F(((Il2CppFullySharedGenericAny*)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), ((Il2CppFullySharedGenericAny*)(L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31))), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77180));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:777>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77181));
		int32_t L_32 = ___2_destinationIndex;
		int32_t L_33 = ___1_sourceIndex;
		V_9 = (bool)((((int32_t)L_32) > ((int32_t)L_33))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77182));
		bool L_34 = V_9;
		if (!L_34)
		{
			goto IL_00be;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77183));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:780>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77184));
		int32_t L_35 = V_7;
		int32_t L_36 = ___3_count;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_35, L_36));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:781>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77185));
		int32_t L_37 = V_7;
		int32_t L_38 = ___1_sourceIndex;
		V_10 = (bool)((((int32_t)L_37) < ((int32_t)L_38))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77186));
		bool L_39 = V_10;
		if (!L_39)
		{
			goto IL_00bb;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:782>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77187));
		int32_t L_40 = ___2_destinationIndex;
		int32_t L_41 = ___3_count;
		int32_t L_42 = ___1_sourceIndex;
		int32_t L_43 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77188));
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_44;
		L_44 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract(L_42, L_43)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77188));
		V_7 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_40, L_41)), L_44));
	}

IL_00bb:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77189));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77190));
		goto IL_00e0;
	}

IL_00be:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77191));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:787>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77192));
		int32_t L_45 = V_7;
		int32_t L_46 = ___3_count;
		V_7 = ((int32_t)il2cpp_codegen_add(L_45, L_46));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:788>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77193));
		int32_t L_47 = V_7;
		int32_t L_48 = ___1_sourceIndex;
		int32_t L_49 = ___3_count;
		V_11 = (bool)((((int32_t)((((int32_t)L_47) < ((int32_t)((int32_t)il2cpp_codegen_add(L_48, L_49))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77194));
		bool L_50 = V_11;
		if (!L_50)
		{
			goto IL_00df;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:789>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77195));
		int32_t L_51 = ___2_destinationIndex;
		int32_t L_52 = V_7;
		int32_t L_53 = ___1_sourceIndex;
		int32_t L_54 = ___3_count;
		V_7 = ((int32_t)il2cpp_codegen_add(L_51, ((int32_t)il2cpp_codegen_subtract(L_52, ((int32_t)il2cpp_codegen_add(L_53, L_54))))));
	}

IL_00df:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77196));
	}

IL_00e0:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77197));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:769>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77198));
		int32_t L_55 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_00e7:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:769>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77199));
		int32_t L_56 = V_8;
		int32_t L_57 = V_6;
		V_12 = (bool)((((int32_t)L_56) < ((int32_t)L_57))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77200));
		bool L_58 = V_12;
		if (L_58)
		{
			goto IL_007a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77201));
	}

IL_00f4:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:793>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77202));
		return;
	}
}
// Method Definition Index: 34283
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_PutAtIfNotSet_TisIl2CppFullySharedGenericAny_m9CA0B149F2A0CEE8AF1993EF155837D36898919D_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_index, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___2_valueFn, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t80E2FFBDEA5223E1DBD4630108646FEADA581176 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TValue_t80E2FFBDEA5223E1DBD4630108646FEADA581176);
	const Il2CppFullySharedGenericAny L_20 = L_12;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TValue_t80E2FFBDEA5223E1DBD4630108646FEADA581176);
	bool V_0 = false;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TValue_t80E2FFBDEA5223E1DBD4630108646FEADA581176);
	memset(V_2, 0, SizeOf_TValue_t80E2FFBDEA5223E1DBD4630108646FEADA581176);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_index), (&___2_valueFn));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76811));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76812));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76813));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:421>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76814));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76815));
		int32_t L_2;
		L_2 = ArrayHelpers_LengthSafe_TisIl2CppFullySharedGenericAny_mC6EB691A32F53AF8E73702B746EF72A5256E43C0(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76815));
		int32_t L_3 = ___1_index;
		V_0 = (bool)((((int32_t)L_2) < ((int32_t)((int32_t)il2cpp_codegen_add(L_3, 1))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76816));
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:422>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76817));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_5 = ___0_array;
		int32_t L_6 = ___1_index;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76818));
		Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712(L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76818));
	}

IL_001b:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:424>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76819));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76820));
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_7;
		L_7 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76820));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_8 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_8);
		int32_t L_10 = ___1_index;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		il2cpp_codegen_memcpy(L_12, (L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), SizeOf_TValue_t80E2FFBDEA5223E1DBD4630108646FEADA581176);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_TValue_t80E2FFBDEA5223E1DBD4630108646FEADA581176);
		il2cpp_codegen_memcpy(L_13, V_2, SizeOf_TValue_t80E2FFBDEA5223E1DBD4630108646FEADA581176);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76821));
		NullCheck(L_7);
		bool L_14;
		L_14 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_12: *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_13: *(void**)L_13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76821));
		V_1 = L_14;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76822));
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_0048;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:425>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76823));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_16 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_16);
		int32_t L_18 = ___1_index;
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_19 = ___2_valueFn;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76824));
		NullCheck(L_19);
		Func_1_Invoke_m35CBC166F464B8A1169583672025E6D64211856C(L_19, (Il2CppFullySharedGenericAny*)L_20, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76824));
		NullCheck(L_17);
		il2cpp_codegen_memcpy((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)), L_20, SizeOf_TValue_t80E2FFBDEA5223E1DBD4630108646FEADA581176);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)), (void*)L_20);
	}

IL_0048:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:426>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76825));
		return;
	}
}
// Method Definition Index: 34274
// Method Definition Index: 34274
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_Resize_TisIl2CppFullySharedGenericStruct_m8CBA4585E072FC19FA97B9185B76F96FB04CADC2_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, int32_t ___1_newSize, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_newSize), (&___2_allocator));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76602));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76603));
	int32_t G_B9_0 = 0;
	void* G_B9_1 = NULL;
	void* G_B9_2 = NULL;
	int32_t G_B8_0 = 0;
	void* G_B8_1 = NULL;
	void* G_B8_2 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	void* G_B10_2 = NULL;
	void* G_B10_3 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76604));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:235>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76605));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76606));
		int32_t L_1;
		L_1 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76606));
		V_0 = L_1;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:236>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76607));
		int32_t L_2 = V_0;
		int32_t L_3 = ___1_newSize;
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76608));
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0012;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:237>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76609));
		goto IL_0081;
	}

IL_0012:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:239>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76610));
		int32_t L_5 = ___1_newSize;
		V_3 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76611));
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76612));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:241>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76613));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_7 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76614));
		bool L_8;
		L_8 = NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline(L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76614));
		V_4 = L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76615));
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:242>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76616));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_10 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76617));
		NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80(L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76617));
	}

IL_002e:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:243>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76618));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_11 = ___0_array;
		il2cpp_codegen_initobj(L_11, sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:244>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76619));
		goto IL_0081;
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:247>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76620));
		int32_t L_12 = ___1_newSize;
		int32_t L_13 = ___2_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76621));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&V_1), L_12, L_13, 1, il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76621));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:248>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76622));
		int32_t L_14 = V_0;
		V_5 = (bool)((!(((uint32_t)L_14) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76623));
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_007a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76624));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:251>
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:252>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76625));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_16 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76626));
		void* L_17;
		L_17 = NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_inline(L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76626));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_18 = ___0_array;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_19 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_18);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76627));
		void* L_20;
		L_20 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_inline(L_19, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76627));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76628));
		int32_t L_21;
		L_21 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76628));
		int32_t L_22 = ___1_newSize;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			G_B9_0 = L_21;
			G_B9_1 = L_20;
			G_B9_2 = L_17;
			goto IL_0069;
		}
		G_B8_0 = L_21;
		G_B8_1 = L_20;
		G_B8_2 = L_17;
	}
	{
		int32_t L_24 = V_0;
		G_B10_0 = L_24;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		G_B10_3 = G_B8_2;
		goto IL_006a;
	}

IL_0069:
	{
		int32_t L_25 = ___1_newSize;
		G_B10_0 = L_25;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
		G_B10_3 = G_B9_2;
	}

IL_006a:
	{
		int64_t L_26 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(G_B10_1, G_B10_0)),NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76629));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(G_B10_3, G_B10_2, L_26, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76629));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:253>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76630));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_27 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76631));
		NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80(L_27, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76631));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76632));
	}

IL_007a:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76633));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_28 = ___0_array;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_29 = V_1;
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_28 = L_29;
	}

IL_0081:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:256>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76634));
		return;
	}
}
// Method Definition Index: 34298
// Method Definition Index: 34298
// Method Definition Index: 34298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArrayHelpers_Select_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m31C87EB0D65B4CCB839C666E4559C64FAF3CA33D_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___1_converter, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TOld_t8F28B8D2E70004B6A300118E6C0CF78B50C2AB0E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_TNew_t0CE8CF259308EF7AA6D44FD07826A1540BA7555D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TOld_t8F28B8D2E70004B6A300118E6C0CF78B50C2AB0E);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TNew_t0CE8CF259308EF7AA6D44FD07826A1540BA7555D);
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	bool V_2 = false;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_converter));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77126));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77127));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77128));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:695>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77129));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		V_2 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77130));
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:696>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77131));
		V_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
		goto IL_0048;
	}

IL_000d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:698>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77132));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		V_0 = L_3;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:699>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77133));
		int32_t L_4 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_4);
		V_1 = L_5;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:701>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77134));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77135));
		goto IL_0039;
	}

IL_001d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:702>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77136));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_1;
		int32_t L_7 = V_4;
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_8 = ___1_converter;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = ___0_array;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		il2cpp_codegen_memcpy(L_12, (L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), SizeOf_TOld_t8F28B8D2E70004B6A300118E6C0CF78B50C2AB0E);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77137));
		NullCheck(L_8);
		Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_12: *(void**)L_12), (Il2CppFullySharedGenericAny*)L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77137));
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_13, SizeOf_TNew_t0CE8CF259308EF7AA6D44FD07826A1540BA7555D);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_13);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:701>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77138));
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0039:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:701>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77139));
		int32_t L_15 = V_4;
		int32_t L_16 = V_0;
		V_5 = (bool)((((int32_t)L_15) < ((int32_t)L_16))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77140));
		bool L_17 = V_5;
		if (L_17)
		{
			goto IL_001d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:704>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77141));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = V_1;
		V_3 = L_18;
		goto IL_0048;
	}

IL_0048:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:705>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77142));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = V_3;
		return L_19;
	}
}
// Method Definition Index: 34299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_Swap_TisIl2CppFullySharedGenericAny_mFD6379496AFF06FEA77AE92F9F19FB56F34C7B2F_fshared (Il2CppFullySharedGenericAny* ___0_first, Il2CppFullySharedGenericAny* ___1_second, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tB7901B7EA7EAB8CB267BE252D8ED8682211D43B2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB7901B7EA7EAB8CB267BE252D8ED8682211D43B2);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_tB7901B7EA7EAB8CB267BE252D8ED8682211D43B2);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tB7901B7EA7EAB8CB267BE252D8ED8682211D43B2);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_tB7901B7EA7EAB8CB267BE252D8ED8682211D43B2);
	memset(V_0, 0, SizeOf_TValue_tB7901B7EA7EAB8CB267BE252D8ED8682211D43B2);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_first), (&___1_second));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77143));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77144));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77145));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:709>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77146));
		Il2CppFullySharedGenericAny* L_0 = ___0_first;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TValue_tB7901B7EA7EAB8CB267BE252D8ED8682211D43B2);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_TValue_tB7901B7EA7EAB8CB267BE252D8ED8682211D43B2);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:710>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77147));
		Il2CppFullySharedGenericAny* L_2 = ___0_first;
		Il2CppFullySharedGenericAny* L_3 = ___1_second;
		il2cpp_codegen_memcpy(L_4, L_3, SizeOf_TValue_tB7901B7EA7EAB8CB267BE252D8ED8682211D43B2);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_2, L_4, SizeOf_TValue_tB7901B7EA7EAB8CB267BE252D8ED8682211D43B2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)L_2, (void*)L_4);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:711>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77148));
		Il2CppFullySharedGenericAny* L_5 = ___1_second;
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_TValue_tB7901B7EA7EAB8CB267BE252D8ED8682211D43B2);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_5, L_6, SizeOf_TValue_tB7901B7EA7EAB8CB267BE252D8ED8682211D43B2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)L_5, (void*)L_6);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:712>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77149));
		return;
	}
}
// Method Definition Index: 34302
// Method Definition Index: 34303
// Method Definition Index: 34303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_SwapElements_TisIl2CppFullySharedGenericStruct_m0B01A34B30BEA683D319F3AEC4F2ABEFB36CBE55_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_index1, int32_t ___2_index2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t456139F8923B774FEB6894E13380AACFB8CAE704 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TValue_t456139F8923B774FEB6894E13380AACFB8CAE704);
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_TValue_t456139F8923B774FEB6894E13380AACFB8CAE704);
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_TValue_t456139F8923B774FEB6894E13380AACFB8CAE704);
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_TValue_t456139F8923B774FEB6894E13380AACFB8CAE704);
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_TValue_t456139F8923B774FEB6894E13380AACFB8CAE704);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_t456139F8923B774FEB6894E13380AACFB8CAE704);
	memset(V_0, 0, SizeOf_TValue_t456139F8923B774FEB6894E13380AACFB8CAE704);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_index1), (&___2_index2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77224));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77225));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77226));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:816>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77227));
		int32_t L_0 = ___1_index1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77228));
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___0_array), L_0, (Il2CppFullySharedGenericStruct*)L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77228));
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_TValue_t456139F8923B774FEB6894E13380AACFB8CAE704);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:817>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77229));
		int32_t L_2 = ___1_index1;
		int32_t L_3 = ___2_index2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77230));
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___0_array), L_3, (Il2CppFullySharedGenericStruct*)L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77230));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77231));
		NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline((&___0_array), L_2, il2cpp_codegen_memcpy(L_5, L_4, SizeOf_TValue_t456139F8923B774FEB6894E13380AACFB8CAE704), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77231));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:818>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77232));
		int32_t L_6 = ___2_index2;
		il2cpp_codegen_memcpy(L_7, V_0, SizeOf_TValue_t456139F8923B774FEB6894E13380AACFB8CAE704);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77233));
		NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline((&___0_array), L_6, il2cpp_codegen_memcpy(L_8, L_7, SizeOf_TValue_t456139F8923B774FEB6894E13380AACFB8CAE704), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77233));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:819>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77234));
		return;
	}
}
// Method Definition Index: 34302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_SwapElements_TisIl2CppFullySharedGenericAny_m2F6256AA7F2819350B27A391AF0D2AF5A92C870E_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index1, int32_t ___2_index2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_index1), (&___2_index2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77218));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77219));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77220));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:810>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77221));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		int32_t L_1 = ___1_index1;
		NullCheck(L_0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		int32_t L_3 = ___2_index2;
		NullCheck(L_2);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77222));
		MemoryHelpers_Swap_TisIl2CppFullySharedGenericAny_m1715B6AE84465D838F0FE8BA00E5AA4DB2EBACC1(((Il2CppFullySharedGenericAny*)(L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), ((Il2CppFullySharedGenericAny*)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77222));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:811>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 77223));
		return;
	}
}
// Method Definition Index: 34302
// Method Definition Index: 34302
// Method Definition Index: 39172
// Method Definition Index: 39172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreEqual_TisIl2CppFullySharedGenericAny_mCDBDA95F2C978F51D211512CB608CDF5B5628FBA_fshared (Il2CppFullySharedGenericAny ___0_expected, Il2CppFullySharedGenericAny ___1_actual, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t39F5D4667B732F487E6D1C04AC3AFC25E19D97FC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	CHECKED_LOCAL(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit);
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t39F5D4667B732F487E6D1C04AC3AFC25E19D97FC);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t39F5D4667B732F487E6D1C04AC3AFC25E19D97FC);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t39F5D4667B732F487E6D1C04AC3AFC25E19D97FC);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t39F5D4667B732F487E6D1C04AC3AFC25E19D97FC);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_expected : &___0_expected), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_actual : &___1_actual));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20441));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20442));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertGeneric.cs:13>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20443));
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_expected : &___0_expected), SizeOf_T_t39F5D4667B732F487E6D1C04AC3AFC25E19D97FC);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_actual : &___1_actual), SizeOf_T_t39F5D4667B732F487E6D1C04AC3AFC25E19D97FC);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20444));
		CHECKED_LOCAL_INIT(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit,(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Assert_AreEqual_TisIl2CppFullySharedGenericAny_m0F394E700B5869B9BB20B6ED32461F1F56B870DA((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_2, L_0, SizeOf_T_t39F5D4667B732F487E6D1C04AC3AFC25E19D97FC): *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_t39F5D4667B732F487E6D1C04AC3AFC25E19D97FC): *(void**)L_1), (String_t*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20444));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertGeneric.cs:14>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20445));
		return;
	}
}
// Method Definition Index: 39173
// Method Definition Index: 39173
// Method Definition Index: 39173
// Method Definition Index: 39173
// Method Definition Index: 39173
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreEqual_TisIl2CppFullySharedGenericAny_m0F394E700B5869B9BB20B6ED32461F1F56B870DA_fshared (Il2CppFullySharedGenericAny ___0_expected, Il2CppFullySharedGenericAny ___1_actual, String_t* ___2_message, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tACCC857719CE88974D289FAF0EE9DDC58264563F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	CHECKED_LOCAL(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit);
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tACCC857719CE88974D289FAF0EE9DDC58264563F);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tACCC857719CE88974D289FAF0EE9DDC58264563F);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tACCC857719CE88974D289FAF0EE9DDC58264563F);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_tACCC857719CE88974D289FAF0EE9DDC58264563F);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_expected : &___0_expected), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_actual : &___1_actual), (&___2_message));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20446));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20447));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertGeneric.cs:19>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20448));
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_expected : &___0_expected), SizeOf_T_tACCC857719CE88974D289FAF0EE9DDC58264563F);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_actual : &___1_actual), SizeOf_T_tACCC857719CE88974D289FAF0EE9DDC58264563F);
		String_t* L_2 = ___2_message;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20449));
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20449));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20450));
		CHECKED_LOCAL_INIT(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit,(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Assert_AreEqual_TisIl2CppFullySharedGenericAny_m61C4BE5E4D8C4E643FEF0B1A04B51A9EC6636229((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_4, L_0, SizeOf_T_tACCC857719CE88974D289FAF0EE9DDC58264563F): *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_5, L_1, SizeOf_T_tACCC857719CE88974D289FAF0EE9DDC58264563F): *(void**)L_1), L_2, (RuntimeObject*)L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20450));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertGeneric.cs:20>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20451));
		return;
	}
}
// Method Definition Index: 39174
// Method Definition Index: 39174
// Method Definition Index: 39174
// Method Definition Index: 39174
// Method Definition Index: 39174
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreEqual_TisIl2CppFullySharedGenericAny_m61C4BE5E4D8C4E643FEF0B1A04B51A9EC6636229_fshared (Il2CppFullySharedGenericAny ___0_expected, Il2CppFullySharedGenericAny ___1_actual, String_t* ___2_message, RuntimeObject* ___3_comparer, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_T_t94EE85DC24ABEB798E6AD2D103E6C932B138C076 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	CHECKED_LOCAL(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t94EE85DC24ABEB798E6AD2D103E6C932B138C076);
	const Il2CppFullySharedGenericAny L_11 = L_5;
	const Il2CppFullySharedGenericAny L_14 = L_5;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t94EE85DC24ABEB798E6AD2D103E6C932B138C076);
	const Il2CppFullySharedGenericAny L_12 = L_7;
	const Il2CppFullySharedGenericAny L_16 = L_7;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___0_expected : &___0_expected), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_actual : &___1_actual), (&___2_message), (&___3_comparer));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20452));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20453));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertGeneric.cs:25>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20454));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20455));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20455));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20456));
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20456));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20457));
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20457));
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertGeneric.cs:27>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20458));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___0_expected : &___0_expected), SizeOf_T_t94EE85DC24ABEB798E6AD2D103E6C932B138C076);
		RuntimeObject* L_6 = il2cpp_codegen_isinst_runtime_class(il2cpp_rgctx_data(method->rgctx_data, 1), Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var, L_5);;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_actual : &___1_actual), SizeOf_T_t94EE85DC24ABEB798E6AD2D103E6C932B138C076);
		RuntimeObject* L_8 = il2cpp_codegen_isinst_runtime_class(il2cpp_rgctx_data(method->rgctx_data, 1), Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var, L_7);;
		String_t* L_9 = ___2_message;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20459));
		CHECKED_LOCAL_INIT(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit,(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Assert_AreEqual_mA4CD725133015119B0219ABAA6337650814B803B((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_8, L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20459));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertGeneric.cs:28>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20460));
		return;
	}

IL_0038:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertGeneric.cs:30>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20461));
		RuntimeObject* L_10 = ___3_comparer;
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_actual : &___1_actual), SizeOf_T_t94EE85DC24ABEB798E6AD2D103E6C932B138C076);
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___0_expected : &___0_expected), SizeOf_T_t94EE85DC24ABEB798E6AD2D103E6C932B138C076);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20462));
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 2), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_12: *(void**)L_12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20462));
		if (L_13)
		{
			goto IL_005a;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertGeneric.cs:31>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20463));
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_actual : &___1_actual), SizeOf_T_t94EE85DC24ABEB798E6AD2D103E6C932B138C076);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_14);
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___0_expected : &___0_expected), SizeOf_T_t94EE85DC24ABEB798E6AD2D103E6C932B138C076);
		RuntimeObject* L_17 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_16);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20464));
		String_t* L_18;
		L_18 = AssertionMessageUtil_GetEqualityMessage_m64D77BB9CA4284DD9561C238BB1F97B566830DBB(L_15, L_17, (bool)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20464));
		String_t* L_19 = ___2_message;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20465));
		CHECKED_LOCAL_INIT(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit,(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA(L_18, L_19, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20465));
	}

IL_005a:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertGeneric.cs:32>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20466));
		return;
	}
}
// Method Definition Index: 39176
// Method Definition Index: 39176
// Method Definition Index: 39176
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreNotEqual_TisIl2CppFullySharedGenericAny_m217B53E1E2EA93445AE70AD3670FEC738DF45FF6_fshared (Il2CppFullySharedGenericAny ___0_expected, Il2CppFullySharedGenericAny ___1_actual, String_t* ___2_message, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tAC2EF4C6ED002F7FEDD9EFE4EBA176EF73D9571B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	CHECKED_LOCAL(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit);
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tAC2EF4C6ED002F7FEDD9EFE4EBA176EF73D9571B);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tAC2EF4C6ED002F7FEDD9EFE4EBA176EF73D9571B);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tAC2EF4C6ED002F7FEDD9EFE4EBA176EF73D9571B);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_tAC2EF4C6ED002F7FEDD9EFE4EBA176EF73D9571B);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_expected : &___0_expected), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_actual : &___1_actual), (&___2_message));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20475));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20476));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertGeneric.cs:50>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20477));
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_expected : &___0_expected), SizeOf_T_tAC2EF4C6ED002F7FEDD9EFE4EBA176EF73D9571B);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_actual : &___1_actual), SizeOf_T_tAC2EF4C6ED002F7FEDD9EFE4EBA176EF73D9571B);
		String_t* L_2 = ___2_message;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20478));
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20478));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20479));
		CHECKED_LOCAL_INIT(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit,(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Assert_AreNotEqual_TisIl2CppFullySharedGenericAny_m7F2737935E00ECF8D9342F309CB63B21F5BE498B((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_4, L_0, SizeOf_T_tAC2EF4C6ED002F7FEDD9EFE4EBA176EF73D9571B): *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_5, L_1, SizeOf_T_tAC2EF4C6ED002F7FEDD9EFE4EBA176EF73D9571B): *(void**)L_1), L_2, (RuntimeObject*)L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20479));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertGeneric.cs:51>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20480));
		return;
	}
}
// Method Definition Index: 39177
// Method Definition Index: 39177
// Method Definition Index: 39177
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreNotEqual_TisIl2CppFullySharedGenericAny_m7F2737935E00ECF8D9342F309CB63B21F5BE498B_fshared (Il2CppFullySharedGenericAny ___0_expected, Il2CppFullySharedGenericAny ___1_actual, String_t* ___2_message, RuntimeObject* ___3_comparer, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_T_t8F7CF24EF00ABE99E22EAFD1850AD322CA7C4DAF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	CHECKED_LOCAL(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t8F7CF24EF00ABE99E22EAFD1850AD322CA7C4DAF);
	const Il2CppFullySharedGenericAny L_11 = L_5;
	const Il2CppFullySharedGenericAny L_14 = L_5;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t8F7CF24EF00ABE99E22EAFD1850AD322CA7C4DAF);
	const Il2CppFullySharedGenericAny L_12 = L_7;
	const Il2CppFullySharedGenericAny L_16 = L_7;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___0_expected : &___0_expected), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_actual : &___1_actual), (&___2_message), (&___3_comparer));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20481));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20482));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertGeneric.cs:56>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20483));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20484));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20484));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20485));
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20485));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20486));
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20486));
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertGeneric.cs:58>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20487));
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___0_expected : &___0_expected), SizeOf_T_t8F7CF24EF00ABE99E22EAFD1850AD322CA7C4DAF);
		RuntimeObject* L_6 = il2cpp_codegen_isinst_runtime_class(il2cpp_rgctx_data(method->rgctx_data, 1), Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var, L_5);;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_actual : &___1_actual), SizeOf_T_t8F7CF24EF00ABE99E22EAFD1850AD322CA7C4DAF);
		RuntimeObject* L_8 = il2cpp_codegen_isinst_runtime_class(il2cpp_rgctx_data(method->rgctx_data, 1), Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var, L_7);;
		String_t* L_9 = ___2_message;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20488));
		CHECKED_LOCAL_INIT(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit,(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Assert_AreNotEqual_m4E953971244A0BEACD42190612093ACC87C1A26F((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_8, L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20488));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertGeneric.cs:59>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20489));
		return;
	}

IL_0038:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertGeneric.cs:61>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20490));
		RuntimeObject* L_10 = ___3_comparer;
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_actual : &___1_actual), SizeOf_T_t8F7CF24EF00ABE99E22EAFD1850AD322CA7C4DAF);
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___0_expected : &___0_expected), SizeOf_T_t8F7CF24EF00ABE99E22EAFD1850AD322CA7C4DAF);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20491));
		NullCheck(L_10);
		bool L_13;
		L_13 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 2), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_12: *(void**)L_12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20491));
		if (!L_13)
		{
			goto IL_005a;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertGeneric.cs:62>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20492));
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_actual : &___1_actual), SizeOf_T_t8F7CF24EF00ABE99E22EAFD1850AD322CA7C4DAF);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_14);
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___0_expected : &___0_expected), SizeOf_T_t8F7CF24EF00ABE99E22EAFD1850AD322CA7C4DAF);
		RuntimeObject* L_17 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_16);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20493));
		String_t* L_18;
		L_18 = AssertionMessageUtil_GetEqualityMessage_m64D77BB9CA4284DD9561C238BB1F97B566830DBB(L_15, L_17, (bool)0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20493));
		String_t* L_19 = ___2_message;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20494));
		CHECKED_LOCAL_INIT(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit,(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA(L_18, L_19, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20494));
	}

IL_005a:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertGeneric.cs:63>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20495));
		return;
	}
}
// Method Definition Index: 39182
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNotNull_TisIl2CppSharedGenericObject_m0A85585E00CD4BC9B649E72630F685A145E90765_gshared (Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20531));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20532));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertNull.cs:38>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20533));
		Il2CppSharedGenericObject* L_0 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20534));
		CHECKED_LOCAL_INIT(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit,(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Assert_IsNotNull_TisIl2CppSharedGenericObject_m955F3178A0FAAAC07C8029B85CBDB4DE65AC0A61(L_0, (String_t*)NULL, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20534));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertNull.cs:39>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20535));
		return;
	}
}
// Method Definition Index: 39183
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNotNull_TisIl2CppSharedGenericObject_m955F3178A0FAAAC07C8029B85CBDB4DE65AC0A61_gshared (Il2CppSharedGenericObject* ___0_value, String_t* ___1_message, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value), (&___1_message));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20536));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20537));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertNull.cs:44>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20538));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20539));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20539));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20540));
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20540));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20541));
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20541));
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertNull.cs:46>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20542));
		Il2CppSharedGenericObject* L_5 = ___0_value;
		String_t* L_6 = ___1_message;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20543));
		CHECKED_LOCAL_INIT(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit,(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Assert_IsNotNull_mB889D13B7935F20A9CE32629C00434099E30D931(((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_5, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)), L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20543));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20544));
		return;
	}

IL_002d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertNull.cs:48>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20545));
		Il2CppSharedGenericObject* L_7 = ___0_value;
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertNull.cs:50>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20546));
		Il2CppSharedGenericObject* L_8 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20547));
		String_t* L_9;
		L_9 = AssertionMessageUtil_NullFailureMessage_mECBDB36C0C5433898BC4D3CF0AE55CEFBBCC9A50((RuntimeObject*)L_8, (bool)0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20547));
		String_t* L_10 = ___1_message;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20548));
		CHECKED_LOCAL_INIT(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit,(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA(L_9, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20548));
	}

IL_0047:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertNull.cs:52>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20549));
		return;
	}
}
// Method Definition Index: 39179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNull_TisIl2CppSharedGenericObject_mFA9C5D5F27978CEEE20C03464EDC373A22A86026_gshared (Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20504));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20505));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertNull.cs:12>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20506));
		Il2CppSharedGenericObject* L_0 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20507));
		CHECKED_LOCAL_INIT(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit,(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Assert_IsNull_TisIl2CppSharedGenericObject_m20BA4B8FF59E76850C490945432E7C0FD8F8D830(L_0, (String_t*)NULL, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20507));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertNull.cs:13>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20508));
		return;
	}
}
// Method Definition Index: 39180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNull_TisIl2CppSharedGenericObject_m20BA4B8FF59E76850C490945432E7C0FD8F8D830_gshared (Il2CppSharedGenericObject* ___0_value, String_t* ___1_message, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value), (&___1_message));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20509));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20510));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertNull.cs:18>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20511));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20512));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20512));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20513));
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20513));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20514));
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_1, L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20514));
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertNull.cs:20>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20515));
		Il2CppSharedGenericObject* L_5 = ___0_value;
		String_t* L_6 = ___1_message;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20516));
		CHECKED_LOCAL_INIT(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit,(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Assert_IsNull_mB7DAD5AA378E4A36BC1D27B88CFADD31023530BB(((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_5, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)), L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20516));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20517));
		return;
	}

IL_002d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertNull.cs:22>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20518));
		Il2CppSharedGenericObject* L_7 = ___0_value;
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertNull.cs:24>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20519));
		Il2CppSharedGenericObject* L_8 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20520));
		String_t* L_9;
		L_9 = AssertionMessageUtil_NullFailureMessage_mECBDB36C0C5433898BC4D3CF0AE55CEFBBCC9A50((RuntimeObject*)L_8, (bool)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20520));
		String_t* L_10 = ___1_message;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20521));
		CHECKED_LOCAL_INIT(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit,(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA(L_9, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20521));
	}

IL_0047:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Assertions/Assert/AssertNull.cs:26>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20522));
		return;
	}
}
// Method Definition Index: 74817
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AssetBundle_LoadAsset_TisIl2CppSharedGenericObject_m90AD270A58E231FE31AFC1BDFBF7525914BDF054_gshared (AssetBundle_tB38418819A49060CD738CB21541649340F082943* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Type_t_StaticInit);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_name));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AssetBundleModule + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_AssetBundleModule + 1));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/AssetBundle/Managed/AssetBundle.bindings.cs:223>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AssetBundleModule + 2));
		String_t* L_0 = ___0_name;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AssetBundleModule + 3));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AssetBundleModule + 3));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AssetBundleModule + 4));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = AssetBundle_LoadAsset_m021FE0B52DD660E54AE4C225D9AE66147902B8FE(__this, L_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_AssetBundleModule + 4));
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// Method Definition Index: 39215
// Method Definition Index: 39215
// Method Definition Index: 39215
// Method Definition Index: 39215
// Method Definition Index: 39215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AsyncGPUReadbackRequest_GetData_TisIl2CppFullySharedGenericStruct_m785CA6B68B6527258558130B5F81B345AE654EF0_fshared (AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7* __this, int32_t ___0_layer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_layer));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20681));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20682));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/AsyncGPUReadback.bindings.cs:27>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20683));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20684));
		bool L_0;
		L_0 = AsyncGPUReadbackRequest_get_done_mC042016E5BE850F18995831CBB4F06655914798C(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20684));
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20685));
		bool L_1;
		L_1 = AsyncGPUReadbackRequest_get_hasError_m374BB20A32B9DCDBFD8F81BBE542847B82F04EE5(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20685));
		if (!L_1)
		{
			goto IL_001b;
		}
	}

IL_0010:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/AsyncGPUReadback.bindings.cs:28>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20686));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20687));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral699ABA3941867526413B23699BCDD9DC20DA6D7A)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20687));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_001b:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/AsyncGPUReadback.bindings.cs:30>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20688));
		int32_t L_3 = ___0_layer;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_4 = ___0_layer;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20689));
		int32_t L_5;
		L_5 = AsyncGPUReadbackRequest_get_layerCount_m70DE577E87B38E6621851F88542E252123147501(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20689));
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0049;
		}
	}

IL_0028:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/AsyncGPUReadback.bindings.cs:31>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20690));
		int32_t L_6 = ___0_layer;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20691));
		int32_t L_9;
		L_9 = AsyncGPUReadbackRequest_get_layerCount_m70DE577E87B38E6621851F88542E252123147501(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20691));
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20692));
		String_t* L_12;
		L_12 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F2AA158020B57C11060F4940998AEF1D121EF87)), L_8, L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20692));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20693));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20693));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0049:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/AsyncGPUReadback.bindings.cs:33>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20694));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20695));
		int32_t L_14;
		L_14 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20695));
		V_0 = L_14;
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/AsyncGPUReadback.bindings.cs:35>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20696));
		int32_t L_15 = ___0_layer;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20697));
		intptr_t L_16;
		L_16 = AsyncGPUReadbackRequest_GetDataRaw_m73EA05E0647ED7BCB73E95C3C3E73F9C0B2F963C(__this, L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20697));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20698));
		void* L_17;
		L_17 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20698));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20699));
		int32_t L_18;
		L_18 = AsyncGPUReadbackRequest_get_layerDataSize_mCAE8CCE76C830532015EFC47D062917900DB749B(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20699));
		int32_t L_19 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20700));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_20;
		L_20 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52(L_17, ((int32_t)(L_18/L_19)), 1, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20700));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/AsyncGPUReadback.bindings.cs:39>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20701));
		return L_20;
	}
}
// Method Definition Index: 39215
// Method Definition Index: 39227
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 AsyncRequestNativeArrayData_CreateAndCheckAccess_TisIl2CppFullySharedGenericStruct_mFFDBF039D6B49C2B62C846E87304EBB8D7C0E49D_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20723));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20724));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/AsyncGPUReadback.bindings.cs:90>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20725));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_array;
		int32_t L_1 = L_0.___m_AllocatorLabel;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0012;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = ___0_array;
		int32_t L_3 = L_2.___m_AllocatorLabel;
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_001d;
		}
	}

IL_0012:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/AsyncGPUReadback.bindings.cs:92>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20726));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20727));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67A6B45EDCD9AF8D54D82F87349E9F4D77FC030F)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20727));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_001d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/AsyncGPUReadback.bindings.cs:94>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20728));
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/AsyncGPUReadback.bindings.cs:95>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20729));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20730));
		void* L_6;
		L_6 = NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_inline(L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20730));
		(&V_0)->___nativeArrayBuffer = L_6;
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/AsyncGPUReadback.bindings.cs:96>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20731));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20732));
		int32_t L_7;
		L_7 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___0_array), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20732));
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20733));
		int32_t L_9;
		L_9 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20733));
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		(&V_0)->___lengthInBytes = ((int64_t)il2cpp_codegen_multiply(L_8, L_10));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/AsyncGPUReadback.bindings.cs:104>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 20734));
		AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 L_11 = V_0;
		return L_11;
	}
}
// Method Definition Index: 8306
// Method Definition Index: 8306
// Method Definition Index: 8306
// Method Definition Index: 8306
// Method Definition Index: 8306
// Method Definition Index: 8306
// Method Definition Index: 8306
// Method Definition Index: 8306
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* AsyncTaskCache_CreateCacheableTask_TisIl2CppFullySharedGenericAny_mF1F904D36F96839C834A5BFC86634E274F6DA836_fshared (Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TResult_tAEECA9E240B60E411DB52BC214D8EEB1A6C7C678 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_tAEECA9E240B60E411DB52BC214D8EEB1A6C7C678);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TResult_tAEECA9E240B60E411DB52BC214D8EEB1A6C7C678);
	//<source_info:<no-source>:1>
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_result : &___0_result), SizeOf_TResult_tAEECA9E240B60E411DB52BC214D8EEB1A6C7C678);
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = V_0;
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_2 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		Task_1__ctor_mF395D7774F2ADB85151FF4EDD37C2A9FAB1001E3(L_2, (bool)0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_3, L_0, SizeOf_TResult_tAEECA9E240B60E411DB52BC214D8EEB1A6C7C678): *(void**)L_0), ((int32_t)16384), L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_2;
	}
}
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8290
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAFEAD0E0483FFA3D862272177C9DE55F2C943F8F_fshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Il2CppFullySharedGenericAny* ___0_awaiter, Il2CppFullySharedGenericAny* ___1_stateMachine, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_StaticInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* L_0 = (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*)(&__this->___m_builder);
		Il2CppFullySharedGenericAny* L_1 = ___0_awaiter;
		Il2CppFullySharedGenericAny* L_2 = ___1_stateMachine;
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_StaticInit,(AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m39A3830208CA3BE2081EDF44D100C5DFE73C1B6C(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8290
// Method Definition Index: 8288
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisIl2CppFullySharedGenericAny_m36201A5D380AC483FAE5E144880EEE2EB09D69E2_fshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Il2CppFullySharedGenericAny* ___0_stateMachine, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TStateMachine_tC634D3F254D5E968F4C74443AE8B80A65DFF30DF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TStateMachine_tC634D3F254D5E968F4C74443AE8B80A65DFF30DF);
	//<source_info:<no-source>:1>
	ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_stateMachine;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TStateMachine_tC634D3F254D5E968F4C74443AE8B80A65DFF30DF);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC70965A7D491520CA8D04D4EA01613EFED3309E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708));
		RuntimeHelpers_PrepareConstrainedRegions_mE852B0F834DB13A23B1CB04B359F81734FBB592C(NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				ExecutionContextSwitcher_Undo_m683D21973AF9E2E19D0662BBC9F266D79EC53886((&V_0), NULL);
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			ExecutionContext_EstablishCopyOnWriteScope_mE8BF2610B2AD4835A14D4FF78E16B8E132C4E759((&V_0), NULL);
			Il2CppFullySharedGenericAny* L_4 = ___0_stateMachine;
			Il2CppConstrainedCallData L_6;
			Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 1), (void*)L_4, &L_6, L_5);
			typedef void ( *func_L_8)(void*,const RuntimeMethod*);
			((func_L_8)L_7)(L_6.thisPtr,L_6.method);
			goto IL_0042;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		return;
	}
}
// Method Definition Index: 8288
// Method Definition Index: 8288
// Method Definition Index: 8288
// Method Definition Index: 8288
// Method Definition Index: 8288
// Method Definition Index: 8288
// Method Definition Index: 8288
// Method Definition Index: 8288
// Method Definition Index: 8288
// Method Definition Index: 8288
// Method Definition Index: 8288
// Method Definition Index: 8288
// Method Definition Index: 8288
// Method Definition Index: 8288
// Method Definition Index: 8288
// Method Definition Index: 8288
// Method Definition Index: 8288
// Method Definition Index: 8288
// Method Definition Index: 8288
// Method Definition Index: 8288
// Method Definition Index: 8282
// Method Definition Index: 8282
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m03130C9822AF7F0C435E5DAF03F245D2F35FC6EE_fshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Il2CppFullySharedGenericAny* ___0_awaiter, Il2CppFullySharedGenericAny* ___1_stateMachine, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1865ADD0B2BD98A16ED26B59F57307FBCA54202A);
		il2cpp_rgctx_method_init(method);
	}
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const uint32_t SizeOf_TStateMachine_tF9A7D09FF5D892EDF33FAADE2EF474FA93C06898 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	void* L_25 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TStateMachine_tF9A7D09FF5D892EDF33FAADE2EF474FA93C06898);
	//<source_info:<no-source>:1>
	MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B2_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B1_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B3_0 = NULL;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* G_B3_1 = NULL;
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			V_0 = (MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E*)NULL;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			bool L_1;
			L_1 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
			if (L_1)
			{
				G_B2_0 = L_0;
				goto IL_0012_1;
			}
			G_B1_0 = L_0;
		}
		{
			G_B3_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)(NULL));
			G_B3_1 = G_B1_0;
			goto IL_0018_1;
		}

IL_0012_1:
		{
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
			L_2 = AsyncVoidMethodBuilder_get_Task_m229538FE6AE7089FA46E87C5720256A0CC727B8F(__this, NULL);
			G_B3_0 = L_2;
			G_B3_1 = G_B2_0;
		}

IL_0018_1:
		{
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
			L_3 = AsyncMethodBuilderCore_GetCompletionAction_mC8FA54136A05CD45BA09560748F864AF93DDFDFD(G_B3_1, G_B3_0, (&V_0), NULL);
			V_1 = L_3;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_4 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			RuntimeObject* L_5 = L_4->___m_stateMachine;
			if (L_5)
			{
				goto IL_007a_1;
			}
		}
		{
			bool L_6;
			L_6 = AsyncCausalityTracer_get_LoggingOn_m7C26C0F4409E43D8FBC226A6413BBFAB3BF23EAF(NULL);
			if (!L_6)
			{
				goto IL_0062_1;
			}
		}
		{
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7;
			L_7 = AsyncVoidMethodBuilder_get_Task_m229538FE6AE7089FA46E87C5720256A0CC727B8F(__this, NULL);
			NullCheck(L_7);
			int32_t L_8;
			L_8 = Task_get_Id_mE529E167E64F60B3B79B540D4DFA6254B94F47AA(L_7, NULL);
			Il2CppFullySharedGenericAny* L_9 = ___1_stateMachine;
			Il2CppConstrainedCallData L_11;
			Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 0), (void*)L_9, &L_11, L_10);
			typedef Type_t* ( *func_L_13)(void*,const RuntimeMethod*);
			Type_t* L_14 = ((func_L_13)L_12)(L_11.thisPtr,L_11.method);
			NullCheck(L_14);
			String_t* L_15;
			L_15 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_14);
			String_t* L_16;
			L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1865ADD0B2BD98A16ED26B59F57307FBCA54202A, L_15, NULL);
			int64_t L_17 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
			AsyncCausalityTracer_TraceOperationCreation_m3C51C98DC960894FD740429D1A9BBC209FB65A8F(0, L_8, L_16, L_17, NULL);
		}

IL_0062_1:
		{
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_18 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState);
			Il2CppFullySharedGenericAny* L_19 = ___1_stateMachine;
			il2cpp_codegen_memcpy(L_20, L_19, SizeOf_TStateMachine_tF9A7D09FF5D892EDF33FAADE2EF474FA93C06898);
			RuntimeObject* L_21 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_20);
			MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* L_22 = V_0;
			AsyncMethodBuilderCore_PostBoxInitialization_mB531930E3F2FE5A9D31E4233429FAD0AFA6E8E9A(L_18, (RuntimeObject*)L_21, L_22, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL, NULL);
		}

IL_007a_1:
		{
			Il2CppFullySharedGenericAny* L_23 = ___0_awaiter;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_24 = V_1;
			Il2CppConstrainedCallData L_26;
			Il2CppMethodPointer L_27 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)L_23, &L_26, L_25);
			typedef void ( *func_L_28)(void*,Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*,const RuntimeMethod*);
			((func_L_28)L_27)(L_26.thisPtr, L_24,L_26.method);
			goto IL_0091;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0089;
		}
		throw e;
	}

CATCH_0089:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		Exception_t* L_29 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		AsyncMethodBuilderCore_ThrowAsync_m07C1067BBFF7C572C5DCEBD96C7327D94DE67330(L_29, (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)NULL, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0091;
	}

IL_0091:
	{
		return;
	}
}
// Method Definition Index: 8282
// Method Definition Index: 8282
// Method Definition Index: 8280
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisIl2CppFullySharedGenericAny_mF2CE0E0265F13C43AAB330B33509540A399C62A2_fshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Il2CppFullySharedGenericAny* ___0_stateMachine, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TStateMachine_tE30BB2CD688E01FD94E7957A8680AECCD5F0ADAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TStateMachine_tE30BB2CD688E01FD94E7957A8680AECCD5F0ADAB);
	//<source_info:<no-source>:1>
	ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_stateMachine;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TStateMachine_tE30BB2CD688E01FD94E7957A8680AECCD5F0ADAB);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC70965A7D491520CA8D04D4EA01613EFED3309E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708));
		RuntimeHelpers_PrepareConstrainedRegions_mE852B0F834DB13A23B1CB04B359F81734FBB592C(NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				ExecutionContextSwitcher_Undo_m683D21973AF9E2E19D0662BBC9F266D79EC53886((&V_0), NULL);
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			ExecutionContext_EstablishCopyOnWriteScope_mE8BF2610B2AD4835A14D4FF78E16B8E132C4E759((&V_0), NULL);
			Il2CppFullySharedGenericAny* L_4 = ___0_stateMachine;
			Il2CppConstrainedCallData L_6;
			Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 1), (void*)L_4, &L_6, L_5);
			typedef void ( *func_L_8)(void*,const RuntimeMethod*);
			((func_L_8)L_7)(L_6.thisPtr,L_6.method);
			goto IL_0042;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		return;
	}
}
// Method Definition Index: 8280
// Method Definition Index: 8280
// Method Definition Index: 37742
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AttributeHelperEngine_GetCustomAttributeOfType_TisIl2CppSharedGenericObject_mE7C17681F60005EB6A86B147D267540896EAFE09_gshared (Type_t* ___0_klass, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Type_t_StaticInit);
	Type_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	Il2CppSharedGenericObject* V_2 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_klass));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 11465));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 11466));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/AttributeHelperEngine.cs:116>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 11467));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 11468));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 11468));
		V_0 = L_1;
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/AttributeHelperEngine.cs:118>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 11469));
		Type_t* L_2 = ___0_klass;
		Type_t* L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 11470));
		NullCheck(L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(14, L_2, L_3, (bool)1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 11470));
		V_1 = L_4;
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/AttributeHelperEngine.cs:119>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 11471));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_1;
		NullCheck(L_6);
		if (!(((RuntimeArray*)L_6)->max_length))
		{
			goto IL_0024;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/AttributeHelperEngine.cs:120>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 11472));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = 0;
		RuntimeObject* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0024:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/AttributeHelperEngine.cs:122>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 11473));
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 23444
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoCompletePathVisitor_Unity_Properties_IListPropertyVisitor_Visit_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD19A03829F30D4FF76FA8D8A8FFEF57403B66195_fshared (AutoCompletePathVisitor_tF0F2FA82B3F3666F724C75CF0B95E4A420243B15* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Il2CppFullySharedGenericAny* ___1_container, Il2CppFullySharedGenericAny* ___2_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_property), (&___1_container), (&___2_list));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104863));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104864));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/AutoCompletePathVisitor.cs:122>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104865));
		Il2CppFullySharedGenericAny* L_0 = ___2_list;
		il2cpp_codegen_initobj((&V_0), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104866));
		bool L_2;
		L_2 = PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_m1B11483698339D3A0D40CD7247EE834DA473E24A(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104866));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/AutoCompletePathVisitor.cs:123>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104867));
		return;
	}
}
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 23442
// Method Definition Index: 35066
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1061));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1062));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:170>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1063));
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
// Method Definition Index: 35068
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)) ? ___1_value : &___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1068));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1069));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:234>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1070));
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_index;
		il2cpp_codegen_memcpy(L_2, ___1_value, SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1071));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_0, L_1, il2cpp_codegen_memcpy(L_3, L_2, SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1071));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:235>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1072));
		return;
	}
}
// Method Definition Index: 11359
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_fshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0 = ((EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 35069
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1073));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1074));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:241>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1075));
		void* L_0 = __this->___m_Buffer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 35234
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_fshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1879));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1880));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatchedForwarder.cs:61>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1881));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1882));
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1882));
		return L_0;
	}
}
// Method Definition Index: 35186
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_nativeArray));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1700));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1701));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1204>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1702));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
// Method Definition Index: 35187
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_nativeArray));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1703));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1704));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1212>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1705));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
// Method Definition Index: 11135
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_10 = L_9;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	//<source_info:<no-source>:1>
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = V_0;
		int32_t L_8 = V_1;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_7);
		il2cpp_codegen_memcpy((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), L_9, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9), (void**)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), (void*)L_9);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)) ? il2cpp_codegen_memcpy(L_11, L_10, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E): *(void**)L_10), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return;
	}
}
// Method Definition Index: 11185
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_fshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		return;
	}
}
// Method Definition Index: 35067
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1064));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1065));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:226>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1066));
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_index;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1067));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1067));
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022);
		return;
	}
}
// Method Definition Index: 35231
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_fshared_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_destination), (&___1_index), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_value : &___2_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1865));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1866));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatchedForwarder.cs:41>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1867));
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_value : &___2_value), SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1868));
		UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_inline(L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_3, L_2, SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5): *(void**)L_2), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1868));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatchedForwarder.cs:42>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1869));
		return;
	}
}
// Method Definition Index: 73794
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_fshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t8EBE725B2740B3ECE9C2D5E9EBEB0B97172D5E18 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 36));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 37));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/Unsafe/UnsafeUtilityPatched.cs:89>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 38));
		uint32_t L_0 = SizeOf_T_t8EBE725B2740B3ECE9C2D5E9EBEB0B97172D5E18;
		return (int32_t)L_0;
	}
}
// Method Definition Index: 35229
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_fshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_source), (&___1_index));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1857));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1858));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatchedForwarder.cs:29>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1859));
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1860));
		UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_inline(L_0, L_1, (Il2CppFullySharedGenericAny*)L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1860));
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		return;
	}
}
// Method Definition Index: 73791
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_fshared_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t07C3F1A12A8E95862F1A2E3DD5ED60C8EC56F580 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t07C3F1A12A8E95862F1A2E3DD5ED60C8EC56F580);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_destination), (&___1_index), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_value : &___2_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 27));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 28));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/Unsafe/UnsafeUtilityPatched.cs:66>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 29));
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = SizeOf_T_t07C3F1A12A8E95862F1A2E3DD5ED60C8EC56F580;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_value : &___2_value), SizeOf_T_t07C3F1A12A8E95862F1A2E3DD5ED60C8EC56F580);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), L_6, SizeOf_T_t07C3F1A12A8E95862F1A2E3DD5ED60C8EC56F580);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), (void*)L_6);
		return;
	}
}
// Method Definition Index: 73789
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_fshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t0AA6189E765AD6394317DDCA688595C885DC47B5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t0AA6189E765AD6394317DDCA688595C885DC47B5);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_source), (&___1_index));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 21));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 22));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/Unsafe/UnsafeUtilityPatched.cs:52>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 23));
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = SizeOf_T_t0AA6189E765AD6394317DDCA688595C885DC47B5;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		il2cpp_codegen_memcpy(L_6, ((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), SizeOf_T_t0AA6189E765AD6394317DDCA688595C885DC47B5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_T_t0AA6189E765AD6394317DDCA688595C885DC47B5);
		return;
	}
}
