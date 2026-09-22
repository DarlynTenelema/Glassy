#include "pch-cpp.hpp"





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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*,T1,T2,T3,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,p3,invokeData.method);
	}
};

struct IEnumerable_1_tDA3DB14A8C53E0EFBEA9554E60CD303E733E672C;
struct IEnumerator_1_t45F3F7FD63BD81FEABDE4F646B59715C819D84FC;
struct IIndexedCollectionPropertyBagEnumerator_1_t10A3FE79120150E0A39D2649E6366925E3E7977A;
struct IIndexedProperties_1_t961108855F4FED4E213FA22D7065C5BD080AF035;
struct INamedProperties_1_t1762CAC2E72BD27B04AD4693D6537F66241A758A;
struct IPropertyBag_1_t36BB94A0E64BDC3C7B44E3C33CD0562C77748D3F;
struct IProperty_1_t47DF8E7CFAFA47596FCFDA6775C02B5B3C05AAE5;
struct List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct String_t;
struct Type_t;
struct TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_PropertiesModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UIElementsModule[];
IL2CPP_EXTERN_C RuntimeClass* IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Enumerator_tD310794DECC848363CBBAD7016FBD21AD52C4562_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Type_t_0_0_0_var;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct MemberInfo_t  : public RuntimeObject
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
struct Enumerator_t0DD71F3BC0FD44A9CF49504A30E7449BA17D4E63 
{
	List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
typedef Il2CppFullySharedGenericStruct IndexedCollectionPropertyBagEnumerable_1_t2B3DE6D978823100869CD2618FBDF5807E3B997E;
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
struct IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 
{
	int32_t ___Index;
	bool ___IsReadOnly;
};
struct IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79_marshaled_pinvoke
{
	int32_t ___Index;
	int32_t ___IsReadOnly;
};
struct IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79_marshaled_com
{
	int32_t ___Index;
	int32_t ___IsReadOnly;
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
struct EnumeratorType_t213060DC702D8C5D779B12D7E6CE6AFC2D7BB6CA 
{
	int32_t ___value__;
};
typedef Il2CppFullySharedGenericStruct IndexedCollectionPropertyBagEnumerator_1_t4F5D8DBBF5DBE0AA3D7844FD8C5BB756D8B8D479;
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75 
{
	int32_t ___value__;
};
typedef Il2CppFullySharedGenericStruct Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE;
typedef Il2CppFullySharedGenericStruct PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D;
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
struct String_t_StaticFields
{
	String_t* ___Empty;
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection_1_GetEnumerator_mD933057B218712B4B2DAFBF6E423497F0D578261_fshared (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* __this, Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_fshared_inline (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F_fshared (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method) ;

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD (PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21 (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
inline void PropertyCollection_1_GetEnumerator_mD933057B218712B4B2DAFBF6E423497F0D578261 (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* __this, Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*, Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*, const RuntimeMethod*))PropertyCollection_1_GetEnumerator_mD933057B218712B4B2DAFBF6E423497F0D578261_fshared)((PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*)__this, il2cppRetVal, method);
}
inline RuntimeObject* Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_inline (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*, const RuntimeMethod*))Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472 (Type_t* ___0_type, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*, const RuntimeMethod*))Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F_fshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57 (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypePathVisitor_GetElementType_mDA16AD8485546D4EC31BB92ABB5B7C2762935853 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
// Method Definition Index: 23466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypePathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisIl2CppFullySharedGenericAny_mFA35916EBB3C8C2D2DE9D2AD7C800A99ADAFFC38_fshared (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, RuntimeObject* ___0_properties, Il2CppFullySharedGenericAny* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_Enumerator_t71AC4EBA2DEF99678233A963B70CBAC8DD5690B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 8));
	const uint32_t SizeOf_PropertyCollection_1_t53103BE7334A4CA1F4C3F1794414696986496A10 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 6));
	void* L_18 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 8)));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE L_17 = alloca(SizeOf_Enumerator_t71AC4EBA2DEF99678233A963B70CBAC8DD5690B7);
	const PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D L_16 = alloca(SizeOf_PropertyCollection_1_t53103BE7334A4CA1F4C3F1794414696986496A10);
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE V_6 = alloca(SizeOf_Enumerator_t71AC4EBA2DEF99678233A963B70CBAC8DD5690B7);
	memset(V_6, 0, SizeOf_Enumerator_t71AC4EBA2DEF99678233A963B70CBAC8DD5690B7);
	PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D V_7 = alloca(SizeOf_PropertyCollection_1_t53103BE7334A4CA1F4C3F1794414696986496A10);
	memset(V_7, 0, SizeOf_PropertyCollection_1_t53103BE7334A4CA1F4C3F1794414696986496A10);
	RuntimeObject* V_8 = NULL;
	Type_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	Type_t* V_11 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_properties), (&___1_container));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_5), (&V_8), (&V_10), (&V_11));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105029));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105030));
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:43>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105031));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105032));
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105032));
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105033));
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105033));
		V_0 = L_4;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:47>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105034));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105035));
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105035));
		V_4 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105036));
		int32_t L_6 = V_4;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_00e6;
			}
			case 2:
			{
				goto IL_0144;
			}
		}
	}
	{
		goto IL_0144;
	}

IL_0041:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:51>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105037));
		RuntimeObject* L_7 = ___0_properties;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_8 = V_5;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		RuntimeObject* L_9 = V_5;
		Il2CppFullySharedGenericAny* L_10 = ___1_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105038));
		String_t* L_11;
		L_11 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105038));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105039));
		NullCheck(L_9);
		bool L_12;
		L_12 = InterfaceFuncInvoker3< bool, Il2CppFullySharedGenericAny*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_9, L_10, L_11, (&V_1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105039));
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:53>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105040));
		RuntimeObject* L_13 = V_1;
		Il2CppFullySharedGenericAny* L_14 = ___1_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105041));
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 2), (RuntimeObject*)L_13, __this, L_14);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105041));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105042));
		return;
	}

IL_0069:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:57>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105043));
		RuntimeObject* L_15 = ___0_properties;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105044));
		NullCheck(L_15);
		InterfaceActionInvoker1Invoker< PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 4), L_15, (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*)L_16);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105044));
		il2cpp_codegen_memcpy(V_7, L_16, SizeOf_PropertyCollection_1_t53103BE7334A4CA1F4C3F1794414696986496A10);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105045));
		PropertyCollection_1_GetEnumerator_mD933057B218712B4B2DAFBF6E423497F0D578261((PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*)V_7, (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)L_17, il2cpp_rgctx_method(method->rgctx_data, 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105045));
		il2cpp_codegen_memcpy(V_6, L_17, SizeOf_Enumerator_t71AC4EBA2DEF99678233A963B70CBAC8DD5690B7);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d0:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105062));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105063));
				Il2CppConstrainedCallData L_19;
				Il2CppMethodPointer L_20 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 8), il2cpp_rgctx_method(method->rgctx_data, 11), (void*)(Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)V_6, &L_19, L_18);
				typedef void ( *func_L_21)(void*,const RuntimeMethod*);
				((func_L_21)L_20)(L_19.thisPtr,L_19.method);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105063));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105046));
				goto IL_00c5_1;
			}

IL_007c_1:
			{
				//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:57>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105047));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105048));
				RuntimeObject* L_22;
				L_22 = Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_inline((Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)V_6, il2cpp_rgctx_method(method->rgctx_data, 9));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105048));
				V_8 = L_22;
				//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:59>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105049));
				RuntimeObject* L_23 = V_8;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105050));
				NullCheck((RuntimeObject*)L_23);
				String_t* L_24;
				L_24 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105050));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105051));
				String_t* L_25;
				L_25 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105051));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105052));
				bool L_26;
				L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, L_25, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105052));
				if (!L_26)
				{
					goto IL_00c5_1;
				}
			}
			{
				//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:61>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105053));
				RuntimeObject* L_27 = V_8;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105054));
				NullCheck((RuntimeObject*)L_27);
				Type_t* L_28;
				L_28 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105054));
				Type_t* L_29 = L_28;
				V_9 = L_29;
				__this->___m_LastType = L_29;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastType), (void*)L_29);
				Type_t* L_30 = V_9;
				//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:62>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105055));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105056));
				RuntimeObject* L_31;
				L_31 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_30, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105056));
				//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:63>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105057));
				RuntimeObject* L_32 = L_31;
				if (L_32)
				{
					G_B10_0 = L_32;
					goto IL_00ba_1;
				}
				G_B9_0 = L_32;
			}
			{
				goto IL_014b;
			}

IL_00ba_1:
			{
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105058));
				NullCheck(G_B10_0);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B10_0, __this);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105058));
				//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:64>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105059));
				goto IL_014b;
			}

IL_00c5_1:
			{
				//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:57>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105060));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105061));
				bool L_33;
				L_33 = Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F((Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)V_6, il2cpp_rgctx_method(method->rgctx_data, 10));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105061));
				if (L_33)
				{
					goto IL_007c_1;
				}
			}
			{
				goto IL_00de;
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

IL_00de:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:68>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105064));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105065));
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, 4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105065));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:71>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105066));
		return;
	}

IL_00e6:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:75>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105067));
		RuntimeObject* L_34 = ___0_properties;
		V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_34, il2cpp_rgctx_data(method->rgctx_data, 12)));
		RuntimeObject* L_35 = V_10;
		if (!L_35)
		{
			goto IL_010e;
		}
	}
	{
		RuntimeObject* L_36 = V_10;
		Il2CppFullySharedGenericAny* L_37 = ___1_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105068));
		int32_t L_38;
		L_38 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105068));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105069));
		NullCheck(L_36);
		bool L_39;
		L_39 = InterfaceFuncInvoker3< bool, Il2CppFullySharedGenericAny*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 12), L_36, L_37, L_38, (&V_1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105069));
		if (!L_39)
		{
			goto IL_010e;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:77>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105070));
		RuntimeObject* L_40 = V_1;
		Il2CppFullySharedGenericAny* L_41 = ___1_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105071));
		NullCheck((RuntimeObject*)L_40);
		InterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 2), (RuntimeObject*)L_40, __this, L_41);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105071));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105072));
		return;
	}

IL_010e:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:81>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105073));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 14)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105074));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105074));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105075));
		Type_t* L_44;
		L_44 = TypePathVisitor_GetElementType_mDA16AD8485546D4EC31BB92ABB5B7C2762935853(L_43, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105075));
		V_11 = L_44;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:82>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105076));
		Type_t* L_45 = V_11;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105077));
		bool L_46;
		L_46 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, (Type_t*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105077));
		if (!L_46)
		{
			goto IL_013c;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:84>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105078));
		Type_t* L_47 = V_11;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105079));
		RuntimeObject* L_48;
		L_48 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_47, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105079));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:85>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105080));
		RuntimeObject* L_49 = L_48;
		if (L_49)
		{
			G_B21_0 = L_49;
			goto IL_0135;
		}
		G_B20_0 = L_49;
	}
	{
		return;
	}

IL_0135:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105081));
		NullCheck(G_B21_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B21_0, __this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105081));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105082));
		return;
	}

IL_013c:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:89>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105083));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105084));
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, 4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105084));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:93>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105085));
		return;
	}

IL_0144:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:97>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105086));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105087));
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, 4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105087));
	}

IL_014b:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/TypePathVisitor.cs:100>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105088));
		return;
	}
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
// Method Definition Index: 69208
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 367));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 368));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/Properties/PropertyPath.cs:63>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 369));
		int32_t L_0 = __this->___m_Kind;
		return L_0;
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
// Method Definition Index: 69406
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_fshared_inline (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1703));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1704));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyBags/PropertyCollection.cs:36>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1705));
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		return L_0;
	}
}
