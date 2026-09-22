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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { &p1, p2 };
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

struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IList_1_t106684EB8072F954E3C8B7F82E9D74C8E30622FE;
struct IList_1_t99293E71ADCFDC5DB0835881A041C460B1E133E6;
struct IList_1_t8BA15D2AE00335FFDE6FEBE104DBDDCB5D8232E8;
struct IList_1_tC706C207F04784C33C9328F0C4E0E0A92B4B8AFC;
struct IList_1_t7C7A8628121C9B1161DB44B62EA7B45AB600852C;
struct IList_1_tD489A418BE3D82A1F57AB8DCB436A89A77064271;
struct IList_1_tA91A36EBDB5CA519DEEF07D349BC80E1B054B681;
struct IList_1_t429E5FFEB09B32AA86D0CA81D144EC71604F2376;
struct IList_1_t2C50FFEF044F2EE012E6F7F73EC7044476D72E33;
struct IList_1_tFCA0CAAC72A5E0287096421FF3921AF6E549EBDE;
struct IList_1_t7C94015474540F0009E4F2C369960F5CBFF622E9;
struct IList_1_tD01F121A6E09A7FB2463237A05A02D8736665FDB;
struct IList_1_t1B290ECCB9D2FD52EB25227789136D5C40BD3D5D;
struct IList_1_t523A61EF6E7DDB6C11B5F676FE10E3A0E0CD14EE;
struct IList_1_t7DD9C9615378C587EB066B67143D3CCED6C5E873;
struct IList_1_t969553523152AD25969D45265A0DADD2CA2F64B3;
struct IList_1_t9888C5EB0D8AFE50C0EBE08C18A4CEB9798D0AD0;
struct IList_1_t3A0A6C3E926DC5755900551DFAE5A1A0FC77DD52;
struct IList_1_t41354D256C86A74719FA826D7CB4874A44AFA560;
struct IList_1_t4819BEE8AD954E5567BBA6F55DEA575721AFAFAA;
struct IList_1_t0DF1E5F56EE58E1A7F1FE26A676FC9FBF4D52A07;
struct IList_1_t4EEE459A249DDE104FA2E88234C593389EE5D291;
struct IList_1_t42FF818BEA4BF4853E17DE64566576B4020C72EF;
struct IList_1_t057158FE233DC0721BC83986546CB11DD55EFDAD;
struct IList_1_t394566ACD92198848950B83D3260ADE4FEF94687;
struct IList_1_t82892C93D8E03E68BB11DCD20470A61C1188C7B5;
struct IList_1_tD4524336A640CBA52D02C55E127F36B55880C425;
struct IList_1_t8AC59FFD0F90EC2DAD4C3FA39B2A5851F9D2987A;
struct IList_1_t53022DA63CBD1D5B84D7A1EE9BFA05CEB304192B;
struct IList_1_t8F542B81A30EE4F6005571BA675A2F6F0EF8B0AC;
struct IList_1_t7C2346A2A9C19BBA14BE9DD134F0F582962F4F5A;
struct IList_1_t166E7698F41C5D0654B5D8B28A6701DCEEBCB91F;
struct IList_1_t7B3BE05FF22559A6D63B8878D1E20E1F73864551;
struct IList_1_t8AD7A726E4D672A7D4DB67AF8EF68CE2676CB721;
struct IList_1_t66452534898CB35D382BE6BA3EA0F0161C139704;
struct IList_1_t63EC065987E768660619B97834CC5557A4631FCC;
struct IList_1_t56561FAEB511757CA95217C64F20DDC98CB89EA1;
struct IList_1_tF75748AAF19C9DBE4C8EDF1F84E48AEC4BA290B9;
struct IList_1_t848B451CFC9B980FCADE25797E208B78610B66F3;
struct IList_1_t29EC30C5073ED6395EE34271974BD7DE6CD6F35F;
struct IList_1_t938BE84D31BD4A0DEB0975F837EB3A4B3F91F7E5;
struct IList_1_t4D32144A0F28CC2EC0F9AAD327B0E25A7468BC49;
struct IList_1_t2984B399F6B9BD9D9DC40AC02F0E25875A0F2AA5;
struct ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
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
struct ReadOnlyCollection_1_t23F8C5D5ADD49EC309D753255852410BFE1BB4EC  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tE86375B1668A6FBD2D1ABEFD277DA7ED73EF5088  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t4A4298CBF971053B7107BCB3172698E18C4C4C78  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tFF93E8D08323FE0D47D1EDFE961D186F7E3C9AEE  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tE93D7970A5840C0077489CEA45621B02483FABC9  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t2401BF20081A5300090A5FC70F287797DBFE10B0  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tBE445934E4BBFAD9104AC1AFC81C07456740D5B9  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tB270E5CCE3D7607E7CDDBE1B835360A0E7B07DF4  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t8597CBFC170B56C5585AD118A321EEE3B225D172  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tFF6716AACE48FE7B167A53ED10AE04FA2A2AB83A  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t5F8B55EF85E52FBC5F41B42D70D13BC89D4C469A  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tAC9F0ECFFCE3DC3797BE610439BF76ACB015D44E  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t0279BBDF584EF96177DF75FA7A456E4629B2B09E  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t068BDAE7D562067D24182EABF4C4C7AA8C7C5812  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tF3F201D52E933A4489A4C06E8B1203099F42FB01  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tABD6F7BDD581540C8981BBE5012B221D4701AA0A  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tC00260BA5B1BEF55EBEF800DF50485F5D9806E4C  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tDF87C8E26187E1D6C24D2DD02E4716CC5B7ACC34  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tF64E6ECDE29B9EE2538F5A045045DF7774BB8466  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tAE114E8C18E180A65629D9DF0D8911860274551C  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tC5795E68B14E438B5B65AF3F4C3F50CA0F951647  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t9E2776C66EA6797EAB405FB5507CCFDAA18084F6  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tC097ADAD4728DA15D13F639EC263BD398D57B04F  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tA87EA4F23BAC952A78BDE9A5B94F3091DB5C7861  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tB6FD6BA75C6F479B6860FCBA235488206BF20E52  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t803A81BE343B15275BCD30A219ACAC97F0B9A1C8  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t95C4CE7A3281F650247DAD055168AC75CA2E0D94  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tDA9EBC2C2934508604BBB2BA544E97C8DA1907BF  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t502D44622D39E2DFE6DABEFCEA766AC61E338C30  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t6902277BA0F804A3B22466CBEF4B07E1FB12E479  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t0072B9B1BE9DDF9C8BF0ABE59E7EEBD11BFAA293  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t00EFCE24C7E2AF195B108C1FC1E1BE4F7007EC1E  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t24949DD08B73EB984B4A07623392ECDAD4BA28D9  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t045C5F3279EE63047DD20057F0ABA1319690AE3D  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t0A65BF0F900AF63819F1C26D6E71BFE75180183D  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tCF0BB649F86CD397250D336BDC90018D2801A33C  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t026C78CB1C965FD2F6D96BE1D1BE0A004A1073C1  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t7A92D6534146E7C269CB1B3B412E0D6256F3F228  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t760B7B5E6F7979A7B050B9449A691588BEC8CB78  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tB12EE07899816E91A365B070CCB9A3E34F924B96  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t4398B62349E9CF609C519AD584D9EB272080CD25  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tD877BA41E02454EA8BB64412DA34E071044703AF  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
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
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCDFBED2827141480BC213F53AEEDACC6213A3B66_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mB26BF0A4B6CF73028651EA8BC0D5DB450683A405_fshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3E09B940962F12FD034CC8486ED4168D4721DBBE_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD82DC91F5E57226382BAF1401C40E957F7DA2387_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023 (int32_t ___0_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline int32_t ReadOnlyCollection_1_get_Count_mCDFBED2827141480BC213F53AEEDACC6213A3B66 (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_mCDFBED2827141480BC213F53AEEDACC6213A3B66_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline bool ReadOnlyCollection_1_IsCompatibleObject_mB26BF0A4B6CF73028651EA8BC0D5DB450683A405 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_mB26BF0A4B6CF73028651EA8BC0D5DB450683A405_fshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_m3E09B940962F12FD034CC8486ED4168D4721DBBE (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*, Il2CppFullySharedGenericAny, const RuntimeMethod*))ReadOnlyCollection_1_Contains_m3E09B940962F12FD034CC8486ED4168D4721DBBE_fshared)((ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*)__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_mD82DC91F5E57226382BAF1401C40E957F7DA2387 (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*, Il2CppFullySharedGenericAny, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_mD82DC91F5E57226382BAF1401C40E957F7DA2387_fshared)((ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*)__this, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m903CF4492D6E4F6EE0D865BB7AA36A0DDB888355_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(7, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_list;
		__this->___list = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list), (void*)L_1);
		return;
	}
}
// Method Definition Index: 10926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mCDFBED2827141480BC213F53AEEDACC6213A3B66_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_get_Item_mA8D896F68E301ACA5A341DC5A225583D8ED2A255_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		return;
	}
}
// Method Definition Index: 10928
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3E09B940962F12FD034CC8486ED4168D4721DBBE_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___list;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_value : &___0_value), SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), (RuntimeObject*)L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
// Method Definition Index: 10929
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mB416E0A1DB85A7CADD8262857E64FB0ADC00A1EA_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___list;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mCFEF0F9FA49B2179E5E911F9D1152340A92DB3F3_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 8), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD82DC91F5E57226382BAF1401C40E957F7DA2387_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___list;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_value : &___0_value), SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
// Method Definition Index: 10932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mC4F2329D15060977CE2267B4D0E87EDB561CF595_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)1;
	}
}
// Method Definition Index: 10933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mF4ED844686904AEE780D507416D7E7A51DFF202D_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		return;
	}
}
// Method Definition Index: 10934
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m35A745E63BFF1D589351CE60CF9E340E75C14998_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10935
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_mF006EAEF6D337E8B834711F6905D3ADE4FA0D987_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10936
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_mFD6E4EDD6B7F30038EFD8F9C0FE3AC221626D95F_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m9F3566194F9D272B71951511DA8312C8B4ACA259_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m4F9FB8AF81AAA7BF937DC85004CA9F1F7E6ED280_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return (bool)0;
	}
}
// Method Definition Index: 10939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m02FCD7570EC5BAE9CD2BA0B6EF0227B6C253E006_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10940
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_mA6AF1223843F4580FD3FEB8E35845661982E0B32_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10941
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m6AF59C0E9009776E3BF65CC67539824CBF31E033_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)0;
	}
}
// Method Definition Index: 10942
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_mE2403F1271152A240384F722DBC2F51B2FE474F9_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_1 = __this->___list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_3);
		__this->____syncRoot = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____syncRoot), (void*)L_4);
		goto IL_0037;
	}

IL_0025:
	{
		RuntimeObject** L_5 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_6 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_6, NULL);
		RuntimeObject* L_7;
		L_7 = il2cpp_intrinsic_interlocked_compare_exchange(L_5, L_6, NULL);
	}

IL_0037:
	{
		RuntimeObject* L_8 = __this->____syncRoot;
		return L_8;
	}
}
// Method Definition Index: 10943
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m70FC2A97390955247B150E4BD8DD8B18237430F4_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_35 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
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
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mCDFBED2827141480BC213F53AEEDACC6213A3B66(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)IsInst((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			CHECK_PAUSE_POINT;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_33, L_34, (Il2CppFullySharedGenericAny*)L_35);
			RuntimeObject* L_36 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_35);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_36);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_36);
			int32_t L_37 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		}

IL_00cd_1:
		{
			int32_t L_38 = V_5;
			int32_t L_39 = V_4;
			if ((((int32_t)L_38) < ((int32_t)L_39)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_40 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10944
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m6B15B872742802961CC61CA4C066AC062AB4AC8E_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)1;
	}
}
// Method Definition Index: 10945
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m08C282A2A98D3C947E83CBC9890A8E0E709A397B_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)1;
	}
}
// Method Definition Index: 10946
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m861331F448865761DF230F9645DB5EBC1BCE886F_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_2);
		return L_3;
	}
}
// Method Definition Index: 10947
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_set_Item_m08B0FB302612A3978ED68B2A5B11FE2184ECEA19_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10948
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_Add_mE7A580FD2427E3D62C85553215B06F340F19C021_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return (-1);
	}
}
// Method Definition Index: 10949
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Clear_mE23431676D7E7A313D7D013AA7D53134389E1F65_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10950
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mB26BF0A4B6CF73028651EA8BC0D5DB450683A405_fshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	memset(V_0, 0, SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
		bool L_3 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_2);
		bool L_4 = L_3;
		return L_4;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10951
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mFD48FDEA769B42DD057189EF0893C37CB3E425A0_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mB26BF0A4B6CF73028651EA8BC0D5DB450683A405(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_3);
		bool L_6;
		L_6 = ReadOnlyCollection_1_Contains_m3E09B940962F12FD034CC8486ED4168D4721DBBE(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? il2cpp_codegen_memcpy(L_5, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)), SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_6;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10952
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m99568215E4F7BA5BFC1D5EA185C16A603A96EDE4_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mB26BF0A4B6CF73028651EA8BC0D5DB450683A405(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_3);
		int32_t L_6;
		L_6 = ReadOnlyCollection_1_IndexOf_mD82DC91F5E57226382BAF1401C40E957F7DA2387(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? il2cpp_codegen_memcpy(L_5, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)), SizeOf_T_t8D48BFC25EA68A42A94BF65BB9E3A632E9BCB783): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		return L_6;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10953
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Insert_m6E7A22F971B6F49F7A4A13748B924C5B8CD3AF69_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10954
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_Remove_m772802A30F60DA8C4025283105DD3D5162CD9A40_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
		return;
	}
}
// Method Definition Index: 10955
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m8BAA6793E056F7C7F5D3EFC32F9F5D57DF86881C_fshared (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)28), NULL);
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
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
// Method Definition Index: 10943
// Method Definition Index: 10944
// Method Definition Index: 10945
// Method Definition Index: 10946
// Method Definition Index: 10947
// Method Definition Index: 10948
// Method Definition Index: 10949
// Method Definition Index: 10950
// Method Definition Index: 10951
// Method Definition Index: 10952
// Method Definition Index: 10953
// Method Definition Index: 10954
// Method Definition Index: 10955
#ifdef __clang__
#pragma clang diagnostic pop
#endif
