#include "pch-cpp.hpp"





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
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
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

struct HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7;
struct IEnumerable_1_tDA3DB14A8C53E0EFBEA9554E60CD303E733E672C;
struct IEnumerator_1_t45F3F7FD63BD81FEABDE4F646B59715C819D84FC;
struct IIndexedCollectionPropertyBagEnumerator_1_t10A3FE79120150E0A39D2649E6366925E3E7977A;
struct IIndexedProperties_1_t961108855F4FED4E213FA22D7065C5BD080AF035;
struct IPropertyBag_1_t36BB94A0E64BDC3C7B44E3C33CD0562C77748D3F;
struct IProperty_1_t47DF8E7CFAFA47596FCFDA6775C02B5B3C05AAE5;
struct List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4;
struct List_1_t0EBD8BA582D3F66E8AC5DBDC4A635DEB08086465;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct AutoCompletePathVisitor_tF0F2FA82B3F3666F724C75CF0B95E4A420243B15;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_PropertiesModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UIElementsModule[];
IL2CPP_EXTERN_C RuntimeClass* IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeType* AutoCompletePathVisitor_tF0F2FA82B3F3666F724C75CF0B95E4A420243B15_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Enumerator_tD310794DECC848363CBBAD7016FBD21AD52C4562_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VisitedPropertyScope_tE05035FCF84C4F135E88B893FC40CF5F3B43CFFE_0_0_0_var;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct AutoCompletePathVisitor_tF0F2FA82B3F3666F724C75CF0B95E4A420243B15  : public RuntimeObject
{
	VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* ___m_VisitContext;
	int32_t ___U3CmaxDepthU3Ek__BackingField;
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
struct Enumerator_t0DD71F3BC0FD44A9CF49504A30E7449BA17D4E63 
{
	List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
typedef Il2CppFullySharedGenericStruct IndexedCollectionPropertyBagEnumerable_1_t2B3DE6D978823100869CD2618FBDF5807E3B997E;
struct InspectedTypeScope_1_t02FE7CB83945A2462C3B101968ABFD80AF129E73 
{
	VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* ___m_VisitContext;
};
#ifndef InspectedTypeScope_1_tF3E2B61DB028D759D53AA4A727B61ADB5FBCF069_marshaled_pinvoke_define
#define InspectedTypeScope_1_tF3E2B61DB028D759D53AA4A727B61ADB5FBCF069_marshaled_pinvoke_define
struct InspectedTypeScope_1_tF3E2B61DB028D759D53AA4A727B61ADB5FBCF069_marshaled_pinvoke
{
	VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* ___m_VisitContext;
};
#endif
#ifndef InspectedTypeScope_1_tF3E2B61DB028D759D53AA4A727B61ADB5FBCF069_marshaled_com_define
#define InspectedTypeScope_1_tF3E2B61DB028D759D53AA4A727B61ADB5FBCF069_marshaled_com_define
struct InspectedTypeScope_1_tF3E2B61DB028D759D53AA4A727B61ADB5FBCF069_marshaled_com
{
	VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* ___m_VisitContext;
};
#endif
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
struct VisitedPropertyScope_tE05035FCF84C4F135E88B893FC40CF5F3B43CFFE 
{
	VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* ___m_VisitContext;
};
struct VisitedPropertyScope_tE05035FCF84C4F135E88B893FC40CF5F3B43CFFE_marshaled_pinvoke
{
	VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* ___m_VisitContext;
};
struct VisitedPropertyScope_tE05035FCF84C4F135E88B893FC40CF5F3B43CFFE_marshaled_com
{
	VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* ___m_VisitContext;
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
struct VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA  : public RuntimeObject
{
	List_1_t0EBD8BA582D3F66E8AC5DBDC4A635DEB08086465* ___U3CpropertyPathInfosU3Ek__BackingField;
	HashSet_1_tAE2F12E55878645F5BE7C4D5603228A6FAB429C7* ___U3CtypesU3Ek__BackingField;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___U3CcurrentU3Ek__BackingField;
	int32_t ___U3CcurrentDepthU3Ek__BackingField;
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InspectedTypeScope_1__ctor_m81574608CF3C47E48CC6FF4C8EA96C099422648C_fshared (InspectedTypeScope_1_t02FE7CB83945A2462C3B101968ABFD80AF129E73* __this, VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* ___0_context, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InspectedTypeScope_1_Dispose_m59F33FE5783A60AF674C2CA0167736D2A851FE78_fshared (InspectedTypeScope_1_t02FE7CB83945A2462C3B101968ABFD80AF129E73* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection_1_GetEnumerator_mD933057B218712B4B2DAFBF6E423497F0D578261_fshared (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* __this, Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_fshared_inline (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F_fshared (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AutoCompletePathVisitor_HasReachedEnd_mEACD20D3E93C66F53CDD2970D12E1C538956BB8E (AutoCompletePathVisitor_tF0F2FA82B3F3666F724C75CF0B95E4A420243B15* __this, Type_t* ___0_containerType, const RuntimeMethod* method) ;
inline void InspectedTypeScope_1__ctor_m81574608CF3C47E48CC6FF4C8EA96C099422648C (InspectedTypeScope_1_t02FE7CB83945A2462C3B101968ABFD80AF129E73* __this, VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* ___0_context, const RuntimeMethod* method)
{
	((  void (*) (InspectedTypeScope_1_t02FE7CB83945A2462C3B101968ABFD80AF129E73*, VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA*, const RuntimeMethod*))InspectedTypeScope_1__ctor_m81574608CF3C47E48CC6FF4C8EA96C099422648C_fshared)(__this, ___0_context, method);
}
inline void InspectedTypeScope_1_Dispose_m59F33FE5783A60AF674C2CA0167736D2A851FE78 (InspectedTypeScope_1_t02FE7CB83945A2462C3B101968ABFD80AF129E73* __this, const RuntimeMethod* method)
{
	((  void (*) (InspectedTypeScope_1_t02FE7CB83945A2462C3B101968ABFD80AF129E73*, const RuntimeMethod*))InspectedTypeScope_1_Dispose_m59F33FE5783A60AF674C2CA0167736D2A851FE78_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisitedPropertyScope__ctor_m1CA03A55E3FE37E78ABBE0AC9BF9AF5C014BC480 (VisitedPropertyScope_tE05035FCF84C4F135E88B893FC40CF5F3B43CFFE* __this, VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* ___0_context, int32_t ___1_index, Type_t* ___2_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisitedPropertyScope_Dispose_m49D22C9237E70EBD320BC1B5122940EE68276760 (VisitedPropertyScope_tE05035FCF84C4F135E88B893FC40CF5F3B43CFFE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoCompletePathVisitor_VisitPropertyType_m93CA1A7ADF8BB5E1A1FD73FF0D2F153C21834583 (AutoCompletePathVisitor_tF0F2FA82B3F3666F724C75CF0B95E4A420243B15* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
inline void PropertyCollection_1_GetEnumerator_mD933057B218712B4B2DAFBF6E423497F0D578261 (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* __this, Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*, Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*, const RuntimeMethod*))PropertyCollection_1_GetEnumerator_mD933057B218712B4B2DAFBF6E423497F0D578261_fshared)((PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*)__this, il2cppRetVal, method);
}
inline RuntimeObject* Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_inline (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*, const RuntimeMethod*))Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisitedPropertyScope__ctor_m5BA295E7B5ECD4EAD4B51A54A9933667BDD6549A (VisitedPropertyScope_tE05035FCF84C4F135E88B893FC40CF5F3B43CFFE* __this, VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* ___0_context, RuntimeObject* ___1_property, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*, const RuntimeMethod*))Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F_fshared)(__this, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoCompletePathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisIl2CppFullySharedGenericAny_m76AD8CE27F98F2FD26972204116D442A0E9CBDFB_fshared (AutoCompletePathVisitor_tF0F2FA82B3F3666F724C75CF0B95E4A420243B15* __this, RuntimeObject* ___0_properties, Il2CppFullySharedGenericAny* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_Enumerator_tA234B6841E75CD06A68B204026389380A05F17D3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 12));
	const uint32_t SizeOf_PropertyCollection_1_t537457E4AD8ACF1A8F1011F952125D865B9A3AA1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 10));
	CHECKED_LOCAL(Type_t_StaticInit);
	void* L_21 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 12)));
	const Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE L_20 = alloca(SizeOf_Enumerator_tA234B6841E75CD06A68B204026389380A05F17D3);
	const PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D L_19 = alloca(SizeOf_PropertyCollection_1_t537457E4AD8ACF1A8F1011F952125D865B9A3AA1);
	InspectedTypeScope_1_t02FE7CB83945A2462C3B101968ABFD80AF129E73 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	VisitedPropertyScope_tE05035FCF84C4F135E88B893FC40CF5F3B43CFFE V_3;
	memset((&V_3), 0, sizeof(V_3));
	Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE V_4 = alloca(SizeOf_Enumerator_tA234B6841E75CD06A68B204026389380A05F17D3);
	memset(V_4, 0, SizeOf_Enumerator_tA234B6841E75CD06A68B204026389380A05F17D3);
	PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D V_5 = alloca(SizeOf_PropertyCollection_1_t537457E4AD8ACF1A8F1011F952125D865B9A3AA1);
	memset(V_5, 0, SizeOf_PropertyCollection_1_t537457E4AD8ACF1A8F1011F952125D865B9A3AA1);
	RuntimeObject* V_6 = NULL;
	VisitedPropertyScope_tE05035FCF84C4F135E88B893FC40CF5F3B43CFFE V_7;
	memset((&V_7), 0, sizeof(V_7));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_properties), (&___1_container));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_6), (&V_7));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104795));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104796));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/AutoCompletePathVisitor.cs:57>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104797));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104798));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104798));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104799));
		bool L_2;
		L_2 = AutoCompletePathVisitor_HasReachedEnd_mEACD20D3E93C66F53CDD2970D12E1C538956BB8E(__this, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104799));
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/AutoCompletePathVisitor.cs:58>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104800));
		return;
	}

IL_0013:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/AutoCompletePathVisitor.cs:60>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104801));
		VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* L_3 = __this->___m_VisitContext;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104802));
		InspectedTypeScope_1__ctor_m81574608CF3C47E48CC6FF4C8EA96C099422648C((&V_0), L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104802));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e4:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104834));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104835));
				InspectedTypeScope_1_Dispose_m59F33FE5783A60AF674C2CA0167736D2A851FE78((&V_0), il2cpp_rgctx_method(method->rgctx_data, 16));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104835));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104803));
				RuntimeObject* L_4 = ___0_properties;
				V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 3)));
				RuntimeObject* L_5 = V_2;
				if (L_5)
				{
					goto IL_0037_1;
				}
			}
			{
				RuntimeObject* L_6 = ___0_properties;
				if (((RuntimeObject*)IsInst((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 4))))
				{
					goto IL_00e2_1;
				}
			}
			{
				goto IL_0084_1;
			}

IL_0037_1:
			{
				//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/AutoCompletePathVisitor.cs:65>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104804));
				RuntimeObject* L_7 = V_2;
				Il2CppFullySharedGenericAny* L_8 = ___1_container;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104805));
				NullCheck(L_7);
				bool L_9;
				L_9 = InterfaceFuncInvoker3< bool, Il2CppFullySharedGenericAny*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 3), L_7, L_8, 0, (&V_1));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104805));
				if (!L_9)
				{
					goto IL_0072_1;
				}
			}
			{
				//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/AutoCompletePathVisitor.cs:67>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104806));
				VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* L_10 = __this->___m_VisitContext;
				RuntimeObject* L_11 = V_1;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104807));
				NullCheck((RuntimeObject*)L_11);
				Type_t* L_12;
				L_12 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104807));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104808));
				VisitedPropertyScope__ctor_m1CA03A55E3FE37E78ABBE0AC9BF9AF5C014BC480((&V_3), L_10, 0, L_12, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104808));
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0064_1:
					{
						STORE_TRY_ID(methodExecutionContext, 0);
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104811));
						STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104812));
						VisitedPropertyScope_Dispose_m49D22C9237E70EBD320BC1B5122940EE68276760((&V_3), NULL);
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104812));
						return;
					}
				});
				try
				{
					STORE_TRY_ID(methodExecutionContext, 1);
					//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/AutoCompletePathVisitor.cs:68>
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104809));
					RuntimeObject* L_13 = V_1;
					Il2CppFullySharedGenericAny* L_14 = ___1_container;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104810));
					NullCheck((RuntimeObject*)L_13);
					InterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 6), (RuntimeObject*)L_13, __this, L_14);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104810));
					goto IL_00f2;
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

IL_0072_1:
			{
				//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/AutoCompletePathVisitor.cs:73>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104813));
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104814));
				CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				Type_t* L_16;
				L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104814));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104815));
				AutoCompletePathVisitor_VisitPropertyType_m93CA1A7ADF8BB5E1A1FD73FF0D2F153C21834583(__this, L_16, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104815));
				//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/AutoCompletePathVisitor.cs:75>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104816));
				goto IL_00f2;
			}

IL_0084_1:
			{
				//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/AutoCompletePathVisitor.cs:81>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104817));
				RuntimeObject* L_17 = ___0_properties;
				Il2CppFullySharedGenericAny* L_18 = ___1_container;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104818));
				NullCheck(L_17);
				InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny*, PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 8), L_17, L_18, (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*)L_19);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104818));
				il2cpp_codegen_memcpy(V_5, L_19, SizeOf_PropertyCollection_1_t537457E4AD8ACF1A8F1011F952125D865B9A3AA1);
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104819));
				PropertyCollection_1_GetEnumerator_mD933057B218712B4B2DAFBF6E423497F0D578261((PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*)V_5, (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)L_20, il2cpp_rgctx_method(method->rgctx_data, 11));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104819));
				il2cpp_codegen_memcpy(V_4, L_20, SizeOf_Enumerator_tA234B6841E75CD06A68B204026389380A05F17D3);
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00d4_1:
					{
						STORE_TRY_ID(methodExecutionContext, 0);
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104831));
						STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104832));
						Il2CppConstrainedCallData L_22;
						Il2CppMethodPointer L_23 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 12), il2cpp_rgctx_method(method->rgctx_data, 15), (void*)(Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)V_4, &L_22, L_21);
						typedef void ( *func_L_24)(void*,const RuntimeMethod*);
						((func_L_24)L_23)(L_22.thisPtr,L_22.method);
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104832));
						return;
					}
				});
				try
				{
					STORE_TRY_ID(methodExecutionContext, 2);
					{
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104820));
						goto IL_00c9_2;
					}

IL_0098_2:
					{
						//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/AutoCompletePathVisitor.cs:81>
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104821));
						STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104822));
						RuntimeObject* L_25;
						L_25 = Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_inline((Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)V_4, il2cpp_rgctx_method(method->rgctx_data, 13));
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104822));
						V_6 = L_25;
						//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/AutoCompletePathVisitor.cs:83>
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104823));
						VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* L_26 = __this->___m_VisitContext;
						RuntimeObject* L_27 = V_6;
						STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104824));
						VisitedPropertyScope__ctor_m5BA295E7B5ECD4EAD4B51A54A9933667BDD6549A((&V_7), L_26, (RuntimeObject*)L_27, NULL);
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104824));
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_00bb_2:
							{
								STORE_TRY_ID(methodExecutionContext, 2);
								CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104827));
								STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104828));
								VisitedPropertyScope_Dispose_m49D22C9237E70EBD320BC1B5122940EE68276760((&V_7), NULL);
								CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104828));
								return;
							}
						});
						try
						{
							STORE_TRY_ID(methodExecutionContext, 3);
							//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/AutoCompletePathVisitor.cs:84>
							CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104825));
							RuntimeObject* L_28 = V_6;
							Il2CppFullySharedGenericAny* L_29 = ___1_container;
							STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104826));
							NullCheck((RuntimeObject*)L_28);
							InterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 6), (RuntimeObject*)L_28, __this, L_29);
							CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104826));
							goto IL_00c9_2;
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

IL_00c9_2:
					{
						//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/AutoCompletePathVisitor.cs:81>
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104829));
						STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104830));
						bool L_30;
						L_30 = Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F((Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)V_4, il2cpp_rgctx_method(method->rgctx_data, 14));
						CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104830));
						if (L_30)
						{
							goto IL_0098_2;
						}
					}
					{
						goto IL_00f2;
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

IL_00e2_1:
			{
				//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/AutoCompletePathVisitor.cs:90>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104833));
				goto IL_00f2;
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

IL_00f2:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Bindings/Utils/AutoCompletePathVisitor.cs:90>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 104836));
		return;
	}
}
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
// Method Definition Index: 23443
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
