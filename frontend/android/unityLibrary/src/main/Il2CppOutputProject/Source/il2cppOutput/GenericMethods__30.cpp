#include "pch-cpp.hpp"





struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};

struct ArraySortHelper_1_tA28E8AFAF0DFEB53C13A065091BF6C9E58743967;
struct ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3;
struct Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49;
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct MethodInfo_t;
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_InputSystem[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_RenderPipelines_Core_Runtime[];
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral704583F9DDC1FB5EA94E3CBC6ECE394863B1D2AC;
IL2CPP_EXTERN_C String_t* _stringLiteral738AE0A86F3C2783715FD77C8D9C55D1C19F9699;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralEE79E0ED75285085B891F475FE68B37575CE1220;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeArray_1_t6E2931CC2E1AA6B9F666FF4270BD177E2114779B_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ArraySortHelper_1_tA28E8AFAF0DFEB53C13A065091BF6C9E58743967  : public RuntimeObject
{
};
struct ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3  : public RuntimeObject
{
};
struct ArrayExtensions_t50967545561A867487EE4DD9E480EFF143ACE91D  : public RuntimeObject
{
};
struct ArrayHelpers_t1E3489005D45A29B838AE159F19B43B9A6A6F08B  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
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
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
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
struct IntPtr_t 
{
	void* ___m_value;
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
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
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
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
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
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49  : public MulticastDelegate_t
{
};
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct ArraySortHelper_1_tA28E8AFAF0DFEB53C13A065091BF6C9E58743967_StaticFields
{
	ArraySortHelper_1_tA28E8AFAF0DFEB53C13A065091BF6C9E58743967* ___s_defaultArraySortHelper;
};
struct ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3_StaticFields
{
	ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* ___s_defaultArraySortHelper;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_m8EAA6873B997E5F8A24C3218832B596A3BA22915_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m350557EFD66CDE0B703B36B419F257D51852320E_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5ED3CAF29A3566E42594992A144E506B0F485C4A_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_items, int32_t ___2_index, int32_t ___3_length, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tA28E8AFAF0DFEB53C13A065091BF6C9E58743967* ArraySortHelper_1_get_Default_m030DDF627CEF0776D6FE4C6C2F00AC8F792BB030_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m1A9E70B8A218D54D40511832036FDC28727D0112_fshared (ArraySortHelper_1_tA28E8AFAF0DFEB53C13A065091BF6C9E58743967* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* ArraySortHelper_2_get_Default_mDA1AE59CEB66F5EC4B5C6DCEA30CE0E5EF4E83DE_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_Sort_m67A1C1526BE40E2C011C26532C1F58AFBB9BA21E_fshared (ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, int32_t ___2_index, int32_t ___3_length, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_fshared (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_m917794C9B80242C4B43D3C7F4A4CE0D5875AD3F6_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_dst, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6_fshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisIl2CppFullySharedGenericAny_m4D64A1B2077BAD3CD94E5EEB5C56FA97409CBC6A_fshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void Array_Sort_TisIl2CppFullySharedGenericAny_m8EAA6873B997E5F8A24C3218832B596A3BA22915 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisIl2CppFullySharedGenericAny_m8EAA6873B997E5F8A24C3218832B596A3BA22915_fshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m350557EFD66CDE0B703B36B419F257D51852320E (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49*, const RuntimeMethod*))ArraySortHelper_1_Sort_m350557EFD66CDE0B703B36B419F257D51852320E_fshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5ED3CAF29A3566E42594992A144E506B0F485C4A (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_items, int32_t ___2_index, int32_t ___3_length, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5ED3CAF29A3566E42594992A144E506B0F485C4A_fshared)(___0_keys, ___1_items, ___2_index, ___3_length, ___4_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline ArraySortHelper_1_tA28E8AFAF0DFEB53C13A065091BF6C9E58743967* ArraySortHelper_1_get_Default_m030DDF627CEF0776D6FE4C6C2F00AC8F792BB030_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_1_tA28E8AFAF0DFEB53C13A065091BF6C9E58743967* (*) (const RuntimeMethod*))ArraySortHelper_1_get_Default_m030DDF627CEF0776D6FE4C6C2F00AC8F792BB030_fshared_inline)(method);
}
inline void ArraySortHelper_1_Sort_m1A9E70B8A218D54D40511832036FDC28727D0112 (ArraySortHelper_1_tA28E8AFAF0DFEB53C13A065091BF6C9E58743967* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (ArraySortHelper_1_tA28E8AFAF0DFEB53C13A065091BF6C9E58743967*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_1_Sort_m1A9E70B8A218D54D40511832036FDC28727D0112_fshared)(__this, ___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* ArraySortHelper_2_get_Default_mDA1AE59CEB66F5EC4B5C6DCEA30CE0E5EF4E83DE_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* (*) (const RuntimeMethod*))ArraySortHelper_2_get_Default_mDA1AE59CEB66F5EC4B5C6DCEA30CE0E5EF4E83DE_fshared_inline)(method);
}
inline void ArraySortHelper_2_Sort_m67A1C1526BE40E2C011C26532C1F58AFBB9BA21E (ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, int32_t ___2_index, int32_t ___3_length, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	((  void (*) (ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_2_Sort_m67A1C1526BE40E2C011C26532C1F58AFBB9BA21E_fshared)(__this, ___0_keys, ___1_values, ___2_index, ___3_length, ___4_comparer, method);
}
inline bool Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1 (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_fshared)((Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*)__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663 (bool ___0_condition, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
inline int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_fshared_inline)(__this, method);
}
inline void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_fshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline)(__this, method);
}
inline void NativeArray_1_Copy_m917794C9B80242C4B43D3C7F4A4CE0D5875AD3F6 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_dst, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, const RuntimeMethod*))NativeArray_1_Copy_m917794C9B80242C4B43D3C7F4A4CE0D5875AD3F6_fshared)(___0_src, ___1_dst, ___2_length, method);
}
inline void NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80_fshared)(__this, method);
}
inline void Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, const RuntimeMethod*))Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712_fshared)(___0_array, ___1_newSize, method);
}
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6_fshared)(___0_source, method);
}
inline int32_t Enumerable_Count_TisIl2CppFullySharedGenericAny_m4D64A1B2077BAD3CD94E5EEB5C56FA97409CBC6A (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisIl2CppFullySharedGenericAny_m4D64A1B2077BAD3CD94E5EEB5C56FA97409CBC6A_fshared)(___0_source, method);
}
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetGenericValueImpl_TisIl2CppFullySharedGenericAny_mE6F71A0CAC9D2B69469E3D7808D47682E213CEA4_fshared (RuntimeArray* __this, int32_t ___0_pos, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral704583F9DDC1FB5EA94E3CBC6ECE394863B1D2AC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3223
// Method Definition Index: 3182
// Method Definition Index: 3182
// Method Definition Index: 3182
// Method Definition Index: 3182
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_m5CAADAB28D2C20F31F2E806FD1C0376C9F580710_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		Array_Sort_TisIl2CppFullySharedGenericAny_m8EAA6873B997E5F8A24C3218832B596A3BA22915(L_2, 0, L_4, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
// Method Definition Index: 3184
// Method Definition Index: 3186
// Method Definition Index: 3186
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_m699F81165178B5E96D2D406ABB12F9382F8255E4_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* ___1_comparison, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(ArraySortHelper_1_t9BE2B74CDFAF56ED096DCF8837B8E15F84F27758_StaticInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* L_2 = ___1_comparison;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEE79E0ED75285085B891F475FE68B37575CE1220)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* L_7 = ___1_comparison;
		CHECKED_LOCAL_INIT(ArraySortHelper_1_t9BE2B74CDFAF56ED096DCF8837B8E15F84F27758_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 1)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_1_Sort_m350557EFD66CDE0B703B36B419F257D51852320E(L_4, 0, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
// Method Definition Index: 3184
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_m2BA666A4FFEAA592B129322C3AD976F3FD803F71_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		RuntimeObject* L_5 = ___1_comparer;
		Array_Sort_TisIl2CppFullySharedGenericAny_m8EAA6873B997E5F8A24C3218832B596A3BA22915(L_2, 0, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
// Method Definition Index: 3187
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m8EE3DB1C1E6B93DE1E6E590D97BC6E937862B9F2_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_items, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_keys;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral738AE0A86F3C2783715FD77C8D9C55D1C19F9699)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_keys;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5ED3CAF29A3566E42594992A144E506B0F485C4A(L_2, L_3, 0, L_5, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
// Method Definition Index: 3183
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_m1CA75F8BABDEE8F5670C2B1E2F5D759ED5F7F4B7_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_length;
		Array_Sort_TisIl2CppFullySharedGenericAny_m8EAA6873B997E5F8A24C3218832B596A3BA22915(L_0, L_1, L_2, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
// Method Definition Index: 3189
// Method Definition Index: 3189
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m78B3AD3A0CA6D9F5E637C5CB9B74F2F69878061E_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_items, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_keys;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral738AE0A86F3C2783715FD77C8D9C55D1C19F9699)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_keys;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		RuntimeObject* L_6 = ___2_comparer;
		Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5ED3CAF29A3566E42594992A144E506B0F485C4A(L_2, L_3, 0, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_m8EAA6873B997E5F8A24C3218832B596A3BA22915_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(ArraySortHelper_1_t5CDE2C06028E271167F9177359E8C2456B9A3203_StaticInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	String_t* G_B7_0 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___2_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___2_length;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___1_index;
		int32_t L_9 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0044:
	{
		int32_t L_11 = ___2_length;
		if ((((int32_t)L_11) <= ((int32_t)1)))
		{
			goto IL_0056;
		}
	}
	{
		CHECKED_LOCAL_INIT(ArraySortHelper_1_t5CDE2C06028E271167F9177359E8C2456B9A3203_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 1)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_1_tA28E8AFAF0DFEB53C13A065091BF6C9E58743967* L_12;
		L_12 = ArraySortHelper_1_get_Default_m030DDF627CEF0776D6FE4C6C2F00AC8F792BB030_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = ___2_length;
		RuntimeObject* L_16 = ___3_comparer;
		NullCheck(L_12);
		ArraySortHelper_1_Sort_m1A9E70B8A218D54D40511832036FDC28727D0112(L_12, L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0056:
	{
		return;
	}
}
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3185
// Method Definition Index: 3188
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m2A67D53523C3D5799C3A6698070C0E564FA7AA43_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_items, int32_t ___2_index, int32_t ___3_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___1_items;
		int32_t L_2 = ___2_index;
		int32_t L_3 = ___3_length;
		Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5ED3CAF29A3566E42594992A144E506B0F485C4A(L_0, L_1, L_2, L_3, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
// Method Definition Index: 3190
// Method Definition Index: 3190
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5ED3CAF29A3566E42594992A144E506B0F485C4A_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_items, int32_t ___2_index, int32_t ___3_length, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(ArraySortHelper_2_t108CEB1020F054AC2F3D37BE97B495CACAAB466C_StaticInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	String_t* G_B7_0 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_keys;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral738AE0A86F3C2783715FD77C8D9C55D1C19F9699)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___2_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___3_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___3_length;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___0_keys;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___2_index;
		int32_t L_9 = ___3_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) < ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___1_items;
		if (!L_10)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___2_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___1_items;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = ___3_length;
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_13, L_14)))))
		{
			goto IL_004f;
		}
	}

IL_0044:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_004f:
	{
		int32_t L_16 = ___3_length;
		if ((((int32_t)L_16) <= ((int32_t)1)))
		{
			goto IL_0071;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___1_items;
		if (L_17)
		{
			goto IL_0061;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = ___0_keys;
		int32_t L_19 = ___2_index;
		int32_t L_20 = ___3_length;
		RuntimeObject* L_21 = ___4_comparer;
		Array_Sort_TisIl2CppFullySharedGenericAny_m8EAA6873B997E5F8A24C3218832B596A3BA22915(L_18, L_19, L_20, L_21, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}

IL_0061:
	{
		CHECKED_LOCAL_INIT(ArraySortHelper_2_t108CEB1020F054AC2F3D37BE97B495CACAAB466C_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 2)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* L_22;
		L_22 = ArraySortHelper_2_get_Default_mDA1AE59CEB66F5EC4B5C6DCEA30CE0E5EF4E83DE_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24 = ___1_items;
		int32_t L_25 = ___2_index;
		int32_t L_26 = ___3_length;
		RuntimeObject* L_27 = ___4_comparer;
		NullCheck(L_22);
		ArraySortHelper_2_Sort_m67A1C1526BE40E2C011C26532C1F58AFBB9BA21E(L_22, L_23, L_24, L_25, L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0071:
	{
		return;
	}
}
// Method Definition Index: 3203
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_TrueForAll_TisIl2CppFullySharedGenericAny_m8737A7A5DCF9A4D4946A54B239E3F0873DB176D1_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___1_match, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t21BFD184137C86CA60DA59C2301E8200FB3C6BCA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t21BFD184137C86CA60DA59C2301E8200FB3C6BCA);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_2 = ___1_match;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001c:
	{
		V_0 = 0;
		goto IL_0035;
	}

IL_0020:
	{
		CHECK_PAUSE_POINT;
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_4 = ___1_match;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		il2cpp_codegen_memcpy(L_8, (L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_T_t21BFD184137C86CA60DA59C2301E8200FB3C6BCA);
		NullCheck(L_4);
		bool L_9;
		L_9 = Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_8: *(void**)L_8), NULL);
		if (L_9)
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0031:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0035:
	{
		int32_t L_11 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0020;
		}
	}
	{
		return (bool)1;
	}
}
// Method Definition Index: 3262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_UnsafeLoad_TisIl2CppFullySharedGenericAny_m215F0042D6593ECA52506AEB0C577AA3C09CBA3B_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t5F6E17DC1CF15F3C46C4F98229D48A9FBAFF8979 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t5F6E17DC1CF15F3C46C4F98229D48A9FBAFF8979);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_T_t5F6E17DC1CF15F3C46C4F98229D48A9FBAFF8979);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_t5F6E17DC1CF15F3C46C4F98229D48A9FBAFF8979);
		return;
	}
}
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_UnsafeMov_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5E24BAB7390771C3B1CA6D9940BD255C57851329_fshared (Il2CppFullySharedGenericAny ___0_instance, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	il2cpp_codegen_array_unsafe_mov(il2cpp_rgctx_data(method->rgctx_data, 1), il2cppRetVal, il2cpp_rgctx_data(method->rgctx_data, 0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___0_instance : &___0_instance));
}
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3264
// Method Definition Index: 3263
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_UnsafeStore_TisIl2CppFullySharedGenericAny_m90E9EF44D2DA6B9F8715AE2B935E4C09F757AC90_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t7324E290815D2CA6ECCE3A5065448366DFC92DCB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t7324E290815D2CA6ECCE3A5065448366DFC92DCB);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_value : &___2_value), SizeOf_T_t7324E290815D2CA6ECCE3A5065448366DFC92DCB);
		NullCheck(L_0);
		il2cpp_codegen_memcpy((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)), L_2, SizeOf_T_t7324E290815D2CA6ECCE3A5065448366DFC92DCB);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)), (void*)L_2);
		return;
	}
}
// Method Definition Index: 27081
// Method Definition Index: 27081
// Method Definition Index: 27081
// Method Definition Index: 27081
// Method Definition Index: 27081
// Method Definition Index: 27081
// Method Definition Index: 27081
// Method Definition Index: 27081
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayExtensions_FillArray_TisIl2CppFullySharedGenericStruct_m33F843BF3B5BC7333D99949E2CFF2F64B6AAF7F9_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, Il2CppFullySharedGenericStruct* ___1_value, int32_t ___2_startIndex, int32_t ___3_length, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit);
	const uint32_t SizeOf_T_tCB137871CE2128B87A346D2A872A7CA8CDC18905 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_15 = alloca(SizeOf_T_tCB137871CE2128B87A346D2A872A7CA8CDC18905);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_value), (&___2_startIndex), (&___3_length));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40909));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40910));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40911));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/Utilities/ArrayExtensions.cs:77>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40912));
		int32_t L_0 = ___2_startIndex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40913));
		CHECKED_LOCAL_INIT(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit,(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int32_t)((((int32_t)L_0) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40913));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40914));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/Utilities/ArrayExtensions.cs:81>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40915));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_array;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40916));
		void* L_3;
		L_3 = NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_inline(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40916));
		V_0 = (Il2CppFullySharedGenericStruct*)L_3;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/Utilities/ArrayExtensions.cs:83>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40917));
		int32_t L_4 = ___3_length;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = ___2_startIndex;
		int32_t L_6 = ___3_length;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		goto IL_002a;
	}

IL_0024:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_7 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40918));
		int32_t L_8;
		L_8 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline(L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40918));
		G_B3_0 = L_8;
	}

IL_002a:
	{
		V_1 = G_B3_0;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/Utilities/ArrayExtensions.cs:85>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40919));
		int32_t L_9 = ___2_startIndex;
		V_2 = L_9;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40920));
		goto IL_0049;
	}

IL_002f:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/Utilities/ArrayExtensions.cs:86>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40921));
		Il2CppFullySharedGenericStruct* L_10 = V_0;
		int32_t L_11 = V_2;
		intptr_t L_12 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_11,NULL));
		uint32_t L_13 = SizeOf_T_tCB137871CE2128B87A346D2A872A7CA8CDC18905;
		Il2CppFullySharedGenericStruct* L_14 = ___1_value;
		il2cpp_codegen_memcpy(L_15, L_14, SizeOf_T_tCB137871CE2128B87A346D2A872A7CA8CDC18905);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(L_12, (int32_t)L_13)))), L_15, SizeOf_T_tCB137871CE2128B87A346D2A872A7CA8CDC18905);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(L_12, (int32_t)L_13)))), (void*)L_15);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/Utilities/ArrayExtensions.cs:85>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40922));
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0049:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/Utilities/ArrayExtensions.cs:85>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40923));
		int32_t L_17 = V_2;
		int32_t L_18 = V_1;
		V_3 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40924));
		bool L_19 = V_3;
		if (L_19)
		{
			goto IL_002f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40925));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/Utilities/ArrayExtensions.cs:88>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40926));
		return;
	}
}
// Method Definition Index: 27078
// Method Definition Index: 27078
// Method Definition Index: 27078
// Method Definition Index: 27078
// Method Definition Index: 27080
// Method Definition Index: 27078
// Method Definition Index: 27078
// Method Definition Index: 27078
// Method Definition Index: 27078
// Method Definition Index: 27078
// Method Definition Index: 27078
// Method Definition Index: 27078
// Method Definition Index: 27078
// Method Definition Index: 27078
// Method Definition Index: 27078
// Method Definition Index: 27080
// Method Definition Index: 27078
// Method Definition Index: 27078
// Method Definition Index: 27078
// Method Definition Index: 27078
// Method Definition Index: 27078
// Method Definition Index: 27078
// Method Definition Index: 27078
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayExtensions_ResizeArray_TisIl2CppFullySharedGenericStruct_m26A72CB97BA0352D3D33EF93605B2CEC842643EF_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_capacity));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40858));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40859));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40860));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/Utilities/ArrayExtensions.cs:23>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40861));
		int32_t L_0 = ___1_capacity;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40862));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&V_0), L_0, 4, 0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40862));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/Utilities/ArrayExtensions.cs:24>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40863));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40864));
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40864));
		V_1 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40865));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40866));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/Utilities/ArrayExtensions.cs:26>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40867));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_4 = ___0_array;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_4);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6 = V_0;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_7 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40868));
		int32_t L_8;
		L_8 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline(L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40868));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40869));
		NativeArray_1_Copy_m917794C9B80242C4B43D3C7F4A4CE0D5875AD3F6(L_5, L_6, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40869));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/Utilities/ArrayExtensions.cs:27>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40870));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_9 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40871));
		NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80(L_9, il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40871));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40872));
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/Utilities/ArrayExtensions.cs:29>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40873));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_10 = ___0_array;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_11 = V_0;
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_10 = L_11;
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/Utilities/ArrayExtensions.cs:30>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40874));
		return;
	}
}
// Method Definition Index: 27080
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayExtensions_ResizeArray_TisIl2CppFullySharedGenericAny_mD67505C99AD7451803DE4E5219C85C92F63ACA1F_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_capacity));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40898));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40899));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40900));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/Utilities/ArrayExtensions.cs:58>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40901));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_0);
		V_0 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40902));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40903));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/Utilities/ArrayExtensions.cs:60>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40904));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_3 = ___0_array;
		int32_t L_4 = ___1_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_4);
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_3, (RuntimeObject*)L_5);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_5);
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/Utilities/ArrayExtensions.cs:61>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40905));
		goto IL_001d;
	}

IL_0015:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/Utilities/ArrayExtensions.cs:64>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40906));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_6 = ___0_array;
		int32_t L_7 = ___1_capacity;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40907));
		Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712(L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40907));
	}

IL_001d:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/Utilities/ArrayExtensions.cs:65>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 40908));
		return;
	}
}
// Method Definition Index: 27078
// Method Definition Index: 27078
// Method Definition Index: 27078
// Method Definition Index: 27078
// Method Definition Index: 27078
// Method Definition Index: 34275
// Method Definition Index: 34275
// Method Definition Index: 34275
// Method Definition Index: 34275
// Method Definition Index: 34275
// Method Definition Index: 34275
// Method Definition Index: 34275
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_Append_TisIl2CppFullySharedGenericAny_m74071BDA5A66F0EAF5D19635A126FC30D8D33E0A_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tB5E84E341B90832381E3E69BDD263A6DA94871C8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB5E84E341B90832381E3E69BDD263A6DA94871C8);
	const Il2CppFullySharedGenericAny L_16 = L_7;
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76635));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76636));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76637));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:260>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76638));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_0);
		V_1 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76639));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76640));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:262>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76641));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_3 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)1);
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_3, (RuntimeObject*)L_4);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_4);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:263>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76642));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_5 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_5);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_TValue_tB5E84E341B90832381E3E69BDD263A6DA94871C8);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)), L_7, SizeOf_TValue_tB5E84E341B90832381E3E69BDD263A6DA94871C8);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)), (void*)L_7);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:264>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76643));
		V_2 = 0;
		goto IL_003c;
	}

IL_0020:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:267>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76644));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_8 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_8);
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		V_0 = L_10;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:268>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76645));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_11 = ___0_array;
		int32_t L_12 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76646));
		Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76646));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:269>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76647));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_13 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_13);
		int32_t L_15 = V_0;
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_TValue_tB5E84E341B90832381E3E69BDD263A6DA94871C8);
		NullCheck(L_14);
		il2cpp_codegen_memcpy((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), L_16, SizeOf_TValue_tB5E84E341B90832381E3E69BDD263A6DA94871C8);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), (void*)L_16);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:270>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76648));
		int32_t L_17 = V_0;
		V_2 = L_17;
		goto IL_003c;
	}

IL_003c:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:271>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76649));
		int32_t L_18 = V_2;
		return L_18;
	}
}
// Method Definition Index: 34276
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_Append_TisIl2CppFullySharedGenericAny_m045AB997172138AC6A7D3C5BC33D76C7A0E602BB_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, RuntimeObject* ___1_values, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TValue_t0622476585ED130623AA322FB7F4C1DCCA5C0FF7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TValue_t0622476585ED130623AA322FB7F4C1DCCA5C0FF7);
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_TValue_t0622476585ED130623AA322FB7F4C1DCCA5C0FF7);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TValue_t0622476585ED130623AA322FB7F4C1DCCA5C0FF7);
	memset(V_6, 0, SizeOf_TValue_t0622476585ED130623AA322FB7F4C1DCCA5C0FF7);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_values));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), V_6);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76650));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76651));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76652));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:275>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76653));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_0);
		V_3 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76654));
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76655));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:277>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76656));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_3 = ___0_array;
		RuntimeObject* L_4 = ___1_values;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76657));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5;
		L_5 = Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6(L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76657));
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_3, (RuntimeObject*)L_5);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_5);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:278>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76658));
		V_4 = 0;
		goto IL_006f;
	}

IL_0018:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:281>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76659));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_6 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_6);
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		V_0 = L_8;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:282>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76660));
		RuntimeObject* L_9 = ___1_values;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76661));
		int32_t L_10;
		L_10 = Enumerable_Count_TisIl2CppFullySharedGenericAny_m4D64A1B2077BAD3CD94E5EEB5C56FA97409CBC6A(L_9, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76661));
		V_1 = L_10;
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:284>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76662));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_11 = ___0_array;
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76663));
		Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712(L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76663));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:286>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76664));
		int32_t L_14 = V_0;
		V_2 = L_14;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76665));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:287>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76666));
		RuntimeObject* L_15 = ___1_values;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76667));
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 3), L_15);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76667));
		V_5 = L_16;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005d:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76674));
					RuntimeObject* L_17 = V_5;
					if (!L_17)
					{
						goto IL_0069;
					}
				}
				{
					RuntimeObject* L_18 = V_5;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76675));
					NullCheck((RuntimeObject*)L_18);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_18);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76675));
				}

IL_0069:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76676));
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76668));
				goto IL_0052_1;
			}

IL_003b_1:
			{
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:287>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76669));
				RuntimeObject* L_19 = V_5;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76670));
				NullCheck(L_19);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 5), L_19, (Il2CppFullySharedGenericAny*)L_20);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76670));
				il2cpp_codegen_memcpy(V_6, L_20, SizeOf_TValue_t0622476585ED130623AA322FB7F4C1DCCA5C0FF7);
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:288>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76671));
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_21 = ___0_array;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = il2cpp_codegen_ldind<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_21);
				int32_t L_23 = V_2;
				int32_t L_24 = L_23;
				V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
				il2cpp_codegen_memcpy(L_25, V_6, SizeOf_TValue_t0622476585ED130623AA322FB7F4C1DCCA5C0FF7);
				NullCheck(L_22);
				il2cpp_codegen_memcpy((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)), L_25, SizeOf_TValue_t0622476585ED130623AA322FB7F4C1DCCA5C0FF7);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 7), (void**)(L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)), (void*)L_25);
			}

IL_0052_1:
			{
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:287>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76672));
				RuntimeObject* L_26 = V_5;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76673));
				NullCheck((RuntimeObject*)L_26);
				bool L_27;
				L_27 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_26);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76673));
				if (L_27)
				{
					goto IL_003b_1;
				}
			}
			{
				goto IL_006a;
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

IL_006a:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:290>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76677));
		int32_t L_28 = V_0;
		V_4 = L_28;
		goto IL_006f;
	}

IL_006f:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/ArrayHelpers.cs:291>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 76678));
		int32_t L_29 = V_4;
		return L_29;
	}
}
// Method Definition Index: 34275
// Method Definition Index: 34275
// Method Definition Index: 34275
// Method Definition Index: 34275
// Method Definition Index: 34275
// Method Definition Index: 34275
// Method Definition Index: 34279
// Method Definition Index: 11327
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_1_tA28E8AFAF0DFEB53C13A065091BF6C9E58743967* ArraySortHelper_1_get_Default_m030DDF627CEF0776D6FE4C6C2F00AC8F792BB030_fshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArraySortHelper_1_t12ACD5D4B1FBD05D5754D7AAD19101DE86191AE7_StaticInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		CHECKED_LOCAL_INIT(ArraySortHelper_1_t12ACD5D4B1FBD05D5754D7AAD19101DE86191AE7_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_1_tA28E8AFAF0DFEB53C13A065091BF6C9E58743967* L_0 = ((ArraySortHelper_1_tA28E8AFAF0DFEB53C13A065091BF6C9E58743967_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))->___s_defaultArraySortHelper;
		return L_0;
	}
}
// Method Definition Index: 11339
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* ArraySortHelper_2_get_Default_mDA1AE59CEB66F5EC4B5C6DCEA30CE0E5EF4E83DE_fshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArraySortHelper_2_tE8A8BD84B9DFAA4BBC7CEC609355C93A366542A3_StaticInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		CHECKED_LOCAL_INIT(ArraySortHelper_2_tE8A8BD84B9DFAA4BBC7CEC609355C93A366542A3_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* L_0 = ((ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___s_defaultArraySortHelper;
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
