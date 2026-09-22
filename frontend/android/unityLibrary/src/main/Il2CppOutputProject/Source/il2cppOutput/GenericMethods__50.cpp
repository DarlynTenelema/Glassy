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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};

struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct IPropertyBag_1_t36BB94A0E64BDC3C7B44E3C33CD0562C77748D3F;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Exception_t;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2;
struct IPropertyBagVisitor_tE8B9B7E14DBF946E6E65BD0ECC8679268715BF5A;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_PropertiesModule[];
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0;
IL2CPP_EXTERN_C String_t* _stringLiteralCDD8682187822834D14C1F053E49DA9E982C21B7;
IL2CPP_EXTERN_C String_t* _stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489;
IL2CPP_EXTERN_C const RuntimeMethod* TypeTraits_CanBeNull_mC536F3FB49A36A263D61EC75BB688052E8BF5A5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisitParameters_get_IgnoreExceptions_mF9514BB955ADA04A779C4A6BFC1DE48D24AA01D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_0_0_0_var;
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
struct VisitExceptionKind_t7E6C3EABD5439F2B4CA31C246B2AA4AC16A77DF5 
{
	int32_t ___value__;
};
struct VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75 
{
	int32_t ___value__;
};
struct MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF  : public Exception_t
{
	Type_t* ___U3CTypeU3Ek__BackingField;
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
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
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
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mDD1DF6BB0301B9008B88A30F25AC64BE2728F0D6_fshared (RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8_fshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_AcceptWithSpecializedVisitor_TisIl2CppFullySharedGenericAny_mDB91562B01F9A25F2996347A1981D24A0DFBBFF1_fshared (RuntimeObject* ___0_properties, RuntimeObject* ___1_visitor, Il2CppFullySharedGenericAny* ___2_container, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_fshared (const RuntimeMethod* method) ;

inline bool PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mDD1DF6BB0301B9008B88A30F25AC64BE2728F0D6 (RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Il2CppFullySharedGenericAny*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mDD1DF6BB0301B9008B88A30F25AC64BE2728F0D6_fshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VisitParameters_get_IgnoreExceptions_mF9514BB955ADA04A779C4A6BFC1DE48D24AA01D5_inline (VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_CanBeNull_mC536F3FB49A36A263D61EC75BB688052E8BF5A5E_inline (Type_t* ___0_type, const RuntimeMethod* method) ;
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_fshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_m90F2EBB48D60993594856358C572964C8011143E (Type_t* ___0_type, const RuntimeMethod* method) ;
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8_fshared)(method);
}
inline void PropertyBag_AcceptWithSpecializedVisitor_TisIl2CppFullySharedGenericAny_mDB91562B01F9A25F2996347A1981D24A0DFBBFF1 (RuntimeObject* ___0_properties, RuntimeObject* ___1_visitor, Il2CppFullySharedGenericAny* ___2_container, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, RuntimeObject*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))PropertyBag_AcceptWithSpecializedVisitor_TisIl2CppFullySharedGenericAny_mDB91562B01F9A25F2996347A1981D24A0DFBBFF1_fshared)(___0_properties, ___1_visitor, ___2_container, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8 (Type_t* ___0_nullableType, const RuntimeMethod* method) ;
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_fshared)(method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyContainer_Accept_TisIl2CppFullySharedGenericAny_m312EB2443F1A19C1228C035C0469EB9B21552CD9_fshared (RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_visitor), (&___1_container), (&___2_parameters));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:100>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5));
		V_0 = 0;
	}
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:104>
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 6));
			RuntimeObject* L_0 = ___0_visitor;
			Il2CppFullySharedGenericAny* L_1 = ___1_container;
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_2 = ___2_parameters;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 7));
			bool L_3;
			L_3 = PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mDD1DF6BB0301B9008B88A30F25AC64BE2728F0D6(L_0, L_1, (&V_0), L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 7));
			if (!L_3)
			{
				goto IL_0010_1;
			}
		}
		{
			//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:105>
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 8));
			goto IL_007e;
		}

IL_0010_1:
		{
			//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:106>
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 9));
			goto IL_0022;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0012;
		}
		throw e;
	}

CATCH_0012:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		{
			Exception_t* L_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:107>
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 10));
			//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:109>
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 11));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 12));
			int32_t L_5;
			L_5 = VisitParameters_get_IgnoreExceptions_mF9514BB955ADA04A779C4A6BFC1DE48D24AA01D5_inline((&___2_parameters), NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 12));
			if (((int32_t)((int32_t)L_5&2)))
			{
				goto IL_0020;
			}
		}
		{
			//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:110>
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 13));
			IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
		}

IL_0020:
		{
			//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:111>
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 14));
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0022;
		}
	}

IL_0022:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:113>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 15));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 16));
		int32_t L_6;
		L_6 = VisitParameters_get_IgnoreExceptions_mF9514BB955ADA04A779C4A6BFC1DE48D24AA01D5_inline((&___2_parameters), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 16));
		if (!((int32_t)((int32_t)L_6&1)))
		{
			goto IL_002e;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:114>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 17));
		return;
	}

IL_002e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 18));
		int32_t L_7 = V_0;
		switch (L_7)
		{
			case 0:
			{
				goto IL_007e;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_007e;
			}
			case 3:
			{
				goto IL_0051;
			}
		}
	}
	{
		goto IL_0063;
	}

IL_0046:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:122>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 19));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 20));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCDD8682187822834D14C1F053E49DA9E982C21B7)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 20));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0051:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:124>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 21));
		Il2CppFullySharedGenericAny* L_9 = ___1_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 22));
		Il2CppConstrainedCallData L_11;
		Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 1), (void*)L_9, &L_11, L_10);
		typedef Type_t* ( *func_L_13)(void*,const RuntimeMethod*);
		Type_t* L_14 = ((func_L_13)L_12)(L_11.thisPtr,L_11.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 22));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 23));
		MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_15 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
		MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_15, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 23));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0063:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:126>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 24));
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_17);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 25));
		String_t* L_19;
		L_19 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 25));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 26));
		Exception_t* L_20 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_20, L_19, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 26));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007e:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:128>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 27));
		return;
	}
}
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
// Method Definition Index: 69144
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_m1B11483698339D3A0D40CD7247EE834DA473E24A_fshared (RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_visitor), (&___1_container), (&___2_parameters));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 28));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 29));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:140>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 30));
		RuntimeObject* L_0 = ___0_visitor;
		Il2CppFullySharedGenericAny* L_1 = ___1_container;
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_2 = ___2_parameters;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 31));
		bool L_3;
		L_3 = PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mDD1DF6BB0301B9008B88A30F25AC64BE2728F0D6(L_0, L_1, (&V_0), L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 31));
		return L_3;
	}
}
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
// Method Definition Index: 69145
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mDD1DF6BB0301B9008B88A30F25AC64BE2728F0D6_fshared (RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	CHECKED_LOCAL(Type_t_StaticInit);
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_24 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_32 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	CHECKED_LOCAL(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
	const Il2CppFullySharedGenericAny L_41 = L_9;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
	const Il2CppFullySharedGenericAny L_47 = L_10;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
	memset(V_0, 0, SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_visitor), (&___1_container), (&___2_returnCode), (&___3_parameters));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 32));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 33));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:154>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 34));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 35));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 35));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 36));
		bool L_2;
		L_2 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 36));
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:156>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 37));
		int32_t* L_3 = ___2_returnCode;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_3, (int32_t)2);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:157>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 38));
		return (bool)0;
	}

IL_0016:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:161>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 39));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 40));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 40));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 41));
		bool L_6;
		L_6 = TypeTraits_CanBeNull_mC536F3FB49A36A263D61EC75BB688052E8BF5A5E_inline(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 41));
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:163>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 42));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 43));
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_7;
		L_7 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 43));
		Il2CppFullySharedGenericAny* L_8 = ___1_container;
		il2cpp_codegen_memcpy(L_9, L_8, SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 44));
		NullCheck(L_7);
		bool L_11;
		L_11 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_10: *(void**)L_10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 44));
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:165>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 45));
		int32_t* L_12 = ___2_returnCode;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_12, (int32_t)1);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:166>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 46));
		return (bool)0;
	}

IL_0047:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:170>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 47));
		bool L_13 = il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1));
		if (L_13)
		{
			goto IL_00ca;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 50));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 50));
		Il2CppFullySharedGenericAny* L_16 = ___1_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 51));
		Il2CppConstrainedCallData L_18;
		Il2CppMethodPointer L_19 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)L_16, &L_18, L_17);
		typedef Type_t* ( *func_L_20)(void*,const RuntimeMethod*);
		Type_t* L_21 = ((func_L_20)L_19)(L_18.thisPtr,L_18.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 51));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 52));
		bool L_22;
		L_22 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_15, L_21, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 52));
		if (!L_22)
		{
			goto IL_00ca;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:172>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 53));
		Il2CppFullySharedGenericAny* L_23 = ___1_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 54));
		Il2CppConstrainedCallData L_25;
		Il2CppMethodPointer L_26 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)L_23, &L_25, L_24);
		typedef Type_t* ( *func_L_27)(void*,const RuntimeMethod*);
		Type_t* L_28 = ((func_L_27)L_26)(L_25.thisPtr,L_25.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 54));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 55));
		bool L_29;
		L_29 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_28, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 55));
		if (L_29)
		{
			goto IL_008d;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:174>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 56));
		int32_t* L_30 = ___2_returnCode;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_30, (int32_t)2);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:175>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 57));
		return (bool)0;
	}

IL_008d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:178>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 58));
		Il2CppFullySharedGenericAny* L_31 = ___1_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 59));
		Il2CppConstrainedCallData L_33;
		Il2CppMethodPointer L_34 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)L_31, &L_33, L_32);
		typedef Type_t* ( *func_L_35)(void*,const RuntimeMethod*);
		Type_t* L_36 = ((func_L_35)L_34)(L_33.thisPtr,L_33.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 59));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 60));
		CHECKED_LOCAL_INIT(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit,(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_37;
		L_37 = PropertyBagStore_GetPropertyBag_m90F2EBB48D60993594856358C572964C8011143E(L_36, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 60));
		V_1 = L_37;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:180>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 61));
		RuntimeObject* L_38 = V_1;
		if (L_38)
		{
			goto IL_00a7;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:182>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 62));
		int32_t* L_39 = ___2_returnCode;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_39, (int32_t)3);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:183>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 63));
		return (bool)0;
	}

IL_00a7:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:189>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 64));
		Il2CppFullySharedGenericAny* L_40 = ___1_container;
		il2cpp_codegen_memcpy(L_41, L_40, SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
		RuntimeObject* L_42 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_41);
		V_2 = L_42;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:190>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 65));
		RuntimeObject* L_43 = V_1;
		RuntimeObject* L_44 = ___0_visitor;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 66));
		NullCheck(L_43);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject** >::Invoke(1, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, L_43, L_44, (&V_2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 66));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:191>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 67));
		Il2CppFullySharedGenericAny* L_45 = ___1_container;
		RuntimeObject* L_46 = V_2;
		void* L_48 = UnBox_Any(L_46, il2cpp_rgctx_data(method->rgctx_data, 1), L_47);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_45, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_48)), SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_45, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_48)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 68));
		goto IL_00e0;
	}

IL_00ca:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:195>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 69));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 70));
		CHECKED_LOCAL_INIT(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit,(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_49;
		L_49 = PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8(il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 70));
		V_3 = L_49;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:197>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 71));
		RuntimeObject* L_50 = V_3;
		if (L_50)
		{
			goto IL_00d8;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:199>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 72));
		int32_t* L_51 = ___2_returnCode;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_51, (int32_t)3);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:200>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 73));
		return (bool)0;
	}

IL_00d8:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:203>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 74));
		RuntimeObject* L_52 = V_3;
		RuntimeObject* L_53 = ___0_visitor;
		Il2CppFullySharedGenericAny* L_54 = ___1_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 75));
		PropertyBag_AcceptWithSpecializedVisitor_TisIl2CppFullySharedGenericAny_mDB91562B01F9A25F2996347A1981D24A0DFBBFF1(L_52, L_53, L_54, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 75));
	}

IL_00e0:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:206>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 76));
		int32_t* L_55 = ___2_returnCode;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_55, (int32_t)0);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:207>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 77));
		return (bool)1;
	}
}
// Method Definition Index: 69142
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VisitParameters_get_IgnoreExceptions_mF9514BB955ADA04A779C4A6BFC1DE48D24AA01D5_inline (VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisitParameters_get_IgnoreExceptions_mF9514BB955ADA04A779C4A6BFC1DE48D24AA01D5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, VisitParameters_get_IgnoreExceptions_mF9514BB955ADA04A779C4A6BFC1DE48D24AA01D5_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Algorithms/PropertyContainer+Accept.cs:42>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 2));
		int32_t L_0 = __this->___U3CIgnoreExceptionsU3Ek__BackingField;
		return L_0;
	}
}
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
