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

struct ConcurrentDictionary_2_t289EA16AA3198E74A1ED327115892A1325FDE582;
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812;
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
struct IPropertyBag_1_t36BB94A0E64BDC3C7B44E3C33CD0562C77748D3F;
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct Tables_t3227C6BAB9A24497B5BC2BD985C3E4D2277B3FF6;
struct KeyValuePair_2U5BU5D_tAC18A9810981C66C9D2F31F570CC2487A3BD1FE9;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Assembly_t;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Exception_t;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MemberInfo_t;
struct ReflectedPropertyBagProvider_tFAAE287D4BED97ACD16EECAEA6DD5DE506D157CF;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_PropertiesModule[];
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyBagLazyInitialization_tE4821F4454C083A06FEF8B3CE2E3215EE7D8CA37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral75BAB3FE3AC7CF619259359344F243C103A5531C;
IL2CPP_EXTERN_C String_t* _stringLiteral92D5EB2422E742E05BC036A0F5F69B56AA55E37F;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_ContainsKey_mDDF17F613FBCC7C3986F05B5D57E1EE5D351648D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_set_Item_mA11D601D8C7FA3D0F1CDDD1BA117CC0F8AD5B4CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeTraits_IsAbstractOrInterface_mD2DCEC7779E678FC457F10FD567127A9A8D5214B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* CompilerGeneratedAttribute_t0153EC5D2142E566E2D896C49F598756BCAEE771_0_0_0_var;
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
struct ConcurrentDictionary_2_t289EA16AA3198E74A1ED327115892A1325FDE582  : public RuntimeObject
{
	Tables_t3227C6BAB9A24497B5BC2BD985C3E4D2277B3FF6* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_tAC18A9810981C66C9D2F31F570CC2487A3BD1FE9* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72  : public RuntimeObject
{
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Assembly_t  : public RuntimeObject
{
};
struct Assembly_t_marshaled_pinvoke
{
};
struct Assembly_t_marshaled_com
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct PropertyBag_t2F42343455C93CC5FB7CAD060175209F8A75AF92  : public RuntimeObject
{
};
struct PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C  : public RuntimeObject
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
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ConcurrentDictionary_2_t289EA16AA3198E74A1ED327115892A1325FDE582_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_StaticFields
{
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyBagStore_TryGetPropertyBagForValue_TisIl2CppFullySharedGenericAny_mDEAE1F0D7155B39794D7B007BD7EC479891ED7BD_fshared (Il2CppFullySharedGenericAny* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_ContainsKey_m6998FF8E69B91FD09125EE962D6E8B291A231392_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_set_Item_mB9751D1BE987E51A6B1B2D2BF2851678004FF269_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;

inline bool PropertyBagStore_TryGetPropertyBagForValue_TisIl2CppFullySharedGenericAny_mDEAE1F0D7155B39794D7B007BD7EC479891ED7BD (Il2CppFullySharedGenericAny* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppFullySharedGenericAny*, RuntimeObject**, const RuntimeMethod*))PropertyBagStore_TryGetPropertyBagForValue_TisIl2CppFullySharedGenericAny_mDEAE1F0D7155B39794D7B007BD7EC479891ED7BD_fshared)(___0_value, ___1_propertyBag, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_IsAbstractOrInterface_mD2DCEC7779E678FC457F10FD567127A9A8D5214B_inline (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Assembly_op_Equality_m1E2666F9D0537F02AB32F14B4458C98C4851CEAB (Assembly_t* ___0_left, Assembly_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomAttributeExtensions_IsDefined_m88E1A7B2E5D09A109B9E6C2830AC70BCD907FAF4 (MemberInfo_t* ___0_element, Type_t* ___1_attributeType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Assembly_op_Inequality_m58825496C0F2FD59DFC42085A1E60C69F6DD20F0 (Assembly_t* ___0_left, Assembly_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyBagLazyInitialization_HasLazyRegistration_m8274749BF9E508E311324F7A1235124E94B45CD1 (Type_t* ___0_type, const RuntimeMethod* method) ;
inline bool ConcurrentDictionary_2_ContainsKey_mDDF17F613FBCC7C3986F05B5D57E1EE5D351648D (ConcurrentDictionary_2_t289EA16AA3198E74A1ED327115892A1325FDE582* __this, Type_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, Il2CppFullySharedGenericAny, const RuntimeMethod*))ConcurrentDictionary_2_ContainsKey_m6998FF8E69B91FD09125EE962D6E8B291A231392_fshared)((ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
inline void List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, Type_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_fshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline void ConcurrentDictionary_2_set_Item_mA11D601D8C7FA3D0F1CDDD1BA117CC0F8AD5B4CA (ConcurrentDictionary_2_t289EA16AA3198E74A1ED327115892A1325FDE582* __this, Type_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))ConcurrentDictionary_2_set_Item_mB9751D1BE987E51A6B1B2D2BF2851678004FF269_fshared)((ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC (Type_t* __this, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_fshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_item, method);
}
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
// Method Definition Index: 69384
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyBag_TryGetPropertyBagForValue_TisIl2CppFullySharedGenericAny_m60E7BF3AACB59F7E085E19E4B6DC8C612F6D5534_fshared (Il2CppFullySharedGenericAny* ___0_value, RuntimeObject** ___1_propertyBag, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value), (&___1_propertyBag));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1586));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1587));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/PropertyBag.cs:47>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1588));
		Il2CppFullySharedGenericAny* L_0 = ___0_value;
		RuntimeObject** L_1 = ___1_propertyBag;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1589));
		CHECKED_LOCAL_INIT(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit,(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_2;
		L_2 = PropertyBagStore_TryGetPropertyBagForValue_TisIl2CppFullySharedGenericAny_mDEAE1F0D7155B39794D7B007BD7EC479891ED7BD(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1589));
		return L_2;
	}
}
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
// Method Definition Index: 69762
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBagStore_AddPropertyBag_TisIl2CppFullySharedGenericAny_mB0AA53F19CB33A3C2A29AC822452167CB955F19D_fshared (RuntimeObject* ___0_propertyBag, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_ContainsKey_mDDF17F613FBCC7C3986F05B5D57E1EE5D351648D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_mA11D601D8C7FA3D0F1CDDD1BA117CC0F8AD5B4CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagLazyInitialization_tE4821F4454C083A06FEF8B3CE2E3215EE7D8CA37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(PropertyBagLazyInitialization_tE4821F4454C083A06FEF8B3CE2E3215EE7D8CA37_StaticInit);
	CHECKED_LOCAL(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_propertyBag));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4946));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4947));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:82>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4948));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4949));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4949));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4950));
		bool L_2;
		L_2 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4950));
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:84>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4951));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4952));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4952));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4953));
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral92D5EB2422E742E05BC036A0F5F69B56AA55E37F)), L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4953));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4954));
		Exception_t* L_6 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_6, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4954));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002b:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:87>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4955));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4956));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4956));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4957));
		bool L_9;
		L_9 = TypeTraits_IsAbstractOrInterface_mD2DCEC7779E678FC457F10FD567127A9A8D5214B_inline(L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4957));
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:89>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4958));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4959));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4959));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4960));
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral75BAB3FE3AC7CF619259359344F243C103A5531C)), L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4960));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4961));
		Exception_t* L_13 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_13, L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4961));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0056:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:92>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4962));
		RuntimeObject* L_14 = ((TypedStore_1_tF85928F209B32211341F1D9E418F47867CC6B0EF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___PropertyBag;
		if (!L_14)
		{
			goto IL_00bc;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:94>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4963));
		RuntimeObject* L_15 = ((TypedStore_1_tF85928F209B32211341F1D9E418F47867CC6B0EF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___PropertyBag;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:96>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4964));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4965));
		NullCheck((RuntimeObject*)L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type((RuntimeObject*)L_15);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4965));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4966));
		NullCheck(L_16);
		Assembly_t* L_17;
		L_17 = VirtualFuncInvoker0< Assembly_t* >::Invoke(28, L_16);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4966));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4967));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4967));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4968));
		NullCheck(L_19);
		Assembly_t* L_20;
		L_20 = VirtualFuncInvoker0< Assembly_t* >::Invoke(28, L_19);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4968));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4969));
		bool L_21;
		L_21 = Assembly_op_Equality_m1E2666F9D0537F02AB32F14B4458C98C4851CEAB(L_17, L_20, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4969));
		if (!L_21)
		{
			goto IL_0083;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:97>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4970));
		return;
	}

IL_0083:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:99>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4971));
		RuntimeObject* L_22 = ___0_propertyBag;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4972));
		NullCheck((RuntimeObject*)L_22);
		Type_t* L_23;
		L_23 = il2cpp_codegen_object_get_type((RuntimeObject*)L_22);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4972));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (CompilerGeneratedAttribute_t0153EC5D2142E566E2D896C49F598756BCAEE771_0_0_0_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4973));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4973));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4974));
		bool L_26;
		L_26 = CustomAttributeExtensions_IsDefined_m88E1A7B2E5D09A109B9E6C2830AC70BCD907FAF4(L_23, L_25, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4974));
		if (!L_26)
		{
			goto IL_00bc;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:103>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4975));
		RuntimeObject* L_27 = ___0_propertyBag;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4976));
		NullCheck((RuntimeObject*)L_27);
		Type_t* L_28;
		L_28 = il2cpp_codegen_object_get_type((RuntimeObject*)L_27);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4976));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4977));
		NullCheck(L_28);
		Assembly_t* L_29;
		L_29 = VirtualFuncInvoker0< Assembly_t* >::Invoke(28, L_28);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4977));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4978));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4978));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4979));
		NullCheck(L_31);
		Assembly_t* L_32;
		L_32 = VirtualFuncInvoker0< Assembly_t* >::Invoke(28, L_31);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4979));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4980));
		bool L_33;
		L_33 = Assembly_op_Inequality_m58825496C0F2FD59DFC42085A1E60C69F6DD20F0(L_29, L_32, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4980));
		if (!L_33)
		{
			goto IL_00bc;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:104>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4981));
		return;
	}

IL_00bc:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:109>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4982));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4983));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4983));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4984));
		CHECKED_LOCAL_INIT(PropertyBagLazyInitialization_tE4821F4454C083A06FEF8B3CE2E3215EE7D8CA37_StaticInit,(PropertyBagLazyInitialization_tE4821F4454C083A06FEF8B3CE2E3215EE7D8CA37_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_36;
		L_36 = PropertyBagLazyInitialization_HasLazyRegistration_m8274749BF9E508E311324F7A1235124E94B45CD1(L_35, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4984));
		if (!L_36)
		{
			goto IL_00ce;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:110>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4985));
		return;
	}

IL_00ce:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:112>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4986));
		RuntimeObject* L_37 = ___0_propertyBag;
		((TypedStore_1_tF85928F209B32211341F1D9E418F47867CC6B0EF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___PropertyBag = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&((TypedStore_1_tF85928F209B32211341F1D9E418F47867CC6B0EF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___PropertyBag), (void*)L_37);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:113>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4987));
		CHECKED_LOCAL_INIT(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit,(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_t289EA16AA3198E74A1ED327115892A1325FDE582* L_38 = ((PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticFields*)il2cpp_codegen_static_fields_for(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var))->___s_PropertyBags;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4988));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4988));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4989));
		NullCheck(L_38);
		bool L_41;
		L_41 = ConcurrentDictionary_2_ContainsKey_mDDF17F613FBCC7C3986F05B5D57E1EE5D351648D(L_38, L_40, ConcurrentDictionary_2_ContainsKey_mDDF17F613FBCC7C3986F05B5D57E1EE5D351648D_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4989));
		if (L_41)
		{
			goto IL_00fe;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:115>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4990));
		CHECKED_LOCAL_INIT(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit,(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_42 = ((PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticFields*)il2cpp_codegen_static_fields_for(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var))->___s_RegisteredTypes;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4991));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4991));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4992));
		NullCheck(L_42);
		List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_inline(L_42, L_44, List_1_Add_mC8CFB4EB6D53C1BF2C8B48F97B5A741EB576B91E_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4992));
	}

IL_00fe:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:118>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4993));
		CHECKED_LOCAL_INIT(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit,(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_t289EA16AA3198E74A1ED327115892A1325FDE582* L_45 = ((PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticFields*)il2cpp_codegen_static_fields_for(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var))->___s_PropertyBags;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4994));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4994));
		RuntimeObject* L_48 = ___0_propertyBag;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4995));
		NullCheck(L_45);
		ConcurrentDictionary_2_set_Item_mA11D601D8C7FA3D0F1CDDD1BA117CC0F8AD5B4CA(L_45, L_47, (RuntimeObject*)L_48, ConcurrentDictionary_2_set_Item_mA11D601D8C7FA3D0F1CDDD1BA117CC0F8AD5B4CA_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4995));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/Internal/PropertyBagStore.cs:119>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 4996));
		return;
	}
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
// Method Definition Index: 69517
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_IsAbstractOrInterface_mD2DCEC7779E678FC457F10FD567127A9A8D5214B_inline (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeTraits_IsAbstractOrInterface_mD2DCEC7779E678FC457F10FD567127A9A8D5214B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_type));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TypeTraits_IsAbstractOrInterface_mD2DCEC7779E678FC457F10FD567127A9A8D5214B_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3720));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3721));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Utility/TypeTraits.cs:29>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3722));
		Type_t* L_0 = ___0_type;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3723));
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3723));
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		Type_t* L_2 = ___0_type;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3724));
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 3724));
		return L_3;
	}

IL_000f:
	{
		return (bool)1;
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
