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
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};

struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
struct ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct IDictionary_2_t4D3B65115D85F2C21975A2BBF4A23860F8BCD02F;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IEqualityComparer_1_t5370FF6E8F579F530FBB00A894AEB2C6D60B779A;
struct IEqualityComparer_1_t1C3E99A5A4232945E669F245D9C767979CE0E859;
struct IEqualityComparer_1_tB51F358F5543A47871A0E7A908861A1FA6133E27;
struct IEqualityComparer_1_t984D540FC208A2CABAB23A4D766E1C17CA1D0833;
struct IEqualityComparer_1_tF175EE4608832085A0EE2A97DAE545B83F097888;
struct KeyCollection_tF66D8C01F2A58C937006A6F100099A98BB1E109D;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct KeyCollection_tE85AB7AF5DF22D87FBCDF9D36CFC04274FFB3F48;
struct KeyCollection_t562990812B584FE847C869A4912AE99649893E84;
struct KeyCollection_tE29F3FB88F0D60915C33EB33605927C83079EAF6;
struct KeyCollection_t755C575B4744E7CC5BB256A2ADCA7B9477FED7CC;
struct KeyCollection_tFAD4F134C4BF43E0B9C815CAF6400BC70707FFE6;
struct ValueCollection_t09388557A76C67A5826B2502D326ED02B7D9E050;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct ValueCollection_t1D1B51320E9D68BCA6A91E216081A78032AB9517;
struct ValueCollection_t139464E9B9BFCB074934B335E811DEB19CE420E8;
struct ValueCollection_t60890D777294E9EF5D765C6542CF17EE92D5F782;
struct ValueCollection_t7527D79A0F67C44B360B51B5FEB47DACBC975266;
struct ValueCollection_t65B544B071475F1D6AA36F54F506E013AC0D137E;
struct EntryU5BU5D_t957A01A589BC16F5F52CE105A79B69946778FDBA;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct EntryU5BU5D_t5CF9FD6F006624C57350BDF4E795B29EDDD51F89;
struct EntryU5BU5D_t62C79966EAAB5606DA7B370D29F0F8830780C803;
struct EntryU5BU5D_t1BB6AEA50BC70EEFC891E076D6C86A05DD891610;
struct EntryU5BU5D_t24A044BE0C07CDF2E13EA861A1514664AE9A4CB6;
struct EntryU5BU5D_t7D88CA28550BAA1CE7717583FAD579BDAFF0EE9D;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data;
	RuntimeObject* ____lock;
	int32_t ___size;
};
struct Dictionary_2_t709D7105D5569BDBF0FF382194083253754F55F9  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t957A01A589BC16F5F52CE105A79B69946778FDBA* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tF66D8C01F2A58C937006A6F100099A98BB1E109D* ____keys;
	ValueCollection_t09388557A76C67A5826B2502D326ED02B7D9E050* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* ____keys;
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t851355FBAA1BC3C3387FF464D6EEC368EA177CD3  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t5CF9FD6F006624C57350BDF4E795B29EDDD51F89* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tE85AB7AF5DF22D87FBCDF9D36CFC04274FFB3F48* ____keys;
	ValueCollection_t1D1B51320E9D68BCA6A91E216081A78032AB9517* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t1FAD8DFAD7E5DB7CA096567CA9E3FDAC6391C496  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t62C79966EAAB5606DA7B370D29F0F8830780C803* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t562990812B584FE847C869A4912AE99649893E84* ____keys;
	ValueCollection_t139464E9B9BFCB074934B335E811DEB19CE420E8* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tB39FED3DFC0D7BF1C37A854FB90EFB3AB0A5107B  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t1BB6AEA50BC70EEFC891E076D6C86A05DD891610* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tE29F3FB88F0D60915C33EB33605927C83079EAF6* ____keys;
	ValueCollection_t60890D777294E9EF5D765C6542CF17EE92D5F782* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t24A044BE0C07CDF2E13EA861A1514664AE9A4CB6* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t755C575B4744E7CC5BB256A2ADCA7B9477FED7CC* ____keys;
	ValueCollection_t7527D79A0F67C44B360B51B5FEB47DACBC975266* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t7D88CA28550BAA1CE7717583FAD579BDAFF0EE9D* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tFAD4F134C4BF43E0B9C815CAF6400BC70707FFE6* ____keys;
	ValueCollection_t65B544B071475F1D6AA36F54F506E013AC0D137E* ____values;
	RuntimeObject* ____syncRoot;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55  : public RuntimeObject
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ____dictionary;
};
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40  : public RuntimeObject
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ____dictionary;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
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
typedef Il2CppFullySharedGenericStruct Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3;
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
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
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;
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
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
struct InsertionBehavior_tAD0393881947C559238D7041A36917BEE6E2C7B1 
{
	uint8_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
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
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3  : public RuntimeArray
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
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57  : public RuntimeArray
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
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
};
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC4C1AFB623AE154F67437E7FC549449FF598526_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m5B001E697A07FFFE6B8E587225DADC4951F6D522_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6ACB9814B7776CA335920BD99E9C6149B361D703_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_fshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_fshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_m0E15783C5C4D648412273FE8259A7A644F5A2CD0_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m0ACF21DFA8D126AC00883594A96B45296ABDE79A_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m475863DF7C3146B720288A85B96DA3790C484F09_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_fshared (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1_fshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mCE58585215D412BBED56819DD8E7EFFCE8661BA1_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m31D02FB7F34F222948CBAED016A60562ECE1A8D5_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_m90CA5ADAC109E3D265A2A6AD8B5165727D9605D2_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m035485E631710955A475F95DE3800BBD2EBD20B5_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2F0D524EB63EBDE00430EA093CADA3AF6FABF4CA_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* Dictionary_2_get_Keys_mD82D6690B1A801E8EED43F1B1D310893C9D334CF_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* Dictionary_2_get_Values_mE06FB7381D8152E35F0716DC7FE13788362112A7_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mA1591D0B0BE4E9F654AE63DE747722F557C1092B_fshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppFullySharedGenericAny_mD1546AD31023759C065B096A4FE412E69838164A_fshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_fshared (const RuntimeMethod* method) ;

inline void Dictionary_2__ctor_mCC4C1AFB623AE154F67437E7FC549449FF598526 (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mCC4C1AFB623AE154F67437E7FC549449FF598526_fshared)(__this, ___0_capacity, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
inline int32_t Dictionary_2_Initialize_m5B001E697A07FFFE6B8E587225DADC4951F6D522 (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m5B001E697A07FFFE6B8E587225DADC4951F6D522_fshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_fshared_inline)(method);
}
inline void Dictionary_2__ctor_m6ACB9814B7776CA335920BD99E9C6149B361D703 (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m6ACB9814B7776CA335920BD99E9C6149B361D703_fshared)(__this, ___0_dictionary, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
inline void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333 (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_fshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, ___0_key, ___1_value, method);
}
inline void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_fshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, il2cppRetVal, method);
}
inline void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_fshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, il2cppRetVal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) ;
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_m0E15783C5C4D648412273FE8259A7A644F5A2CD0_gshared)(__this, ___0_key, ___1_value, method);
}
inline void KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m0ACF21DFA8D126AC00883594A96B45296ABDE79A (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_FindEntry_m0ACF21DFA8D126AC00883594A96B45296ABDE79A_fshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryInsert_m475863DF7C3146B720288A85B96DA3790C484F09 (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m475863DF7C3146B720288A85B96DA3790C484F09_fshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline bool Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_fshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_fshared)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1 (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1_fshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
inline void Dictionary_2_CopyTo_mCE58585215D412BBED56819DD8E7EFFCE8661BA1 (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mCE58585215D412BBED56819DD8E7EFFCE8661BA1_fshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m31D02FB7F34F222948CBAED016A60562ECE1A8D5 (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_Resize_m31D02FB7F34F222948CBAED016A60562ECE1A8D5_fshared)(__this, method);
}
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_m90CA5ADAC109E3D265A2A6AD8B5165727D9605D2_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16 (int32_t ___0_resource, const RuntimeMethod* method) ;
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m035485E631710955A475F95DE3800BBD2EBD20B5_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m2F0D524EB63EBDE00430EA093CADA3AF6FABF4CA (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m2F0D524EB63EBDE00430EA093CADA3AF6FABF4CA_fshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* Dictionary_2_get_Keys_mD82D6690B1A801E8EED43F1B1D310893C9D334CF (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_get_Keys_mD82D6690B1A801E8EED43F1B1D310893C9D334CF_fshared)(__this, method);
}
inline ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* Dictionary_2_get_Values_mE06FB7381D8152E35F0716DC7FE13788362112A7 (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_get_Values_mE06FB7381D8152E35F0716DC7FE13788362112A7_fshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_mA1591D0B0BE4E9F654AE63DE747722F557C1092B (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mA1591D0B0BE4E9F654AE63DE747722F557C1092B_fshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppFullySharedGenericAny_mD1546AD31023759C065B096A4FE412E69838164A (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppFullySharedGenericAny_mD1546AD31023759C065B096A4FE412E69838164A_fshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80 (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_fshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982 (RuntimeObject* ___0_key, Type_t* ___1_targetType, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_fshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, ___0_key, method);
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_fshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10972
// Method Definition Index: 10973
// Method Definition Index: 10974
// Method Definition Index: 10975
// Method Definition Index: 10976
// Method Definition Index: 10977
// Method Definition Index: 10978
// Method Definition Index: 10979
// Method Definition Index: 10980
// Method Definition Index: 10981
// Method Definition Index: 10982
// Method Definition Index: 10983
// Method Definition Index: 10984
// Method Definition Index: 10985
// Method Definition Index: 10986
// Method Definition Index: 10987
// Method Definition Index: 10988
// Method Definition Index: 10989
// Method Definition Index: 10990
// Method Definition Index: 10991
// Method Definition Index: 10992
// Method Definition Index: 10993
// Method Definition Index: 10994
// Method Definition Index: 10995
// Method Definition Index: 10996
// Method Definition Index: 10997
// Method Definition Index: 10998
// Method Definition Index: 10999
// Method Definition Index: 11000
// Method Definition Index: 11001
// Method Definition Index: 11002
// Method Definition Index: 11003
// Method Definition Index: 11004
// Method Definition Index: 11005
// Method Definition Index: 11006
// Method Definition Index: 11007
// Method Definition Index: 11008
// Method Definition Index: 11009
// Method Definition Index: 11010
// Method Definition Index: 11011
// Method Definition Index: 11012
// Method Definition Index: 11013
// Method Definition Index: 11014
// Method Definition Index: 11015
// Method Definition Index: 11016
// Method Definition Index: 11017
// Method Definition Index: 11018
// Method Definition Index: 11019
// Method Definition Index: 11020
// Method Definition Index: 11021
// Method Definition Index: 11022
// Method Definition Index: 11023
// Method Definition Index: 11024
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10972
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Dictionary_2__ctor_mCC4C1AFB623AE154F67437E7FC549449FF598526(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 10973
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA5BF8973642D67EF56303F2867C75190756C3012_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mCC4C1AFB623AE154F67437E7FC549449FF598526(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 10974
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m244D396B16E7F73DE815F4FFA6F35DD89B6ED7CB_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mCC4C1AFB623AE154F67437E7FC549449FF598526(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 10975
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC4C1AFB623AE154F67437E7FC549449FF598526_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m5B001E697A07FFFE6B8E587225DADC4951F6D522(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_5;
		L_5 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// Method Definition Index: 10976
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3CE78C81B3C997FF9C14675CFBBAD014EF68FE30_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m6ACB9814B7776CA335920BD99E9C6149B361D703(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		return;
	}
}
// Method Definition Index: 10977
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6ACB9814B7776CA335920BD99E9C6149B361D703_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 21));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14));
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_32 = L_17;
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_34 = L_21;
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_33 = L_20;
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_35 = L_22;
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_31 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_4 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	memset(V_4, 0, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* G_B2_0 = NULL;
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 6), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mCC4C1AFB623AE154F67437E7FC549449FF598526(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_9 = ((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)));
		NullCheck(L_9);
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		NullCheck(L_9);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		CHECK_PAUSE_POINT;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		il2cpp_codegen_memcpy(L_20, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? il2cpp_codegen_memcpy(L_21, L_17, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_17), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? il2cpp_codegen_memcpy(L_22, L_20, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE): *(void**)L_20), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
	}

IL_0077:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_26 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), (RuntimeObject*)L_26);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					RuntimeObject* L_28 = V_3;
					if (!L_28)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_29 = V_3;
					NullCheck((RuntimeObject*)L_29);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				CHECK_PAUSE_POINT;
				RuntimeObject* L_30 = V_3;
				NullCheck(L_30);
				InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 19), L_30, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_31);
				il2cpp_codegen_memcpy(V_4, L_31, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
				KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_4, (Il2CppFullySharedGenericAny*)L_32, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
				KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_4, (Il2CppFullySharedGenericAny*)L_33, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
				Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? il2cpp_codegen_memcpy(L_34, L_32, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_32), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? il2cpp_codegen_memcpy(L_35, L_33, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE): *(void**)L_33), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
			}

IL_00a5_1:
			{
				RuntimeObject* L_36 = V_3;
				NullCheck((RuntimeObject*)L_36);
				bool L_37;
				L_37 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
				if (L_37)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
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

IL_00b9:
	{
		return;
	}
}
// Method Definition Index: 10978
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA25D4973BD5467E89BE578B96BE246DE27E51638_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 10979
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// Method Definition Index: 10980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* Dictionary_2_get_Keys_mD82D6690B1A801E8EED43F1B1D310893C9D334CF_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_1 = (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 27));
		KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F(L_1, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_2 = __this->____keys;
		return L_2;
	}
}
// Method Definition Index: 10981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mBE37F43780B97B9F8911558CF1758A6E0573F81A_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_1 = (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 27));
		KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F(L_1, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 10982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* Dictionary_2_get_Values_mE06FB7381D8152E35F0716DC7FE13788362112A7_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_1 = (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 29));
		ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E(L_1, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_2 = __this->____values;
		return L_2;
	}
}
// Method Definition Index: 10983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m83C40C3BF1DFD21198ED5D890CD53F2B726FFF78_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_1 = (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 29));
		ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E(L_1, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 10984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_7 = L_0;
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_9 = L_6;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	memset(V_1, 0, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_2;
		L_2 = Dictionary_2_FindEntry_m0ACF21DFA8D126AC00883594A96B45296ABDE79A(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 31));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return;
	}

IL_001e:
	{
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_9, V_1, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return;
	}
}
// Method Definition Index: 10985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_4;
		L_4 = Dictionary_2_TryInsert_m475863DF7C3146B720288A85B96DA3790C484F09(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? il2cpp_codegen_memcpy(L_2, L_0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? il2cpp_codegen_memcpy(L_3, L_1, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE): *(void**)L_1), 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33));
		return;
	}
}
// Method Definition Index: 10986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_4;
		L_4 = Dictionary_2_TryInsert_m475863DF7C3146B720288A85B96DA3790C484F09(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? il2cpp_codegen_memcpy(L_2, L_0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? il2cpp_codegen_memcpy(L_3, L_1, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE): *(void**)L_1), 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33));
		return;
	}
}
// Method Definition Index: 10987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mE4548F09815541C77E85AB57B86142B7D29C0A2F_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? il2cpp_codegen_memcpy(L_2, L_0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? il2cpp_codegen_memcpy(L_3, L_1, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE): *(void**)L_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		return;
	}
}
// Method Definition Index: 10988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8A8F4B72BD2ED0C4171B69CDDB4F9201FAD62FB5_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		int32_t L_2;
		L_2 = Dictionary_2_FindEntry_m0ACF21DFA8D126AC00883594A96B45296ABDE79A(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 31));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_4;
		L_4 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		NullCheck(L_4);
		bool L_9;
		L_9 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10989
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m47F4CC635C14FD742D41145FEAECD47FF3EC7910_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_10 = L_0;
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_11 = L_1;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		int32_t L_2;
		L_2 = Dictionary_2_FindEntry_m0ACF21DFA8D126AC00883594A96B45296ABDE79A(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 31));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_4;
		L_4 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		NullCheck(L_4);
		bool L_9;
		L_9 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0046;
		}
	}
	{
		KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_inline((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		bool L_12;
		L_12 = Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? il2cpp_codegen_memcpy(L_11, L_10, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_10), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10990
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, L_4, NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_0041:
	{
		int32_t L_7 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
// Method Definition Index: 10991
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_2;
		L_2 = Dictionary_2_FindEntry_m0ACF21DFA8D126AC00883594A96B45296ABDE79A(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 31));
		return (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 10992
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m6DD06FB7A6641F460E175909EE58B3E7EF585F46_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_8 = L_1;
	const Il2CppFullySharedGenericAny L_13 = L_1;
	const Il2CppFullySharedGenericAny L_21 = L_1;
	const Il2CppFullySharedGenericAny L_34 = L_1;
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_35 = L_22;
	//<source_info:<no-source>:1>
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	memset(V_2, 0, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_3 = 0;
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_4 = NULL;
	int32_t V_5 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_0 = __this->____entries;
		V_0 = L_0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? ___0_value : &___0_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14), L_1);
		if (L_2)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		CHECK_PAUSE_POINT;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_9 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14), L_8);
		if (L_9)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003b:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = __this->____count;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_13, V_2, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14), L_13);
		if (!L_14)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		CHECK_PAUSE_POINT;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_15 = V_0;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		int32_t L_17 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_18;
		L_18 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_19 = V_0;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? ___0_value : &___0_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		NullCheck(L_18);
		bool L_23;
		L_23 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? L_21: *(void**)L_21), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? L_22: *(void**)L_22));
		if (!L_23)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_008b:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = __this->____count;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_27;
		L_27 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34));
		V_4 = L_27;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		CHECK_PAUSE_POINT;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_28 = V_0;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		if ((((int32_t)L_30) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_31 = V_4;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_32 = V_0;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		il2cpp_codegen_memcpy(L_34, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? ___0_value : &___0_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		NullCheck(L_31);
		bool L_36;
		L_36 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? L_34: *(void**)L_34), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? L_35: *(void**)L_35));
		if (!L_36)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_37 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00d1:
	{
		int32_t L_38 = V_5;
		int32_t L_39 = __this->____count;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10993
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mCE58585215D412BBED56819DD8E7EFFCE8661BA1_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14));
	const uint32_t SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 21));
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_24 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_1 = NULL;
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		CHECK_PAUSE_POINT;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		memset(L_24, 0, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? il2cpp_codegen_memcpy(L_22, L_18, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_18), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? il2cpp_codegen_memcpy(L_23, L_21, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE): *(void**)L_21), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
		NullCheck(L_13);
		il2cpp_codegen_memcpy((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), L_24, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 21), (void**)(L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), (void*)L_24);
	}

IL_0071:
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0075:
	{
		int32_t L_26 = V_2;
		int32_t L_27 = V_0;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 10994
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 40));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		return;
	}
}
// Method Definition Index: 10995
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mEB946BF1ED512ADDA66E4AC30F34573170773B8E_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 40));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 40), L_0);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 10996
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m3683CF1DF17605C3CBFEB3DEC2D3C7D619DB1C06_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_6;
		L_6 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 42)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_15 = (KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)(KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 39), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_16 = V_0;
		Dictionary_2_CopyTo_mCE58585215D412BBED56819DD8E7EFFCE8661BA1(__this, L_16, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 43));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 44)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
// Method Definition Index: 10997
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m0ACF21DFA8D126AC00883594A96B45296ABDE79A_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_18 = L_0;
	const Il2CppFullySharedGenericAny L_30 = L_0;
	const Il2CppFullySharedGenericAny L_51 = L_0;
	const Il2CppFullySharedGenericAny L_62 = L_0;
	const Il2CppFullySharedGenericAny L_80 = L_0;
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_52 = L_31;
	const Il2CppFullySharedGenericAny L_81 = L_31;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_6, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_7 = NULL;
	int32_t V_8 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		V_1 = L_2;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = __this->____entries;
		V_2 = L_3;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_5 = __this->____comparer;
		V_4 = L_5;
		RuntimeObject* L_6 = V_4;
		if (L_6)
		{
			goto IL_0110;
		}
	}
	{
		Il2CppConstrainedCallData L_8;
		Il2CppMethodPointer L_9 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), &L_8, L_7);
		typedef int32_t ( *func_L_10)(void*,const RuntimeMethod*);
		int32_t L_11 = ((func_L_10)L_9)(L_8.thisPtr,L_8.method);
		V_5 = ((int32_t)(L_11&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_1;
		int32_t L_13 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		NullCheck(L_12);
		int32_t L_16 = ((int32_t)(L_13%L_15));
		int32_t L_17 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_18, V_6, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_19 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), L_18);
		if (!L_19)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		CHECK_PAUSE_POINT;
		int32_t L_20 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((!(((uint32_t)L_20) < ((uint32_t)L_22))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_23 = V_2;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		int32_t L_25 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		int32_t L_26 = V_5;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_27;
		L_27 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_28 = V_2;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		il2cpp_codegen_memcpy(L_30, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_27);
		bool L_32;
		L_32 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_30: *(void**)L_30), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_31: *(void**)L_31));
		if (L_32)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_33 = V_2;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		int32_t L_35 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 46));
		V_0 = L_35;
		int32_t L_36 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_37 = V_2;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((((int32_t)L_36) < ((int32_t)L_38)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_39 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_40;
		L_40 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		V_7 = L_40;
	}

IL_00c0:
	{
		CHECK_PAUSE_POINT;
		int32_t L_41 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_42 = V_2;
		NullCheck(L_42);
		int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
		if ((!(((uint32_t)L_41) < ((uint32_t)L_43))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		int32_t L_47 = V_5;
		if ((!(((uint32_t)L_46) == ((uint32_t)L_47))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_48 = V_7;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_49 = V_2;
		int32_t L_50 = V_0;
		NullCheck(L_49);
		il2cpp_codegen_memcpy(L_51, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_52, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_48);
		bool L_53;
		L_53 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_48, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_51: *(void**)L_51), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_52: *(void**)L_52));
		if (L_53)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_54 = V_2;
		int32_t L_55 = V_0;
		NullCheck(L_54);
		int32_t L_56 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 46));
		V_0 = L_56;
		int32_t L_57 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_58 = V_2;
		NullCheck(L_58);
		int32_t L_59 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_58)->max_length),NULL));
		if ((((int32_t)L_57) < ((int32_t)L_59)))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_60 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_60, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_61 = V_4;
		il2cpp_codegen_memcpy(L_62, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_61);
		int32_t L_63;
		L_63 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_61, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_62: *(void**)L_62));
		V_8 = ((int32_t)(L_63&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = V_1;
		int32_t L_65 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = V_1;
		NullCheck(L_66);
		int32_t L_67 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_66)->max_length),NULL));
		NullCheck(L_64);
		int32_t L_68 = ((int32_t)(L_65%L_67));
		int32_t L_69 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_69, 1));
	}

IL_012b:
	{
		CHECK_PAUSE_POINT;
		int32_t L_70 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_71 = V_2;
		NullCheck(L_71);
		int32_t L_72 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_71)->max_length),NULL));
		if ((!(((uint32_t)L_70) < ((uint32_t)L_72))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_73 = V_2;
		int32_t L_74 = V_0;
		NullCheck(L_73);
		int32_t L_75 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		int32_t L_76 = V_8;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_77 = V_4;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_78 = V_2;
		int32_t L_79 = V_0;
		NullCheck(L_78);
		il2cpp_codegen_memcpy(L_80, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_81, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_77, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_80: *(void**)L_80), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_81: *(void**)L_81));
		if (L_82)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_83 = V_2;
		int32_t L_84 = V_0;
		NullCheck(L_83);
		int32_t L_85 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_83)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_84))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 46));
		V_0 = L_85;
		int32_t L_86 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_87 = V_2;
		NullCheck(L_87);
		int32_t L_88 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_87)->max_length),NULL));
		if ((((int32_t)L_86) < ((int32_t)L_88)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_89 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_89, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_90 = V_0;
		return L_90;
	}
}
// Method Definition Index: 10998
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m5B001E697A07FFFE6B8E587225DADC4951F6D522_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)(EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 51), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 10999
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m475863DF7C3146B720288A85B96DA3790C484F09_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_23 = L_0;
	const Il2CppFullySharedGenericAny L_35 = L_0;
	const Il2CppFullySharedGenericAny L_43 = L_0;
	const Il2CppFullySharedGenericAny L_63 = L_0;
	const Il2CppFullySharedGenericAny L_71 = L_0;
	const Il2CppFullySharedGenericAny L_90 = L_0;
	const Il2CppFullySharedGenericAny L_98 = L_0;
	const Il2CppFullySharedGenericAny L_134 = L_0;
	const Il2CppFullySharedGenericAny L_36 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_64 = L_36;
	const Il2CppFullySharedGenericAny L_91 = L_36;
	const Il2CppFullySharedGenericAny L_41 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_69 = L_41;
	const Il2CppFullySharedGenericAny L_96 = L_41;
	const Il2CppFullySharedGenericAny L_136 = L_41;
	//<source_info:<no-source>:1>
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* V_10 = NULL;
	Il2CppFullySharedGenericAny V_11 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_11, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_12 = NULL;
	int32_t V_13 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_2, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4;
		L_4 = Dictionary_2_Initialize_m5B001E697A07FFFE6B8E587225DADC4951F6D522(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
	}

IL_002c:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = __this->____entries;
		V_0 = L_5;
		RuntimeObject* L_6 = __this->____comparer;
		V_1 = L_6;
		RuntimeObject* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_8 = V_1;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_8);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_9: *(void**)L_9));
		G_B7_0 = L_10;
		goto IL_0053;
	}

IL_0046:
	{
		Il2CppConstrainedCallData L_12;
		Il2CppMethodPointer L_13 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), &L_12, L_11);
		typedef int32_t ( *func_L_14)(void*,const RuntimeMethod*);
		int32_t L_15 = ((func_L_14)L_13)(L_12.thisPtr,L_12.method);
		G_B7_0 = L_15;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->____buckets;
		int32_t L_17 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->____buckets;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		NullCheck(L_16);
		V_4 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_17%L_19)))));
		int32_t* L_20 = V_4;
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(L_20);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
		RuntimeObject* L_22 = V_1;
		if (L_22)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_11, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_23, V_11, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_24 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), L_23);
		if (!L_24)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		CHECK_PAUSE_POINT;
		int32_t L_25 = V_5;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_26)->max_length),NULL));
		if ((!(((uint32_t)L_25) < ((uint32_t)L_27))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_28 = V_0;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		int32_t L_31 = V_2;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_31))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_32;
		L_32 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_33 = V_0;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		il2cpp_codegen_memcpy(L_35, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_32);
		bool L_37;
		L_37 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_32, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_35: *(void**)L_35), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_36: *(void**)L_36));
		if (!L_37)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_38 = ___2_behavior;
		if ((!(((uint32_t)L_38) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_39 = V_0;
		int32_t L_40 = V_5;
		NullCheck(L_39);
		il2cpp_codegen_memcpy(L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_field_data<true>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15), L_41, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_42 = ___2_behavior;
		if ((!(((uint32_t)L_42) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		il2cpp_codegen_memcpy(L_43, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), L_43);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_44, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_45 = V_0;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 46));
		V_5 = L_47;
		int32_t L_48 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_49 = V_0;
		NullCheck(L_49);
		int32_t L_50 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_49)->max_length),NULL));
		if ((((int32_t)L_48) < ((int32_t)L_50)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_51 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_51, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_52;
		L_52 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		V_12 = L_52;
	}

IL_0111:
	{
		CHECK_PAUSE_POINT;
		int32_t L_53 = V_5;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_54 = V_0;
		NullCheck(L_54);
		int32_t L_55 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_54)->max_length),NULL));
		if ((!(((uint32_t)L_53) < ((uint32_t)L_55))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_56 = V_0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		int32_t L_58 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		int32_t L_59 = V_2;
		if ((!(((uint32_t)L_58) == ((uint32_t)L_59))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_60 = V_12;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		il2cpp_codegen_memcpy(L_63, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_64, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_60);
		bool L_65;
		L_65 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_60, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_63: *(void**)L_63), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_64: *(void**)L_64));
		if (!L_65)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_66 = ___2_behavior;
		if ((!(((uint32_t)L_66) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_67 = V_0;
		int32_t L_68 = V_5;
		NullCheck(L_67);
		il2cpp_codegen_memcpy(L_69, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_field_data<true>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15), L_69, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_70 = ___2_behavior;
		if ((!(((uint32_t)L_70) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		il2cpp_codegen_memcpy(L_71, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_72 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), L_71);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_72, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 46));
		V_5 = L_75;
		int32_t L_76 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_77 = V_0;
		NullCheck(L_77);
		int32_t L_78 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_77)->max_length),NULL));
		if ((((int32_t)L_76) < ((int32_t)L_78)))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_79 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_79, 1));
		goto IL_0111;
	}

IL_0187:
	{
		CHECK_PAUSE_POINT;
		int32_t L_80 = V_5;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_81 = V_0;
		NullCheck(L_81);
		int32_t L_82 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_81)->max_length),NULL));
		if ((!(((uint32_t)L_80) < ((uint32_t)L_82))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_83 = V_0;
		int32_t L_84 = V_5;
		NullCheck(L_83);
		int32_t L_85 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_83)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_84))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		int32_t L_86 = V_2;
		if ((!(((uint32_t)L_85) == ((uint32_t)L_86))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_87 = V_1;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_88 = V_0;
		int32_t L_89 = V_5;
		NullCheck(L_88);
		il2cpp_codegen_memcpy(L_90, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_89))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_91, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_87);
		bool L_92;
		L_92 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_87, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_90: *(void**)L_90), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_91: *(void**)L_91));
		if (!L_92)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_93 = ___2_behavior;
		if ((!(((uint32_t)L_93) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_94 = V_0;
		int32_t L_95 = V_5;
		NullCheck(L_94);
		il2cpp_codegen_memcpy(L_96, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_field_data<true>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_94)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_95))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15), L_96, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_97 = ___2_behavior;
		if ((!(((uint32_t)L_97) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		il2cpp_codegen_memcpy(L_98, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), L_98);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_99, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_100 = V_0;
		int32_t L_101 = V_5;
		NullCheck(L_100);
		int32_t L_102 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_100)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_101))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 46));
		V_5 = L_102;
		int32_t L_103 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_104 = V_0;
		NullCheck(L_104);
		int32_t L_105 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_104)->max_length),NULL));
		if ((((int32_t)L_103) < ((int32_t)L_105)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_106 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_106, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_107 = __this->____freeCount;
		if ((((int32_t)L_107) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_108 = __this->____freeList;
		V_8 = L_108;
		V_7 = (bool)1;
		int32_t L_109 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_109, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_110 = __this->____count;
		V_13 = L_110;
		int32_t L_111 = V_13;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_112 = V_0;
		NullCheck(L_112);
		int32_t L_113 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_112)->max_length),NULL));
		if ((!(((uint32_t)L_111) == ((uint32_t)L_113))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m31D02FB7F34F222948CBAED016A60562ECE1A8D5(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 52));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_114 = V_13;
		V_8 = L_114;
		int32_t L_115 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_115, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_116 = __this->____entries;
		V_0 = L_116;
	}

IL_0250:
	{
		bool L_117 = V_6;
		if (L_117)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_118 = V_4;
		G_B51_0 = L_118;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_119 = __this->____buckets;
		int32_t L_120 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121 = __this->____buckets;
		NullCheck(L_121);
		int32_t L_122 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_121)->max_length),NULL));
		NullCheck(L_119);
		G_B51_0 = ((L_119)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_120%L_122)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_123 = V_0;
		int32_t L_124 = V_8;
		NullCheck(L_123);
		V_10 = ((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_123)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_124)));
		bool L_125 = V_7;
		if (!L_125)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_126 = V_10;
		int32_t L_127 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_126, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 46));
		__this->____freeList = L_127;
	}

IL_028a:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_128 = V_10;
		int32_t L_129 = V_2;
		il2cpp_codegen_write_field_data<int32_t, false>(L_128, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11), L_129);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_130 = V_10;
		int32_t* L_131 = V_9;
		int32_t L_132 = il2cpp_codegen_ldind<int32_t, int32_t>(L_131);
		il2cpp_codegen_write_field_data<int32_t, false>(L_130, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 46), ((int32_t)il2cpp_codegen_subtract(L_132, 1)));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_133 = V_10;
		il2cpp_codegen_memcpy(L_134, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_write_field_data<true>(L_133, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13), L_134, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_135 = V_10;
		il2cpp_codegen_memcpy(L_136, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_field_data<true>(L_135, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15), L_136, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		int32_t* L_137 = V_9;
		int32_t L_138 = V_8;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_137, (int32_t)((int32_t)il2cpp_codegen_add(L_138, 1)));
		return (bool)1;
	}
}
// Method Definition Index: 11000
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mCE3F24CD19D6E1AAEE9202CFE6CD1E8DA8821552_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_25 = L_21;
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	//<source_info:<no-source>:1>
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_3 = NULL;
	int32_t V_4 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 42)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m5B001E697A07FFFE6B8E587225DADC4951F6D522(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 44)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)CastclassSealed((RuntimeObject*)L_17, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 39)));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		CHECK_PAUSE_POINT;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_inline(((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), (Il2CppFullySharedGenericAny*)L_21, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		bool L_22 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), L_21);
		if (L_22)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_23 = V_3;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_inline(((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), (Il2CppFullySharedGenericAny*)L_25, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_26 = V_3;
		int32_t L_27 = V_4;
		NullCheck(L_26);
		KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_inline(((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)(L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))), (Il2CppFullySharedGenericAny*)L_28, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? il2cpp_codegen_memcpy(L_29, L_25, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_25), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? il2cpp_codegen_memcpy(L_30, L_28, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE): *(void**)L_28), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00c0:
	{
		int32_t L_32 = V_4;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_33 = V_3;
		NullCheck(L_33);
		int32_t L_34 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_33)->max_length),NULL));
		if ((((int32_t)L_32) < ((int32_t)L_34)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_35 = V_1;
		__this->____version = L_35;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_36;
		L_36 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_36);
		bool L_37;
		L_37 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_36, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 11001
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m31D02FB7F34F222948CBAED016A60562ECE1A8D5_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m2F0D524EB63EBDE00430EA093CADA3AF6FABF4CA(__this, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 54));
		return;
	}
}
// Method Definition Index: 11002
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2F0D524EB63EBDE00430EA093CADA3AF6FABF4CA_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	void* L_19 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	//<source_info:<no-source>:1>
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_3, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)(EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 51), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = __this->____entries;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_8, V_3, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_9 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), L_8);
		bool L_10 = L_9;
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)L_10&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		CHECK_PAUSE_POINT;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		Il2CppConstrainedCallData L_20;
		Il2CppMethodPointer L_21 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45), (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)))), &L_20, L_19);
		typedef int32_t ( *func_L_22)(void*,const RuntimeMethod*);
		int32_t L_23 = ((func_L_22)L_21)(L_20.thisPtr,L_20.method);
		il2cpp_codegen_write_field_data<int32_t, false>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11), ((int32_t)(L_23&((int32_t)2147483647LL))));
	}

IL_0079:
	{
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_007f:
	{
		int32_t L_25 = V_4;
		int32_t L_26 = V_2;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		CHECK_PAUSE_POINT;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_30 = V_1;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		int32_t L_32 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		int32_t L_33 = ___0_newSize;
		V_6 = ((int32_t)(L_32%L_33));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_34 = V_1;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_0;
		int32_t L_37 = V_6;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		int32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		il2cpp_codegen_write_field_data<int32_t, false>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 46), ((int32_t)il2cpp_codegen_subtract(L_39, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_0;
		int32_t L_41 = V_6;
		int32_t L_42 = V_5;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (int32_t)((int32_t)il2cpp_codegen_add(L_42, 1)));
	}

IL_00c5:
	{
		int32_t L_43 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00cb:
	{
		int32_t L_44 = V_5;
		int32_t L_45 = V_2;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_0;
		__this->____buckets = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_46);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_47 = V_1;
		__this->____entries = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_47);
		return;
	}
}
// Method Definition Index: 11003
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_10 = L_0;
	const Il2CppFullySharedGenericAny L_28 = L_0;
	const Il2CppFullySharedGenericAny L_32 = L_0;
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_33 = L_29;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* V_4 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (!L_2)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_3 = __this->____comparer;
		RuntimeObject* L_4 = L_3;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_0032;
		}
		G_B4_0 = L_4;
	}
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), &L_6, L_5);
		typedef int32_t ( *func_L_8)(void*,const RuntimeMethod*);
		int32_t L_9 = ((func_L_8)L_7)(L_6.thisPtr,L_6.method);
		G_B6_0 = L_9;
		goto IL_0038;
	}

IL_0032:
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(G_B5_0);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), G_B5_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_10: *(void**)L_10));
		G_B6_0 = L_11;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_12 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		V_1 = ((int32_t)(L_12%L_14));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		goto IL_0142;
	}

IL_005c:
	{
		CHECK_PAUSE_POINT;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_19 = __this->____entries;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		V_4 = ((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_21 = V_4;
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_21, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		int32_t L_23 = V_0;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_24 = __this->____comparer;
		RuntimeObject* L_25 = L_24;
		if (L_25)
		{
			G_B10_0 = L_25;
			goto IL_0095;
		}
		G_B9_0 = L_25;
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_26;
		L_26 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_27 = V_4;
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_field_data_pointer(L_27, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_26);
		bool L_30;
		L_30 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_28: *(void**)L_28), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_29: *(void**)L_29));
		G_B11_0 = L_30;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_31 = V_4;
		il2cpp_codegen_memcpy(L_32, il2cpp_codegen_get_field_data_pointer(L_31, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(G_B10_0);
		bool L_34;
		L_34 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), G_B10_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_32: *(void**)L_32), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_33: *(void**)L_33));
		G_B11_0 = L_34;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_35 = V_2;
		if ((((int32_t)L_35) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = __this->____buckets;
		int32_t L_37 = V_1;
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_38 = V_4;
		int32_t L_39 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_38, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 46));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_40 = __this->____entries;
		int32_t L_41 = V_2;
		NullCheck(L_40);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_42 = V_4;
		int32_t L_43 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_42, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 46));
		il2cpp_codegen_write_field_data<int32_t, false>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 46), L_43);
	}

IL_00d6:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_44 = V_4;
		il2cpp_codegen_write_field_data<int32_t, false>(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11), (-1));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_45 = V_4;
		int32_t L_46 = __this->____freeList;
		il2cpp_codegen_write_field_data<int32_t, false>(L_45, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 46), L_46);
		bool L_47;
		L_47 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 55));
		if (!L_47)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_48 = V_4;
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(L_48, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)))), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	}

IL_00ff:
	{
		bool L_49;
		L_49 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56));
		if (!L_49)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_50 = V_4;
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(L_50, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15)))), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	}

IL_0113:
	{
		int32_t L_51 = V_3;
		__this->____freeList = L_51;
		int32_t L_52 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_52, 1));
		int32_t L_53 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_53, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_54 = V_3;
		V_2 = L_54;
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_55 = V_4;
		int32_t L_56 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_55, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 46));
		V_3 = L_56;
	}

IL_0142:
	{
		int32_t L_57 = V_3;
		if ((((int32_t)L_57) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11004
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2EADBFD560B819C9F845F79CC53D727B37690F15_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_10 = L_0;
	const Il2CppFullySharedGenericAny L_28 = L_0;
	const Il2CppFullySharedGenericAny L_32 = L_0;
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_33 = L_29;
	const Il2CppFullySharedGenericAny L_46 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* V_4 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (!L_2)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_3 = __this->____comparer;
		RuntimeObject* L_4 = L_3;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_0032;
		}
		G_B4_0 = L_4;
	}
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), &L_6, L_5);
		typedef int32_t ( *func_L_8)(void*,const RuntimeMethod*);
		int32_t L_9 = ((func_L_8)L_7)(L_6.thisPtr,L_6.method);
		G_B6_0 = L_9;
		goto IL_0038;
	}

IL_0032:
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(G_B5_0);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), G_B5_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_10: *(void**)L_10));
		G_B6_0 = L_11;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_12 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		V_1 = ((int32_t)(L_12%L_14));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		goto IL_014f;
	}

IL_005c:
	{
		CHECK_PAUSE_POINT;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_19 = __this->____entries;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		V_4 = ((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_21 = V_4;
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_21, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		int32_t L_23 = V_0;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_24 = __this->____comparer;
		RuntimeObject* L_25 = L_24;
		if (L_25)
		{
			G_B10_0 = L_25;
			goto IL_0095;
		}
		G_B9_0 = L_25;
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_26;
		L_26 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_27 = V_4;
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_field_data_pointer(L_27, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_26);
		bool L_30;
		L_30 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_28: *(void**)L_28), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_29: *(void**)L_29));
		G_B11_0 = L_30;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_31 = V_4;
		il2cpp_codegen_memcpy(L_32, il2cpp_codegen_get_field_data_pointer(L_31, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(G_B10_0);
		bool L_34;
		L_34 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), G_B10_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_32: *(void**)L_32), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_33: *(void**)L_33));
		G_B11_0 = L_34;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_35 = V_2;
		if ((((int32_t)L_35) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = __this->____buckets;
		int32_t L_37 = V_1;
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_38 = V_4;
		int32_t L_39 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_38, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 46));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_40 = __this->____entries;
		int32_t L_41 = V_2;
		NullCheck(L_40);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_42 = V_4;
		int32_t L_43 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_42, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 46));
		il2cpp_codegen_write_field_data<int32_t, false>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 46), L_43);
	}

IL_00d6:
	{
		Il2CppFullySharedGenericAny* L_44 = ___1_value;
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_45 = V_4;
		il2cpp_codegen_memcpy(L_46, il2cpp_codegen_get_field_data_pointer(L_45, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_44, L_46, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14), (void**)(Il2CppFullySharedGenericAny*)L_44, (void*)L_46);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_47 = V_4;
		il2cpp_codegen_write_field_data<int32_t, false>(L_47, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11), (-1));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_48 = V_4;
		int32_t L_49 = __this->____freeList;
		il2cpp_codegen_write_field_data<int32_t, false>(L_48, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 46), L_49);
		bool L_50;
		L_50 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 55));
		if (!L_50)
		{
			goto IL_010c;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_51 = V_4;
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(L_51, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)))), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	}

IL_010c:
	{
		bool L_52;
		L_52 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56));
		if (!L_52)
		{
			goto IL_0120;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_53 = V_4;
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(L_53, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15)))), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	}

IL_0120:
	{
		int32_t L_54 = V_3;
		__this->____freeList = L_54;
		int32_t L_55 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_55, 1));
		int32_t L_56 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_56, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_57 = V_3;
		V_2 = L_57;
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_58 = V_4;
		int32_t L_59 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_58, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 46));
		V_3 = L_59;
	}

IL_014f:
	{
		int32_t L_60 = V_3;
		if ((((int32_t)L_60) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		Il2CppFullySharedGenericAny* L_61 = ___1_value;
		il2cpp_codegen_initobj(L_61, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)0;
	}
}
// Method Definition Index: 11005
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_2;
		L_2 = Dictionary_2_FindEntry_m0ACF21DFA8D126AC00883594A96B45296ABDE79A(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 31));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_4 = ___1_value;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_4, L_7, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14), (void**)(Il2CppFullySharedGenericAny*)L_4, (void*)L_7);
		return (bool)1;
	}

IL_0025:
	{
		Il2CppFullySharedGenericAny* L_8 = ___1_value;
		il2cpp_codegen_initobj(L_8, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)0;
	}
}
// Method Definition Index: 11006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m71BC76FB3076464E2CF2D51E2607CCF7E51083FF_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_4;
		L_4 = Dictionary_2_TryInsert_m475863DF7C3146B720288A85B96DA3790C484F09(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? il2cpp_codegen_memcpy(L_2, L_0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? il2cpp_codegen_memcpy(L_3, L_1, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE): *(void**)L_1), 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33));
		return L_4;
	}
}
// Method Definition Index: 11007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49382184C24B9222DF183D303DDE539D20217D5A_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)0;
	}
}
// Method Definition Index: 11008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mD6AE43E992177C3F738687180B1BC97BDBAADE51_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mCE58585215D412BBED56819DD8E7EFFCE8661BA1(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 43));
		return;
	}
}
// Method Definition Index: 11009
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mBDBCC7A542FE485FFCDDD79C6453338ACEB4E9D9_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14));
	const uint32_t SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 21));
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_49 = L_27;
	const Il2CppFullySharedGenericAny L_53 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_52 = L_31;
	const Il2CppFullySharedGenericAny L_54 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_55 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_6 = NULL;
	int32_t V_7 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)IsInstSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 39)));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mCE58585215D412BBED56819DD8E7EFFCE8661BA1(__this, L_14, L_15, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 43));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		CHECK_PAUSE_POINT;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		il2cpp_codegen_memcpy(L_27, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), L_27);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_29 = V_2;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14), L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_28, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			CHECK_PAUSE_POINT;
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			il2cpp_codegen_memcpy(L_49, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			il2cpp_codegen_memcpy(L_52, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
			memset(L_55, 0, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
			KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_55, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? il2cpp_codegen_memcpy(L_53, L_49, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_49), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? il2cpp_codegen_memcpy(L_54, L_52, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE): *(void**)L_52), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
			RuntimeObject* L_56 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 21), L_55);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_56);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_56);
		}

IL_012a_1:
		{
			int32_t L_57 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		}

IL_0130_1:
		{
			int32_t L_58 = V_7;
			int32_t L_59 = V_5;
			if ((((int32_t)L_58) < ((int32_t)L_59)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_60 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
// Method Definition Index: 11010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44022592FB7F74617DDAE1914E3376A2C38A0CBB_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 40));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 40), L_0);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 11011
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m195D9C8DE45E7DAC677E02DC0DB5E179F5BBE3BB_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_m5B001E697A07FFFE6B8E587225DADC4951F6D522(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_m2F0D524EB63EBDE00430EA093CADA3AF6FABF4CA(__this, L_12, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 54));
		int32_t L_13 = V_1;
		return L_13;
	}
}
// Method Definition Index: 11012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m6B325002C83A39C48EE433C300692849D3B17B71_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)0;
	}
}
// Method Definition Index: 11013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9E5D75EF1543AC00AA3F3BC3D6149B59826438B1_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = il2cpp_intrinsic_interlocked_compare_exchange(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 11014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_mCB7FB79310BFA8537169F33C6312059A2A980737_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)0;
	}
}
// Method Definition Index: 11015
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m2BAC5DEF1C5EC223FCDB30D10041CF87E9C154D7_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)0;
	}
}
// Method Definition Index: 11016
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m399CC0BA5A4F1BC1D411E66032CFF75064047405_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_0;
		L_0 = Dictionary_2_get_Keys_mD82D6690B1A801E8EED43F1B1D310893C9D334CF(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 58));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11017
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_mF823AA54EA409E05B95BF34DAC275E9D27837E29_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_0;
		L_0 = Dictionary_2_get_Values_mE06FB7381D8152E35F0716DC7FE13788362112A7(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 59));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11018
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mC48AC2C347286C71BD0E25A923FDA569D3B0960B_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mA1591D0B0BE4E9F654AE63DE747722F557C1092B(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 60));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), L_3);
		int32_t L_6;
		L_6 = Dictionary_2_FindEntry_m0ACF21DFA8D126AC00883594A96B45296ABDE79A(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? il2cpp_codegen_memcpy(L_5, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 31));
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_8 = __this->____entries;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14), L_10);
		return L_11;
	}

IL_0030:
	{
		return NULL;
	}
}
// Method Definition Index: 11019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m0444A06383E554B1CE9AD1D51B74A570C71A2F20_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_0, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppFullySharedGenericAny_mD1546AD31023759C065B096A4FE412E69838164A(L_1, ((int32_t)15), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 61));
	}
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			RuntimeObject* L_2 = ___0_key;
			void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), L_3);
			il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		}
		try
		{
			STORE_TRY_ID(methodExecutionContext, 1);
			il2cpp_codegen_memcpy(L_5, V_0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
			RuntimeObject* L_6 = ___1_value;
			void* L_8 = UnBox_Any(L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14), L_7);
			Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? il2cpp_codegen_memcpy(L_9, L_5, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? il2cpp_codegen_memcpy(L_10, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 62));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_11 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_12 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 32)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_14;
			L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_12, L_14, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_15 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_16 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 49)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_16, L_18, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 11020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mA1591D0B0BE4E9F654AE63DE747722F557C1092B_fshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 11021
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_m4C04B28E0F448E6668328CDF17784B92080DB9A0_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_0, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppFullySharedGenericAny_mD1546AD31023759C065B096A4FE412E69838164A(L_1, ((int32_t)15), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 61));
	}
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			RuntimeObject* L_2 = ___0_key;
			void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), L_3);
			il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		}
		try
		{
			STORE_TRY_ID(methodExecutionContext, 1);
			il2cpp_codegen_memcpy(L_5, V_0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
			RuntimeObject* L_6 = ___1_value;
			void* L_8 = UnBox_Any(L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14), L_7);
			Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? il2cpp_codegen_memcpy(L_9, L_5, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 14)) ? il2cpp_codegen_memcpy(L_10, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_11 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_12 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 32)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_14;
			L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_12, L_14, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_15 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_16 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 49)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_16, L_18, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 11022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m72E82A4B5B5ABC5F5D625BC047C22894796F3F76_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mA1591D0B0BE4E9F654AE63DE747722F557C1092B(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 60));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), L_3);
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? il2cpp_codegen_memcpy(L_5, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 63));
		return L_6;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m72D69D25532F2EA8DEE802868E8CC3282018A5D9_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 40));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 40), L_0);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 11024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_mF1B05D2823B0E1697B8FA449F74EA0838059E448_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mA1591D0B0BE4E9F654AE63DE747722F557C1092B(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 60));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), L_3);
		bool L_6;
		L_6 = Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? il2cpp_codegen_memcpy(L_5, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
	}

IL_0015:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10972
// Method Definition Index: 10973
// Method Definition Index: 10974
// Method Definition Index: 10975
// Method Definition Index: 10976
// Method Definition Index: 10977
// Method Definition Index: 10978
// Method Definition Index: 10979
// Method Definition Index: 10980
// Method Definition Index: 10981
// Method Definition Index: 10982
// Method Definition Index: 10983
// Method Definition Index: 10984
// Method Definition Index: 10985
// Method Definition Index: 10986
// Method Definition Index: 10987
// Method Definition Index: 10988
// Method Definition Index: 10989
// Method Definition Index: 10990
// Method Definition Index: 10991
// Method Definition Index: 10992
// Method Definition Index: 10993
// Method Definition Index: 10994
// Method Definition Index: 10995
// Method Definition Index: 10996
// Method Definition Index: 10997
// Method Definition Index: 10998
// Method Definition Index: 10999
// Method Definition Index: 11000
// Method Definition Index: 11001
// Method Definition Index: 11002
// Method Definition Index: 11003
// Method Definition Index: 11004
// Method Definition Index: 11005
// Method Definition Index: 11006
// Method Definition Index: 11007
// Method Definition Index: 11008
// Method Definition Index: 11009
// Method Definition Index: 11010
// Method Definition Index: 11011
// Method Definition Index: 11012
// Method Definition Index: 11013
// Method Definition Index: 11014
// Method Definition Index: 11015
// Method Definition Index: 11016
// Method Definition Index: 11017
// Method Definition Index: 11018
// Method Definition Index: 11019
// Method Definition Index: 11020
// Method Definition Index: 11021
// Method Definition Index: 11022
// Method Definition Index: 11023
// Method Definition Index: 11024
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10972
// Method Definition Index: 10973
// Method Definition Index: 10974
// Method Definition Index: 10975
// Method Definition Index: 10976
// Method Definition Index: 10977
// Method Definition Index: 10978
// Method Definition Index: 10979
// Method Definition Index: 10980
// Method Definition Index: 10981
// Method Definition Index: 10982
// Method Definition Index: 10983
// Method Definition Index: 10984
// Method Definition Index: 10985
// Method Definition Index: 10986
// Method Definition Index: 10987
// Method Definition Index: 10988
// Method Definition Index: 10989
// Method Definition Index: 10990
// Method Definition Index: 10991
// Method Definition Index: 10992
// Method Definition Index: 10993
// Method Definition Index: 10994
// Method Definition Index: 10995
// Method Definition Index: 10996
// Method Definition Index: 10997
// Method Definition Index: 10998
// Method Definition Index: 10999
// Method Definition Index: 11000
// Method Definition Index: 11001
// Method Definition Index: 11002
// Method Definition Index: 11003
// Method Definition Index: 11004
// Method Definition Index: 11005
// Method Definition Index: 11006
// Method Definition Index: 11007
// Method Definition Index: 11008
// Method Definition Index: 11009
// Method Definition Index: 11010
// Method Definition Index: 11011
// Method Definition Index: 11012
// Method Definition Index: 11013
// Method Definition Index: 11014
// Method Definition Index: 11015
// Method Definition Index: 11016
// Method Definition Index: 11017
// Method Definition Index: 11018
// Method Definition Index: 11019
// Method Definition Index: 11020
// Method Definition Index: 11021
// Method Definition Index: 11022
// Method Definition Index: 11023
// Method Definition Index: 11024
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10972
// Method Definition Index: 10973
// Method Definition Index: 10974
// Method Definition Index: 10975
// Method Definition Index: 10976
// Method Definition Index: 10977
// Method Definition Index: 10978
// Method Definition Index: 10979
// Method Definition Index: 10980
// Method Definition Index: 10981
// Method Definition Index: 10982
// Method Definition Index: 10983
// Method Definition Index: 10984
// Method Definition Index: 10985
// Method Definition Index: 10986
// Method Definition Index: 10987
// Method Definition Index: 10988
// Method Definition Index: 10989
// Method Definition Index: 10990
// Method Definition Index: 10991
// Method Definition Index: 10992
// Method Definition Index: 10993
// Method Definition Index: 10994
// Method Definition Index: 10995
// Method Definition Index: 10996
// Method Definition Index: 10997
// Method Definition Index: 10998
// Method Definition Index: 10999
// Method Definition Index: 11000
// Method Definition Index: 11001
// Method Definition Index: 11002
// Method Definition Index: 11003
// Method Definition Index: 11004
// Method Definition Index: 11005
// Method Definition Index: 11006
// Method Definition Index: 11007
// Method Definition Index: 11008
// Method Definition Index: 11009
// Method Definition Index: 11010
// Method Definition Index: 11011
// Method Definition Index: 11012
// Method Definition Index: 11013
// Method Definition Index: 11014
// Method Definition Index: 11015
// Method Definition Index: 11016
// Method Definition Index: 11017
// Method Definition Index: 11018
// Method Definition Index: 11019
// Method Definition Index: 11020
// Method Definition Index: 11021
// Method Definition Index: 11022
// Method Definition Index: 11023
// Method Definition Index: 11024
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10972
// Method Definition Index: 10973
// Method Definition Index: 10974
// Method Definition Index: 10975
// Method Definition Index: 10976
// Method Definition Index: 10977
// Method Definition Index: 10978
// Method Definition Index: 10979
// Method Definition Index: 10980
// Method Definition Index: 10981
// Method Definition Index: 10982
// Method Definition Index: 10983
// Method Definition Index: 10984
// Method Definition Index: 10985
// Method Definition Index: 10986
// Method Definition Index: 10987
// Method Definition Index: 10988
// Method Definition Index: 10989
// Method Definition Index: 10990
// Method Definition Index: 10991
// Method Definition Index: 10992
// Method Definition Index: 10993
// Method Definition Index: 10994
// Method Definition Index: 10995
// Method Definition Index: 10996
// Method Definition Index: 10997
// Method Definition Index: 10998
// Method Definition Index: 10999
// Method Definition Index: 11000
// Method Definition Index: 11001
// Method Definition Index: 11002
// Method Definition Index: 11003
// Method Definition Index: 11004
// Method Definition Index: 11005
// Method Definition Index: 11006
// Method Definition Index: 11007
// Method Definition Index: 11008
// Method Definition Index: 11009
// Method Definition Index: 11010
// Method Definition Index: 11011
// Method Definition Index: 11012
// Method Definition Index: 11013
// Method Definition Index: 11014
// Method Definition Index: 11015
// Method Definition Index: 11016
// Method Definition Index: 11017
// Method Definition Index: 11018
// Method Definition Index: 11019
// Method Definition Index: 11020
// Method Definition Index: 11021
// Method Definition Index: 11022
// Method Definition Index: 11023
// Method Definition Index: 11024
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10972
// Method Definition Index: 10973
// Method Definition Index: 10974
// Method Definition Index: 10975
// Method Definition Index: 10976
// Method Definition Index: 10977
// Method Definition Index: 10978
// Method Definition Index: 10979
// Method Definition Index: 10980
// Method Definition Index: 10981
// Method Definition Index: 10982
// Method Definition Index: 10983
// Method Definition Index: 10984
// Method Definition Index: 10985
// Method Definition Index: 10986
// Method Definition Index: 10987
// Method Definition Index: 10988
// Method Definition Index: 10989
// Method Definition Index: 10990
// Method Definition Index: 10991
// Method Definition Index: 10992
// Method Definition Index: 10993
// Method Definition Index: 10994
// Method Definition Index: 10995
// Method Definition Index: 10996
// Method Definition Index: 10997
// Method Definition Index: 10998
// Method Definition Index: 10999
// Method Definition Index: 11000
// Method Definition Index: 11001
// Method Definition Index: 11002
// Method Definition Index: 11003
// Method Definition Index: 11004
// Method Definition Index: 11005
// Method Definition Index: 11006
// Method Definition Index: 11007
// Method Definition Index: 11008
// Method Definition Index: 11009
// Method Definition Index: 11010
// Method Definition Index: 11011
// Method Definition Index: 11012
// Method Definition Index: 11013
// Method Definition Index: 11014
// Method Definition Index: 11015
// Method Definition Index: 11016
// Method Definition Index: 11017
// Method Definition Index: 11018
// Method Definition Index: 11019
// Method Definition Index: 11020
// Method Definition Index: 11021
// Method Definition Index: 11022
// Method Definition Index: 11023
// Method Definition Index: 11024
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Method Definition Index: 11115
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_fshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
		return;
	}
}
// Method Definition Index: 11116
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_fshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
		return;
	}
}
