#include "pch-cpp.hpp"





template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker;
template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};

struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2;
struct IPropertyBagVisitor_tE8B9B7E14DBF946E6E65BD0ECC8679268715BF5A;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct String_t;
struct Type_t;
struct TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_PropertiesModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UIElementsModule[];
IL2CPP_EXTERN_C RuntimeClass* IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypePathVisitor_set_resolvedType_m484445A58C07D18393F38BAD75C180FD57E3F8FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeTraits_CanBeNull_mC536F3FB49A36A263D61EC75BB688052E8BF5A5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE_0_0_0_var;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;


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
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct MemberInfo_t  : public RuntimeObject
{
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
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
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
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF 
{
	int32_t ___m_Kind;
	String_t* ___m_Name;
	int32_t ___m_Index;
	RuntimeObject* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke
{
	int32_t ___m_Kind;
	char* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com
{
	int32_t ___m_Kind;
	Il2CppChar* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE 
{
	int32_t ___U3CIgnoreExceptionsU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part3;
	PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E  : public RuntimeObject
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___U3CPathU3Ek__BackingField;
	Type_t* ___U3CresolvedTypeU3Ek__BackingField;
	int32_t ___U3CReturnCodeU3Ek__BackingField;
	Type_t* ___m_LastType;
	int32_t ___m_PathIndex;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m717E818AD74F7A7F438B2FAD3245F1EA356FF56F_fshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyBag_TryGetPropertyBagForValue_TisIl2CppFullySharedGenericAny_m60E7BF3AACB59F7E085E19E4B6DC8C612F6D5534_fshared (Il2CppFullySharedGenericAny* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyContainer_Accept_TisIl2CppFullySharedGenericAny_m312EB2443F1A19C1228C035C0469EB9B21552CD9_fshared (RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_fshared (const RuntimeMethod* method) ;

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline (PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* __this, const RuntimeMethod* method) ;
inline Type_t* Property_2_DeclaredValueType_m717E818AD74F7A7F438B2FAD3245F1EA356FF56F (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, const RuntimeMethod*))Property_2_DeclaredValueType_m717E818AD74F7A7F438B2FAD3245F1EA356FF56F_fshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TypePathVisitor_set_resolvedType_m484445A58C07D18393F38BAD75C180FD57E3F8FE_inline (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
inline bool PropertyBag_TryGetPropertyBagForValue_TisIl2CppFullySharedGenericAny_m60E7BF3AACB59F7E085E19E4B6DC8C612F6D5534 (Il2CppFullySharedGenericAny* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppFullySharedGenericAny*, RuntimeObject**, const RuntimeMethod*))PropertyBag_TryGetPropertyBagForValue_TisIl2CppFullySharedGenericAny_m60E7BF3AACB59F7E085E19E4B6DC8C612F6D5534_fshared)(___0_value, ___1_propertyBag, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_CanBeNull_mC536F3FB49A36A263D61EC75BB688052E8BF5A5E_inline (Type_t* ___0_type, const RuntimeMethod* method) ;
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_fshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472 (Type_t* ___0_type, const RuntimeMethod* method) ;
inline void PropertyContainer_Accept_TisIl2CppFullySharedGenericAny_m312EB2443F1A19C1228C035C0469EB9B21552CD9 (RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, Il2CppFullySharedGenericAny*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_Accept_TisIl2CppFullySharedGenericAny_m312EB2443F1A19C1228C035C0469EB9B21552CD9_fshared)(___0_visitor, ___1_container, ___2_parameters, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8 (Type_t* ___0_nullableType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_fshared)(method);
}
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
// Method Definition Index: 23467
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypePathVisitor_Unity_Properties_IPropertyVisitor_Visit_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m57DB7FCC3C3346E773EB9FA4A3B8441EC8F50E62_fshared (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Il2CppFullySharedGenericAny* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TValue_t534C4E00AE077ACBCDC3F4DC4BDF59918C435834 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t534C4E00AE077ACBCDC3F4DC4BDF59918C435834);
	const Il2CppFullySharedGenericAny L_13 = L_2;
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TValue_t534C4E00AE077ACBCDC3F4DC4BDF59918C435834);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t534C4E00AE077ACBCDC3F4DC4BDF59918C435834);
	memset(V_0, 0, SizeOf_TValue_t534C4E00AE077ACBCDC3F4DC4BDF59918C435834);
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_TValue_t534C4E00AE077ACBCDC3F4DC4BDF59918C435834);
	memset(V_3, 0, SizeOf_TValue_t534C4E00AE077ACBCDC3F4DC4BDF59918C435834);
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_4;
	memset((&V_4), 0, sizeof(V_4));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_property), (&___1_container));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105089));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105090));
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:104>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105091));
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_0 = ___0_property;
		Il2CppFullySharedGenericAny* L_1 = ___1_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105092));
		NullCheck(L_0);
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(14, L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105092));
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_TValue_t534C4E00AE077ACBCDC3F4DC4BDF59918C435834);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:106>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105093));
		int32_t L_3 = __this->___m_PathIndex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105094));
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_4;
		L_4 = TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105094));
		V_1 = L_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105095));
		int32_t L_5;
		L_5 = PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline((&V_1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105095));
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_002b;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:108>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105096));
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_6 = ___0_property;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105097));
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = Property_2_DeclaredValueType_m717E818AD74F7A7F438B2FAD3245F1EA356FF56F(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105097));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105098));
		TypePathVisitor_set_resolvedType_m484445A58C07D18393F38BAD75C180FD57E3F8FE_inline(__this, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105098));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105099));
		return;
	}

IL_002b:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:110>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105100));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105101));
		bool L_8;
		L_8 = PropertyBag_TryGetPropertyBagForValue_TisIl2CppFullySharedGenericAny_m60E7BF3AACB59F7E085E19E4B6DC8C612F6D5534((Il2CppFullySharedGenericAny*)V_0, (&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105101));
		if (!L_8)
		{
			goto IL_0087;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:112>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105102));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105103));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105103));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105104));
		bool L_11;
		L_11 = TypeTraits_CanBeNull_mC536F3FB49A36A263D61EC75BB688052E8BF5A5E_inline(L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105104));
		if (!L_11)
		{
			goto IL_0074;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105105));
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_12;
		L_12 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105105));
		il2cpp_codegen_memcpy(L_13, V_0, SizeOf_TValue_t534C4E00AE077ACBCDC3F4DC4BDF59918C435834);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_TValue_t534C4E00AE077ACBCDC3F4DC4BDF59918C435834);
		il2cpp_codegen_memcpy(L_14, V_3, SizeOf_TValue_t534C4E00AE077ACBCDC3F4DC4BDF59918C435834);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105106));
		NullCheck(L_12);
		bool L_15;
		L_15 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_13: *(void**)L_13), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_14: *(void**)L_14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105106));
		if (!L_15)
		{
			goto IL_0074;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:114>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105107));
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_16 = ___0_property;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105108));
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = Property_2_DeclaredValueType_m717E818AD74F7A7F438B2FAD3245F1EA356FF56F(L_16, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105108));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105109));
		RuntimeObject* L_18;
		L_18 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_17, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105109));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:115>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105110));
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B7_0 = L_19;
			goto IL_006d;
		}
		G_B6_0 = L_19;
	}
	{
		return;
	}

IL_006d:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105111));
		NullCheck(G_B7_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B7_0, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105111));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:116>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105112));
		return;
	}

IL_0074:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:119>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105113));
		il2cpp_codegen_initobj((&V_4), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_20 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105114));
		PropertyContainer_Accept_TisIl2CppFullySharedGenericAny_m312EB2443F1A19C1228C035C0469EB9B21552CD9(__this, (Il2CppFullySharedGenericAny*)V_0, L_20, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105114));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105115));
		return;
	}

IL_0087:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:123>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105116));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105117));
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, 4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105117));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:125>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105118));
		return;
	}
}
// Method Definition Index: 23468
// Method Definition Index: 23468
// Method Definition Index: 23468
// Method Definition Index: 23460
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105003));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105004));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:12>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105005));
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0 = __this->___U3CPathU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 69220
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_inline (PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PropertyPath_get_Length_m9238E2C9AAFD16D7A74483CB4075AC7592B8889F_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 449));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 450));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Properties/PropertyPath.cs:211>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 451));
		int32_t L_0 = __this->___U3CLengthU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 23462
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TypePathVisitor_set_resolvedType_m484445A58C07D18393F38BAD75C180FD57E3F8FE_inline (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypePathVisitor_set_resolvedType_m484445A58C07D18393F38BAD75C180FD57E3F8FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TypePathVisitor_set_resolvedType_m484445A58C07D18393F38BAD75C180FD57E3F8FE_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105009));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105010));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:17>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105011));
		Type_t* L_0 = ___0_value;
		__this->___U3CresolvedTypeU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresolvedTypeU3Ek__BackingField), (void*)L_0);
		return;
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
// Method Definition Index: 23464
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105015));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105016));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:22>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105017));
		int32_t L_0 = ___0_value;
		__this->___U3CReturnCodeU3Ek__BackingField = L_0;
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
