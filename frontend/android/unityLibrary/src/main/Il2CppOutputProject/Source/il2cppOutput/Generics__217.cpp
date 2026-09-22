#include "pch-cpp.hpp"





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

struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_MathematicsModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_ScriptingModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Collections[];
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F;
IL2CPP_EXTERN_C String_t* _stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F;
IL2CPP_EXTERN_C String_t* _stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457;
IL2CPP_EXTERN_C String_t* _stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246;
IL2CPP_EXTERN_C const RuntimeMethod* math_min_m0D183243301588F5000801E35B451374CD10DFC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32U2A_t49A648948B5A176D1945F61EB07A64274F3A9D47_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


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
typedef Il2CppFullySharedGenericStruct NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51;
struct UnsafeParallelHashMapBase_2_t46D44AB4FDD0747CC7E60E40D6519F342911FC14 
{
};
struct UnsafeParallelHashMapBase_2_t451A35AB89A12E1E616B3AC33F88998099C2B32E 
{
};
struct UnsafeParallelHashMapBase_2_t9DFBE3E27405BB3B5DDD6D76151D5BFA7CB6513C 
{
};
struct UnsafeParallelHashMapBase_2_tCFF834E7486FBD609EF94B0B7A469760EB0CB20D 
{
};
struct UnsafeParallelHashMapBase_2_t41262C7F5F83828700A8921D620E67EA0991FAE1 
{
};
struct UnsafeParallelHashMapBase_2_t439947A40101FC75EC5665DCAB06644239715D75 
{
};
struct UnsafeParallelHashMapBase_2_t463AA70D1CB41B734F17C41A6E834759D3D89195 
{
};
struct UnsafeParallelHashMapBase_2_tB0C02E0D42773FC6279148955479C9F639550ECC 
{
};
struct UnsafeParallelHashMapBase_2_t72E41A06BF89C7558B54716CF15B86402025AEB2 
{
};
struct UnsafeParallelHashMapBase_2_t36B6EB74EB92F62B7DCA92AA40875B27E60F1D7F 
{
};
struct UnsafeParallelHashMapBase_2_tC9A90870EF7154E90FC350CFEC5BAF8C8F35A4C0 
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
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
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t* ___values;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t* ___values_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keys_OffsetPadding[8];
			uint8_t* ___keys;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keys_OffsetPadding_forAlignmentOnly[8];
			uint8_t* ___keys_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___next_OffsetPadding[16];
			uint8_t* ___next;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___next_OffsetPadding_forAlignmentOnly[16];
			uint8_t* ___next_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___buckets_OffsetPadding[24];
			uint8_t* ___buckets;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___buckets_OffsetPadding_forAlignmentOnly[24];
			uint8_t* ___buckets_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyCapacity_OffsetPadding[32];
			int32_t ___keyCapacity;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyCapacity_OffsetPadding_forAlignmentOnly[32];
			int32_t ___keyCapacity_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding[36];
			int32_t ___bucketCapacityMask;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding_forAlignmentOnly[36];
			int32_t ___bucketCapacityMask_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding[40];
			int32_t ___allocatedIndexLength;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding_forAlignmentOnly[40];
			int32_t ___allocatedIndexLength_forAlignmentOnly;
		};
	};
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
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
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
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mB16D13831106B0DC2EF2AD361743D9FC6597B1DA_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct* ___2_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m3E2610CA343A7226FECF5B6CE365718FC66DF071_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_fshared_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mCFD0DA8ADF441A1780C2CAE61417C094BF86B93E_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mD75A84E690BE573D5B2F40EF59DFD1AC4703BFED_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_fshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m02842BF5ACFFDD0CC5E0C86B2A523A797D5B0477_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct* ___1_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_fshared_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_fshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B (void* ___0_destination, uint8_t ___1_value, int64_t ___2_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C (int32_t* ___0_location1, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mB16D13831106B0DC2EF2AD361743D9FC6597B1DA (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct* ___2_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mB16D13831106B0DC2EF2AD361743D9FC6597B1DA_fshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m3E2610CA343A7226FECF5B6CE365718FC66DF071 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m3E2610CA343A7226FECF5B6CE365718FC66DF071_fshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericStruct ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_fshared_inline)(___0_destination, ___1_index, (Il2CppFullySharedGenericAny)___2_value, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_mCFD0DA8ADF441A1780C2CAE61417C094BF86B93E (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_mCFD0DA8ADF441A1780C2CAE61417C094BF86B93E_fshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47 (int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_GetBucketSize_mBE376CBC384B796DE89740ECD5EA9C7F520D93D7 (int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mD75A84E690BE573D5B2F40EF59DFD1AC4703BFED (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mD75A84E690BE573D5B2F40EF59DFD1AC4703BFED_fshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_fshared_inline)(___0_source, ___1_index, il2cppRetVal, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m02842BF5ACFFDD0CC5E0C86B2A523A797D5B0477 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct* ___1_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m02842BF5ACFFDD0CC5E0C86B2A523A797D5B0477_fshared)(___0_data, ___1_item, ___2_it, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_fshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_fshared_inline)(___0_source, ___1_index, il2cppRetVal, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 53498
// Method Definition Index: 53499
// Method Definition Index: 53500
// Method Definition Index: 53501
// Method Definition Index: 53502
// Method Definition Index: 53503
// Method Definition Index: 53504
// Method Definition Index: 53505
// Method Definition Index: 53507
// Method Definition Index: 53508
// Method Definition Index: 53509
// Method Definition Index: 53510
// Method Definition Index: 53511
// Method Definition Index: 53512
// Method Definition Index: 53513
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 53498
// Method Definition Index: 53499
// Method Definition Index: 53500
// Method Definition Index: 53501
// Method Definition Index: 53502
// Method Definition Index: 53503
// Method Definition Index: 53504
// Method Definition Index: 53505
// Method Definition Index: 53507
// Method Definition Index: 53508
// Method Definition Index: 53509
// Method Definition Index: 53510
// Method Definition Index: 53511
// Method Definition Index: 53512
// Method Definition Index: 53513
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 53498
// Method Definition Index: 53499
// Method Definition Index: 53500
// Method Definition Index: 53501
// Method Definition Index: 53502
// Method Definition Index: 53503
// Method Definition Index: 53504
// Method Definition Index: 53505
// Method Definition Index: 53507
// Method Definition Index: 53508
// Method Definition Index: 53509
// Method Definition Index: 53510
// Method Definition Index: 53511
// Method Definition Index: 53512
// Method Definition Index: 53513
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 53498
// Method Definition Index: 53499
// Method Definition Index: 53500
// Method Definition Index: 53501
// Method Definition Index: 53502
// Method Definition Index: 53503
// Method Definition Index: 53504
// Method Definition Index: 53505
// Method Definition Index: 53507
// Method Definition Index: 53508
// Method Definition Index: 53509
// Method Definition Index: 53510
// Method Definition Index: 53511
// Method Definition Index: 53512
// Method Definition Index: 53513
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 53498
// Method Definition Index: 53499
// Method Definition Index: 53500
// Method Definition Index: 53501
// Method Definition Index: 53502
// Method Definition Index: 53503
// Method Definition Index: 53504
// Method Definition Index: 53505
// Method Definition Index: 53507
// Method Definition Index: 53508
// Method Definition Index: 53509
// Method Definition Index: 53510
// Method Definition Index: 53511
// Method Definition Index: 53512
// Method Definition Index: 53513
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 53498
// Method Definition Index: 53499
// Method Definition Index: 53500
// Method Definition Index: 53501
// Method Definition Index: 53502
// Method Definition Index: 53503
// Method Definition Index: 53504
// Method Definition Index: 53505
// Method Definition Index: 53507
// Method Definition Index: 53508
// Method Definition Index: 53509
// Method Definition Index: 53510
// Method Definition Index: 53511
// Method Definition Index: 53512
// Method Definition Index: 53513
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 53498
// Method Definition Index: 53499
// Method Definition Index: 53500
// Method Definition Index: 53501
// Method Definition Index: 53502
// Method Definition Index: 53503
// Method Definition Index: 53504
// Method Definition Index: 53505
// Method Definition Index: 53507
// Method Definition Index: 53508
// Method Definition Index: 53509
// Method Definition Index: 53510
// Method Definition Index: 53511
// Method Definition Index: 53512
// Method Definition Index: 53513
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 53498
// Method Definition Index: 53499
// Method Definition Index: 53500
// Method Definition Index: 53501
// Method Definition Index: 53502
// Method Definition Index: 53503
// Method Definition Index: 53504
// Method Definition Index: 53505
// Method Definition Index: 53507
// Method Definition Index: 53508
// Method Definition Index: 53509
// Method Definition Index: 53510
// Method Definition Index: 53511
// Method Definition Index: 53512
// Method Definition Index: 53513
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 53498
// Method Definition Index: 53499
// Method Definition Index: 53500
// Method Definition Index: 53501
// Method Definition Index: 53502
// Method Definition Index: 53503
// Method Definition Index: 53504
// Method Definition Index: 53505
// Method Definition Index: 53507
// Method Definition Index: 53508
// Method Definition Index: 53509
// Method Definition Index: 53510
// Method Definition Index: 53511
// Method Definition Index: 53512
// Method Definition Index: 53513
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 53498
// Method Definition Index: 53499
// Method Definition Index: 53500
// Method Definition Index: 53501
// Method Definition Index: 53502
// Method Definition Index: 53503
// Method Definition Index: 53504
// Method Definition Index: 53505
// Method Definition Index: 53507
// Method Definition Index: 53508
// Method Definition Index: 53509
// Method Definition Index: 53510
// Method Definition Index: 53511
// Method Definition Index: 53512
// Method Definition Index: 53513
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 53498
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m6EE55875D60EFEB4879AF8FF0E362DCC68B50EBB_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_data));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35344));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 35345));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35346));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:469>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35347));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35348));
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add(L_4, L_5)), L_6)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35348));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:470>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35349));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		int32_t L_10 = L_9->___keyCapacity;
		int64_t L_11 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_10,NULL));
		int64_t L_12 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35350));
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_8, (uint8_t)((int32_t)255), ((int64_t)il2cpp_codegen_multiply(L_11, L_12)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35350));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:473>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35351));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35352));
		int32_t L_13;
		L_13 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35352));
		V_0 = L_13;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:477>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35353));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35354));
		goto IL_005a;
	}

IL_0044:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35355));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:479>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35356));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35357));
		int32_t* L_15;
		L_15 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35357));
		int32_t L_16 = V_1;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_16, ((int32_t)16))),NULL));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(L_17, 4)))), (int32_t)(-1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35358));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:477>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35359));
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_005a:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:477>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35360));
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		V_2 = (bool)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35361));
		bool L_21 = V_2;
		if (L_21)
		{
			goto IL_0044;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:482>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35362));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		L_22->___allocatedIndexLength = 0;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:483>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35363));
		return;
	}
}
// Method Definition Index: 53499
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m3E2610CA343A7226FECF5B6CE365718FC66DF071_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_data), (&___1_threadIndex));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_4), (&V_5), (&V_8), (&V_9), (&V_13));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35364));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 35365));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35366));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:490>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35367));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0008:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35368));
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35369));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:496>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35370));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35371));
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35371));
		int32_t L_4 = ___1_threadIndex;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16))),NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35372));
		int32_t L_6;
		L_6 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(L_5, 4)))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35372));
		V_0 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35373));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:497>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35374));
		int32_t L_7 = V_0;
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)((int32_t)-3)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35375));
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:500>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35376));
		int32_t L_9 = V_0;
		V_3 = (bool)((((int32_t)L_9) < ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35377));
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_021e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35378));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:507>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35379));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35380));
		int32_t* L_12;
		L_12 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35380));
		int32_t L_13 = ___1_threadIndex;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)16))),NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35381));
		int32_t L_15;
		L_15 = il2cpp_intrinsic_interlocked_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, 4)))), ((int32_t)-2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35381));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:510>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35382));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		int32_t L_19 = L_18->___keyCapacity;
		V_6 = (bool)((((int32_t)L_17) < ((int32_t)L_19))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35383));
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_0123;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35384));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:512>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35385));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		NullCheck(L_21);
		int32_t* L_22 = (int32_t*)(&L_21->___allocatedIndexLength);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35386));
		int32_t L_23;
		L_23 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_22, ((int32_t)16), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35386));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_23, ((int32_t)16)));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:514>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35387));
		int32_t L_24 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_25 = ___0_data;
		NullCheck(L_25);
		int32_t L_26 = L_25->___keyCapacity;
		V_7 = (bool)((((int32_t)L_24) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_26, 1))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35388));
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_00f3;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35389));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:516>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35390));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35391));
		int32_t L_31;
		L_31 = math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35391));
		V_8 = L_31;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:519>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35392));
		V_9 = 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35393));
		goto IL_00b3;
	}

IL_009b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35394));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:521>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35395));
		int32_t* L_32 = V_1;
		int32_t L_33 = V_0;
		int32_t L_34 = V_9;
		intptr_t L_35 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_33, L_34)),NULL));
		int32_t L_36 = V_0;
		int32_t L_37 = V_9;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(L_35, 4)))), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35396));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:519>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35397));
		int32_t L_38 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b3:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:519>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35398));
		int32_t L_39 = V_9;
		int32_t L_40 = V_8;
		V_10 = (bool)((((int32_t)L_39) < ((int32_t)L_40))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35399));
		bool L_41 = V_10;
		if (L_41)
		{
			goto IL_009b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:525>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35400));
		int32_t* L_42 = V_1;
		int32_t L_43 = V_0;
		int32_t L_44 = V_8;
		intptr_t L_45 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_43, L_44)), 1)),NULL));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(L_45, 4)))), (int32_t)(-1));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:528>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35401));
		int32_t* L_46 = V_1;
		int32_t L_47 = V_0;
		intptr_t L_48 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_47,NULL));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_46, ((intptr_t)il2cpp_codegen_multiply(L_48, 4)))), (int32_t)(-1));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:531>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35402));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35403));
		int32_t* L_50;
		L_50 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_49, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35403));
		int32_t L_51 = ___1_threadIndex;
		intptr_t L_52 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_51, ((int32_t)16))),NULL));
		int32_t L_53 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35404));
		int32_t L_54;
		L_54 = il2cpp_intrinsic_interlocked_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_50, ((intptr_t)il2cpp_codegen_multiply(L_52, 4)))), ((int32_t)il2cpp_codegen_add(L_53, 1)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35404));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:533>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35405));
		int32_t L_55 = V_0;
		V_11 = L_55;
		goto IL_026c;
	}

IL_00f3:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:536>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35406));
		int32_t L_56 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		NullCheck(L_57);
		int32_t L_58 = L_57->___keyCapacity;
		V_12 = (bool)((((int32_t)L_56) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_58, 1))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35407));
		bool L_59 = V_12;
		if (!L_59)
		{
			goto IL_0122;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35408));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:540>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35409));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35410));
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35410));
		int32_t L_62 = ___1_threadIndex;
		intptr_t L_63 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16))),NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35411));
		int32_t L_64;
		L_64 = il2cpp_intrinsic_interlocked_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(L_63, 4)))), (-1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35411));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:542>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35412));
		int32_t L_65 = V_0;
		V_11 = L_65;
		goto IL_026c;
	}

IL_0122:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35413));
	}

IL_0123:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:547>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35414));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35415));
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35415));
		int32_t L_68 = ___1_threadIndex;
		intptr_t L_69 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16))),NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35416));
		int32_t L_70;
		L_70 = il2cpp_intrinsic_interlocked_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(L_69, 4)))), (-1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35416));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:550>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35417));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35418));
		int32_t L_71;
		L_71 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35418));
		V_4 = L_71;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:555>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35419));
		V_5 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35420));
		goto IL_0212;
	}

IL_0147:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35421));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:558>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35422));
		V_5 = (bool)0;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:559>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35423));
		int32_t L_72 = ___1_threadIndex;
		int32_t L_73 = V_4;
		V_13 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_72, 1))%L_73));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35424));
		goto IL_0200;
	}

IL_0158:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35425));
	}

IL_0159:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35426));
	}

IL_015a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35427));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:570>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35428));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35429));
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35429));
		int32_t L_76 = V_13;
		intptr_t L_77 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16))),NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35430));
		int32_t L_78;
		L_78 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(L_77, 4)))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35430));
		V_0 = L_78;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35431));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:571>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35432));
		int32_t L_79 = V_0;
		V_14 = (bool)((((int32_t)L_79) == ((int32_t)((int32_t)-3)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35433));
		bool L_80 = V_14;
		if (L_80)
		{
			goto IL_015a;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:573>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35434));
		int32_t L_81 = V_0;
		V_15 = (bool)((((int32_t)L_81) < ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35435));
		bool L_82 = V_15;
		if (!L_82)
		{
			goto IL_0189;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35436));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:575>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35437));
		goto IL_01ad;
	}

IL_0189:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35438));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:578>
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:579>
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:580>
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:581>
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:582>
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:583>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35439));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_83 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35440));
		int32_t* L_84;
		L_84 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_83, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35440));
		int32_t L_85 = V_13;
		intptr_t L_86 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_85, ((int32_t)16))),NULL));
		int32_t L_87 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35441));
		int32_t L_88;
		L_88 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(L_86, 4)))), ((int32_t)-3), L_87);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35441));
		int32_t L_89 = V_0;
		V_16 = (bool)((((int32_t)((((int32_t)L_88) == ((int32_t)L_89))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35442));
		bool L_90 = V_16;
		if (L_90)
		{
			goto IL_0159;
		}
	}

IL_01ad:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:585>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35443));
		int32_t L_91 = V_0;
		V_17 = (bool)((((int32_t)L_91) == ((int32_t)((int32_t)-2)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35444));
		bool L_92 = V_17;
		if (!L_92)
		{
			goto IL_01bf;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35445));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:588>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35446));
		V_5 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35447));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35448));
		goto IL_01f6;
	}

IL_01bf:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:590>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35449));
		int32_t L_93 = V_0;
		V_18 = (bool)((((int32_t)((((int32_t)L_93) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35450));
		bool L_94 = V_18;
		if (!L_94)
		{
			goto IL_01f6;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35451));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:594>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35452));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_95 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35453));
		int32_t* L_96;
		L_96 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_95, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35453));
		int32_t L_97 = V_13;
		intptr_t L_98 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_97, ((int32_t)16))),NULL));
		int32_t* L_99 = V_1;
		int32_t L_100 = V_0;
		intptr_t L_101 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_100,NULL));
		int32_t L_102 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_99, ((intptr_t)il2cpp_codegen_multiply(L_101, 4)))));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35454));
		int32_t L_103;
		L_103 = il2cpp_intrinsic_interlocked_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(L_98, 4)))), L_102);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35454));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:595>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35455));
		int32_t* L_104 = V_1;
		int32_t L_105 = V_0;
		intptr_t L_106 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_105,NULL));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_104, ((intptr_t)il2cpp_codegen_multiply(L_106, 4)))), (int32_t)(-1));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:596>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35456));
		int32_t L_107 = V_0;
		V_11 = L_107;
		goto IL_026c;
	}

IL_01f6:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35457));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:561>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35458));
		int32_t L_108 = V_13;
		int32_t L_109 = V_4;
		V_13 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_108, 1))%L_109));
	}

IL_0200:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:560>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35459));
		int32_t L_110 = V_13;
		int32_t L_111 = ___1_threadIndex;
		V_19 = (bool)((((int32_t)((((int32_t)L_110) == ((int32_t)L_111))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35460));
		bool L_112 = V_19;
		if (L_112)
		{
			goto IL_0158;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35461));
	}

IL_0212:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:556>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35462));
		bool L_113 = V_5;
		V_20 = L_113;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35463));
		bool L_114 = V_20;
		if (L_114)
		{
			goto IL_0147;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35464));
	}

IL_021e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35465));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:605>
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:606>
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:607>
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:608>
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:609>
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:610>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35466));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_115 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35467));
		int32_t* L_116;
		L_116 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_115, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35467));
		int32_t L_117 = ___1_threadIndex;
		intptr_t L_118 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_117, ((int32_t)16))),NULL));
		int32_t L_119 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35468));
		int32_t L_120;
		L_120 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_116, ((intptr_t)il2cpp_codegen_multiply(L_118, 4)))), ((int32_t)-3), L_119);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35468));
		int32_t L_121 = V_0;
		V_21 = (bool)((((int32_t)((((int32_t)L_120) == ((int32_t)L_121))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35469));
		bool L_122 = V_21;
		if (L_122)
		{
			goto IL_0008;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:612>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35470));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_123 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35471));
		int32_t* L_124;
		L_124 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_123, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35471));
		int32_t L_125 = ___1_threadIndex;
		intptr_t L_126 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_125, ((int32_t)16))),NULL));
		int32_t* L_127 = V_1;
		int32_t L_128 = V_0;
		intptr_t L_129 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_128,NULL));
		int32_t L_130 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_127, ((intptr_t)il2cpp_codegen_multiply(L_129, 4)))));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35472));
		int32_t L_131;
		L_131 = il2cpp_intrinsic_interlocked_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_124, ((intptr_t)il2cpp_codegen_multiply(L_126, 4)))), L_130);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35472));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:613>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35473));
		int32_t* L_132 = V_1;
		int32_t L_133 = V_0;
		intptr_t L_134 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_133,NULL));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_132, ((intptr_t)il2cpp_codegen_multiply(L_134, 4)))), (int32_t)(-1));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:614>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35474));
		int32_t L_135 = V_0;
		V_11 = L_135;
		goto IL_026c;
	}

IL_026c:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:615>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35475));
		int32_t L_136 = V_11;
		return L_136;
	}
}
// Method Definition Index: 53500
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mCFD0DA8ADF441A1780C2CAE61417C094BF86B93E_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_data), (&___1_idx), (&___2_threadIndex));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35476));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 35477));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35478));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:619>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35479));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:620>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35480));
		V_1 = (-1);
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35481));
	}

IL_000b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35482));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:626>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35483));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35484));
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35484));
		int32_t L_4 = ___2_threadIndex;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16))),NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35485));
		int32_t L_6;
		L_6 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(L_5, 4)))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35485));
		V_1 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35486));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:627>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35487));
		int32_t L_7 = V_1;
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)((int32_t)-3)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35488));
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_000b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:628>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35489));
		int32_t* L_9 = V_0;
		int32_t L_10 = ___1_idx;
		intptr_t L_11 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_10,NULL));
		int32_t L_12 = V_1;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(L_11, 4)))), (int32_t)L_12);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35490));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:630>
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:631>
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:632>
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:633>
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:634>
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:635>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35491));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35492));
		int32_t* L_14;
		L_14 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35492));
		int32_t L_15 = ___2_threadIndex;
		intptr_t L_16 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_15, ((int32_t)16))),NULL));
		int32_t L_17 = ___1_idx;
		int32_t L_18 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35493));
		int32_t L_19;
		L_19 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(L_16, 4)))), L_17, L_18);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35493));
		int32_t L_20 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_19) == ((int32_t)L_20))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35494));
		bool L_21 = V_3;
		if (L_21)
		{
			goto IL_000a;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:636>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35495));
		return;
	}
}
// Method Definition Index: 53501
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mCAE3A74A5AB042537557D83CCB3C4B27F509B19C_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const uint32_t SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	void* L_18 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_11 = L_1;
	const Il2CppFullySharedGenericStruct L_44 = L_1;
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_12 = L_2;
	const Il2CppFullySharedGenericStruct L_45 = L_2;
	const Il2CppFullySharedGenericStruct L_16 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	memset(V_0, 0, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 V_1 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	memset(V_1, 0, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_data), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? ___1_key : &___1_key), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)) ? ___2_item : &___2_item), (&___3_threadIndex));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0, V_1, (&V_2), (&V_3), (&V_4), (&V_8), (&V_9));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35496));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 35497));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35498));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:642>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35499));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		il2cpp_codegen_memcpy(L_1, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35500));
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mB16D13831106B0DC2EF2AD361743D9FC6597B1DA(L_0, il2cpp_codegen_memcpy(L_2, L_1, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69), (Il2CppFullySharedGenericStruct*)V_0, (NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)V_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35500));
		V_5 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35501));
		bool L_4 = V_5;
		if (!L_4)
		{
			goto IL_001b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35502));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:644>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35503));
		V_6 = (bool)0;
		goto IL_00da;
	}

IL_001b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:648>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35504));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		int32_t L_6 = ___3_threadIndex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35505));
		int32_t L_7;
		L_7 = UnsafeParallelHashMapBase_2_AllocEntry_m3E2610CA343A7226FECF5B6CE365718FC66DF071(L_5, L_6, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35505));
		V_2 = L_7;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:651>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35506));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		uint8_t* L_9 = L_8->___keys;
		int32_t L_10 = V_2;
		il2cpp_codegen_memcpy(L_11, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35507));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline((void*)L_9, L_10, il2cpp_codegen_memcpy(L_12, L_11, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35507));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:652>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35508));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		uint8_t* L_14 = L_13->___values;
		int32_t L_15 = V_2;
		il2cpp_codegen_memcpy(L_16, ___2_item, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35509));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline((void*)L_14, L_15, il2cpp_codegen_memcpy(L_17, L_16, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35509));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:654>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35510));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35511));
		Il2CppConstrainedCallData L_19;
		Il2CppMethodPointer L_20 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), (void*)(Il2CppFullySharedGenericStruct*)___1_key, &L_19, L_18);
		typedef int32_t ( *func_L_21)(void*,const RuntimeMethod*);
		int32_t L_22 = ((func_L_21)L_20)(L_19.thisPtr,L_19.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35511));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		int32_t L_24 = L_23->___bucketCapacityMask;
		V_3 = ((int32_t)(L_22&L_24));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:656>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35512));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_25 = ___0_data;
		NullCheck(L_25);
		uint8_t* L_26 = L_25->___buckets;
		V_4 = (int32_t*)L_26;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:660>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35513));
		int32_t* L_27 = V_4;
		int32_t L_28 = V_3;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		int32_t L_30 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35514));
		int32_t L_31;
		L_31 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, 4)))), L_30, (-1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35514));
		V_7 = (bool)((((int32_t)((((int32_t)L_31) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35515));
		bool L_32 = V_7;
		if (!L_32)
		{
			goto IL_00d5;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35516));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:662>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35517));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		NullCheck(L_33);
		uint8_t* L_34 = L_33->___next;
		V_8 = (int32_t*)L_34;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:663>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35518));
		V_9 = (-1);
	}

IL_0082:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35519));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:670>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35520));
		int32_t* L_35 = V_4;
		int32_t L_36 = V_3;
		intptr_t L_37 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_36,NULL));
		int32_t L_38 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(L_37, 4)))));
		V_9 = L_38;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:671>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35521));
		int32_t* L_39 = V_8;
		int32_t L_40 = V_2;
		intptr_t L_41 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_40,NULL));
		int32_t L_42 = V_9;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(L_41, 4)))), (int32_t)L_42);
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:674>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35522));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_43 = ___0_data;
		il2cpp_codegen_memcpy(L_44, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35523));
		bool L_46;
		L_46 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mB16D13831106B0DC2EF2AD361743D9FC6597B1DA(L_43, il2cpp_codegen_memcpy(L_45, L_44, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69), (Il2CppFullySharedGenericStruct*)V_0, (NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)V_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35523));
		V_10 = L_46;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35524));
		bool L_47 = V_10;
		if (!L_47)
		{
			goto IL_00b7;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35525));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:677>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35526));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_48 = ___0_data;
		int32_t L_49 = V_2;
		int32_t L_50 = ___3_threadIndex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35527));
		UnsafeParallelHashMapBase_2_FreeEntry_mCFD0DA8ADF441A1780C2CAE61417C094BF86B93E(L_48, L_49, L_50, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35527));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:679>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35528));
		V_6 = (bool)0;
		goto IL_00da;
	}

IL_00b7:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35529));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:682>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35530));
		int32_t* L_51 = V_4;
		int32_t L_52 = V_3;
		intptr_t L_53 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_52,NULL));
		int32_t L_54 = V_2;
		int32_t L_55 = V_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35531));
		int32_t L_56;
		L_56 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(L_53, 4)))), L_54, L_55);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35531));
		int32_t L_57 = V_9;
		V_11 = (bool)((((int32_t)((((int32_t)L_56) == ((int32_t)L_57))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35532));
		bool L_58 = V_11;
		if (L_58)
		{
			goto IL_0082;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35533));
	}

IL_00d5:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:685>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35534));
		V_6 = (bool)1;
		goto IL_00da;
	}

IL_00da:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:686>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35535));
		bool L_59 = V_6;
		return L_59;
	}
}
// Method Definition Index: 53502
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m943307074EE293074937D7AE27E1745AA05FE78E_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	void* L_13 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	const Il2CppFullySharedGenericStruct L_12 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_data), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? ___1_key : &___1_key), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)) ? ___2_item : &___2_item), (&___3_threadIndex));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35536));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 35537));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35538));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:691>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35539));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35540));
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m3E2610CA343A7226FECF5B6CE365718FC66DF071(L_0, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35540));
		V_0 = L_2;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:694>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35541));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35542));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline((void*)L_4, L_5, il2cpp_codegen_memcpy(L_7, L_6, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35542));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:695>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35543));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		uint8_t* L_9 = L_8->___values;
		int32_t L_10 = V_0;
		il2cpp_codegen_memcpy(L_11, ___2_item, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35544));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline((void*)L_9, L_10, il2cpp_codegen_memcpy(L_12, L_11, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35544));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:697>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35545));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35546));
		Il2CppConstrainedCallData L_14;
		Il2CppMethodPointer L_15 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), (void*)(Il2CppFullySharedGenericStruct*)___1_key, &L_14, L_13);
		typedef int32_t ( *func_L_16)(void*,const RuntimeMethod*);
		int32_t L_17 = ((func_L_16)L_15)(L_14.thisPtr,L_14.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35546));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		int32_t L_19 = L_18->___bucketCapacityMask;
		V_1 = ((int32_t)(L_17&L_19));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:699>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35547));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___buckets;
		V_2 = (int32_t*)L_21;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:702>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35548));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		uint8_t* L_23 = L_22->___next;
		V_4 = (int32_t*)L_23;
	}

IL_0049:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35549));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:705>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35550));
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		intptr_t L_26 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_25,NULL));
		int32_t L_27 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(L_26, 4)))));
		V_3 = L_27;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:706>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35551));
		int32_t* L_28 = V_4;
		int32_t L_29 = V_0;
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_29,NULL));
		int32_t L_31 = V_3;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_30, 4)))), (int32_t)L_31);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35552));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:708>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35553));
		int32_t* L_32 = V_2;
		int32_t L_33 = V_1;
		intptr_t L_34 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_33,NULL));
		int32_t L_35 = V_0;
		int32_t L_36 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35554));
		int32_t L_37;
		L_37 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(L_34, 4)))), L_35, L_36);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35554));
		int32_t L_38 = V_3;
		V_5 = (bool)((((int32_t)((((int32_t)L_37) == ((int32_t)L_38))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35555));
		bool L_39 = V_5;
		if (L_39)
		{
			goto IL_0049;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:709>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35556));
		return;
	}
}
// Method Definition Index: 53503
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m6F349BA91ED50CB53221A30136FCD2F0D0A2922B_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const uint32_t SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	void* L_89 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_82 = L_2;
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_83 = L_3;
	const Il2CppFullySharedGenericStruct L_87 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	const Il2CppFullySharedGenericStruct L_88 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	memset(V_0, 0, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 V_1 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	memset(V_1, 0, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t* V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	int32_t V_17 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_data), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? ___1_key : &___1_key), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)) ? ___2_item : &___2_item), (&___3_isMultiHashMap), (&___4_allocation));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0, V_1, (&V_3), (&V_4), (&V_5), (&V_6), (&V_8), (&V_9), (&V_13));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35557));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 35558));
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35559));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:716>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35560));
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		il2cpp_codegen_memcpy(L_2, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35561));
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mB16D13831106B0DC2EF2AD361743D9FC6597B1DA(L_1, il2cpp_codegen_memcpy(L_3, L_2, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69), (Il2CppFullySharedGenericStruct*)V_0, (NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)V_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35561));
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_2 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35562));
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_01b3;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35563));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:722>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35564));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		int32_t L_9 = L_8->___keyCapacity;
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35565));
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35565));
		int32_t L_12 = il2cpp_codegen_ldind<int32_t, int32_t>(L_11);
		G_B7_0 = ((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B7_0 = 0;
	}

IL_0038:
	{
		V_7 = (bool)G_B7_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35566));
		bool L_13 = V_7;
		if (!L_13)
		{
			goto IL_0111;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35567));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:725>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35568));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35569));
		int32_t L_14;
		L_14 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35569));
		V_8 = L_14;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:729>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35570));
		V_9 = 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35571));
		goto IL_00b7;
	}

IL_004e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35572));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:731>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35573));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35574));
		int32_t* L_16;
		L_16 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35574));
		int32_t L_17 = V_9;
		intptr_t L_18 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_17, ((int32_t)16))),NULL));
		int32_t L_19 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(L_18, 4)))));
		V_10 = (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35575));
		bool L_20 = V_10;
		if (!L_20)
		{
			goto IL_00b0;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35576));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:733>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35577));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35578));
		int32_t* L_22;
		L_22 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_21, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35578));
		int32_t L_23 = V_9;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_23, ((int32_t)16))),NULL));
		int32_t L_25 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, 4)))));
		V_3 = L_25;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:734>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35579));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___next;
		V_4 = (int32_t*)L_27;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:735>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35580));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35581));
		int32_t* L_29;
		L_29 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_28, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35581));
		int32_t L_30 = V_9;
		intptr_t L_31 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_30, ((int32_t)16))),NULL));
		int32_t* L_32 = V_4;
		int32_t L_33 = V_3;
		intptr_t L_34 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_33,NULL));
		int32_t L_35 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(L_34, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(L_31, 4)))), (int32_t)L_35);
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:736>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35582));
		int32_t* L_36 = V_4;
		int32_t L_37 = V_3;
		intptr_t L_38 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_37,NULL));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)il2cpp_codegen_multiply(L_38, 4)))), (int32_t)(-1));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:737>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35583));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35584));
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35584));
		int32_t L_41 = V_3;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_40, (int32_t)L_41);
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:738>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35585));
		goto IL_00c3;
	}

IL_00b0:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35586));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:729>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35587));
		int32_t L_42 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00b7:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:729>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35588));
		int32_t L_43 = V_9;
		int32_t L_44 = V_8;
		V_11 = (bool)((((int32_t)L_43) < ((int32_t)L_44))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35589));
		bool L_45 = V_11;
		if (L_45)
		{
			goto IL_004e;
		}
	}

IL_00c3:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:742>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35590));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35591));
		int32_t* L_47;
		L_47 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_46, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35591));
		int32_t L_48 = il2cpp_codegen_ldind<int32_t, int32_t>(L_47);
		V_12 = (bool)((((int32_t)L_48) < ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35592));
		bool L_49 = V_12;
		if (!L_49)
		{
			goto IL_0110;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35593));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:744>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35594));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_50 = ___0_data;
		NullCheck(L_50);
		int32_t L_51 = L_50->___keyCapacity;
		V_14 = (bool)((((int32_t)L_51) == ((int32_t)((int32_t)1073741823)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35595));
		bool L_52 = V_14;
		if (!L_52)
		{
			goto IL_00f0;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35596));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:746>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35597));
		V_15 = (bool)0;
		goto IL_01b8;
	}

IL_00f0:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:749>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35598));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		int32_t L_54 = L_53->___keyCapacity;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35599));
		int32_t L_55;
		L_55 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_54, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35599));
		V_13 = L_55;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:750>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35600));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		int32_t L_57 = V_13;
		int32_t L_58 = V_13;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35601));
		int64_t L_59;
		L_59 = UnsafeParallelHashMapData_GetBucketSize_mBE376CBC384B796DE89740ECD5EA9C7F520D93D7(L_58, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35601));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_60 = ___4_allocation;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35602));
		UnsafeParallelHashMapData_ReallocateHashMap_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mD75A84E690BE573D5B2F40EF59DFD1AC4703BFED(L_56, L_57, L_59, L_60, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35602));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35603));
	}

IL_0110:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35604));
	}

IL_0111:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:754>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35605));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_61 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35606));
		int32_t* L_62;
		L_62 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_61, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35606));
		int32_t L_63 = il2cpp_codegen_ldind<int32_t, int32_t>(L_62);
		V_3 = L_63;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:756>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35607));
		int32_t L_64 = V_3;
		V_16 = (bool)((((int32_t)((((int32_t)L_64) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35608));
		bool L_65 = V_16;
		if (!L_65)
		{
			goto IL_013d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35609));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:758>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35610));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35611));
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35611));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_68 = ___0_data;
		NullCheck(L_68);
		uint8_t* L_69 = L_68->___next;
		int32_t L_70 = V_3;
		intptr_t L_71 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_70,NULL));
		int32_t L_72 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_69, ((intptr_t)il2cpp_codegen_multiply(L_71, 4))))));
		il2cpp_codegen_stind<int32_t>((int32_t*)L_67, (int32_t)L_72);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35612));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35613));
		goto IL_0151;
	}

IL_013d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35614));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:762>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35615));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		int32_t* L_74 = (int32_t*)(&L_73->___allocatedIndexLength);
		int32_t* L_75 = L_74;
		int32_t L_76 = il2cpp_codegen_ldind<int32_t, int32_t>(L_75);
		V_17 = L_76;
		int32_t L_77 = V_17;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_75, (int32_t)((int32_t)il2cpp_codegen_add(L_77, 1)));
		int32_t L_78 = V_17;
		V_3 = L_78;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35616));
	}

IL_0151:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:768>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35617));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		uint8_t* L_80 = L_79->___keys;
		int32_t L_81 = V_3;
		il2cpp_codegen_memcpy(L_82, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35618));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline((void*)L_80, L_81, il2cpp_codegen_memcpy(L_83, L_82, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35618));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:769>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35619));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		uint8_t* L_85 = L_84->___values;
		int32_t L_86 = V_3;
		il2cpp_codegen_memcpy(L_87, ___2_item, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35620));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline((void*)L_85, L_86, il2cpp_codegen_memcpy(L_88, L_87, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35620));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:771>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35621));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35622));
		Il2CppConstrainedCallData L_90;
		Il2CppMethodPointer L_91 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), (void*)(Il2CppFullySharedGenericStruct*)___1_key, &L_90, L_89);
		typedef int32_t ( *func_L_92)(void*,const RuntimeMethod*);
		int32_t L_93 = ((func_L_92)L_91)(L_90.thisPtr,L_90.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35622));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_94 = ___0_data;
		NullCheck(L_94);
		int32_t L_95 = L_94->___bucketCapacityMask;
		V_5 = ((int32_t)(L_93&L_95));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:773>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35623));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_96 = ___0_data;
		NullCheck(L_96);
		uint8_t* L_97 = L_96->___buckets;
		V_6 = (int32_t*)L_97;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:774>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35624));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_98 = ___0_data;
		NullCheck(L_98);
		uint8_t* L_99 = L_98->___next;
		V_4 = (int32_t*)L_99;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:775>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35625));
		int32_t* L_100 = V_4;
		int32_t L_101 = V_3;
		intptr_t L_102 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_101,NULL));
		int32_t* L_103 = V_6;
		int32_t L_104 = V_5;
		intptr_t L_105 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_104,NULL));
		int32_t L_106 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_103, ((intptr_t)il2cpp_codegen_multiply(L_105, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_100, ((intptr_t)il2cpp_codegen_multiply(L_102, 4)))), (int32_t)L_106);
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:776>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35626));
		int32_t* L_107 = V_6;
		int32_t L_108 = V_5;
		intptr_t L_109 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_108,NULL));
		int32_t L_110 = V_3;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_107, ((intptr_t)il2cpp_codegen_multiply(L_109, 4)))), (int32_t)L_110);
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:778>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35627));
		V_15 = (bool)1;
		goto IL_01b8;
	}

IL_01b3:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:781>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35628));
		V_15 = (bool)0;
		goto IL_01b8;
	}

IL_01b8:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:782>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35629));
		bool L_111 = V_15;
		return L_111;
	}
}
// Method Definition Index: 53504
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m6648F1C82F87EE0C1EC2361356969E1893FF4EAC_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	void* L_23 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	const Il2CppFullySharedGenericStruct L_21 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_22 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	Il2CppFullySharedGenericStruct V_9 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	memset(V_9, 0, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_data), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? ___1_key : &___1_key), (&___2_isMultiHashMap));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), (&V_10));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35630));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 35631));
	int32_t G_B15_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35632));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:786>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35633));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		V_6 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35634));
		bool L_2 = V_6;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35635));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:788>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35636));
		V_7 = 0;
		goto IL_010f;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:791>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35637));
		V_0 = 0;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:794>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35638));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___buckets;
		V_1 = (int32_t*)L_4;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:795>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35639));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		uint8_t* L_6 = L_5->___next;
		V_2 = (int32_t*)L_6;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:796>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35640));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35641));
		Il2CppConstrainedCallData L_8;
		Il2CppMethodPointer L_9 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), (void*)(Il2CppFullySharedGenericStruct*)___1_key, &L_8, L_7);
		typedef int32_t ( *func_L_10)(void*,const RuntimeMethod*);
		int32_t L_11 = ((func_L_10)L_9)(L_8.thisPtr,L_8.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35641));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_3 = ((int32_t)(L_11&L_13));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:797>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35642));
		V_4 = (-1);
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:798>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35643));
		int32_t* L_14 = V_1;
		int32_t L_15 = V_3;
		intptr_t L_16 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_15,NULL));
		int32_t L_17 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(L_16, 4)))));
		V_5 = L_17;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35644));
		goto IL_00ef;
	}

IL_004f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35645));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:802>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35646));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___keys;
		int32_t L_20 = V_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35647));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline((void*)L_19, L_20, (Il2CppFullySharedGenericStruct*)L_21, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35647));
		il2cpp_codegen_memcpy(V_9, L_21, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		il2cpp_codegen_memcpy(L_22, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35648));
		Il2CppConstrainedCallData L_24;
		Il2CppMethodPointer L_25 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13), (void*)(Il2CppFullySharedGenericStruct*)V_9, &L_24, L_23);
		bool L_26 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(L_25, L_24.method,L_24.thisPtr, L_22);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35648));
		V_8 = L_26;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35649));
		bool L_27 = V_8;
		if (!L_27)
		{
			goto IL_00de;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35650));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:804>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35651));
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:807>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35652));
		int32_t L_29 = V_4;
		V_11 = (bool)((((int32_t)L_29) < ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35653));
		bool L_30 = V_11;
		if (!L_30)
		{
			goto IL_0096;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35654));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:809>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35655));
		int32_t* L_31 = V_1;
		int32_t L_32 = V_3;
		intptr_t L_33 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_32,NULL));
		int32_t* L_34 = V_2;
		int32_t L_35 = V_5;
		intptr_t L_36 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_35,NULL));
		int32_t L_37 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(L_36, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(L_33, 4)))), (int32_t)L_37);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35656));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35657));
		goto IL_00a8;
	}

IL_0096:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35658));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:813>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35659));
		int32_t* L_38 = V_2;
		int32_t L_39 = V_4;
		intptr_t L_40 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_39,NULL));
		int32_t* L_41 = V_2;
		int32_t L_42 = V_5;
		intptr_t L_43 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_42,NULL));
		int32_t L_44 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_41, ((intptr_t)il2cpp_codegen_multiply(L_43, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(L_40, 4)))), (int32_t)L_44);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35660));
	}

IL_00a8:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:817>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35661));
		int32_t* L_45 = V_2;
		int32_t L_46 = V_5;
		intptr_t L_47 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_46,NULL));
		int32_t L_48 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(L_47, 4)))));
		V_10 = L_48;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:818>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35662));
		int32_t* L_49 = V_2;
		int32_t L_50 = V_5;
		intptr_t L_51 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_50,NULL));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_52 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35663));
		int32_t* L_53;
		L_53 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_52, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35663));
		int32_t L_54 = il2cpp_codegen_ldind<int32_t, int32_t>(L_53);
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(L_51, 4)))), (int32_t)L_54);
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:819>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35664));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_55 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35665));
		int32_t* L_56;
		L_56 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_55, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35665));
		int32_t L_57 = V_5;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_56, (int32_t)L_57);
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:820>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35666));
		int32_t L_58 = V_10;
		V_5 = L_58;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:823>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35667));
		bool L_59 = ___2_isMultiHashMap;
		V_12 = (bool)((((int32_t)L_59) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35668));
		bool L_60 = V_12;
		if (!L_60)
		{
			goto IL_00db;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35669));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:825>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35670));
		goto IL_010a;
	}

IL_00db:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35671));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35672));
		goto IL_00ee;
	}

IL_00de:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35673));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:830>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35674));
		int32_t L_61 = V_5;
		V_4 = L_61;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:831>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35675));
		int32_t* L_62 = V_2;
		int32_t L_63 = V_5;
		intptr_t L_64 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_63,NULL));
		int32_t L_65 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_62, ((intptr_t)il2cpp_codegen_multiply(L_64, 4)))));
		V_5 = L_65;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35676));
	}

IL_00ee:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35677));
	}

IL_00ef:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:800>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35678));
		int32_t L_66 = V_5;
		if ((((int32_t)L_66) < ((int32_t)0)))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_67 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_68 = ___0_data;
		NullCheck(L_68);
		int32_t L_69 = L_68->___keyCapacity;
		G_B15_0 = ((((int32_t)L_67) < ((int32_t)L_69))? 1 : 0);
		goto IL_0101;
	}

IL_0100:
	{
		G_B15_0 = 0;
	}

IL_0101:
	{
		V_13 = (bool)G_B15_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35679));
		bool L_70 = V_13;
		if (L_70)
		{
			goto IL_004f;
		}
	}

IL_010a:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:835>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35680));
		int32_t L_71 = V_0;
		V_7 = L_71;
		goto IL_010f;
	}

IL_010f:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:836>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35681));
		int32_t L_72 = V_7;
		return L_72;
	}
}
// Method Definition Index: 53505
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m8BAE6A94FC57AB2FD13A4FD8729670F270544F06_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 ___1_it, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	void* L_4 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	const uint32_t SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_16 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_35 = L_16;
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_44 = L_16;
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_49 = L_16;
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_57 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_data), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)) ? ___1_it : &___1_it));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35682));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 35683));
	int32_t G_B7_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35684));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:841>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35685));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:842>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35686));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:843>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35687));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35688));
		Il2CppConstrainedCallData L_5;
		Il2CppMethodPointer L_6 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_field_data_pointer((NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)___1_it, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16)))), &L_5, L_4);
		typedef int32_t ( *func_L_7)(void*,const RuntimeMethod*);
		int32_t L_8 = ((func_L_7)L_6)(L_5.thisPtr,L_5.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35688));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		int32_t L_10 = L_9->___bucketCapacityMask;
		V_2 = ((int32_t)(L_8&L_10));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:845>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35689));
		int32_t* L_11 = V_0;
		int32_t L_12 = V_2;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		int32_t L_14 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, 4)))));
		V_3 = L_14;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:847>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35690));
		int32_t L_15 = V_3;
		il2cpp_codegen_memcpy(L_16, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_17 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_16, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17));
		V_4 = (bool)((((int32_t)L_15) == ((int32_t)L_17))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35691));
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0052;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35692));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:849>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35693));
		int32_t* L_19 = V_0;
		int32_t L_20 = V_2;
		intptr_t L_21 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_20,NULL));
		int32_t* L_22 = V_1;
		int32_t L_23 = V_3;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_23,NULL));
		int32_t L_25 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(L_21, 4)))), (int32_t)L_25);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35694));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35695));
		goto IL_009e;
	}

IL_0052:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35696));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35697));
		goto IL_005f;
	}

IL_0055:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35698));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:855>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35699));
		int32_t* L_26 = V_1;
		int32_t L_27 = V_3;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t L_29 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))));
		V_3 = L_29;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35700));
	}

IL_005f:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:853>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35701));
		int32_t L_30 = V_3;
		if ((((int32_t)L_30) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		int32_t* L_31 = V_1;
		int32_t L_32 = V_3;
		intptr_t L_33 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_32,NULL));
		int32_t L_34 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(L_33, 4)))));
		il2cpp_codegen_memcpy(L_35, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_36 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_35, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17));
		G_B7_0 = ((((int32_t)((((int32_t)L_34) == ((int32_t)L_36))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0078;
	}

IL_0077:
	{
		G_B7_0 = 0;
	}

IL_0078:
	{
		V_5 = (bool)G_B7_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35702));
		bool L_37 = V_5;
		if (L_37)
		{
			goto IL_0055;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:858>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35703));
		int32_t L_38 = V_3;
		V_6 = (bool)((((int32_t)L_38) < ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35704));
		bool L_39 = V_6;
		if (!L_39)
		{
			goto IL_008a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35705));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35706));
	}

IL_008a:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:863>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35707));
		int32_t* L_40 = V_1;
		int32_t L_41 = V_3;
		intptr_t L_42 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_41,NULL));
		int32_t* L_43 = V_1;
		il2cpp_codegen_memcpy(L_44, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_45 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_44, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17));
		intptr_t L_46 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_45,NULL));
		int32_t L_47 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(L_46, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(L_42, 4)))), (int32_t)L_47);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35708));
	}

IL_009e:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:867>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35709));
		int32_t* L_48 = V_1;
		il2cpp_codegen_memcpy(L_49, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_50 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_49, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17));
		intptr_t L_51 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_50,NULL));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_52 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35710));
		int32_t* L_53;
		L_53 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_52, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35710));
		int32_t L_54 = il2cpp_codegen_ldind<int32_t, int32_t>(L_53);
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_48, ((intptr_t)il2cpp_codegen_multiply(L_51, 4)))), (int32_t)L_54);
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:868>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35711));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_55 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35712));
		int32_t* L_56;
		L_56 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_55, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35712));
		il2cpp_codegen_memcpy(L_57, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_58 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_57, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17));
		il2cpp_codegen_stind<int32_t>((int32_t*)L_56, (int32_t)L_58);
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:869>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35713));
		return;
	}
}
// Method Definition Index: 53507
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mB16D13831106B0DC2EF2AD361743D9FC6597B1DA_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct* ___2_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___3_it, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_data), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? ___1_key : &___1_key), (&___2_item), (&___3_it));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35757));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 35758));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35759));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:916>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35760));
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_0 = ___3_it;
		il2cpp_codegen_memcpy(L_1, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		il2cpp_codegen_write_field_data<true>(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16), L_1, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:918>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35761));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		V_2 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35762));
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35763));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:920>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35764));
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_5 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_6 = ___3_it;
		V_3 = (-1);
		il2cpp_codegen_write_field_data<int32_t, false>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18), (-1));
		int32_t L_7 = V_3;
		il2cpp_codegen_write_field_data<int32_t, false>(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17), L_7);
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:921>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35765));
		Il2CppFullySharedGenericStruct* L_8 = ___2_item;
		il2cpp_codegen_initobj(L_8, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:922>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35766));
		V_4 = (bool)0;
		goto IL_0073;
	}

IL_0035:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:926>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35767));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___buckets;
		V_0 = (int32_t*)L_10;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:927>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35768));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35769));
		Il2CppConstrainedCallData L_12;
		Il2CppMethodPointer L_13 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), (void*)(Il2CppFullySharedGenericStruct*)___1_key, &L_12, L_11);
		typedef int32_t ( *func_L_14)(void*,const RuntimeMethod*);
		int32_t L_15 = ((func_L_14)L_13)(L_12.thisPtr,L_12.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35769));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___bucketCapacityMask;
		V_1 = ((int32_t)(L_15&L_17));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:928>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35770));
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_18 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_19 = ___3_it;
		int32_t* L_20 = V_0;
		int32_t L_21 = V_1;
		intptr_t L_22 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_21,NULL));
		int32_t L_23 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(L_22, 4)))));
		int32_t L_24 = L_23;
		V_3 = L_24;
		il2cpp_codegen_write_field_data<int32_t, false>(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18), L_24);
		int32_t L_25 = V_3;
		il2cpp_codegen_write_field_data<int32_t, false>(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17), L_25);
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:929>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35771));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		Il2CppFullySharedGenericStruct* L_27 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_28 = ___3_it;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35772));
		bool L_29;
		L_29 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m02842BF5ACFFDD0CC5E0C86B2A523A797D5B0477(L_26, L_27, L_28, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35772));
		V_4 = L_29;
		goto IL_0073;
	}

IL_0073:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:930>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35773));
		bool L_30 = V_4;
		return L_30;
	}
}
// Method Definition Index: 53508
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m02842BF5ACFFDD0CC5E0C86B2A523A797D5B0477_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct* ___1_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___2_it, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	void* L_27 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	const Il2CppFullySharedGenericStruct L_24 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_26 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_43 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Il2CppFullySharedGenericStruct V_6 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	memset(V_6, 0, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_data), (&___1_item), (&___2_it));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35774));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 35775));
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35776));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:934>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35777));
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_0 = ___2_it;
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_0, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18));
		V_0 = L_1;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:935>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35778));
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_2 = ___2_it;
		il2cpp_codegen_write_field_data<int32_t, false>(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18), (-1));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:936>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35779));
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_3 = ___2_it;
		il2cpp_codegen_write_field_data<int32_t, false>(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17), (-1));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:937>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35780));
		Il2CppFullySharedGenericStruct* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:938>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35781));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_6) < ((int32_t)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
	}

IL_0030:
	{
		V_2 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35782));
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_003c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35783));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:940>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35784));
		V_3 = (bool)0;
		goto IL_00c1;
	}

IL_003c:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:943>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35785));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___next;
		V_1 = (int32_t*)L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35786));
		goto IL_006d;
	}

IL_0045:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35787));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:946>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35788));
		int32_t* L_12 = V_1;
		int32_t L_13 = V_0;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_13,NULL));
		int32_t L_15 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, 4)))));
		V_0 = L_15;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:947>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35789));
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_17 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		int32_t L_19 = L_18->___keyCapacity;
		G_B9_0 = ((((int32_t)((((int32_t)L_17) < ((int32_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0061;
	}

IL_0060:
	{
		G_B9_0 = 1;
	}

IL_0061:
	{
		V_4 = (bool)G_B9_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35790));
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_006c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35791));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:949>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35792));
		V_3 = (bool)0;
		goto IL_00c1;
	}

IL_006c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35793));
	}

IL_006d:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:944>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35794));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		NullCheck(L_21);
		uint8_t* L_22 = L_21->___keys;
		int32_t L_23 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35795));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline((void*)L_22, L_23, (Il2CppFullySharedGenericStruct*)L_24, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35795));
		il2cpp_codegen_memcpy(V_6, L_24, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_25 = ___2_it;
		il2cpp_codegen_memcpy(L_26, il2cpp_codegen_get_field_data_pointer(L_25, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16)), SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35796));
		Il2CppConstrainedCallData L_28;
		Il2CppMethodPointer L_29 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13), (void*)(Il2CppFullySharedGenericStruct*)V_6, &L_28, L_27);
		bool L_30 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(L_29, L_28.method,L_28.thisPtr, L_26);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35796));
		V_5 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35797));
		bool L_31 = V_5;
		if (L_31)
		{
			goto IL_0045;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:953>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35798));
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_32 = ___2_it;
		int32_t* L_33 = V_1;
		int32_t L_34 = V_0;
		intptr_t L_35 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_34,NULL));
		int32_t L_36 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(L_35, 4)))));
		il2cpp_codegen_write_field_data<int32_t, false>(L_32, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18), L_36);
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:954>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35799));
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_37 = ___2_it;
		int32_t L_38 = V_0;
		il2cpp_codegen_write_field_data<int32_t, false>(L_37, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17), L_38);
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:957>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35800));
		Il2CppFullySharedGenericStruct* L_39 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		NullCheck(L_40);
		uint8_t* L_41 = L_40->___values;
		int32_t L_42 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35801));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline((void*)L_41, L_42, (Il2CppFullySharedGenericStruct*)L_43, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 22));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35801));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_39, L_43, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), (void**)(Il2CppFullySharedGenericStruct*)L_39, (void*)L_43);
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:959>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35802));
		V_3 = (bool)1;
		goto IL_00c1;
	}

IL_00c1:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:960>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35803));
		bool L_44 = V_3;
		return L_44;
	}
}
// Method Definition Index: 53509
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m557C0D5801C035501701C60FE81775298FDD76A5_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___1_it, Il2CppFullySharedGenericStruct* ___2_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	const Il2CppFullySharedGenericStruct L_12 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_data), (&___1_it), (&___2_item));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35804));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 35805));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35806));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:964>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35807));
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_0 = ___1_it;
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_0, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17));
		V_0 = L_1;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:965>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35808));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 1;
	}

IL_001b:
	{
		V_1 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35809));
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35810));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:967>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35811));
		V_2 = (bool)0;
		goto IL_003b;
	}

IL_0024:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:970>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35812));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		Il2CppFullySharedGenericStruct* L_10 = ___2_item;
		il2cpp_codegen_memcpy(L_11, L_10, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35813));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline((void*)L_8, L_9, il2cpp_codegen_memcpy(L_12, L_11, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35813));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:971>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35814));
		V_2 = (bool)1;
		goto IL_003b;
	}

IL_003b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:972>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35815));
		bool L_13 = V_2;
		return L_13;
	}
}
// Method Definition Index: 53510
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m38D20A847D6996E7C118E952524DEE9592A2B629_fshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_idx), (&___1_keyCapacity));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35816));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 35817));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35818));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:977>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35819));
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35820));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35821));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:979>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35822));
		int32_t L_3 = ___0_idx;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = ___1_keyCapacity;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35823));
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_5, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35823));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35824));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35824));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:981>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35825));
		return;
	}
}
// Method Definition Index: 53511
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_mFE0B2263ABF50F3C1DD001FF39C0D0DC181DD163_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_data), (&___1_idx));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35826));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 35827));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35828));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:986>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35829));
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35830));
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:987>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35831));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35832));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35832));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0023:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:988>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35833));
		return;
	}
}
// Method Definition Index: 53512
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mE68740A5B03A3A069612808990A947A3C61FCDE0_fshared (const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35834));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 35835));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35836));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:993>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35837));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35838));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35838));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 53513
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m01EFA9C0C2C6B2994ED33A385814CC4C0FF28B19_fshared (const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35839));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 35840));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35841));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeParallelHashMap.cs:999>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35842));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35843));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 35843));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 72076
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&math_min_m0D183243301588F5000801E35B451374CD10DFC1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_x), (&___1_y));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, math_min_m0D183243301588F5000801E35B451374CD10DFC1_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 434));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 435));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Mathematics/Managed/math.cs:856>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_MathematicsModule + 436));
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_y;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_x;
		return L_3;
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
