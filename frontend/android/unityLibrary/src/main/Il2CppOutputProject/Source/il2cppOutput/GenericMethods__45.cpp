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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3Invoker;
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3Invoker<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};

struct IIndexedCollectionPropertyBagEnumerator_1_t10A3FE79120150E0A39D2649E6366925E3E7977A;
struct IIndexedProperties_1_t961108855F4FED4E213FA22D7065C5BD080AF035;
struct IKeyedProperties_2_tD4BB2092951A0BFA224D7E1E8FDA19E0F5439689;
struct INamedProperties_1_t1762CAC2E72BD27B04AD4693D6537F66241A758A;
struct IPropertyBag_1_t36BB94A0E64BDC3C7B44E3C33CD0562C77748D3F;
struct IProperty_1_t47DF8E7CFAFA47596FCFDA6775C02B5B3C05AAE5;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D;
struct IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697;
struct PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446;
struct String_t;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_PropertiesModule[];
IL2CPP_EXTERN_C RuntimeClass* IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mF85DC9982F315FAFF26C3B9CAAE956FA3BBF307B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9BE640DC1FBEAADC285608302A91CC00AE7C4705_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m8394F68FADFB63A79899AB149C73E2F218857D95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_0_0_0_var;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
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
typedef Il2CppFullySharedGenericStruct Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339;
struct AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE 
{
	RuntimeObject* ___m_Target;
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Previous;
};
struct AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE_marshaled_pinvoke
{
	RuntimeObject* ___m_Target;
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Previous;
};
struct AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE_marshaled_com
{
	RuntimeObject* ___m_Target;
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Previous;
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
struct Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748 
{
	bool ___hasValue;
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE ___value;
};
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
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
struct PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446  : public RuntimeObject
{
	int32_t ___m_PathIndex;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___U3CPathU3Ek__BackingField;
	RuntimeObject* ___U3CPropertyU3Ek__BackingField;
	bool ___U3CReadonlyVisitU3Ek__BackingField;
	int32_t ___U3CReturnCodeU3Ek__BackingField;
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4257D7FF23A495D1B204F20330FBDED58248E4CC_fshared (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_fshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_fshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD (PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21 (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57 (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) ;
inline void Nullable_1__ctor_m9BE640DC1FBEAADC285608302A91CC00AE7C4705 (Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748* __this, AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))Nullable_1__ctor_m4257D7FF23A495D1B204F20330FBDED58248E4CC_fshared)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct)&___0_value, method);
}
inline bool Nullable_1_get_HasValue_m8394F68FADFB63A79899AB149C73E2F218857D95_inline (Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748*, const RuntimeMethod*))Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_fshared_inline)(__this, method);
}
inline AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE Nullable_1_GetValueOrDefault_mF85DC9982F315FAFF26C3B9CAAE956FA3BBF307B_inline (Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748* __this, const RuntimeMethod* method)
{
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE il2cppRetVal;
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_fshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D (AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
// Method Definition Index: 69463
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathVisitor_Unity_Properties_IPropertyBagVisitor_Visit_TisIl2CppFullySharedGenericAny_mF1E2CE4C83C60AC29C925BB4548F6186E2FB27EC_fshared (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, RuntimeObject* ___0_properties, Il2CppFullySharedGenericAny* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mF85DC9982F315FAFF26C3B9CAAE956FA3BBF307B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9BE640DC1FBEAADC285608302A91CC00AE7C4705_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m8394F68FADFB63A79899AB149C73E2F218857D95_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748 V_12;
	memset((&V_12), 0, sizeof(V_12));
	AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE V_13;
	memset((&V_13), 0, sizeof(V_13));
	RuntimeObject* V_14 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_properties), (&___1_container));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_5), (&V_6), (&V_7), (&V_8), (&V_9), (&V_14));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1900));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1901));
	RuntimeObject* G_B11_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748 G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748 G_B22_0;
	memset((&G_B22_0), 0, sizeof(G_B22_0));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:61>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1902));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1903));
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0;
		L_0 = PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1903));
		V_2 = L_0;
		int32_t L_1 = __this->___m_PathIndex;
		V_3 = L_1;
		int32_t L_2 = V_3;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1904));
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_4;
		L_4 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_2), L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1904));
		V_0 = L_4;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:65>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1905));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1906));
		int32_t L_5;
		L_5 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1906));
		V_4 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1907));
		int32_t L_6 = V_4;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_0071;
			}
			case 2:
			{
				goto IL_01bc;
			}
		}
	}
	{
		goto IL_0213;
	}

IL_0041:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:69>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1908));
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
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1909));
		String_t* L_11;
		L_11 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1909));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1910));
		NullCheck(L_9);
		bool L_12;
		L_12 = InterfaceFuncInvoker3< bool, Il2CppFullySharedGenericAny*, String_t*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_9, L_10, L_11, (&V_1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1910));
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:71>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1911));
		RuntimeObject* L_13 = V_1;
		Il2CppFullySharedGenericAny* L_14 = ___1_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1912));
		NullCheck((RuntimeObject*)L_13);
		InterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 2), (RuntimeObject*)L_13, __this, L_14);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1912));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1913));
		return;
	}

IL_0069:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:75>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1914));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1915));
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, 4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1915));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:78>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1916));
		return;
	}

IL_0071:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:82>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1917));
		RuntimeObject* L_15 = ___0_properties;
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_15, il2cpp_rgctx_data(method->rgctx_data, 4)));
		RuntimeObject* L_16 = V_6;
		if (!L_16)
		{
			goto IL_01b4;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:84>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1918));
		RuntimeObject* L_17 = ___0_properties;
		V_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 5)));
		RuntimeObject* L_18 = V_7;
		if (!L_18)
		{
			goto IL_013f;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1919));
		int32_t L_19;
		L_19 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1919));
		RuntimeObject* L_20 = V_7;
		Il2CppFullySharedGenericAny* L_21 = ___1_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1920));
		NullCheck(L_20);
		int32_t L_22;
		L_22 = InterfaceFuncInvoker1< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 5), L_20, L_21);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1920));
		if ((((int32_t)L_19) >= ((int32_t)L_22)))
		{
			goto IL_013f;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:87>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1921));
		RuntimeObject* L_23 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1922));
		NullCheck(L_23);
		IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 L_24;
		L_24 = InterfaceFuncInvoker0< IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 >::Invoke(2, il2cpp_rgctx_data_init(method->rgctx_data, 5), L_23);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1922));
		V_8 = L_24;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:88>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1923));
		RuntimeObject* L_25 = V_7;
		il2cpp_codegen_initobj((&V_10), sizeof(IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1924));
		int32_t L_26;
		L_26 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1924));
		(&V_10)->___Index = L_26;
		(&V_10)->___IsReadOnly = (bool)0;
		IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 L_27 = V_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1925));
		NullCheck(L_25);
		InterfaceActionInvoker1< IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 >::Invoke(3, il2cpp_rgctx_data_init(method->rgctx_data, 5), L_25, L_27);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1925));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:90>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1926));
		RuntimeObject* L_28 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1927));
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 5), L_28);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1927));
		V_9 = L_29;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:92>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1928));
		RuntimeObject* L_30 = V_9;
		RuntimeObject* L_31 = ((RuntimeObject*)IsInst((RuntimeObject*)L_30, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var));
		if (L_31)
		{
			G_B11_0 = L_31;
			goto IL_00f3;
		}
		G_B10_0 = L_31;
	}
	{
		il2cpp_codegen_initobj((&V_12), sizeof(Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748));
		Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748 L_32 = V_12;
		G_B12_0 = L_32;
		goto IL_0108;
	}

IL_00f3:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1929));
		RuntimeObject* L_33;
		L_33 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1929));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1930));
		NullCheck(G_B11_0);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_34;
		L_34 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, G_B11_0, ((RuntimeObject*)IsInst((RuntimeObject*)L_33, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1930));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1931));
		Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Nullable_1__ctor_m9BE640DC1FBEAADC285608302A91CC00AE7C4705((&L_35), L_34, Nullable_1__ctor_m9BE640DC1FBEAADC285608302A91CC00AE7C4705_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1931));
		G_B12_0 = L_35;
	}

IL_0108:
	{
		V_11 = G_B12_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0115:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1934));
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1935));
					bool L_36;
					L_36 = Nullable_1_get_HasValue_m8394F68FADFB63A79899AB149C73E2F218857D95_inline((&V_11), Nullable_1_get_HasValue_m8394F68FADFB63A79899AB149C73E2F218857D95_RuntimeMethod_var);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1935));
					if (!L_36)
					{
						goto IL_0134;
					}
				}
				{
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1936));
					AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_37;
					L_37 = Nullable_1_GetValueOrDefault_mF85DC9982F315FAFF26C3B9CAAE956FA3BBF307B_inline((&V_11), Nullable_1_GetValueOrDefault_mF85DC9982F315FAFF26C3B9CAAE956FA3BBF307B_RuntimeMethod_var);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1936));
					V_13 = L_37;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1937));
					AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1937));
				}

IL_0134:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1938));
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:93>
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1932));
			RuntimeObject* L_38 = V_9;
			Il2CppFullySharedGenericAny* L_39 = ___1_container;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1933));
			NullCheck((RuntimeObject*)L_38);
			InterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 2), (RuntimeObject*)L_38, __this, L_39);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1933));
			goto IL_0135;
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

IL_0135:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:95>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1939));
		RuntimeObject* L_40 = V_7;
		IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 L_41 = V_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1940));
		NullCheck(L_40);
		InterfaceActionInvoker1< IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 >::Invoke(3, il2cpp_rgctx_data_init(method->rgctx_data, 5), L_40, L_41);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1940));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1941));
		return;
	}

IL_013f:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:97>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1942));
		RuntimeObject* L_42 = V_6;
		Il2CppFullySharedGenericAny* L_43 = ___1_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1943));
		int32_t L_44;
		L_44 = PropertyPathPart_get_Index_mFCB3571720514B51BC7B373D45B19CCBD82FBF57((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1943));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1944));
		NullCheck(L_42);
		bool L_45;
		L_45 = InterfaceFuncInvoker3< bool, Il2CppFullySharedGenericAny*, int32_t, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 4), L_42, L_43, L_44, (&V_1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1944));
		if (!L_45)
		{
			goto IL_01ac;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:99>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1945));
		RuntimeObject* L_46 = V_1;
		RuntimeObject* L_47 = ((RuntimeObject*)IsInst((RuntimeObject*)L_46, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var));
		if (L_47)
		{
			G_B21_0 = L_47;
			goto IL_0168;
		}
		G_B20_0 = L_47;
	}
	{
		il2cpp_codegen_initobj((&V_12), sizeof(Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748));
		Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748 L_48 = V_12;
		G_B22_0 = L_48;
		goto IL_017d;
	}

IL_0168:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1946));
		RuntimeObject* L_49;
		L_49 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1946));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1947));
		NullCheck(G_B21_0);
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_50;
		L_50 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, G_B21_0, ((RuntimeObject*)IsInst((RuntimeObject*)L_49, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1947));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1948));
		Nullable_1_t7E68FECE4EEFF632CF52A7A92F9D8E070E547748 L_51;
		memset((&L_51), 0, sizeof(L_51));
		Nullable_1__ctor_m9BE640DC1FBEAADC285608302A91CC00AE7C4705((&L_51), L_50, Nullable_1__ctor_m9BE640DC1FBEAADC285608302A91CC00AE7C4705_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1948));
		G_B22_0 = L_51;
	}

IL_017d:
	{
		V_11 = G_B22_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_018c:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1951));
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1952));
					bool L_52;
					L_52 = Nullable_1_get_HasValue_m8394F68FADFB63A79899AB149C73E2F218857D95_inline((&V_11), Nullable_1_get_HasValue_m8394F68FADFB63A79899AB149C73E2F218857D95_RuntimeMethod_var);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1952));
					if (!L_52)
					{
						goto IL_01ab;
					}
				}
				{
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1953));
					AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_53;
					L_53 = Nullable_1_GetValueOrDefault_mF85DC9982F315FAFF26C3B9CAAE956FA3BBF307B_inline((&V_11), Nullable_1_GetValueOrDefault_mF85DC9982F315FAFF26C3B9CAAE956FA3BBF307B_RuntimeMethod_var);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1953));
					V_13 = L_53;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1954));
					AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1954));
				}

IL_01ab:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1955));
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 1);
			//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:100>
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1949));
			RuntimeObject* L_54 = V_1;
			Il2CppFullySharedGenericAny* L_55 = ___1_container;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1950));
			NullCheck((RuntimeObject*)L_54);
			InterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 2), (RuntimeObject*)L_54, __this, L_55);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1950));
			goto IL_021a;
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

IL_01ac:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:104>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1956));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1957));
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, 4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1957));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1958));
		return;
	}

IL_01b4:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:109>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1959));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1960));
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, 4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1960));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:112>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1961));
		return;
	}

IL_01bc:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:116>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1962));
		RuntimeObject* L_56 = ___0_properties;
		V_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_56, il2cpp_rgctx_data(method->rgctx_data, 11)));
		RuntimeObject* L_57 = V_14;
		if (!L_57)
		{
			goto IL_020b;
		}
	}
	{
		RuntimeObject* L_58 = V_14;
		Il2CppFullySharedGenericAny* L_59 = ___1_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1963));
		RuntimeObject* L_60;
		L_60 = PropertyPathPart_get_Key_m08AAAD0EF82806F72CA10628E7B8EC15322E7E6A((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1963));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1964));
		NullCheck(L_58);
		bool L_61;
		L_61 = InterfaceFuncInvoker3Invoker< bool, Il2CppFullySharedGenericAny*, RuntimeObject*, RuntimeObject** >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 11), L_58, L_59, L_60, (&V_1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1964));
		if (!L_61)
		{
			goto IL_020b;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:118>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1965));
		RuntimeObject* L_62 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1966));
		RuntimeObject* L_63;
		L_63 = PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1966));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1967));
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_62, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_64;
		L_64 = InterfaceFuncInvoker1< AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE, RuntimeObject* >::Invoke(4, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_62, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)), ((RuntimeObject*)IsInst((RuntimeObject*)L_63, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1967));
		V_13 = L_64;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01fd:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1971));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1972));
				AttributesScope_Dispose_mE479F4FB0D23FD296817DD79630432BD4675E15D((&V_13), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1972));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 2);
			//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:120>
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1968));
			RuntimeObject* L_65 = V_1;
			Il2CppFullySharedGenericAny* L_66 = ___1_container;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1969));
			NullCheck((RuntimeObject*)L_65);
			InterfaceActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 2), (RuntimeObject*)L_65, __this, L_66);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1969));
			//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:121>
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1970));
			goto IL_021a;
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

IL_020b:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:125>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1973));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1974));
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, 4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1974));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:128>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1975));
		return;
	}

IL_0213:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:131>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1976));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1977));
		PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline(__this, 4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1977));
	}

IL_021a:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:134>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1978));
		return;
	}
}
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69464
// Method Definition Index: 69454
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PathVisitor_get_Path_m98A92F21C11F12C0C88EAC86D0F2E853DFBF9BD3_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1866));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1867));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:31>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1868));
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
// Method Definition Index: 69462
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PathVisitor_set_ReturnCode_mB5629AE0124C70E479D9C4D44A8E552DA8BA19E0_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1897));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1898));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:57>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1899));
		int32_t L_0 = ___0_value;
		__this->___U3CReturnCodeU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 69457
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PathVisitor_get_Property_mA08B8FE123674A9F4529C9CEAC47F6E940846E9B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1882));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1883));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Properties/Runtime/PropertyVisitors/PathVisitor.cs:47>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 1884));
		RuntimeObject* L_0 = __this->___U3CPropertyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 2155
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_fshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		return L_0;
	}
}
// Method Definition Index: 2157
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_fshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
		return;
	}
}
