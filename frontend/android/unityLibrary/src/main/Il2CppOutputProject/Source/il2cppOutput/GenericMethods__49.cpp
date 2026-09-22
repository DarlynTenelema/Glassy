#include "pch-cpp.hpp"





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

struct ConcurrentDictionary_2_t289EA16AA3198E74A1ED327115892A1325FDE582;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct IPropertyBag_1_t36BB94A0E64BDC3C7B44E3C33CD0562C77748D3F;
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct ReflectedPropertyBagProvider_tFAAE287D4BED97ACD16EECAEA6DD5DE506D157CF;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_PropertiesModule[];
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral366328F8406C9E195F294A766E74852EE288CC26;
IL2CPP_EXTERN_C const RuntimeMethod* TypeTraits_CanBeNull_mC536F3FB49A36A263D61EC75BB688052E8BF5A5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


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
struct MemberInfo_t  : public RuntimeObject
{
};
struct PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C  : public RuntimeObject
{
};
struct PropertyContainer_tD782808FE67EA532AEFD2BC7974D5F8419905076  : public RuntimeObject
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
struct TypedStore_1_tF85928F209B32211341F1D9E418F47867CC6B0EF 
{
	union
	{
		struct
		{
		};
		uint8_t TypedStore_1_t9BD4FFD497AA2C3541EB5A0330E63325EA4F2435__padding[1];
	};
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
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
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticFields
{
	ConcurrentDictionary_2_t289EA16AA3198E74A1ED327115892A1325FDE582* ___s_PropertyBags;
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ___s_RegisteredTypes;
	ReflectedPropertyBagProvider_tFAAE287D4BED97ACD16EECAEA6DD5DE506D157CF* ___s_PropertyBagProvider;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct TypedStore_1_tF85928F209B32211341F1D9E418F47867CC6B0EF_StaticFields
{
	RuntimeObject* ___PropertyBag;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8_fshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_fshared (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_m90F2EBB48D60993594856358C572964C8011143E (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_CanBeNull_mC536F3FB49A36A263D61EC75BB688052E8BF5A5E_inline (Type_t* ___0_type, const RuntimeMethod* method) ;
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_fshared_inline)(method);
}
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8_fshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8 (Type_t* ___0_nullableType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_fshared)(method);
}
// Method Definition Index: 69763
// Method Definition Index: 69763
// Method Definition Index: 69763
// Method Definition Index: 69763
// Method Definition Index: 69763
// Method Definition Index: 69763
// Method Definition Index: 69763
// Method Definition Index: 69763
// Method Definition Index: 69763
// Method Definition Index: 69763
// Method Definition Index: 69763
// Method Definition Index: 69763
// Method Definition Index: 69763
// Method Definition Index: 69763
// Method Definition Index: 69763
// Method Definition Index: 69763
// Method Definition Index: 69763
// Method Definition Index: 69763
// Method Definition Index: 69763
// Method Definition Index: 69763
// Method Definition Index: 69763
// Method Definition Index: 69763
// Method Definition Index: 69763
// Method Definition Index: 69763
// Method Definition Index: 69763
// Method Definition Index: 69763
// Method Definition Index: 69763
// Method Definition Index: 69763
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8_fshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit);
	RuntimeObject* V_0 = NULL;
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4997));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4998));
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:128>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4999));
		RuntimeObject* L_0 = ((TypedStore_1_tF85928F209B32211341F1D9E418F47867CC6B0EF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___PropertyBag;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:130>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5000));
		RuntimeObject* L_1 = ((TypedStore_1_tF85928F209B32211341F1D9E418F47867CC6B0EF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___PropertyBag;
		return L_1;
	}

IL_000d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:133>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5001));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5002));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5002));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5003));
		CHECKED_LOCAL_INIT(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit,(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_4;
		L_4 = PropertyBagStore_GetPropertyBag_m90F2EBB48D60993594856358C572964C8011143E(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5003));
		V_0 = L_4;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:135>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5004));
		RuntimeObject* L_5 = V_0;
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:137>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5005));
		return (RuntimeObject*)NULL;
	}

IL_0022:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:140>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5006));
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 3)));
		if (L_7)
		{
			G_B6_0 = L_7;
			goto IL_0036;
		}
		G_B5_0 = L_7;
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:142>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5007));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5008));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral366328F8406C9E195F294A766E74852EE288CC26)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5008));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0036:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:145>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5009));
		return G_B6_0;
	}
}
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
// Method Definition Index: 69765
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyBagStore_TryGetPropertyBagForValue_TisIl2CppFullySharedGenericAny_mDEAE1F0D7155B39794D7B007BD7EC479891ED7BD_fshared (Il2CppFullySharedGenericAny* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TValue_t1DE1C641694031A7B3BB980C5AA9517CFC14F330 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit);
	void* L_23 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_t1DE1C641694031A7B3BB980C5AA9517CFC14F330);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TValue_t1DE1C641694031A7B3BB980C5AA9517CFC14F330);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t1DE1C641694031A7B3BB980C5AA9517CFC14F330);
	memset(V_0, 0, SizeOf_TValue_t1DE1C641694031A7B3BB980C5AA9517CFC14F330);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value), (&___1_propertyBag));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5051));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5052));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:258>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5053));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5054));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5054));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5055));
		bool L_2;
		L_2 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5055));
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:260>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5056));
		RuntimeObject** L_3 = ___1_propertyBag;
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_3, (RuntimeObject*)NULL);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)NULL);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:261>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5057));
		return (bool)0;
	}

IL_0016:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:265>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5058));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5059));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5059));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5060));
		bool L_6;
		L_6 = TypeTraits_CanBeNull_mC536F3FB49A36A263D61EC75BB688052E8BF5A5E_inline(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5060));
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:267>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5061));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5062));
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_7;
		L_7 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5062));
		Il2CppFullySharedGenericAny* L_8 = ___0_value;
		il2cpp_codegen_memcpy(L_9, L_8, SizeOf_TValue_t1DE1C641694031A7B3BB980C5AA9517CFC14F330);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TValue_t1DE1C641694031A7B3BB980C5AA9517CFC14F330);
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_TValue_t1DE1C641694031A7B3BB980C5AA9517CFC14F330);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5063));
		NullCheck(L_7);
		bool L_11;
		L_11 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_10: *(void**)L_10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5063));
		if (!L_11)
		{
			goto IL_004f;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:269>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5064));
		RuntimeObject** L_12 = ___1_propertyBag;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5065));
		CHECKED_LOCAL_INIT(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit,(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_13;
		L_13 = PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8(il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5065));
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_12, (RuntimeObject*)L_13);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_12, (void*)(RuntimeObject*)L_13);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:270>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5066));
		RuntimeObject** L_14 = ___1_propertyBag;
		RuntimeObject* L_15 = il2cpp_codegen_ldind<RuntimeObject*, RuntimeObject*>(L_14);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_15) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_004f:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:274>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5067));
		bool L_16 = il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1));
		if (!L_16)
		{
			goto IL_006d;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:276>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5070));
		RuntimeObject** L_17 = ___1_propertyBag;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5071));
		CHECKED_LOCAL_INIT(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit,(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_18;
		L_18 = PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8(il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5071));
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_17, (RuntimeObject*)L_18);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)L_18);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:277>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5072));
		RuntimeObject** L_19 = ___1_propertyBag;
		RuntimeObject* L_20 = il2cpp_codegen_ldind<RuntimeObject*, RuntimeObject*>(L_19);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_20) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_006d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:280>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5073));
		RuntimeObject** L_21 = ___1_propertyBag;
		Il2CppFullySharedGenericAny* L_22 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5074));
		Il2CppConstrainedCallData L_24;
		Il2CppMethodPointer L_25 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)L_22, &L_24, L_23);
		typedef Type_t* ( *func_L_26)(void*,const RuntimeMethod*);
		Type_t* L_27 = ((func_L_26)L_25)(L_24.thisPtr,L_24.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5074));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5075));
		CHECKED_LOCAL_INIT(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit,(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_28;
		L_28 = PropertyBagStore_GetPropertyBag_m90F2EBB48D60993594856358C572964C8011143E(L_27, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5075));
		il2cpp_codegen_stind<RuntimeObject*>((RuntimeObject**)L_21, (RuntimeObject*)L_28);
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_21, (void*)(RuntimeObject*)L_28);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:281>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5076));
		RuntimeObject** L_29 = ___1_propertyBag;
		RuntimeObject* L_30 = il2cpp_codegen_ldind<RuntimeObject*, RuntimeObject*>(L_29);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_30) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69143
// Method Definition Index: 69518
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_CanBeNull_mC536F3FB49A36A263D61EC75BB688052E8BF5A5E_inline (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeTraits_CanBeNull_mC536F3FB49A36A263D61EC75BB688052E8BF5A5E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_type));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TypeTraits_CanBeNull_mC536F3FB49A36A263D61EC75BB688052E8BF5A5E_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3725));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3726));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeTraits.cs:42>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3727));
		Type_t* L_0 = ___0_type;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3728));
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3728));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		Type_t* L_2 = ___0_type;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3729));
		Type_t* L_3;
		L_3 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3729));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3730));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_4;
		L_4 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_3, (Type_t*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3730));
		return L_4;
	}

IL_0015:
	{
		return (bool)1;
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
