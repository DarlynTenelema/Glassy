#include "pch-cpp.hpp"





template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4Invoker;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4Invoker<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};

struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00BA133FF3D84EAB4FB7DB5FB38F235C4E108ED9;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
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
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
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
struct String_t_StaticFields
{
	String_t* ___Empty;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisIl2CppFullySharedGenericAny_m5A880FB745BFA92B748F4CE1853935AD172AB601_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOfImpl_TisIl2CppFullySharedGenericAny_mB366BADD239063B30EADBFB1E25770233C263B56_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_fshared (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline int32_t Array_LastIndexOf_TisIl2CppFullySharedGenericAny_m5A880FB745BFA92B748F4CE1853935AD172AB601 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t, const RuntimeMethod*))Array_LastIndexOf_TisIl2CppFullySharedGenericAny_m5A880FB745BFA92B748F4CE1853935AD172AB601_fshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
inline int32_t Array_LastIndexOfImpl_TisIl2CppFullySharedGenericAny_mB366BADD239063B30EADBFB1E25770233C263B56 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t, const RuntimeMethod*))Array_LastIndexOfImpl_TisIl2CppFullySharedGenericAny_mB366BADD239063B30EADBFB1E25770233C263B56_fshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_fshared_inline)(method);
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_fshared)(method);
}
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_InternalArray__set_Item_TisIl2CppFullySharedGenericAny_m8EA7B18F43851A117DD67D8A4C620C2D1456A951_fshared (RuntimeArray* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t3F7F4C1E55A84BB86DCFEFFF33E141038B02B3A9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t3F7F4C1E55A84BB86DCFEFFF33E141038B02B3A9);
	//<source_info:<no-source>:1>
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = il2cpp_codegen_array_get_length(__this);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)__this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___0_index;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_item : &___1_item), SizeOf_T_t3F7F4C1E55A84BB86DCFEFFF33E141038B02B3A9);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_7);
		return;
	}

IL_0028:
	{
		int32_t L_8 = ___0_index;
		SetGenericValueImpl(__this, L_8, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_item : &___1_item));
		return;
	}
}
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3221
// Method Definition Index: 3163
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisIl2CppFullySharedGenericAny_mE86AD07AC87A88022E18138E3B7B6365630F8973_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t5211545527807CEA55E07F956905923AE0154C25 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t5211545527807CEA55E07F956905923AE0154C25);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t5211545527807CEA55E07F956905923AE0154C25);
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
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_T_t5211545527807CEA55E07F956905923AE0154C25);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_9;
		L_9 = Array_LastIndexOf_TisIl2CppFullySharedGenericAny_m5A880FB745BFA92B748F4CE1853935AD172AB601(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_8, L_3, SizeOf_T_t5211545527807CEA55E07F956905923AE0154C25): *(void**)L_3), ((int32_t)il2cpp_codegen_subtract(L_5, 1)), L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_9;
	}
}
// Method Definition Index: 3164
// Method Definition Index: 3164
// Method Definition Index: 3164
// Method Definition Index: 3164
// Method Definition Index: 3164
// Method Definition Index: 3164
// Method Definition Index: 3164
// Method Definition Index: 3164
// Method Definition Index: 3164
// Method Definition Index: 3164
// Method Definition Index: 3164
// Method Definition Index: 3164
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisIl2CppFullySharedGenericAny_m5897D7BE7D394287FDEF1A444B517FAD6597B8B5_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38);
	const Il2CppFullySharedGenericAny L_7 = L_3;
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B4_0 = 0;
	Il2CppFullySharedGenericAny G_B4_1 = alloca(SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38);
	memset(G_B4_1, 0, SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B4_2 = NULL;
	int32_t G_B3_0 = 0;
	Il2CppFullySharedGenericAny G_B3_1 = alloca(SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38);
	memset(G_B3_1, 0, SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B3_2 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	Il2CppFullySharedGenericAny G_B5_2 = alloca(SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38);
	memset(G_B5_2, 0, SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* G_B5_3 = NULL;
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
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38);
		int32_t L_4 = ___2_startIndex;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		NullCheck(L_5);
		if (!(((RuntimeArray*)L_5)->max_length))
		{
			G_B4_0 = L_4;
			il2cpp_codegen_memcpy(G_B4_1, L_3, SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38);
			G_B4_2 = L_2;
			goto IL_001a;
		}
		G_B3_0 = L_4;
		il2cpp_codegen_memcpy(G_B3_1, L_3, SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38);
		G_B3_2 = L_2;
	}
	{
		int32_t L_6 = ___2_startIndex;
		G_B5_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		G_B5_1 = G_B3_0;
		il2cpp_codegen_memcpy(G_B5_2, G_B3_1, SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38);
		G_B5_3 = G_B3_2;
		goto IL_001b;
	}

IL_001a:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		il2cpp_codegen_memcpy(G_B5_2, G_B4_1, SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38);
		G_B5_3 = G_B4_2;
	}

IL_001b:
	{
		int32_t L_8;
		L_8 = Array_LastIndexOf_TisIl2CppFullySharedGenericAny_m5A880FB745BFA92B748F4CE1853935AD172AB601(G_B5_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_7, G_B5_2, SizeOf_T_tC044AA3D156BB28BCF7B4722252E81FF1ABACC38): *(void**)G_B5_2), G_B5_1, G_B5_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_8;
	}
}
// Method Definition Index: 3164
// Method Definition Index: 3164
// Method Definition Index: 3164
// Method Definition Index: 3164
// Method Definition Index: 3164
// Method Definition Index: 3164
// Method Definition Index: 3164
// Method Definition Index: 3165
// Method Definition Index: 3165
// Method Definition Index: 3165
// Method Definition Index: 3165
// Method Definition Index: 3165
// Method Definition Index: 3165
// Method Definition Index: 3165
// Method Definition Index: 3165
// Method Definition Index: 3165
// Method Definition Index: 3165
// Method Definition Index: 3165
// Method Definition Index: 3165
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOf_TisIl2CppFullySharedGenericAny_m5A880FB745BFA92B748F4CE1853935AD172AB601_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tAB7263AE80E4A5F9AE443FA18645D31183D6EBF0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T_tAB7263AE80E4A5F9AE443FA18645D31183D6EBF0);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T_tAB7263AE80E4A5F9AE443FA18645D31183D6EBF0);
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
		NullCheck(L_2);
		if ((((RuntimeArray*)L_2)->max_length))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_3 = ___2_startIndex;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_4 = ___2_startIndex;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0029:
	{
		int32_t L_6 = ___3_count;
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00BA133FF3D84EAB4FB7DB5FB38F235C4E108ED9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_003c:
	{
		return (-1);
	}

IL_003e:
	{
		int32_t L_8 = ___2_startIndex;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_9 = ___2_startIndex;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0058;
		}
	}

IL_0048:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_12 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_0058:
	{
		int32_t L_13 = ___3_count;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_14 = ___2_startIndex;
		int32_t L_15 = ___3_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_14, L_15)), 1))) >= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}

IL_0064:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00BA133FF3D84EAB4FB7DB5FB38F235C4E108ED9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0074:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___0_array;
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_T_tAB7263AE80E4A5F9AE443FA18645D31183D6EBF0);
		int32_t L_19 = ___2_startIndex;
		int32_t L_20 = ___3_count;
		int32_t L_22;
		L_22 = Array_LastIndexOfImpl_TisIl2CppFullySharedGenericAny_mB366BADD239063B30EADBFB1E25770233C263B56(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_21, L_18, SizeOf_T_tAB7263AE80E4A5F9AE443FA18645D31183D6EBF0): *(void**)L_18), L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_22;
	}
}
// Method Definition Index: 3165
// Method Definition Index: 3165
// Method Definition Index: 3165
// Method Definition Index: 3165
// Method Definition Index: 3165
// Method Definition Index: 3165
// Method Definition Index: 3165
// Method Definition Index: 3260
// Method Definition Index: 3260
// Method Definition Index: 3260
// Method Definition Index: 3260
// Method Definition Index: 3260
// Method Definition Index: 3260
// Method Definition Index: 3260
// Method Definition Index: 3260
// Method Definition Index: 3260
// Method Definition Index: 3260
// Method Definition Index: 3260
// Method Definition Index: 3260
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_LastIndexOfImpl_TisIl2CppFullySharedGenericAny_mB366BADD239063B30EADBFB1E25770233C263B56_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t65B0281A0C7501E8C8CDBEEBF4181C37D9C7E536 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t65B0281A0C7501E8C8CDBEEBF4181C37D9C7E536);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_T_t65B0281A0C7501E8C8CDBEEBF4181C37D9C7E536);
		int32_t L_3 = ___2_startIndex;
		int32_t L_4 = ___3_count;
		NullCheck(L_0);
		int32_t L_5;
		L_5 = VirtualFuncInvoker4Invoker< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(11, L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_2: *(void**)L_2), L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 3260
// Method Definition Index: 3260
// Method Definition Index: 3260
// Method Definition Index: 3260
// Method Definition Index: 3260
// Method Definition Index: 3260
// Method Definition Index: 3260
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
// Method Definition Index: 3112
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
