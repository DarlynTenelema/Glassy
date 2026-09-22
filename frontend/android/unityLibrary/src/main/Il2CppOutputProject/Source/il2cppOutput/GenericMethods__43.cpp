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
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF;
struct Action_1_t64127E4DD3E938737FD4F04E605CFE2A03708201;
struct Action_1_t66F20A50678273BCDE80B6C298A6521516E5D843;
struct Action_1_t42A8343A925FA227C9A30B3153BD9DFF00864DC0;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct Action_6_t51807BC92A7C39F1B9981D2B9661C16BA7DDA854;
struct Action_8_tB8FB2317194ED06F8C20B32C70ABA34BC783A881;
struct Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IObservable_1_t6A88B15915275CE92411906C989057BD5C18C20A;
struct IObservable_1_tA29A83F0C2D67B7465AEA27D123F8F8B6514E475;
struct InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B;
struct InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640;
struct ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE;
struct List_1_tFED1C27AA4B8AC9813FF4858B3ABB1B3F74558EF;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct Observer_1_tA0F9A80691B69597D25B36C1C3B0B53429D94849;
struct SelectManyObservable_2_tBEFCCBF20DBB52417E0D9CD64E2B1C731985C9A8;
struct SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383;
struct TakeNObservable_1_t4E8AA9483FF4FE41338461B42FD2FDFD350E1C6D;
struct UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6;
struct WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816;
struct InputProcessor_1U5BU5D_t54A7F487245D9D79D78092F4932E2F137D0F56B9;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ControlBitRangeNodeU5BU5D_t912A404149DE6D350D1735A026182C409C510F27;
struct OnScreenDeviceInfoU5BU5D_t0C70881971941DEFDD18CFFD3E4133B5CA0B7F30;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct ForDeviceEventObservable_t8A72659C906D6280192E680AF251425A67A7D889;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
struct IInputRuntime_t97E0310F85D952B7B42F6FEB50A1C8D88A0C0C09;
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct ObjectDispatcher_tEAB1C719841725D9587A7F17646D5D467D498D69;
struct OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Type_t;
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF;
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067;
struct UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4;
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926;
struct UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_MathematicsModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_ScriptingModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Collections[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_InputSystem[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_RenderPipelines_Core_Runtime[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Scripting[];
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ForDeviceEventObservable_t8A72659C906D6280192E680AF251425A67A7D889_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInputRuntime_t97E0310F85D952B7B42F6FEB50A1C8D88A0C0C09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0166BFBEA755AEC68D894E2718E0F43AC621B48E;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7;
IL2CPP_EXTERN_C String_t* _stringLiteral19710C29C28F677ED5E80B5C8FFB9B9F5CD6AB3A;
IL2CPP_EXTERN_C String_t* _stringLiteral1C09770F25C8580FC7F6623067ACD12EBA570614;
IL2CPP_EXTERN_C String_t* _stringLiteral213ABAA76E922BC10339BAF6AC97E9B778E7774F;
IL2CPP_EXTERN_C String_t* _stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral5601A0ED74C235668EBD9B6850B0C73C8B338118;
IL2CPP_EXTERN_C String_t* _stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B;
IL2CPP_EXTERN_C String_t* _stringLiteral6D17034B21712EB7B5957FBBF819632D04221839;
IL2CPP_EXTERN_C String_t* _stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468;
IL2CPP_EXTERN_C String_t* _stringLiteral6F04E86C5302630688259CCA7C31D9B8620B26C3;
IL2CPP_EXTERN_C String_t* _stringLiteral73FAAC2BC0DAF3CA8C0F99D19FCFEF396EC4D778;
IL2CPP_EXTERN_C String_t* _stringLiteral7D46E972920967646C169FAEFE29793480D87717;
IL2CPP_EXTERN_C String_t* _stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628;
IL2CPP_EXTERN_C String_t* _stringLiteral8F08B108AE90A47E2C4B3A0DC16321A36C9AFB54;
IL2CPP_EXTERN_C String_t* _stringLiteralC9DDDC1BB86D19164517493AC7ED9674192AFD37;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralEF83955BF61125FC832C506DE4DB5985B784A2C0;
IL2CPP_EXTERN_C String_t* _stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32;
IL2CPP_EXTERN_C String_t* _stringLiteralF704B54D833421164E45E576DFD279921246BCEA;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C const RuntimeMethod* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* math_min_m0D183243301588F5000801E35B451374CD10DFC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IObservable_1_t6A88B15915275CE92411906C989057BD5C18C20A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeArray_1_t6E2931CC2E1AA6B9F666FF4270BD177E2114779B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeBitArray_t7D47863D3DFF1D41EE133D5107FFAF0D697BC00E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeList_1_t0DD56C6A6FBCF305924DF0100D2E13E4858CF74E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeSlice_1_t4906DEA99476205C846F099C0196685F790D468E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectDispatcher_tEAB1C719841725D9587A7F17646D5D467D498D69_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UnsafeList_1_t098D123ECC7F884EDDA7751485B9FBE450B8C9D7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UnsafeParallelHashMapBucketData_tCF0D4586EE0009033007B1E1BD04D40BA0A9C8E9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;

struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF  : public RuntimeObject
{
	RuntimeObject* ___subscription;
};
struct ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Observer_1_tA0F9A80691B69597D25B36C1C3B0B53429D94849  : public RuntimeObject
{
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___m_OnNext;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnCompleted;
};
struct SelectManyObservable_2_tBEFCCBF20DBB52417E0D9CD64E2B1C731985C9A8  : public RuntimeObject
{
	RuntimeObject* ___m_Source;
	Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61* ___m_Filter;
};
struct SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383  : public RuntimeObject
{
	RuntimeObject* ___m_Source;
	Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___m_Filter;
};
struct TakeNObservable_1_t4E8AA9483FF4FE41338461B42FD2FDFD350E1C6D  : public RuntimeObject
{
	RuntimeObject* ___m_Source;
	int32_t ___m_Count;
};
struct WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816  : public RuntimeObject
{
	RuntimeObject* ___m_Source;
	Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___m_Predicate;
};
struct ForDeviceEventObservable_t8A72659C906D6280192E680AF251425A67A7D889  : public RuntimeObject
{
	RuntimeObject* ___m_Source;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device;
	Type_t* ___m_DeviceType;
};
struct InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct NativeArrayUnsafeUtility_tB4D8A974D44EE6F4B2C32D5D19861FB081F88FCE  : public RuntimeObject
{
};
struct NativeListExtensions_t703C0674A863EE05A97019B7CF6316AB98DE8817  : public RuntimeObject
{
};
struct NativeListExtensions_tBD19D126EAE99E4110644011F6C94313889B1925  : public RuntimeObject
{
};
struct NativeListUnsafeUtility_t76856F085F46022FE3879DD4EE833AE8FE1EFB19  : public RuntimeObject
{
};
struct NativeParallelHashMapExtensions_tF97CECE6CF8C190E9591A03824155DAF8142CF48  : public RuntimeObject
{
};
struct NativeParallelMultiHashMapExtensions_t2BF9A035AB74022218899A577154652BC4EB5DF3  : public RuntimeObject
{
};
struct NativeReferenceUnsafeUtility_tD55902920E8C42D91C1C498291D3A32E43CBD51B  : public RuntimeObject
{
};
struct NativeSliceExtensions_tA2B0303180122826FD5887061B8DBA5F342A726B  : public RuntimeObject
{
};
struct NativeSliceUnsafeUtility_tA7CBE88BA4246367450DB167A878F2FA408E10CD  : public RuntimeObject
{
};
struct NativeSortExtension_t69298E80751CF0D0DB847C79277B6E0A2C92A4F2  : public RuntimeObject
{
};
struct NoAllocHelpers_t5C2B43061F00675B5AD0044C341D0279E4F5F1ED  : public RuntimeObject
{
};
struct Observable_t74D8C01B38DEE3309AAA0204C87021D320DBEF47  : public RuntimeObject
{
};
struct OnceInScope_t6B4D8335D9FC5EF60351BBC7ECCC807663766FFD  : public RuntimeObject
{
};
struct ParallelSortExtensions_tF77646D72EE1C34AC6F6FB0B0F1FA70634084C8D  : public RuntimeObject
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
struct DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 
{
	union
	{
		struct
		{
		};
		uint8_t DefaultComparer_1_t4A26F5A7B2EFA2BDABB2F6FA752896E1F6506114__padding[1];
	};
};
struct InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986 
{
	int32_t ___length;
	InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640* ___firstValue;
	InputProcessor_1U5BU5D_t54A7F487245D9D79D78092F4932E2F137D0F56B9* ___additionalValues;
};
struct NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 
{
	UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* ___m_ListData;
};
struct NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
typedef Il2CppFullySharedGenericStruct SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E;
typedef Il2CppFullySharedGenericStruct SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A;
typedef Il2CppFullySharedGenericStruct ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
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
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	int32_t ___m_Code;
};
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F 
{
	String_t* ___m_InterfaceName;
	String_t* ___m_DeviceClass;
	String_t* ___m_Manufacturer;
	String_t* ___m_Product;
	String_t* ___m_Serial;
	String_t* ___m_Version;
	String_t* ___m_Capabilities;
};
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke
{
	char* ___m_InterfaceName;
	char* ___m_DeviceClass;
	char* ___m_Manufacturer;
	char* ___m_Product;
	char* ___m_Serial;
	char* ___m_Version;
	char* ___m_Capabilities;
};
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName;
	Il2CppChar* ___m_DeviceClass;
	Il2CppChar* ___m_Manufacturer;
	Il2CppChar* ___m_Product;
	Il2CppChar* ___m_Serial;
	Il2CppChar* ___m_Version;
	Il2CppChar* ___m_Capabilities;
};
struct InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 
{
	alignas(IL2CPP_SIZEOF_VOID_P) InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* ___m_EventPtr;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	String_t* ___m_StringOriginalCase;
	String_t* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase;
	char* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase;
	Il2CppChar* ___m_StringLowerCase;
};
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UnsafeParallelHashMapBucketData_tCF0D4586EE0009033007B1E1BD04D40BA0A9C8E9 
{
	uint8_t* ___values;
	uint8_t* ___keys;
	uint8_t* ___next;
	uint8_t* ___buckets;
	int32_t ___bucketCapacityMask;
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
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
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
struct ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 
{
	intptr_t ____value;
};
struct ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4 
{
	void* ___m_Data;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct SortJobDefer_2_t08B115591D33E0E12BE3194612F33E29C62FD509 
{
	NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___Data;
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___Comp;
};
typedef Il2CppFullySharedGenericStruct SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A;
struct SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD 
{
	Il2CppFullySharedGenericStruct* ___Data;
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___Comp;
	int32_t ___Length;
};
struct UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 
{
	Il2CppFullySharedGenericStruct* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
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
struct FindObjectsInactive_t10C7BE036CAD0178142374F945283DA50D02B87A 
{
	int32_t ___value__;
};
struct FindObjectsSortMode_t3C83F8C6588F54EBB0CEB21F79D54CD19460AE9E 
{
	int32_t ___value__;
};
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField;
	uint32_t ___m_ByteOffset;
	uint32_t ___U3CbitOffsetU3Ek__BackingField;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField;
};
struct NativeBitArray_t7D47863D3DFF1D41EE133D5107FFAF0D697BC00E 
{
	UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* ___m_BitArray;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_Allocator;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79 
{
	int32_t ___value__;
};
struct UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4 
{
	uint64_t* ___Ptr;
	int32_t ___Length;
	int32_t ___Capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2 
{
	void* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC 
{
	intptr_t ___Pointer;
	int32_t ___Items;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct ControlFlags_t9C297F208DE19CEB00A0560F7FDE59F6A2004132 
{
	int32_t ___value__;
};
struct DeviceFlags_tF02F85DA24FF16879A67B540FCA560EC955CE728 
{
	int32_t ___value__;
};
struct TransformTrackingType_t77039370A4171D17EFE0B606277B540732534FD4 
{
	int32_t ___value__;
};
struct TypeTrackingFlags_t56331E291FE0F180D59B5DB7ED12DD2C2A144053 
{
	int32_t ___value__;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeParallelHashMap_2_t75E2745DBFEAC14A7B7306A89FBFB3B562CEA497 
{
	UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707 ___m_HashMapData;
};
struct NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22 
{
	UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F ___m_MultiHashMapData;
};
struct ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer;
	int32_t ____length;
};
struct Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			bool ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			Il2CppChar ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			int32_t ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			uint8_t ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			int32_t ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			uint8_t ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067  : public Exception_t
{
};
struct Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 
{
	Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC ___Range;
	int32_t ___BytesPerItem;
	int32_t ___AllocatedItems;
	uint8_t ___Log2Alignment;
	uint8_t ___Padding0;
	uint16_t ___Padding1;
	uint32_t ___Padding2;
};
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};
struct Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61  : public MulticastDelegate_t
{
};
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct ValueTuple_2_t4CF93CEF0394185EBB5E5DFF70EA5EA8C34A840D 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___Item1;
	int32_t ___Item2;
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name;
	String_t* ___m_Path;
	String_t* ___m_DisplayName;
	String_t* ___m_DisplayNameFromLayout;
	String_t* ___m_ShortDisplayName;
	String_t* ___m_ShortDisplayNameFromLayout;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device;
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent;
	int32_t ___m_UsageCount;
	int32_t ___m_UsageStartIndex;
	int32_t ___m_AliasCount;
	int32_t ___m_AliasStartIndex;
	int32_t ___m_ChildCount;
	int32_t ___m_ChildStartIndex;
	int32_t ___m_ControlFlags;
	bool ___m_CachedValueIsStale;
	bool ___m_UnprocessedCachedValueIsStale;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_OptimizedControlDataType;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct TransformDispatchData_tDD80F62146EC1E25A25FD4C562BED0C52731E1B4 
{
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___transformedID;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___parentID;
	NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 ___localToWorldMatrices;
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___positions;
	NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 ___rotations;
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___scales;
};
struct TypeDispatchData_tF20A8BD105729A9AA353F600381DFB39DD8BF21F 
{
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___changed;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___changedID;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___destroyedID;
};
struct TypeDispatchData_tF20A8BD105729A9AA353F600381DFB39DD8BF21F_marshaled_pinvoke
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke* ___changed;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___changedID;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___destroyedID;
};
struct TypeDispatchData_tF20A8BD105729A9AA353F600381DFB39DD8BF21F_marshaled_com
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com** ___changed;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___changedID;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___destroyedID;
};
struct UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66 
{
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 ___m_BlockData;
};
struct OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC 
{
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___buffer;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device;
	OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* ___firstControl;
};
struct OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC_marshaled_pinvoke
{
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___buffer;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device;
	OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* ___firstControl;
};
struct OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC_marshaled_com
{
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___buffer;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device;
	OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* ___firstControl;
};
struct InlinedArray_1_tC8A32AF03BC5EA969AD4315DC5E67BBAF2765992 
{
	int32_t ___length;
	OnScreenDeviceInfo_t2C7BB082C4486C5F8F0FE55F0BFA772B454AD0AC ___firstValue;
	OnScreenDeviceInfoU5BU5D_t0C70881971941DEFDD18CFFD3E4133B5CA0B7F30* ___additionalValues;
};
struct InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E {};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	int32_t ___m_DeviceFlags;
	int32_t ___m_DeviceId;
	int32_t ___m_ParticipantId;
	int32_t ___m_DeviceIndex;
	uint32_t ___m_CurrentProcessedEventBytesOnUpdate;
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___m_Description;
	double ___m_LastUpdateTimeInternal;
	uint32_t ___m_CurrentUpdateStepCount;
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_AliasesForEachControl;
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_UsagesForEachControl;
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_UsageToControl;
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ChildrenForEachControl;
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___m_UpdatedButtons;
	List_1_tFED1C27AA4B8AC9813FF4858B3ABB1B3F74558EF* ___m_ButtonControlsCheckingPressState;
	bool ___m_UseCachePathForButtonPresses;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_StateOffsetToControlMap;
	ControlBitRangeNodeU5BU5D_t912A404149DE6D350D1735A026182C409C510F27* ___m_ControlTreeNodes;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___m_ControlTreeIndices;
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376 
{
	UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66 ___m_Stream;
};
struct ObjectDispatcher_tEAB1C719841725D9587A7F17646D5D467D498D69  : public RuntimeObject
{
	intptr_t ___m_Ptr;
	int32_t ___m_DispatchAllocator;
	TypeDispatchData_tF20A8BD105729A9AA353F600381DFB39DD8BF21F ___m_TypeDispatchData;
	TransformDispatchData_tDD80F62146EC1E25A25FD4C562BED0C52731E1B4 ___m_TransformDispatchData;
	ComponentU5BU5D_t40ECDBC5CC15EA282AF49771C20EBFDADC532D0E* ___m_TransformedComponents;
	Action_1_t42A8343A925FA227C9A30B3153BD9DFF00864DC0* ___m_TypeDataCallback;
	Action_1_t66F20A50678273BCDE80B6C298A6521516E5D843* ___m_TransformDataCallback;
	Action_1_t64127E4DD3E938737FD4F04E605CFE2A03708201* ___m_TransformComponentCallback;
};
struct OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Control;
	OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* ___m_NextControlOnDevice;
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___m_InputEventPtr;
};
struct ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707 
{
	NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376 ___Container;
	UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2* ___List;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_StaticFields
{
	RuntimeObject* ___s_Instance;
	double ___s_CurrentTimeOffsetToRealtimeSinceStartup;
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
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
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
struct ObjectDispatcher_tEAB1C719841725D9587A7F17646D5D467D498D69_StaticFields
{
	Action_6_t51807BC92A7C39F1B9981D2B9661C16BA7DDA854* ___s_TypeDispatch;
	Action_8_tB8FB2317194ED06F8C20B32C70ABA34BC783A881* ___s_TransformDispatch;
};
struct OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418_StaticFields
{
	int32_t ___s_nbActiveInstances;
	InlinedArray_1_tC8A32AF03BC5EA969AD4315DC5E67BBAF2765992 ___s_OnScreenDevices;
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
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* m_Items[1];

	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeList_1_AsArray_m1E9616CC42457555561B1165B47ED6E2EEADAC98_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArrayExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mC9DA32D7B8A7546B13A25AFD683E3E3564DA34F7_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mBBD877284D88BD7460DE885E06B863B2E9F3A6D6_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* ___1_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_m26517D1B620B6BB143F8CDBCBC9299D6C9AA512F_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* ___1_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_mBCE0D52E1FEFC40B5CFEE2F41B493C7FF6A07FA7_fshared_inline (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeList_1_GetUnsafeReadOnlyPtr_m8BCFBC6190084C23188A5CB9B68515B1DE81C179_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* NativeList_1_GetUnsafeList_m4787F7FF0C74B362B5DC98531C2FF66279A5EAEF_fshared_inline (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeParallelMultiHashMap_2_GetKeyArray_m6A9BA939DBFA9AA420DB474C8EE58430DCBA2B04_fshared (NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m3F424B0619C8F1DE51A5059CE9F9B9C77E8AD2E5_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeParallelHashMapExtensions_Unique_TisIl2CppFullySharedGenericStruct_m674E0555765DADEA4A4C72541D65B14707EFC0EB_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 UnsafeParallelMultiHashMap_2_GetKeyArray_mBBB8161BE1A90E1DB8F155DEF02C167BBF5FBB2B_fshared (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelMultiHashMap_2_Remove_TisIl2CppFullySharedGenericStruct_mE775E4665DF2FE5320D684E013BC68785FC3FE84_fshared (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F* __this, Il2CppFullySharedGenericStruct ___0_key, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelMultiHashMap_2__ctor_m2E9AAA535D5D589B1D9CA34C9CCD9D66CF1DF44B_fshared (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m606E9478EC6822C3776B093EFC3DC98678E00F9A_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m89E2A81C9B0649A573BC279C2AA35CAF771B8B7D_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_start, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m313B1A91AB4ADBA821C074187D67957126F93DFF_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m4C0C75BC6633B56253FD4A7CD7F38A34E73C6253_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_slice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 NativeArray_1_AsReadOnlySpan_mEDF5E795C5FC628766F2016DFB498E87E36BA3A0_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA4AD54929CBC51F673331E05EF70F1A3C61783BD_fshared (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_roSpan, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 NativeList_1_AsReadOnlySpan_m9B73FBB50388B80F5882E4C29601D1A20DE81C43_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mD435A28E9461F36F9490F8E0CF60763FE5B5EED3_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ReadOnly_AsReadOnlySpan_m64C20F2CC8054C58682D3CB09F2D1B7109C17950_fshared (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 UnsafeList_1_AsReadOnlySpan_m658FB0F8507A508C7EE03D00734D06611B703400_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m8C0FBAD1AF39307C240BF78F1446848F39A6D0CF_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericStruct ___2_value, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_fshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_fshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* ReadOnlySpan_1_get_Item_m9143C9CF6493AF0AD667C5BDEEF1D22895283F77_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m0AA47961221DDE83E16CD07FB4C4DC6635F44756_fshared (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisIl2CppFullySharedGenericStruct_m657D09FBF8CC0DCADE61F3DC08251120E778AAEF_fshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapifyStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6B0A1FA3EA057556E42D3B8022C12B8256BDE921_fshared (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t* ___3_lo, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapStruct_TisIl2CppFullySharedGenericStruct_m9261658699D5BEE6D69B7E825EEA155299319C24_fshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_fshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_fshared_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mE7D2E7D393807B71500A81BC5FDE51DB09E4FEB8_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSortStruct_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m27C179EA7B364CA3BA2C517B4C526F7142C7A6A2_fshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2__hi, int32_t ___3_depth, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItemsStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mABB5AA1A8A886F39277828BE310D8FDE2424F322_fshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC6CFFB0A8FC1BF15EAECA35C424AEF6EC0770471_fshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m2CC31064DF6368EAF82AC8B93E49B5672AB577F8_fshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_PartitionStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m73AD8A0117E3A2C21C4A32B60389FD87BFF08909_fshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m7087041FF408AE8DAAA069326FE6A617E9E0EF3C_fshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1C2A4A941C9938043B515BF59D9169D0066A8F1F_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m161F46C88A71F876EBED90282ED530DCA0E9A657_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6BB9FFB51FC10B9DC7A645E05CB970F49DD9C278_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD NativeArray_1_AsSpan_m5E5BA6DA8F13E99DA9E483864C4FE5CC56ED1259_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m9FF262B17E1E7B2DCDC9470732751FBAE353C73E_fshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD NativeList_1_AsSpan_m1A0A9D3ECFE64C1DE6A7D657918AD075C547E8D3_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_mBF35B93651FA209CF501B41C815D071FE63CDA88_fshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m201F2E16B83FD461CE57913123761F986C0F912D_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m61BCDF19FE675663E30578C052D29F6003D56756_fshared (void* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD UnsafeList_1_AsSpan_mAC472C7C01C97D39BB00813DF052291C2A755417_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1BA8C658F1FBC5741051F484F1DC355BD941EDBF_fshared (void* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_fshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortIndices_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mF75387D15CB11681384340B94B35E7AF9D80662F_fshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_indices, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___1_values, Il2CppFullySharedGenericStruct ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA47E9D98FCFFC3B156B359C1A1265D485601FBAA_fshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m337928D5AC4C50E948C80C38FB30ABDD0FEDFEE2_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJobDefer_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m08A07FE4FC0572B5AD96D95F043F26AD8020A463_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, Il2CppFullySharedGenericAny ___1_comp, SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisIl2CppFullySharedGenericStruct_mF266365A1A83D3A8671F9B001353E6658E321E57_fshared (Il2CppFullySharedGenericStruct ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 UnsafeStream_ToNativeArray_TisIl2CppFullySharedGenericStruct_m418267CD08E32A95A5829724C5BCD60D35C261E8_fshared (UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m5BE6D733C76E1AB093FB6D2783220A5B96EF61DF_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mD365C22FA3D32D70A2088AB13116E7BA5FBF0BFB_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Resources_ConvertObjects_TisIl2CppSharedGenericObject_m9BE1F255F2CB43F5F4EC6B3E4A12E88D5388D6F2_gshared (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___0_rawObjects, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Object_Instantiate_TisIl2CppSharedGenericObject_m67EE8108088342284BD20FC941DF00B3D10A3550_gshared (Il2CppSharedGenericObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, bool ___2_worldPositionStays, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Observer_1__ctor_mD1D555889C192C22513070B5EEB4E1AE8826B630_fshared (Observer_1_tA0F9A80691B69597D25B36C1C3B0B53429D94849* __this, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___0_onNext, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_onCompleted, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_1__ctor_mEB55F4856135C234D6057D0158C2C73E08EFB79B_fshared (U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_Take_TisIl2CppFullySharedGenericAny_m3193EEC4711789816ADFE2B254FB5833764C6377_fshared (RuntimeObject* ___0_source, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectObservable_2__ctor_mC5488B7793116D4A34581D9981A5E23F20ACDB26_fshared (SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383* __this, RuntimeObject* ___0_source, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___1_filter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectManyObservable_2__ctor_m068A7BA0620FA05C19C61BBAED9DC3A8D2A63016_fshared (SelectManyObservable_2_tBEFCCBF20DBB52417E0D9CD64E2B1C731985C9A8* __this, RuntimeObject* ___0_source, Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61* ___1_filter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TakeNObservable_1__ctor_mD0E67EC8298ABE2FCD054ADE48507D1AFC039CB4_fshared (TakeNObservable_1_t4E8AA9483FF4FE41338461B42FD2FDFD350E1C6D* __this, RuntimeObject* ___0_source, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereObservable_1__ctor_m6C7B01F3F1790F57E8A6CB4AA4B3C3FF98902286_fshared (WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816* __this, RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlExtensions_WriteValueIntoEvent_TisIl2CppFullySharedGenericStruct_mB215E1CA658246C0181792E9A28803B9AF0605F5_fshared (InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B* ___0_control, Il2CppFullySharedGenericStruct ___1_value, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___2_eventPtr, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_fshared_inline (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_fshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_fshared_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) ;

inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeList_1_AsArray_m1E9616CC42457555561B1165B47ED6E2EEADAC98 (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))NativeList_1_AsArray_m1E9616CC42457555561B1165B47ED6E2EEADAC98_fshared)(__this, method);
}
inline bool NativeArrayExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mC9DA32D7B8A7546B13A25AFD683E3E3564DA34F7 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_other, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeArrayExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mC9DA32D7B8A7546B13A25AFD683E3E3564DA34F7_fshared)(___0_container, ___1_other, method);
}
inline bool NativeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mBBD877284D88BD7460DE885E06B863B2E9F3A6D6 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* ___1_other, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))NativeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mBBD877284D88BD7460DE885E06B863B2E9F3A6D6_fshared)(___0_container, ___1_other, method);
}
inline bool UnsafeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_m26517D1B620B6BB143F8CDBCBC9299D6C9AA512F (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* ___1_other, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6, UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))UnsafeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_m26517D1B620B6BB143F8CDBCBC9299D6C9AA512F_fshared)(___0_container, ___1_other, method);
}
inline int32_t NativeList_1_get_Length_mBCE0D52E1FEFC40B5CFEE2F41B493C7FF6A07FA7_inline (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))NativeList_1_get_Length_mBCE0D52E1FEFC40B5CFEE2F41B493C7FF6A07FA7_fshared_inline)(__this, method);
}
inline Il2CppFullySharedGenericStruct* NativeList_1_GetUnsafeReadOnlyPtr_m8BCFBC6190084C23188A5CB9B68515B1DE81C179 (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))NativeList_1_GetUnsafeReadOnlyPtr_m8BCFBC6190084C23188A5CB9B68515B1DE81C179_fshared)(__this, method);
}
inline void ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_fshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* NativeList_1_GetUnsafeList_m4787F7FF0C74B362B5DC98531C2FF66279A5EAEF_inline (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method)
{
	return ((  UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))NativeList_1_GetUnsafeList_m4787F7FF0C74B362B5DC98531C2FF66279A5EAEF_fshared_inline)(__this, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeParallelMultiHashMap_2_GetKeyArray_m6A9BA939DBFA9AA420DB474C8EE58430DCBA2B04 (NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))NativeParallelMultiHashMap_2_GetKeyArray_m6A9BA939DBFA9AA420DB474C8EE58430DCBA2B04_fshared)(__this, ___0_allocator, method);
}
inline void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m3F424B0619C8F1DE51A5059CE9F9B9C77E8AD2E5 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m3F424B0619C8F1DE51A5059CE9F9B9C77E8AD2E5_fshared)(___0_container, method);
}
inline int32_t NativeParallelHashMapExtensions_Unique_TisIl2CppFullySharedGenericStruct_m674E0555765DADEA4A4C72541D65B14707EFC0EB (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeParallelHashMapExtensions_Unique_TisIl2CppFullySharedGenericStruct_m674E0555765DADEA4A4C72541D65B14707EFC0EB_fshared)(___0_array, method);
}
inline void ValueTuple_2__ctor_m90E20F3BDB456A9E9F0690ECCE21B5796934682A (ValueTuple_2_t4CF93CEF0394185EBB5E5DFF70EA5EA8C34A840D* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_item1, int32_t ___1_item2, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD_fshared)((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)__this, (Il2CppFullySharedGenericAny)&___0_item1, (Il2CppFullySharedGenericAny)&___1_item2, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 UnsafeParallelMultiHashMap_2_GetKeyArray_mBBB8161BE1A90E1DB8F155DEF02C167BBF5FBB2B (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelMultiHashMap_2_GetKeyArray_mBBB8161BE1A90E1DB8F155DEF02C167BBF5FBB2B_fshared)(__this, ___0_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeParallelHashMapBucketData_tCF0D4586EE0009033007B1E1BD04D40BA0A9C8E9 UnsafeParallelHashMapData_GetBucketData_m0A5859EBE368E2E2BBBD321F9A7E28AEBF0EDDC3 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelMultiHashMap_2_Remove_TisIl2CppFullySharedGenericStruct_mE775E4665DF2FE5320D684E013BC68785FC3FE84 (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F* __this, Il2CppFullySharedGenericStruct ___0_key, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F*, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, const RuntimeMethod*))UnsafeParallelMultiHashMap_2_Remove_TisIl2CppFullySharedGenericStruct_mE775E4665DF2FE5320D684E013BC68785FC3FE84_fshared)((UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F*)__this, ___0_key, ___1_value, method);
}
inline int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_fshared_inline)(__this, method);
}
inline void NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_fshared_inline)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, ___0_index, il2cppRetVal, method);
}
inline void NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, Il2CppFullySharedGenericStruct, const RuntimeMethod*))NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_fshared_inline)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, ___0_index, ___1_value, method);
}
inline void UnsafeParallelMultiHashMap_2__ctor_m2E9AAA535D5D589B1D9CA34C9CCD9D66CF1DF44B (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelMultiHashMap_2__ctor_m2E9AAA535D5D589B1D9CA34C9CCD9D66CF1DF44B_fshared)(__this, ___0_capacity, ___1_allocator, method);
}
inline void NativeSlice_1__ctor_m606E9478EC6822C3776B093EFC3DC98678E00F9A (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeSlice_1__ctor_m606E9478EC6822C3776B093EFC3DC98678E00F9A_fshared)(__this, ___0_array, method);
}
inline void NativeSlice_1__ctor_m89E2A81C9B0649A573BC279C2AA35CAF771B8B7D (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_start, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m89E2A81C9B0649A573BC279C2AA35CAF771B8B7D_fshared)(__this, ___0_array, ___1_start, method);
}
inline void NativeSlice_1__ctor_m313B1A91AB4ADBA821C074187D67957126F93DFF (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m313B1A91AB4ADBA821C074187D67957126F93DFF_fshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_m4C0C75BC6633B56253FD4A7CD7F38A34E73C6253 (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_slice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m4C0C75BC6633B56253FD4A7CD7F38A34E73C6253_fshared)(__this, ___0_slice, ___1_start, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
inline ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 NativeArray_1_AsReadOnlySpan_mEDF5E795C5FC628766F2016DFB498E87E36BA3A0 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_AsReadOnlySpan_mEDF5E795C5FC628766F2016DFB498E87E36BA3A0_fshared)(__this, method);
}
inline int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_mE0D8EC4A54AAE12B4588D4254D004A219311A6EF (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_roSpan, Il2CppFullySharedGenericStruct ___1_value, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___2_comp, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA4AD54929CBC51F673331E05EF70F1A3C61783BD_fshared)(___0_roSpan, ___1_value, (Il2CppFullySharedGenericAny)&___2_comp, method);
}
inline ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 NativeList_1_AsReadOnlySpan_m9B73FBB50388B80F5882E4C29601D1A20DE81C43 (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))NativeList_1_AsReadOnlySpan_m9B73FBB50388B80F5882E4C29601D1A20DE81C43_fshared)(__this, method);
}
inline int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_mEAE99474042D7BD88BE25CEA29554F30CC6DDBAD (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, Il2CppFullySharedGenericStruct ___1_value, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___2_comp, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mD435A28E9461F36F9490F8E0CF60763FE5B5EED3_fshared)(___0_container, ___1_value, (Il2CppFullySharedGenericAny)&___2_comp, method);
}
inline ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ReadOnly_AsReadOnlySpan_m64C20F2CC8054C58682D3CB09F2D1B7109C17950 (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8*, const RuntimeMethod*))ReadOnly_AsReadOnlySpan_m64C20F2CC8054C58682D3CB09F2D1B7109C17950_fshared)(__this, method);
}
inline ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 UnsafeList_1_AsReadOnlySpan_m658FB0F8507A508C7EE03D00734D06611B703400 (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))UnsafeList_1_AsReadOnlySpan_m658FB0F8507A508C7EE03D00734D06611B703400_fshared)(__this, method);
}
inline int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_mB5FB2889BCE2830E30498F3DE5DFE26901C0C878 (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericStruct ___2_value, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___3_comp, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m8C0FBAD1AF39307C240BF78F1446848F39A6D0CF_fshared)(___0_ptr, ___1_length, ___2_value, (Il2CppFullySharedGenericAny)&___3_comp, method);
}
inline int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA4AD54929CBC51F673331E05EF70F1A3C61783BD (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_roSpan, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA4AD54929CBC51F673331E05EF70F1A3C61783BD_fshared)(___0_roSpan, ___1_value, ___2_comp, method);
}
inline void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, const RuntimeMethod*))NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_fshared_inline)(___0_nativeSlice, method);
}
inline int32_t NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, const RuntimeMethod*))NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_fshared_inline)(__this, method);
}
inline int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m8C0FBAD1AF39307C240BF78F1446848F39A6D0CF (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericStruct ___2_value, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m8C0FBAD1AF39307C240BF78F1446848F39A6D0CF_fshared)(___0_ptr, ___1_length, ___2_value, ___3_comp, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m3CC53FCCDE299F21DEF7AB63EF3D378DAB954005_inline (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline)(__this, method);
}
inline Il2CppFullySharedGenericStruct* ReadOnlySpan_1_get_Item_mAFFA21964234394982172838F35555A4D5681233_inline (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_get_Item_m9143C9CF6493AF0AD667C5BDEEF1D22895283F77_fshared_inline)(__this, ___0_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
inline void NativeSortExtension_Heapify_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m0AA47961221DDE83E16CD07FB4C4DC6635F44756 (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_Heapify_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m0AA47961221DDE83E16CD07FB4C4DC6635F44756_fshared)(___0_array, ___1_i, ___2_n, ___3_lo, ___4_comp, method);
}
inline void NativeSortExtension_Swap_TisIl2CppFullySharedGenericStruct_m657D09FBF8CC0DCADE61F3DC08251120E778AAEF (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeSortExtension_Swap_TisIl2CppFullySharedGenericStruct_m657D09FBF8CC0DCADE61F3DC08251120E778AAEF_fshared)(___0_array, ___1_lhs, ___2_rhs, method);
}
inline void NativeSortExtension_HeapifyStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6B0A1FA3EA057556E42D3B8022C12B8256BDE921 (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t* ___3_lo, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, int32_t*, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_HeapifyStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6B0A1FA3EA057556E42D3B8022C12B8256BDE921_fshared)(___0_array, ___1_i, ___2_n, ___3_lo, ___4_comp, method);
}
inline void NativeSortExtension_SwapStruct_TisIl2CppFullySharedGenericStruct_m9261658699D5BEE6D69B7E825EEA155299319C24 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeSortExtension_SwapStruct_TisIl2CppFullySharedGenericStruct_m9261658699D5BEE6D69B7E825EEA155299319C24_fshared)(___0_array, ___1_lhs, ___2_rhs, method);
}
inline void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_fshared_inline)(___0_source, ___1_index, il2cppRetVal, method);
}
inline void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericStruct ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_fshared_inline)(___0_destination, ___1_index, (Il2CppFullySharedGenericAny)___2_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED (int32_t ___0_value, const RuntimeMethod* method) ;
inline void NativeSortExtension_IntroSort_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mE7D2E7D393807B71500A81BC5FDE51DB09E4FEB8 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_IntroSort_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mE7D2E7D393807B71500A81BC5FDE51DB09E4FEB8_fshared)(___0_array, ___1_lo, ___2_hi, ___3_depth, ___4_comp, method);
}
inline void NativeSortExtension_IntroSortStruct_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m27C179EA7B364CA3BA2C517B4C526F7142C7A6A2 (void* ___0_array, int32_t* ___1_lo, int32_t* ___2__hi, int32_t ___3_depth, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t*, int32_t*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_IntroSortStruct_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m27C179EA7B364CA3BA2C517B4C526F7142C7A6A2_fshared)(___0_array, ___1_lo, ___2__hi, ___3_depth, ___4_comp, method);
}
inline void NativeSortExtension_SwapIfGreaterWithItemsStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mABB5AA1A8A886F39277828BE310D8FDE2424F322 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_SwapIfGreaterWithItemsStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mABB5AA1A8A886F39277828BE310D8FDE2424F322_fshared)(___0_array, ___1_lhs, ___2_rhs, ___3_comp, method);
}
inline void NativeSortExtension_InsertionSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC6CFFB0A8FC1BF15EAECA35C424AEF6EC0770471 (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t*, int32_t*, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_InsertionSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC6CFFB0A8FC1BF15EAECA35C424AEF6EC0770471_fshared)(___0_array, ___1_lo, ___2_hi, ___3_comp, method);
}
inline void NativeSortExtension_HeapSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m2CC31064DF6368EAF82AC8B93E49B5672AB577F8 (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t*, int32_t*, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_HeapSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m2CC31064DF6368EAF82AC8B93E49B5672AB577F8_fshared)(___0_array, ___1_lo, ___2_hi, ___3_comp, method);
}
inline int32_t NativeSortExtension_PartitionStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m73AD8A0117E3A2C21C4A32B60389FD87BFF08909 (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method)
{
	return ((  int32_t (*) (void*, int32_t*, int32_t*, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_PartitionStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m73AD8A0117E3A2C21C4A32B60389FD87BFF08909_fshared)(___0_array, ___1_lo, ___2_hi, ___3_comp, method);
}
inline void NativeSortExtension_SwapIfGreaterWithItems_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m7087041FF408AE8DAAA069326FE6A617E9E0EF3C (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_SwapIfGreaterWithItems_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m7087041FF408AE8DAAA069326FE6A617E9E0EF3C_fshared)(___0_array, ___1_lhs, ___2_rhs, ___3_comp, method);
}
inline void NativeSortExtension_InsertionSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1C2A4A941C9938043B515BF59D9169D0066A8F1F (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_InsertionSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1C2A4A941C9938043B515BF59D9169D0066A8F1F_fshared)(___0_array, ___1_lo, ___2_hi, ___3_comp, method);
}
inline void NativeSortExtension_HeapSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m161F46C88A71F876EBED90282ED530DCA0E9A657 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_HeapSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m161F46C88A71F876EBED90282ED530DCA0E9A657_fshared)(___0_array, ___1_lo, ___2_hi, ___3_comp, method);
}
inline int32_t NativeSortExtension_Partition_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6BB9FFB51FC10B9DC7A645E05CB970F49DD9C278 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method)
{
	return ((  int32_t (*) (void*, int32_t, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_Partition_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6BB9FFB51FC10B9DC7A645E05CB970F49DD9C278_fshared)(___0_array, ___1_lo, ___2_hi, ___3_comp, method);
}
inline Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD NativeArray_1_AsSpan_m5E5BA6DA8F13E99DA9E483864C4FE5CC56ED1259 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	return ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_AsSpan_m5E5BA6DA8F13E99DA9E483864C4FE5CC56ED1259_fshared)(__this, method);
}
inline void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m457C521397981CA0D0A024FF470BA91607194EAB (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___1_comp, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m9FF262B17E1E7B2DCDC9470732751FBAE353C73E_fshared)(___0_span, (Il2CppFullySharedGenericAny)&___1_comp, method);
}
inline Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD NativeList_1_AsSpan_m1A0A9D3ECFE64C1DE6A7D657918AD075C547E8D3 (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method)
{
	return ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))NativeList_1_AsSpan_m1A0A9D3ECFE64C1DE6A7D657918AD075C547E8D3_fshared)(__this, method);
}
inline void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_mBF35B93651FA209CF501B41C815D071FE63CDA88 (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, const RuntimeMethod*))NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_mBF35B93651FA209CF501B41C815D071FE63CDA88_fshared)(___0_span, method);
}
inline void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m33CF6A0610F6ED93F84E57A1B06B8458C99A2369 (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___1_comp, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m201F2E16B83FD461CE57913123761F986C0F912D_fshared)(___0_container, (Il2CppFullySharedGenericAny)&___1_comp, method);
}
inline int32_t Span_1_get_Length_m1AADCDF6D1BB9B4B07BB14C7E31273E22A096E74_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
inline Il2CppFullySharedGenericStruct* Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, int32_t, const RuntimeMethod*))Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_fshared_inline)(__this, ___0_index, method);
}
inline void NativeSortExtension_IntroSortStruct_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m6F39B3D7410D7450329825AF014077A33502AB26 (void* ___0_array, int32_t ___1_length, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___2_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_IntroSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m61BCDF19FE675663E30578C052D29F6003D56756_fshared)(___0_array, ___1_length, (Il2CppFullySharedGenericAny)&___2_comp, method);
}
inline Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD UnsafeList_1_AsSpan_mAC472C7C01C97D39BB00813DF052291C2A755417 (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, const RuntimeMethod* method)
{
	return ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))UnsafeList_1_AsSpan_mAC472C7C01C97D39BB00813DF052291C2A755417_fshared)(__this, method);
}
inline void NativeSortExtension_IntroSort_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m953753EFB68B3528E6B4381ECB390720B5ACDD39 (void* ___0_array, int32_t ___1_length, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___2_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_IntroSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1BA8C658F1FBC5741051F484F1DC355BD941EDBF_fshared)(___0_array, ___1_length, (Il2CppFullySharedGenericAny)&___2_comp, method);
}
inline void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m9FF262B17E1E7B2DCDC9470732751FBAE353C73E (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m9FF262B17E1E7B2DCDC9470732751FBAE353C73E_fshared)(___0_span, ___1_comp, method);
}
inline void* NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, const RuntimeMethod*))NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_fshared_inline)(___0_nativeSlice, method);
}
inline void NativeSortExtension_IntroSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m61BCDF19FE675663E30578C052D29F6003D56756 (void* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_IntroSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m61BCDF19FE675663E30578C052D29F6003D56756_fshared)(___0_array, ___1_length, ___2_comp, method);
}
inline void NativeSortExtension_IntroSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1BA8C658F1FBC5741051F484F1DC355BD941EDBF (void* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_IntroSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1BA8C658F1FBC5741051F484F1DC355BD941EDBF_fshared)(___0_array, ___1_length, ___2_comp, method);
}
inline void NativeSortExtension_SortIndices_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_mA1968F7F5487FC1290B528E1B4BBE208FD8FFEC3 (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_indices, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___1_values, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___2_comp, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericStruct, const RuntimeMethod*))NativeSortExtension_SortIndices_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mF75387D15CB11681384340B94B35E7AF9D80662F_fshared)(___0_indices, ___1_values, (Il2CppFullySharedGenericStruct)&___2_comp, method);
}
inline void NativeSortExtension_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E_m0B2E37041303826C0FE97B765B159B5ADE62F5CD (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_span, SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E ___1_comp, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m9FF262B17E1E7B2DCDC9470732751FBAE353C73E_fshared)(il2cpp_codegen_cast_struct<Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316>(___0_span), (Il2CppFullySharedGenericAny)___1_comp, method);
}
inline SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m65B440AF43CC55536C485CAF2C68C83409E133DC (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___1_comp, const RuntimeMethod* method)
{
	SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD il2cppRetVal;
	((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Il2CppFullySharedGenericAny, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*, const RuntimeMethod*))NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA47E9D98FCFFC3B156B359C1A1265D485601FBAA_fshared)(___0_span, (Il2CppFullySharedGenericAny)&___1_comp, (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m49FAE04A2FA1528FE91ECA368358ABD62B40A69C (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___2_comp, const RuntimeMethod* method)
{
	SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD il2cppRetVal;
	((  void (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericAny, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*, const RuntimeMethod*))NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m337928D5AC4C50E948C80C38FB30ABDD0FEDFEE2_fshared)(___0_ptr, ___1_length, (Il2CppFullySharedGenericAny)&___2_comp, (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA47E9D98FCFFC3B156B359C1A1265D485601FBAA (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Il2CppFullySharedGenericAny, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*, const RuntimeMethod*))NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA47E9D98FCFFC3B156B359C1A1265D485601FBAA_fshared)(___0_span, ___1_comp, il2cppRetVal, method);
}
inline void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m337928D5AC4C50E948C80C38FB30ABDD0FEDFEE2 (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericAny, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*, const RuntimeMethod*))NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m337928D5AC4C50E948C80C38FB30ABDD0FEDFEE2_fshared)(___0_ptr, ___1_length, ___2_comp, il2cppRetVal, method);
}
inline SortJobDefer_2_t08B115591D33E0E12BE3194612F33E29C62FD509 NativeSortExtension_SortJobDefer_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m529440F9811FE87B9175DE647132A34462413C2C (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___1_comp, const RuntimeMethod* method)
{
	SortJobDefer_2_t08B115591D33E0E12BE3194612F33E29C62FD509 il2cppRetVal;
	((  void (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1, Il2CppFullySharedGenericAny, SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A*, const RuntimeMethod*))NativeSortExtension_SortJobDefer_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m08A07FE4FC0572B5AD96D95F043F26AD8020A463_fshared)(___0_container, (Il2CppFullySharedGenericAny)&___1_comp, (SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A*)&il2cppRetVal, method);
	return il2cppRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeStream_AllocateBlock_mAD29C962FDE6B17A135737E09693B6FAB6E974AF (NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* ___0_stream, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF (ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (Il2CppFullySharedGenericStruct, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobExtensions_Schedule_TisIl2CppFullySharedGenericStruct_mF266365A1A83D3A8671F9B001353E6658E321E57_fshared)((Il2CppFullySharedGenericStruct)&___0_jobData, ___1_dependsOn, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 UnsafeStream_ToNativeArray_TisIl2CppFullySharedGenericStruct_m418267CD08E32A95A5829724C5BCD60D35C261E8 (UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeStream_ToNativeArray_TisIl2CppFullySharedGenericStruct_m418267CD08E32A95A5829724C5BCD60D35C261E8_fshared)(__this, ___0_allocator, method);
}
inline void ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_fshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_fshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_fshared_inline)(__this, method);
}
inline int32_t List_1_get_Capacity_m5BE6D733C76E1AB093FB6D2783220A5B96EF61DF (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Capacity_m5BE6D733C76E1AB093FB6D2783220A5B96EF61DF_fshared)(__this, method);
}
inline void List_1_set_Capacity_mD365C22FA3D32D70A2088AB13116E7BA5FBF0BFB (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mD365C22FA3D32D70A2088AB13116E7BA5FBF0BFB_fshared)(__this, ___0_value, method);
}
inline int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
inline void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_fshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, il2cppRetVal, method);
}
inline void List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813_fshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_FindFirstObjectByType_mC479B3C54E61550A6A405DC1BCF0CBA2BA8FC66F (Type_t* ___0_type, int32_t ___1_findObjectsInactive, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Object_FindObjectsByType_m2FD4029E94449E11B16018C0A42F53978722D980 (Type_t* ___0_type, int32_t ___1_findObjectsInactive, int32_t ___2_sortMode, const RuntimeMethod* method) ;
inline __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Resources_ConvertObjects_TisIl2CppSharedGenericObject_m9BE1F255F2CB43F5F4EC6B3E4A12E88D5388D6F2 (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___0_rawObjects, const RuntimeMethod* method)
{
	return ((  __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* (*) (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*, const RuntimeMethod*))Resources_ConvertObjects_TisIl2CppSharedGenericObject_m9BE1F255F2CB43F5F4EC6B3E4A12E88D5388D6F2_gshared)(___0_rawObjects, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_CheckNullArgument_m4D03BBBD975CCCCB3F9438864E3E8BF54E1E3F26 (RuntimeObject* ___0_arg, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_Internal_CloneSingle_m24ECA1416702930DF5C316EA8B70D575315B636A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312 (UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* Object_Instantiate_TisIl2CppSharedGenericObject_m67EE8108088342284BD20FC941DF00B3D10A3550 (Il2CppSharedGenericObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, bool ___2_worldPositionStays, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Il2CppSharedGenericObject*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool, const RuntimeMethod*))Object_Instantiate_TisIl2CppSharedGenericObject_m67EE8108088342284BD20FC941DF00B3D10A3550_gshared)(___0_original, ___1_parent, ___2_worldPositionStays, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_Instantiate_m99F2A72EF6BFE09E6CF4FCF6207C5BCFAD1D76CF (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, bool ___2_instantiateInWorldSpace, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_Instantiate_m99C9917ED3F7B2B9C569B55F52411620B52DA19D (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDispatcher_EnableTransformTracking_m02C2084445E6ACB87BACF478E61FA597532044C1 (ObjectDispatcher_tEAB1C719841725D9587A7F17646D5D467D498D69* __this, int32_t ___0_trackingType, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___1_types, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDispatcher_EnableTypeTracking_m6C28705689C0A395B418FC54AF3B94F79310A371 (ObjectDispatcher_tEAB1C719841725D9587A7F17646D5D467D498D69* __this, int32_t ___0_typeTrackingMask, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___1_types, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformDispatchData_tDD80F62146EC1E25A25FD4C562BED0C52731E1B4 ObjectDispatcher_GetTransformChangesAndClear_mE189DCB6402D0E26D77A0C054E42A6C080B7BC23 (ObjectDispatcher_tEAB1C719841725D9587A7F17646D5D467D498D69* __this, Type_t* ___0_type, int32_t ___1_trackingType, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeDispatchData_tF20A8BD105729A9AA353F600381DFB39DD8BF21F ObjectDispatcher_GetTypeChangesAndClear_mBE6304A78592FF8271D7CD8E26C57544CF1675B9 (ObjectDispatcher_tEAB1C719841725D9587A7F17646D5D467D498D69* __this, Type_t* ___0_type, int32_t ___1_allocator, bool ___2_sortByInstanceID, bool ___3_noScriptingArray, const RuntimeMethod* method) ;
inline void Observer_1__ctor_mD1D555889C192C22513070B5EEB4E1AE8826B630 (Observer_1_tA0F9A80691B69597D25B36C1C3B0B53429D94849* __this, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___0_onNext, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_onCompleted, const RuntimeMethod* method)
{
	((  void (*) (Observer_1_tA0F9A80691B69597D25B36C1C3B0B53429D94849*, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))Observer_1__ctor_mD1D555889C192C22513070B5EEB4E1AE8826B630_fshared)(__this, ___0_onNext, ___1_onCompleted, method);
}
inline void U3CU3Ec__DisplayClass6_0_1__ctor_mEB55F4856135C234D6057D0158C2C73E08EFB79B (U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF*, const RuntimeMethod*))U3CU3Ec__DisplayClass6_0_1__ctor_mEB55F4856135C234D6057D0158C2C73E08EFB79B_fshared)(__this, method);
}
inline RuntimeObject* Observable_Take_TisIl2CppFullySharedGenericAny_m3193EEC4711789816ADFE2B254FB5833764C6377 (RuntimeObject* ___0_source, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Observable_Take_TisIl2CppFullySharedGenericAny_m3193EEC4711789816ADFE2B254FB5833764C6377_fshared)(___0_source, ___1_count, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForDeviceEventObservable__ctor_mB1C31FA7E513DB5D377B8F95AB66DBA80A0B2EFC (ForDeviceEventObservable_t8A72659C906D6280192E680AF251425A67A7D889* __this, RuntimeObject* ___0_source, Type_t* ___1_deviceType, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___2_device, const RuntimeMethod* method) ;
inline void SelectObservable_2__ctor_mC5488B7793116D4A34581D9981A5E23F20ACDB26 (SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383* __this, RuntimeObject* ___0_source, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___1_filter, const RuntimeMethod* method)
{
	((  void (*) (SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383*, RuntimeObject*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))SelectObservable_2__ctor_mC5488B7793116D4A34581D9981A5E23F20ACDB26_fshared)(__this, ___0_source, ___1_filter, method);
}
inline void SelectManyObservable_2__ctor_m068A7BA0620FA05C19C61BBAED9DC3A8D2A63016 (SelectManyObservable_2_tBEFCCBF20DBB52417E0D9CD64E2B1C731985C9A8* __this, RuntimeObject* ___0_source, Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61* ___1_filter, const RuntimeMethod* method)
{
	((  void (*) (SelectManyObservable_2_tBEFCCBF20DBB52417E0D9CD64E2B1C731985C9A8*, RuntimeObject*, Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61*, const RuntimeMethod*))SelectManyObservable_2__ctor_m068A7BA0620FA05C19C61BBAED9DC3A8D2A63016_fshared)(__this, ___0_source, ___1_filter, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void TakeNObservable_1__ctor_mD0E67EC8298ABE2FCD054ADE48507D1AFC039CB4 (TakeNObservable_1_t4E8AA9483FF4FE41338461B42FD2FDFD350E1C6D* __this, RuntimeObject* ___0_source, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (TakeNObservable_1_t4E8AA9483FF4FE41338461B42FD2FDFD350E1C6D*, RuntimeObject*, int32_t, const RuntimeMethod*))TakeNObservable_1__ctor_mD0E67EC8298ABE2FCD054ADE48507D1AFC039CB4_fshared)(__this, ___0_source, ___1_count, method);
}
inline void WhereObservable_1__ctor_m6C7B01F3F1790F57E8A6CB4AA4B3C3FF98902286 (WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816* __this, RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))WhereObservable_1__ctor_m6C7B01F3F1790F57E8A6CB4AA4B3C3FF98902286_fshared)(__this, ___0_source, ___1_predicate, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OnScreenControl_get_controlPath_m70FBF27F59E8953B7DE270BA8C426970E7D118D1 (OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputEventPtr_set_internalTime_mBD0B465C6882DD13F5FA3AAE487C0FA8A68E3810 (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0* __this, double ___0_value, const RuntimeMethod* method) ;
inline void InputControlExtensions_WriteValueIntoEvent_TisIl2CppFullySharedGenericStruct_mB215E1CA658246C0181792E9A28803B9AF0605F5 (InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B* ___0_control, Il2CppFullySharedGenericStruct ___1_value, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___2_eventPtr, const RuntimeMethod* method)
{
	((  void (*) (InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*, Il2CppFullySharedGenericStruct, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0, const RuntimeMethod*))InputControlExtensions_WriteValueIntoEvent_TisIl2CppFullySharedGenericStruct_mB215E1CA658246C0181792E9A28803B9AF0605F5_fshared)(___0_control, ___1_value, ___2_eventPtr, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_QueueEvent_mC30D182ADDD60BFC2AF10D24CEE2481D0EB77996 (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___0_eventPtr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* OnceInScope_OnceIn_m4F8C9FC123BFDFEE9BEAFA9EDB8F4AB95E83C813 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_todo, Type_t* ___1_scopeType, const RuntimeMethod* method) ;
inline int32_t UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_inline (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_fshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5 (const RuntimeMethod* method) ;
inline void UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_fshared_inline)(___0_source, ___1_index, il2cppRetVal, method);
}
inline void UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_fshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590 (const RuntimeMethod* method) ;
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dataPointer), (&___1_length), (&___2_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1689));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1690));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1160>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1691));
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		void* L_0 = ___0_dataPointer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_0)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3 = V_0;
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1172>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1692));
		return L_3;
	}
}
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35184
// Method Definition Index: 35188
// Method Definition Index: 35188
// Method Definition Index: 35188
// Method Definition Index: 35188
// Method Definition Index: 35188
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisIl2CppFullySharedGenericStruct_m0BC1578CE50C348FF9B616BD602021A69F647803_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_nativeArray));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1706));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1707));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1225>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1708));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
// Method Definition Index: 35188
// Method Definition Index: 35188
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_nativeArray));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1700));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1701));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1204>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1702));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35186
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_nativeArray));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1703));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1704));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1212>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1705));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 35187
// Method Definition Index: 52102
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeBitArray_AsNativeArray_TisIl2CppFullySharedGenericStruct_m21100628DDFFD7266FDBA65757CFED3149F739BB_fshared (NativeBitArray_t7D47863D3DFF1D41EE133D5107FFAF0D697BC00E* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA962F74FF478A58434F9031A1A41F8C5ECDF42A6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21337));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21338));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21339));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeBitArray.cs:208>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21340));
		uint32_t L_0 = SizeOf_T_tA962F74FF478A58434F9031A1A41F8C5ECDF42A6;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, 8));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeBitArray.cs:209>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21341));
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_1 = __this->___m_BitArray;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Length;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)(L_2/L_3));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeBitArray.cs:211>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21342));
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_4 = __this->___m_BitArray;
		NullCheck(L_4);
		uint64_t* L_5 = L_4->___Ptr;
		int32_t L_6 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21343));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_7;
		L_7 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52((void*)L_5, L_6, 1, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21343));
		V_2 = L_7;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeBitArray.cs:216>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21344));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_8 = V_2;
		V_3 = L_8;
		goto IL_002f;
	}

IL_002f:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeBitArray.cs:217>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21345));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_9 = V_3;
		return L_9;
	}
}
// Method Definition Index: 52118
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBitArray_CheckReadBounds_TisIl2CppFullySharedGenericStruct_m90E72A69672D7A6ABEB88D135A7E642E9E80B18A_fshared (NativeBitArray_t7D47863D3DFF1D41EE133D5107FFAF0D697BC00E* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t0E2536B333465CCD423B7DD2957A0C32E29E4E09 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21434));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21435));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21436));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeBitArray.cs:611>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21437));
		uint32_t L_0 = SizeOf_T_t0E2536B333465CCD423B7DD2957A0C32E29E4E09;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, 8));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeBitArray.cs:612>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21438));
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_1 = __this->___m_BitArray;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Length;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)(L_2/L_3));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeBitArray.cs:614>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21439));
		int32_t L_4 = V_1;
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21440));
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21441));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeBitArray.cs:616>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21442));
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_6 = __this->___m_BitArray;
		NullCheck(L_6);
		int32_t L_7 = L_6->___Length;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		uint32_t L_10 = SizeOf_T_t0E2536B333465CCD423B7DD2957A0C32E29E4E09;
		int32_t L_11 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, 8));
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21443));
		String_t* L_13;
		L_13 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7D46E972920967646C169FAEFE29793480D87717)), L_9, L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21443));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21444));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21444));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_004e:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeBitArray.cs:618>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21445));
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_15 = __this->___m_BitArray;
		NullCheck(L_15);
		int32_t L_16 = L_15->___Length;
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_16) == ((int32_t)((int32_t)il2cpp_codegen_multiply(L_17, L_18))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21446));
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_0091;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21447));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeBitArray.cs:620>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21448));
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_20 = __this->___m_BitArray;
		NullCheck(L_20);
		int32_t L_21 = L_20->___Length;
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
		uint32_t L_24 = SizeOf_T_t0E2536B333465CCD423B7DD2957A0C32E29E4E09;
		int32_t L_25 = ((int32_t)L_24);
		RuntimeObject* L_26 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_25);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21449));
		String_t* L_27;
		L_27 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6F04E86C5302630688259CCA7C31D9B8620B26C3)), L_23, L_26, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21449));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21450));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_28 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_28, L_27, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21450));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, method);
	}

IL_0091:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeBitArray.cs:622>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21451));
		return;
	}
}
// Method Definition Index: 52317
// Method Definition Index: 52317
// Method Definition Index: 52315
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mBBD877284D88BD7460DE885E06B863B2E9F3A6D6_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (&___1_other));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22770));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 22771));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22772));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeList.cs:1224>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22773));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_container;
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* L_1 = ___1_other;
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_2 = (*(NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*)L_1);
		V_0 = L_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22774));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3;
		L_3 = NativeList_1_AsArray_m1E9616CC42457555561B1165B47ED6E2EEADAC98((&V_0), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22774));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22775));
		bool L_4;
		L_4 = NativeArrayExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mC9DA32D7B8A7546B13A25AFD683E3E3564DA34F7(L_0, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22775));
		V_1 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeList.cs:1225>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22776));
		bool L_5 = V_1;
		return L_5;
	}
}
// Method Definition Index: 52316
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mC6723FED5EED98A88A8D4E52D1F67DE9043E0981_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (&___1_other));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22777));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 22778));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22779));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeList.cs:1238>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22780));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___1_other;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22781));
		bool L_2;
		L_2 = NativeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mBBD877284D88BD7460DE885E06B863B2E9F3A6D6(L_1, (&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22781));
		V_0 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeList.cs:1239>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22782));
		bool L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 52317
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_m74A6311D620FEE94744587F8940A8EB6EFFEBFBB_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (&___1_other));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22783));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 22784));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22785));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeList.cs:1252>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22786));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22787));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0;
		L_0 = NativeList_1_AsArray_m1E9616CC42457555561B1165B47ED6E2EEADAC98((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22787));
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* L_1 = ___1_other;
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_2 = (*(NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*)L_1);
		V_0 = L_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22788));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3;
		L_3 = NativeList_1_AsArray_m1E9616CC42457555561B1165B47ED6E2EEADAC98((&V_0), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22788));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22789));
		bool L_4;
		L_4 = NativeArrayExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mC9DA32D7B8A7546B13A25AFD683E3E3564DA34F7(L_0, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22789));
		V_1 = L_4;
		goto IL_001e;
	}

IL_001e:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeList.cs:1253>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22790));
		bool L_5 = V_1;
		return L_5;
	}
}
// Method Definition Index: 52318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mADA13D53936E5BB8844D9CB2CB696CA49E1F1505_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (&___1_other));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22791));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 22792));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22793));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeList.cs:1269>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22794));
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_0 = ___0_container;
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_1 = L_0.___m_ListData;
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 L_2 = (*(UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*)L_1);
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_3 = ___1_other;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22795));
		bool L_4;
		L_4 = UnsafeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_m26517D1B620B6BB143F8CDBCBC9299D6C9AA512F(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22795));
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeList.cs:1270>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22796));
		bool L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 28739
// Method Definition Index: 28739
// Method Definition Index: 28739
// Method Definition Index: 28739
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeListExtensions_LastIndex_TisIl2CppFullySharedGenericStruct_mD3D811FF697AB64208C086006419302AB1780507_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_list));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 58711));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 58712));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 58713));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/RenderGraph/Compiler/CompilerContextData.cs:38>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 58714));
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* L_0 = ___0_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 58715));
		int32_t L_1;
		L_1 = NativeList_1_get_Length_mBCE0D52E1FEFC40B5CFEE2F41B493C7FF6A07FA7_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 58715));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_000c;
	}

IL_000c:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/RenderGraph/Compiler/CompilerContextData.cs:39>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 58716));
		int32_t L_2 = V_0;
		return L_2;
	}
}
// Method Definition Index: 28738
// Method Definition Index: 28738
// Method Definition Index: 28738
// Method Definition Index: 28738
// Method Definition Index: 28738
// Method Definition Index: 28738
// Method Definition Index: 28738
// Method Definition Index: 28738
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 NativeListExtensions_MakeReadOnlySpan_TisIl2CppFullySharedGenericStruct_mE6F129DF69C6D1FFCECA7495F7A38D640D860092_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* ___0_list, int32_t ___1_first, int32_t ___2_numElements, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t763BE27078CDC0AAD600A5F83A4B0C80F6B363C6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_list), (&___1_first), (&___2_numElements));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 58704));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 58705));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 58706));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/RenderGraph/Compiler/CompilerContextData.cs:32>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 58707));
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* L_0 = ___0_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 58708));
		Il2CppFullySharedGenericStruct* L_1;
		L_1 = NativeList_1_GetUnsafeReadOnlyPtr_m8BCFBC6190084C23188A5CB9B68515B1DE81C179(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 58708));
		int32_t L_2 = ___1_first;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		uint32_t L_4 = SizeOf_T_t763BE27078CDC0AAD600A5F83A4B0C80F6B363C6;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(L_3, (int32_t)L_4)))),NULL));
		int32_t L_6 = ___2_numElements;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 58709));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline((&L_7), (void*)L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 58709));
		V_0 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/RenderGraph/Compiler/CompilerContextData.cs:33>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 58710));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 53120
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeListUnsafeUtility_GetInternalListDataPtrUnchecked_TisIl2CppFullySharedGenericStruct_mA545F925210D68602A18A2DA215F5C76D8B6BB44_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_list));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31630));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 31631));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31632));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeList.cs:1344>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31633));
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* L_0 = ___0_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31634));
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_1;
		L_1 = NativeList_1_GetUnsafeList_m4787F7FF0C74B362B5DC98531C2FF66279A5EAEF_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31634));
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeList.cs:1345>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31635));
		void* L_2 = V_0;
		return L_2;
	}
}
// Method Definition Index: 53118
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeListUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_mF276C4717B50244A8CBD2C69F71927BC3EE3C6F3_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_list));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31620));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 31621));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31622));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeList.cs:1295>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31623));
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_0 = ___0_list;
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_1 = L_0.___m_ListData;
		NullCheck(L_1);
		Il2CppFullySharedGenericStruct* L_2 = L_1->___Ptr;
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeList.cs:1296>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31624));
		Il2CppFullySharedGenericStruct* L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 53119
// Method Definition Index: 53119
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeListUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m90E0BE74C866078E3AE84009FD36C754ABBD1989_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_list));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31625));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 31626));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31627));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeList.cs:1311>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31628));
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_0 = ___0_list;
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_1 = L_0.___m_ListData;
		NullCheck(L_1);
		Il2CppFullySharedGenericStruct* L_2 = L_1->___Ptr;
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeList.cs:1312>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31629));
		Il2CppFullySharedGenericStruct* L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 52385
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t4CF93CEF0394185EBB5E5DFF70EA5EA8C34A840D NativeParallelHashMapExtensions_GetUniqueKeyArray_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m6DC98555F4354656A64ABD1F1FB14DAF5193C139_fshared (NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22 ___0_container, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	ValueTuple_2_t4CF93CEF0394185EBB5E5DFF70EA5EA8C34A840D V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (&___1_allocator));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23265));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 23266));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23267));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelHashMapExtensions.cs:80>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23268));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23269));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1;
		L_1 = NativeParallelMultiHashMap_2_GetKeyArray_m6A9BA939DBFA9AA420DB474C8EE58430DCBA2B04((&___0_container), L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23269));
		V_0 = L_1;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelHashMapExtensions.cs:81>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23270));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23271));
		NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m3F424B0619C8F1DE51A5059CE9F9B9C77E8AD2E5(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23271));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelHashMapExtensions.cs:82>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23272));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23273));
		int32_t L_4;
		L_4 = NativeParallelHashMapExtensions_Unique_TisIl2CppFullySharedGenericStruct_m674E0555765DADEA4A4C72541D65B14707EFC0EB(L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23273));
		V_1 = L_4;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelHashMapExtensions.cs:83>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23274));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5 = V_0;
		int32_t L_6 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23275));
		ValueTuple_2_t4CF93CEF0394185EBB5E5DFF70EA5EA8C34A840D L_7;
		memset((&L_7), 0, sizeof(L_7));
		ValueTuple_2__ctor_m90E20F3BDB456A9E9F0690ECCE21B5796934682A((&L_7), L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23275));
		V_2 = L_7;
		goto IL_0022;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelHashMapExtensions.cs:84>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23276));
		ValueTuple_2_t4CF93CEF0394185EBB5E5DFF70EA5EA8C34A840D L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 52384
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t4CF93CEF0394185EBB5E5DFF70EA5EA8C34A840D NativeParallelHashMapExtensions_GetUniqueKeyArray_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mF815B9736CCEA3077EC6C7408B1875AC7E360772_fshared (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F ___0_container, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	ValueTuple_2_t4CF93CEF0394185EBB5E5DFF70EA5EA8C34A840D V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (&___1_allocator));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23253));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 23254));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23255));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelHashMapExtensions.cs:61>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23256));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23257));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1;
		L_1 = UnsafeParallelMultiHashMap_2_GetKeyArray_mBBB8161BE1A90E1DB8F155DEF02C167BBF5FBB2B((&___0_container), L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23257));
		V_0 = L_1;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelHashMapExtensions.cs:62>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23258));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23259));
		NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m3F424B0619C8F1DE51A5059CE9F9B9C77E8AD2E5(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23259));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelHashMapExtensions.cs:63>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23260));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23261));
		int32_t L_4;
		L_4 = NativeParallelHashMapExtensions_Unique_TisIl2CppFullySharedGenericStruct_m674E0555765DADEA4A4C72541D65B14707EFC0EB(L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23261));
		V_1 = L_4;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelHashMapExtensions.cs:64>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23262));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5 = V_0;
		int32_t L_6 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23263));
		ValueTuple_2_t4CF93CEF0394185EBB5E5DFF70EA5EA8C34A840D L_7;
		memset((&L_7), 0, sizeof(L_7));
		ValueTuple_2__ctor_m90E20F3BDB456A9E9F0690ECCE21B5796934682A((&L_7), L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23263));
		V_2 = L_7;
		goto IL_0022;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelHashMapExtensions.cs:65>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23264));
		ValueTuple_2_t4CF93CEF0394185EBB5E5DFF70EA5EA8C34A840D L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 52386
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeParallelHashMapBucketData_tCF0D4586EE0009033007B1E1BD04D40BA0A9C8E9 NativeParallelHashMapExtensions_GetUnsafeBucketData_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mF7278677C2994CB4C9A7CABF4801CD22014BF931_fshared (NativeParallelHashMap_2_t75E2745DBFEAC14A7B7306A89FBFB3B562CEA497 ___0_container, const RuntimeMethod* method) 
{
	UnsafeParallelHashMapBucketData_tCF0D4586EE0009033007B1E1BD04D40BA0A9C8E9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23277));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 23278));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23279));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelHashMapExtensions.cs:105>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23280));
		NativeParallelHashMap_2_t75E2745DBFEAC14A7B7306A89FBFB3B562CEA497 L_0 = ___0_container;
		UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707 L_1 = L_0.___m_HashMapData;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = L_1.___m_Buffer;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23281));
		UnsafeParallelHashMapBucketData_tCF0D4586EE0009033007B1E1BD04D40BA0A9C8E9 L_3;
		L_3 = UnsafeParallelHashMapData_GetBucketData_m0A5859EBE368E2E2BBBD321F9A7E28AEBF0EDDC3((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23281));
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelHashMapExtensions.cs:106>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23282));
		UnsafeParallelHashMapBucketData_tCF0D4586EE0009033007B1E1BD04D40BA0A9C8E9 L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 52387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeParallelHashMapBucketData_tCF0D4586EE0009033007B1E1BD04D40BA0A9C8E9 NativeParallelHashMapExtensions_GetUnsafeBucketData_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m87EBDF2435FBC6B614A8311BB42E60B104532398_fshared (NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22 ___0_container, const RuntimeMethod* method) 
{
	UnsafeParallelHashMapBucketData_tCF0D4586EE0009033007B1E1BD04D40BA0A9C8E9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23283));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 23284));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23285));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelHashMapExtensions.cs:127>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23286));
		NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22 L_0 = ___0_container;
		UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F L_1 = L_0.___m_MultiHashMapData;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = L_1.___m_Buffer;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23287));
		UnsafeParallelHashMapBucketData_tCF0D4586EE0009033007B1E1BD04D40BA0A9C8E9 L_3;
		L_3 = UnsafeParallelHashMapData_GetBucketData_m0A5859EBE368E2E2BBBD321F9A7E28AEBF0EDDC3((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23287));
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelHashMapExtensions.cs:128>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23288));
		UnsafeParallelHashMapBucketData_tCF0D4586EE0009033007B1E1BD04D40BA0A9C8E9 L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 52388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeParallelHashMapExtensions_Remove_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m53F7E0A772565666D599D319F939426F7A896492_fshared (NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22 ___0_container, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TKey_t0DBD8AE3E40678E75578512D3E3EFD21E23599EE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_TValue_tEEC11F243A93B10B85AF655A7657238B9128AFC6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TKey_t0DBD8AE3E40678E75578512D3E3EFD21E23599EE);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_TKey_t0DBD8AE3E40678E75578512D3E3EFD21E23599EE);
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TValue_tEEC11F243A93B10B85AF655A7657238B9128AFC6);
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_TValue_tEEC11F243A93B10B85AF655A7657238B9128AFC6);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_key : &___1_key), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_value : &___2_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23289));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 23290));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23291));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelHashMapExtensions.cs:148>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23292));
		UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F* L_0 = (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F*)(&(&___0_container)->___m_MultiHashMapData);
		il2cpp_codegen_memcpy(L_1, ___1_key, SizeOf_TKey_t0DBD8AE3E40678E75578512D3E3EFD21E23599EE);
		il2cpp_codegen_memcpy(L_2, ___2_value, SizeOf_TValue_tEEC11F243A93B10B85AF655A7657238B9128AFC6);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23293));
		UnsafeParallelMultiHashMap_2_Remove_TisIl2CppFullySharedGenericStruct_mE775E4665DF2FE5320D684E013BC68785FC3FE84(L_0, il2cpp_codegen_memcpy(L_3, L_1, SizeOf_TKey_t0DBD8AE3E40678E75578512D3E3EFD21E23599EE), il2cpp_codegen_memcpy(L_4, L_2, SizeOf_TValue_tEEC11F243A93B10B85AF655A7657238B9128AFC6), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23293));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelHashMapExtensions.cs:149>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23294));
		return;
	}
}
// Method Definition Index: 52383
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeParallelHashMapExtensions_Unique_TisIl2CppFullySharedGenericStruct_m674E0555765DADEA4A4C72541D65B14707EFC0EB_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA768F369FF07BC4A7486CD2E0630F1E249B49E80 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	void* L_8 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_tA768F369FF07BC4A7486CD2E0630F1E249B49E80);
	const Il2CppFullySharedGenericStruct L_16 = L_5;
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_tA768F369FF07BC4A7486CD2E0630F1E249B49E80);
	const Il2CppFullySharedGenericStruct L_17 = L_7;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	Il2CppFullySharedGenericStruct V_6 = alloca(SizeOf_T_tA768F369FF07BC4A7486CD2E0630F1E249B49E80);
	memset(V_6, 0, SizeOf_T_tA768F369FF07BC4A7486CD2E0630F1E249B49E80);
	bool V_7 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23224));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 23225));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23226));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelHashMapExtensions.cs:29>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23227));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23228));
		int32_t L_0;
		L_0 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___0_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23228));
		V_3 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23229));
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23230));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelHashMapExtensions.cs:31>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23231));
		V_4 = 0;
		goto IL_007e;
	}

IL_0015:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelHashMapExtensions.cs:34>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23232));
		V_0 = 0;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelHashMapExtensions.cs:35>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23233));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23234));
		int32_t L_2;
		L_2 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___0_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23234));
		V_1 = L_2;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelHashMapExtensions.cs:36>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23235));
		int32_t L_3 = V_0;
		V_2 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23236));
		goto IL_0064;
	}

IL_0023:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23237));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelHashMapExtensions.cs:39>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23238));
		int32_t L_4 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23239));
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___0_array), L_4, (Il2CppFullySharedGenericStruct*)L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23239));
		il2cpp_codegen_memcpy(V_6, L_5, SizeOf_T_tA768F369FF07BC4A7486CD2E0630F1E249B49E80);
		int32_t L_6 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23240));
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___0_array), L_6, (Il2CppFullySharedGenericStruct*)L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23240));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23241));
		Il2CppConstrainedCallData L_9;
		Il2CppMethodPointer L_10 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)(Il2CppFullySharedGenericStruct*)V_6, &L_9, L_8);
		bool L_11 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(L_10, L_9.method,L_9.thisPtr, L_7);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23241));
		V_5 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23242));
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0063;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23243));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelHashMapExtensions.cs:41>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23244));
		int32_t L_13 = V_2;
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		V_2 = L_14;
		int32_t L_15 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23245));
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___0_array), L_15, (Il2CppFullySharedGenericStruct*)L_16, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23245));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23246));
		NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline((&___0_array), L_14, il2cpp_codegen_memcpy(L_17, L_16, SizeOf_T_tA768F369FF07BC4A7486CD2E0630F1E249B49E80), il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23246));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23247));
	}

IL_0063:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23248));
	}

IL_0064:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelHashMapExtensions.cs:37>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23249));
		int32_t L_18 = V_0;
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		V_0 = L_19;
		int32_t L_20 = V_1;
		V_7 = (bool)((((int32_t)((((int32_t)L_19) == ((int32_t)L_20))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23250));
		bool L_21 = V_7;
		if (L_21)
		{
			goto IL_0023;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelHashMapExtensions.cs:45>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23251));
		int32_t L_22 = V_2;
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		V_2 = L_23;
		V_4 = L_23;
		goto IL_007e;
	}

IL_007e:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelHashMapExtensions.cs:46>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 23252));
		int32_t L_24 = V_4;
		return L_24;
	}
}
// Method Definition Index: 52560
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeParallelMultiHashMapExtensions_Initialize_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m045B4C791A5970CFA228B174BE56E841E91C0E24_fshared (NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22* ___0_container, int32_t ___1_capacity, Il2CppFullySharedGenericStruct* ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* L_3 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (&___1_capacity), (&___2_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25480));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 25481));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25482));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelMultiHashMap.cs:937>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25483));
		NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22* L_0 = ___0_container;
		int32_t L_1 = ___1_capacity;
		Il2CppFullySharedGenericStruct* L_2 = ___2_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25484));
		Il2CppConstrainedCallData L_4;
		Il2CppMethodPointer L_5 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 0), (void*)L_2, &L_4, L_3);
		typedef AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ( *func_L_6)(void*,const RuntimeMethod*);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ((func_L_6)L_5)(L_4.thisPtr,L_4.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25484));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25485));
		UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F L_8;
		memset((&L_8), 0, sizeof(L_8));
		UnsafeParallelMultiHashMap_2__ctor_m2E9AAA535D5D589B1D9CA34C9CCD9D66CF1DF44B((&L_8), L_1, L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25485));
		L_0->___m_MultiHashMapData = L_8;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeParallelMultiHashMap.cs:944>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25486));
		return;
	}
}
// Method Definition Index: 53121
// Method Definition Index: 53121
// Method Definition Index: 53121
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeReferenceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_mEB79BE46478F0134535EFD4F98EBA2EB0D1A7B3C_fshared (NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4 ___0_reference, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_reference));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31636));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 31637));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31638));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeReference.cs:393>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31639));
		NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4 L_0 = ___0_reference;
		void* L_1 = L_0.___m_Data;
		V_0 = (Il2CppFullySharedGenericStruct*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeReference.cs:394>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31640));
		Il2CppFullySharedGenericStruct* L_2 = V_0;
		return L_2;
	}
}
// Method Definition Index: 53123
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeReferenceUnsafeUtility_GetUnsafePtrWithoutChecks_TisIl2CppFullySharedGenericStruct_m5A817AC2C6E59D9CF8D617605C09B83FAC88845D_fshared (NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4 ___0_reference, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_reference));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31646));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 31647));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31648));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeReference.cs:424>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31649));
		NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4 L_0 = ___0_reference;
		void* L_1 = L_0.___m_Data;
		V_0 = (Il2CppFullySharedGenericStruct*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeReference.cs:425>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31650));
		Il2CppFullySharedGenericStruct* L_2 = V_0;
		return L_2;
	}
}
// Method Definition Index: 53122
// Method Definition Index: 53122
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeReferenceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_mD8A8D6156E606899E693CDD4803C48CE4D38F13B_fshared (NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4 ___0_reference, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_reference));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31641));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 31642));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31643));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeReference.cs:410>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31644));
		NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4 L_0 = ___0_reference;
		void* L_1 = L_0.___m_Data;
		V_0 = (Il2CppFullySharedGenericStruct*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeReference.cs:411>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31645));
		Il2CppFullySharedGenericStruct* L_2 = V_0;
		return L_2;
	}
}
// Method Definition Index: 35134
// Method Definition Index: 35134
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceExtensions_Slice_TisIl2CppFullySharedGenericStruct_mB3B087259D57CBD3742B7A6BFE5BD1C0FF0E4A73_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_thisArray, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_thisArray));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1458));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1459));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeSlice.cs:15>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1460));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_thisArray;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1461));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeSlice_1__ctor_m606E9478EC6822C3776B093EFC3DC98678E00F9A((&L_1), L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1461));
		return L_1;
	}
}
// Method Definition Index: 35135
// Method Definition Index: 35135
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceExtensions_Slice_TisIl2CppFullySharedGenericStruct_mAC2337A7622D49D3416C69479705764FAE2B6FA8_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_thisArray, int32_t ___1_start, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_thisArray), (&___1_start));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1462));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1463));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeSlice.cs:20>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1464));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1465));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeSlice_1__ctor_m89E2A81C9B0649A573BC279C2AA35CAF771B8B7D((&L_2), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1465));
		return L_2;
	}
}
// Method Definition Index: 35136
// Method Definition Index: 35136
// Method Definition Index: 35136
// Method Definition Index: 35136
// Method Definition Index: 35136
// Method Definition Index: 35136
// Method Definition Index: 35136
// Method Definition Index: 35136
// Method Definition Index: 35136
// Method Definition Index: 35137
// Method Definition Index: 35136
// Method Definition Index: 35136
// Method Definition Index: 35136
// Method Definition Index: 35136
// Method Definition Index: 35136
// Method Definition Index: 35137
// Method Definition Index: 35136
// Method Definition Index: 35136
// Method Definition Index: 35137
// Method Definition Index: 35136
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceExtensions_Slice_TisIl2CppFullySharedGenericStruct_mFB1AE1A459E87B8E3C3986EF14F956E30EAF24A3_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_thisArray), (&___1_start), (&___2_length));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1466));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1467));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeSlice.cs:25>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1468));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1469));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m313B1A91AB4ADBA821C074187D67957126F93DFF((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1469));
		return L_3;
	}
}
// Method Definition Index: 35137
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceExtensions_Slice_TisIl2CppFullySharedGenericStruct_m8604EAC32FCFF874A6AA4097703CF1DA1EFA00DE_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_thisSlice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_thisSlice), (&___1_start), (&___2_length));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1470));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1471));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeSlice.cs:40>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1472));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_thisSlice;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1473));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m4C0C75BC6633B56253FD4A7CD7F38A34E73C6253((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1473));
		return L_3;
	}
}
// Method Definition Index: 35136
// Method Definition Index: 35136
// Method Definition Index: 35136
// Method Definition Index: 35136
// Method Definition Index: 35189
// Method Definition Index: 35189
// Method Definition Index: 35189
// Method Definition Index: 35189
// Method Definition Index: 35189
// Method Definition Index: 35189
// Method Definition Index: 35189
// Method Definition Index: 35189
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisIl2CppFullySharedGenericStruct_mE65C843FF57523BD4FDD1642C5D01EE096A9E2E0_fshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dataPointer), (&___1_stride), (&___2_length));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1709));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1710));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeSlice.cs:423>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1711));
		int32_t L_0 = ___2_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeSlice.cs:424>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1712));
		int32_t L_1 = ___2_length;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1713));
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1713));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1714));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1714));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_001f:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeSlice.cs:425>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1715));
		int32_t L_6 = ___1_stride;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeSlice.cs:426>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1716));
		int32_t L_7 = ___1_stride;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1717));
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1717));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1718));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_11, L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1718));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeSlice.cs:428>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1719));
		il2cpp_codegen_initobj((&V_0), sizeof(NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52));
		int32_t L_12 = ___1_stride;
		(&V_0)->___m_Stride = L_12;
		void* L_13 = ___0_dataPointer;
		(&V_0)->___m_Buffer = (uint8_t*)L_13;
		int32_t L_14 = ___2_length;
		(&V_0)->___m_Length = L_14;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_15 = V_0;
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeSlice.cs:440>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1720));
		return L_15;
	}
}
// Method Definition Index: 35189
// Method Definition Index: 35189
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_nativeSlice));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1721));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1722));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeSlice.cs:448>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1723));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		return (void*)(L_1);
	}
}
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35190
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_nativeSlice));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1724));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1725));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeSlice.cs:456>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1726));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		return (void*)(L_1);
	}
}
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 35191
// Method Definition Index: 52636
// Method Definition Index: 52636
// Method Definition Index: 52636
// Method Definition Index: 52636
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_m3A6F8C968B38411A4351D3E06251E4A6830BDE23_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tAC2BA8E7A468F184EEB8E60D27E31625048FB901 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tAC2BA8E7A468F184EEB8E60D27E31625048FB901);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tAC2BA8E7A468F184EEB8E60D27E31625048FB901);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26020));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26021));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26022));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:103>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26023));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26024));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = NativeArray_1_AsReadOnlySpan_mEDF5E795C5FC628766F2016DFB498E87E36BA3A0((&___0_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26024));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_tAC2BA8E7A468F184EEB8E60D27E31625048FB901);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26025));
		int32_t L_4;
		L_4 = NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_mE0D8EC4A54AAE12B4588D4254D004A219311A6EF(L_0, il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_tAC2BA8E7A468F184EEB8E60D27E31625048FB901), L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26025));
		V_1 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:104>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26026));
		int32_t L_5 = V_1;
		return L_5;
	}
}
// Method Definition Index: 52640
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_mF37FF893F4B9859C00A38E0D8AABABE18D409F58_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t5D5D8920E337D7BD5E7768B87B99898C6903550B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t5D5D8920E337D7BD5E7768B87B99898C6903550B);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t5D5D8920E337D7BD5E7768B87B99898C6903550B);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26048));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26049));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26050));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:171>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26051));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26052));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = NativeList_1_AsReadOnlySpan_m9B73FBB50388B80F5882E4C29601D1A20DE81C43((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26052));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_t5D5D8920E337D7BD5E7768B87B99898C6903550B);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26053));
		int32_t L_4;
		L_4 = NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_mE0D8EC4A54AAE12B4588D4254D004A219311A6EF(L_0, il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_t5D5D8920E337D7BD5E7768B87B99898C6903550B), L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26053));
		V_1 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:172>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26054));
		int32_t L_5 = V_1;
		return L_5;
	}
}
// Method Definition Index: 52646
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_mEED7C960744565E22ABDCF47B04BB4F1D3D4D3AF_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t580C6AF35755E86023C674933ABA4655842A27C6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t580C6AF35755E86023C674933ABA4655842A27C6);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t580C6AF35755E86023C674933ABA4655842A27C6);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26097));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26098));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26099));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:279>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26100));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_container;
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_t580C6AF35755E86023C674933ABA4655842A27C6);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26101));
		int32_t L_4;
		L_4 = NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_mEAE99474042D7BD88BE25CEA29554F30CC6DDBAD(L_0, il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_t580C6AF35755E86023C674933ABA4655842A27C6), L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26101));
		V_1 = L_4;
		goto IL_0014;
	}

IL_0014:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:280>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26102));
		int32_t L_5 = V_1;
		return L_5;
	}
}
// Method Definition Index: 52638
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_mE00CC35601503008B6319F4E8011CE96782269AE_fshared (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 ___0_container, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tBEAE782C8CA74715F118D46BAEE2B326BB1472FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tBEAE782C8CA74715F118D46BAEE2B326BB1472FD);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tBEAE782C8CA74715F118D46BAEE2B326BB1472FD);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26034));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26035));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26036));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:137>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26037));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26038));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = ReadOnly_AsReadOnlySpan_m64C20F2CC8054C58682D3CB09F2D1B7109C17950((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26038));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_tBEAE782C8CA74715F118D46BAEE2B326BB1472FD);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26039));
		int32_t L_4;
		L_4 = NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_mE0D8EC4A54AAE12B4588D4254D004A219311A6EF(L_0, il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_tBEAE782C8CA74715F118D46BAEE2B326BB1472FD), L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26039));
		V_1 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:138>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26040));
		int32_t L_5 = V_1;
		return L_5;
	}
}
// Method Definition Index: 52644
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_mEA378A66FE40F4B2A3ABCCE3C5CCDC6B77EEAC99_fshared (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_roSpan, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t16769CF6C20EA06B32C4B09516BDB65D2DC804AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t16769CF6C20EA06B32C4B09516BDB65D2DC804AB);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t16769CF6C20EA06B32C4B09516BDB65D2DC804AB);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_roSpan), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26076));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26077));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26078));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:237>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26079));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0 = ___0_roSpan;
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_t16769CF6C20EA06B32C4B09516BDB65D2DC804AB);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26080));
		int32_t L_4;
		L_4 = NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_mE0D8EC4A54AAE12B4588D4254D004A219311A6EF(L_0, il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_t16769CF6C20EA06B32C4B09516BDB65D2DC804AB), L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26080));
		V_1 = L_4;
		goto IL_0014;
	}

IL_0014:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:238>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26081));
		int32_t L_5 = V_1;
		return L_5;
	}
}
// Method Definition Index: 52642
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_m4BA2B56A0EB03E04AECC09FFCF0B4320A4788AD6_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tCE349946DF6DE9EA66C168BF8F86F155DB2F96D6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tCE349946DF6DE9EA66C168BF8F86F155DB2F96D6);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tCE349946DF6DE9EA66C168BF8F86F155DB2F96D6);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26062));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26063));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26064));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:204>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26065));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26066));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = UnsafeList_1_AsReadOnlySpan_m658FB0F8507A508C7EE03D00734D06611B703400((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26066));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_tCE349946DF6DE9EA66C168BF8F86F155DB2F96D6);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26067));
		int32_t L_4;
		L_4 = NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_mE0D8EC4A54AAE12B4588D4254D004A219311A6EF(L_0, il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_tCE349946DF6DE9EA66C168BF8F86F155DB2F96D6), L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26067));
		V_1 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:205>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26068));
		int32_t L_5 = V_1;
		return L_5;
	}
}
// Method Definition Index: 52634
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_m0B57431881D9F67C3BDA5D83629DB00DCCDF1BC8_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericStruct ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t793E0D03910858DC2B73D845B262490416204DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t793E0D03910858DC2B73D845B262490416204DEC);
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t793E0D03910858DC2B73D845B262490416204DEC);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr), (&___1_length), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_value : &___2_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25987));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 25988));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25989));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:49>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25990));
		Il2CppFullySharedGenericStruct* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		il2cpp_codegen_memcpy(L_2, ___2_value, SizeOf_T_t793E0D03910858DC2B73D845B262490416204DEC);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25991));
		int32_t L_5;
		L_5 = NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_mB5FB2889BCE2830E30498F3DE5DFE26901C0C878(L_0, L_1, il2cpp_codegen_memcpy(L_4, L_2, SizeOf_T_t793E0D03910858DC2B73D845B262490416204DEC), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25991));
		V_1 = L_5;
		goto IL_0015;
	}

IL_0015:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:50>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25992));
		int32_t L_6 = V_1;
		return L_6;
	}
}
// Method Definition Index: 52645
// Method Definition Index: 52645
// Method Definition Index: 52645
// Method Definition Index: 52637
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m18BDEFA9ACBD2B0621A230F42CA1190C13E40A59_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t86EC7AD22FF03426071C18A93C53C043090B2574 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t4B8E50D69A3C0C52BFA0AC809A656B78ACD7003D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t86EC7AD22FF03426071C18A93C53C043090B2574);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t86EC7AD22FF03426071C18A93C53C043090B2574);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t4B8E50D69A3C0C52BFA0AC809A656B78ACD7003D);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_t4B8E50D69A3C0C52BFA0AC809A656B78ACD7003D);
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___2_comp : &___2_comp));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26027));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26028));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26029));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:122>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26030));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26031));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = NativeArray_1_AsReadOnlySpan_mEDF5E795C5FC628766F2016DFB498E87E36BA3A0((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26031));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_t86EC7AD22FF03426071C18A93C53C043090B2574);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___2_comp : &___2_comp), SizeOf_U_t4B8E50D69A3C0C52BFA0AC809A656B78ACD7003D);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26032));
		int32_t L_5;
		L_5 = NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA4AD54929CBC51F673331E05EF70F1A3C61783BD(L_0, il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_t86EC7AD22FF03426071C18A93C53C043090B2574), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_4, L_2, SizeOf_U_t4B8E50D69A3C0C52BFA0AC809A656B78ACD7003D): *(void**)L_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26032));
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:123>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26033));
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 52641
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mEB3008F32EC83831765762622BBB11C6B7BC1D7C_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tAC1ED13514DC7721E37F0E9428452F902803F44E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t5E1257891E5DF132ADA82279AABD722E91B20974 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tAC1ED13514DC7721E37F0E9428452F902803F44E);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tAC1ED13514DC7721E37F0E9428452F902803F44E);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t5E1257891E5DF132ADA82279AABD722E91B20974);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_t5E1257891E5DF132ADA82279AABD722E91B20974);
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___2_comp : &___2_comp));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26055));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26056));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26057));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:189>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26058));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26059));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = NativeList_1_AsReadOnlySpan_m9B73FBB50388B80F5882E4C29601D1A20DE81C43((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26059));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_tAC1ED13514DC7721E37F0E9428452F902803F44E);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___2_comp : &___2_comp), SizeOf_U_t5E1257891E5DF132ADA82279AABD722E91B20974);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26060));
		int32_t L_5;
		L_5 = NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA4AD54929CBC51F673331E05EF70F1A3C61783BD(L_0, il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_tAC1ED13514DC7721E37F0E9428452F902803F44E), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_4, L_2, SizeOf_U_t5E1257891E5DF132ADA82279AABD722E91B20974): *(void**)L_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26060));
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:190>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26061));
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 52647
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mD435A28E9461F36F9490F8E0CF60763FE5B5EED3_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t64CE80799B6032C409B9A49995F3A1337ED365A9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const uint32_t SizeOf_U_tCEA9DF823DA80CDD134DEEC8EAA2130FF21B9F33 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t64CE80799B6032C409B9A49995F3A1337ED365A9);
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t64CE80799B6032C409B9A49995F3A1337ED365A9);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_tCEA9DF823DA80CDD134DEEC8EAA2130FF21B9F33);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_U_tCEA9DF823DA80CDD134DEEC8EAA2130FF21B9F33);
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_comp : &___2_comp));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26103));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26104));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26105));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:297>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26106));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26107));
		void* L_1;
		L_1 = NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26107));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26108));
		int32_t L_2;
		L_2 = NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_inline((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26108));
		il2cpp_codegen_memcpy(L_3, ___1_value, SizeOf_T_t64CE80799B6032C409B9A49995F3A1337ED365A9);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_comp : &___2_comp), SizeOf_U_tCEA9DF823DA80CDD134DEEC8EAA2130FF21B9F33);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26109));
		int32_t L_7;
		L_7 = NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m8C0FBAD1AF39307C240BF78F1446848F39A6D0CF((Il2CppFullySharedGenericStruct*)L_1, L_2, il2cpp_codegen_memcpy(L_5, L_3, SizeOf_T_t64CE80799B6032C409B9A49995F3A1337ED365A9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? il2cpp_codegen_memcpy(L_6, L_4, SizeOf_U_tCEA9DF823DA80CDD134DEEC8EAA2130FF21B9F33): *(void**)L_4), il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26109));
		V_0 = L_7;
		goto IL_0018;
	}

IL_0018:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:298>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26110));
		int32_t L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 52639
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m67CE23383C6721FDEF03FE37FD31C02F398B4C2B_fshared (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 ___0_container, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t5D28F59E0D72A034D6A60808B64A7E730475AD9A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_tF656C53A883AF4D5D9B227B29DB4D0D684C05432 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t5D28F59E0D72A034D6A60808B64A7E730475AD9A);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t5D28F59E0D72A034D6A60808B64A7E730475AD9A);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_tF656C53A883AF4D5D9B227B29DB4D0D684C05432);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_tF656C53A883AF4D5D9B227B29DB4D0D684C05432);
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___2_comp : &___2_comp));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26041));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26042));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26043));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:156>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26044));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26045));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = ReadOnly_AsReadOnlySpan_m64C20F2CC8054C58682D3CB09F2D1B7109C17950((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26045));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_t5D28F59E0D72A034D6A60808B64A7E730475AD9A);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___2_comp : &___2_comp), SizeOf_U_tF656C53A883AF4D5D9B227B29DB4D0D684C05432);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26046));
		int32_t L_5;
		L_5 = NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA4AD54929CBC51F673331E05EF70F1A3C61783BD(L_0, il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_t5D28F59E0D72A034D6A60808B64A7E730475AD9A), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_4, L_2, SizeOf_U_tF656C53A883AF4D5D9B227B29DB4D0D684C05432): *(void**)L_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26046));
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:157>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26047));
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 52645
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA4AD54929CBC51F673331E05EF70F1A3C61783BD_fshared (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_roSpan, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tFB475C5E064202303E533828917CA17C0D122CE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const uint32_t SizeOf_U_tA10B3B582BC01AC97091AB427AF659549EF5A739 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_tFB475C5E064202303E533828917CA17C0D122CE3);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_tFB475C5E064202303E533828917CA17C0D122CE3);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_U_tA10B3B582BC01AC97091AB427AF659549EF5A739);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_U_tA10B3B582BC01AC97091AB427AF659549EF5A739);
	int32_t V_0 = 0;
	bool V_1 = false;
	Il2CppFullySharedGenericStruct* V_2 = NULL;
	Il2CppFullySharedGenericStruct* V_3 = NULL;
	int32_t V_4 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_roSpan), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_comp : &___2_comp));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26082));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26083));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26084));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26085));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26086));
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m3CC53FCCDE299F21DEF7AB63EF3D378DAB954005_inline((&___0_roSpan), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26086));
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:256>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26087));
		int32_t L_1 = V_0;
		V_1 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26088));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26089));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26090));
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = ReadOnlySpan_1_get_Item_mAFFA21964234394982172838F35555A4D5681233_inline((&___0_roSpan), 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26090));
		V_3 = L_3;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:258>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26091));
		Il2CppFullySharedGenericStruct* L_4 = V_3;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_4,NULL));
		V_2 = (Il2CppFullySharedGenericStruct*)L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26092));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:260>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26093));
		Il2CppFullySharedGenericStruct* L_6 = V_2;
		int32_t L_7 = V_0;
		il2cpp_codegen_memcpy(L_8, ___1_value, SizeOf_T_tFB475C5E064202303E533828917CA17C0D122CE3);
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_comp : &___2_comp), SizeOf_U_tA10B3B582BC01AC97091AB427AF659549EF5A739);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26094));
		int32_t L_12;
		L_12 = NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m8C0FBAD1AF39307C240BF78F1446848F39A6D0CF(L_6, L_7, il2cpp_codegen_memcpy(L_10, L_8, SizeOf_T_tFB475C5E064202303E533828917CA17C0D122CE3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? il2cpp_codegen_memcpy(L_11, L_9, SizeOf_U_tA10B3B582BC01AC97091AB427AF659549EF5A739): *(void**)L_9), il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26094));
		V_4 = L_12;
		goto IL_0031;
	}

IL_002c:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:264>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26095));
		V_4 = (-1);
		goto IL_0031;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:265>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26096));
		int32_t L_13 = V_4;
		return L_13;
	}
}
// Method Definition Index: 52643
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mE55072B5E1ACDB3644FBC3A1E093674E369CBFFB_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tBE9BDD9637297B0CE397C47A92971E02E573170A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t1201D6465E6320EFCBD3E5906FA139D9C48D10A0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tBE9BDD9637297B0CE397C47A92971E02E573170A);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tBE9BDD9637297B0CE397C47A92971E02E573170A);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t1201D6465E6320EFCBD3E5906FA139D9C48D10A0);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_t1201D6465E6320EFCBD3E5906FA139D9C48D10A0);
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___2_comp : &___2_comp));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26069));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26070));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26071));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:222>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26072));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26073));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = UnsafeList_1_AsReadOnlySpan_m658FB0F8507A508C7EE03D00734D06611B703400((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26073));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_tBE9BDD9637297B0CE397C47A92971E02E573170A);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___2_comp : &___2_comp), SizeOf_U_t1201D6465E6320EFCBD3E5906FA139D9C48D10A0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26074));
		int32_t L_5;
		L_5 = NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA4AD54929CBC51F673331E05EF70F1A3C61783BD(L_0, il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_tBE9BDD9637297B0CE397C47A92971E02E573170A), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_4, L_2, SizeOf_U_t1201D6465E6320EFCBD3E5906FA139D9C48D10A0): *(void**)L_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26074));
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:223>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26075));
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 52647
// Method Definition Index: 52645
// Method Definition Index: 52635
// Method Definition Index: 52635
// Method Definition Index: 52635
// Method Definition Index: 52635
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m8C0FBAD1AF39307C240BF78F1446848F39A6D0CF_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericStruct ___2_value, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericStruct V_3 = alloca(SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
	memset(V_3, 0, SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr), (&___1_length), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_value : &___2_value), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___3_comp : &___3_comp));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), V_3, (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25993));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 25994));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25995));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:69>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25996));
		V_0 = 0;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:71>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25997));
		int32_t L_0 = ___1_length;
		V_1 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25998));
		goto IL_005b;
	}

IL_0007:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 25999));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:73>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26000));
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)(L_2>>1))));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:74>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26001));
		Il2CppFullySharedGenericStruct* L_3 = ___0_ptr;
		int32_t L_4 = V_2;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D;
		il2cpp_codegen_memcpy(L_7, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(L_5, (int32_t)L_6)))), SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
		il2cpp_codegen_memcpy(V_3, L_7, SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:75>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26002));
		il2cpp_codegen_memcpy(L_8, ___2_value, SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
		il2cpp_codegen_memcpy(L_9, V_3, SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26003));
		Il2CppConstrainedCallData L_11;
		Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___3_comp : &___3_comp), &L_11, L_10);
		int32_t L_13 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_12, L_11.method,L_11.thisPtr, L_8, L_9);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26003));
		V_4 = L_13;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:76>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26004));
		int32_t L_14 = V_4;
		V_5 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26005));
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0041;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26006));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:78>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26007));
		int32_t L_16 = V_2;
		V_6 = L_16;
		goto IL_006b;
	}

IL_0041:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:81>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26008));
		int32_t L_17 = V_4;
		V_7 = (bool)((((int32_t)L_17) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26009));
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0056;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26010));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:83>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26011));
		int32_t L_19 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:84>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26012));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26013));
	}

IL_0056:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26014));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:71>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26015));
		int32_t L_21 = V_1;
		V_1 = ((int32_t)(L_21>>1));
	}

IL_005b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:71>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26016));
		int32_t L_22 = V_1;
		V_8 = (bool)((!(((uint32_t)L_22) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26017));
		bool L_23 = V_8;
		if (L_23)
		{
			goto IL_0007;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:88>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26018));
		int32_t L_24 = V_0;
		V_6 = ((~L_24));
		goto IL_006b;
	}

IL_006b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:89>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26019));
		int32_t L_25 = V_6;
		return L_25;
	}
}
// Method Definition Index: 52635
// Method Definition Index: 52693
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_CheckComparer_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m85F09B28E4C56532C553F26702140AD780B0C83F_fshared (Il2CppFullySharedGenericStruct* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_21 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_27 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_34 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_42 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_50 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_56 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	const Il2CppFullySharedGenericStruct L_18 = L_3;
	const Il2CppFullySharedGenericStruct L_25 = L_3;
	const Il2CppFullySharedGenericStruct L_32 = L_3;
	const Il2CppFullySharedGenericStruct L_40 = L_3;
	const Il2CppFullySharedGenericStruct L_48 = L_3;
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	const Il2CppFullySharedGenericStruct L_19 = L_4;
	const Il2CppFullySharedGenericStruct L_26 = L_4;
	const Il2CppFullySharedGenericStruct L_33 = L_4;
	const Il2CppFullySharedGenericStruct L_41 = L_4;
	const Il2CppFullySharedGenericStruct L_49 = L_4;
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	const Il2CppFullySharedGenericStruct L_20 = L_5;
	const Il2CppFullySharedGenericStruct L_54 = L_5;
	const Il2CppFullySharedGenericStruct L_55 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	bool V_0 = false;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	memset(V_1, 0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Il2CppFullySharedGenericStruct V_5 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	memset(V_5, 0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_length), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_1, (&V_3), (&V_4), V_5);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26769));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26770));
	int32_t G_B7_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26771));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1155>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26772));
		int32_t L_0 = ___1_length;
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26773));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0120;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26774));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1157>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26775));
		Il2CppFullySharedGenericStruct* L_2 = ___0_array;
		il2cpp_codegen_memcpy(L_3, L_2, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(V_1, L_3, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1159>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26776));
		il2cpp_codegen_memcpy(L_4, V_1, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_5, V_1, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26777));
		Il2CppConstrainedCallData L_7;
		Il2CppMethodPointer L_8 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_7, L_6);
		int32_t L_9 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_8, L_7.method,L_7.thisPtr, L_4, L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26777));
		V_2 = (bool)((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26778));
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0036;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26779));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1161>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26780));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26781));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19710C29C28F677ED5E80B5C8FFB9B9F5CD6AB3A)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26781));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0036:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1164>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26782));
		V_3 = 1;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1164>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26783));
		int32_t L_12 = ___1_length;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26784));
		int32_t L_13;
		L_13 = math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline(L_12, 8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26784));
		V_4 = L_13;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26785));
		goto IL_0111;
	}

IL_0046:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26786));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1166>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26787));
		Il2CppFullySharedGenericStruct* L_14 = ___0_array;
		int32_t L_15 = V_3;
		intptr_t L_16 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_15,NULL));
		uint32_t L_17 = SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619;
		il2cpp_codegen_memcpy(L_18, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(L_16, (int32_t)L_17)))), SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(V_5, L_18, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1168>
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1169>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26788));
		il2cpp_codegen_memcpy(L_19, V_1, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_20, V_5, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26789));
		Il2CppConstrainedCallData L_22;
		Il2CppMethodPointer L_23 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_22, L_21);
		int32_t L_24 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_23, L_22.method,L_22.thisPtr, L_19, L_20);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26789));
		if (L_24)
		{
			goto IL_0080;
		}
	}
	{
		il2cpp_codegen_memcpy(L_25, V_5, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_26, V_1, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26790));
		Il2CppConstrainedCallData L_28;
		Il2CppMethodPointer L_29 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_28, L_27);
		int32_t L_30 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_29, L_28.method,L_28.thisPtr, L_25, L_26);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26790));
		G_B7_0 = ((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		goto IL_0081;
	}

IL_0080:
	{
		G_B7_0 = 0;
	}

IL_0081:
	{
		V_6 = (bool)G_B7_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26791));
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_008d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26792));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1171>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26793));
		goto IL_010d;
	}

IL_008d:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1174>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26794));
		il2cpp_codegen_memcpy(L_32, V_1, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_33, V_5, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26795));
		Il2CppConstrainedCallData L_35;
		Il2CppMethodPointer L_36 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_35, L_34);
		int32_t L_37 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_36, L_35.method,L_35.thisPtr, L_32, L_33);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26795));
		V_7 = (bool)((((int32_t)L_37) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26796));
		bool L_38 = V_7;
		if (!L_38)
		{
			goto IL_00b2;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26797));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1176>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26798));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26799));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_39 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_39, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0166BFBEA755AEC68D894E2718E0F43AC621B48E)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26799));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, method);
	}

IL_00b2:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1179>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26800));
		il2cpp_codegen_memcpy(L_40, V_5, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_41, V_1, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26801));
		Il2CppConstrainedCallData L_43;
		Il2CppMethodPointer L_44 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_43, L_42);
		int32_t L_45 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_44, L_43.method,L_43.thisPtr, L_40, L_41);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26801));
		V_8 = (bool)((((int32_t)L_45) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26802));
		bool L_46 = V_8;
		if (!L_46)
		{
			goto IL_00d7;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26803));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1181>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26804));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26805));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_47 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F08B108AE90A47E2C4B3A0DC16321A36C9AFB54)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26805));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00d7:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1184>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26806));
		il2cpp_codegen_memcpy(L_48, V_1, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_49, V_5, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26807));
		Il2CppConstrainedCallData L_51;
		Il2CppMethodPointer L_52 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_51, L_50);
		int32_t L_53 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_52, L_51.method,L_51.thisPtr, L_48, L_49);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26807));
		il2cpp_codegen_memcpy(L_54, V_5, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_55, V_1, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26808));
		Il2CppConstrainedCallData L_57;
		Il2CppMethodPointer L_58 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_57, L_56);
		int32_t L_59 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_58, L_57.method,L_57.thisPtr, L_54, L_55);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26808));
		V_9 = (bool)((((int32_t)L_53) == ((int32_t)L_59))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26809));
		bool L_60 = V_9;
		if (!L_60)
		{
			goto IL_010b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26810));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1186>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26811));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26812));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_61 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_61, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF83955BF61125FC832C506DE4DB5985B784A2C0)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26812));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_61, method);
	}

IL_010b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1189>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26813));
		goto IL_011f;
	}

IL_010d:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1164>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26814));
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0111:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1164>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26815));
		int32_t L_63 = V_3;
		int32_t L_64 = V_4;
		V_10 = (bool)((((int32_t)L_63) < ((int32_t)L_64))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26816));
		bool L_65 = V_10;
		if (L_65)
		{
			goto IL_0046;
		}
	}

IL_011f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26817));
	}

IL_0120:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1192>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26818));
		return;
	}
}
// Method Definition Index: 52692
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_CheckStrideMatchesSize_TisIl2CppFullySharedGenericStruct_mA73CB99208E9AE13EAB0F7E1854579E56B98B6E1_fshared (int32_t ___0_stride, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t1E4378C7A520A3CCB1C179FD37AC45442DD53E36 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_stride));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26760));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26761));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26762));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1144>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26763));
		int32_t L_0 = ___0_stride;
		uint32_t L_1 = SizeOf_T_t1E4378C7A520A3CCB1C179FD37AC45442DD53E36;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26764));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26765));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1146>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26766));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26767));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9DDDC1BB86D19164517493AC7ED9674192AFD37)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26767));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001d:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1148>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26768));
		return;
	}
}
// Method Definition Index: 52680
// Method Definition Index: 52680
// Method Definition Index: 52680
// Method Definition Index: 52680
// Method Definition Index: 52680
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m161F46C88A71F876EBED90282ED530DCA0E9A657_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE);
	const Il2CppFullySharedGenericAny L_20 = L_7;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE);
	const Il2CppFullySharedGenericAny L_21 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_lo), (&___2_hi), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26463));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26464));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26465));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:910>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26466));
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:912>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26467));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26468));
		goto IL_001e;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26469));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:914>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26470));
		void* L_3 = ___0_array;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_lo;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26471));
		NativeSortExtension_Heapify_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m0AA47961221DDE83E16CD07FB4C4DC6635F44756(L_3, L_4, L_5, L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_8, L_7, SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE): *(void**)L_7), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26471));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26472));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:912>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26473));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
	}

IL_001e:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:912>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26474));
		int32_t L_10 = V_1;
		V_2 = (bool)((((int32_t)((((int32_t)L_10) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26475));
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:917>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26476));
		int32_t L_12 = V_0;
		V_3 = L_12;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26477));
		goto IL_004d;
	}

IL_002d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26478));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:919>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26479));
		void* L_13 = ___0_array;
		int32_t L_14 = ___1_lo;
		int32_t L_15 = ___1_lo;
		int32_t L_16 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26480));
		NativeSortExtension_Swap_TisIl2CppFullySharedGenericStruct_m657D09FBF8CC0DCADE61F3DC08251120E778AAEF(L_13, L_14, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_15, L_16)), 1)), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26480));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:920>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26481));
		void* L_17 = ___0_array;
		int32_t L_18 = V_3;
		int32_t L_19 = ___1_lo;
		il2cpp_codegen_memcpy(L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26482));
		NativeSortExtension_Heapify_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m0AA47961221DDE83E16CD07FB4C4DC6635F44756(L_17, 1, ((int32_t)il2cpp_codegen_subtract(L_18, 1)), L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_21, L_20, SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE): *(void**)L_20), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26482));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26483));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:917>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26484));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
	}

IL_004d:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:917>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26485));
		int32_t L_23 = V_3;
		V_4 = (bool)((((int32_t)L_23) > ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26486));
		bool L_24 = V_4;
		if (L_24)
		{
			goto IL_002d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:922>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26487));
		return;
	}
}
// Method Definition Index: 52680
// Method Definition Index: 52688
// Method Definition Index: 52688
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m2CC31064DF6368EAF82AC8B93E49B5672AB577F8_fshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t6EB6498AFAF7133B4FC1AA574C78C3DB3AB44C6F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_U_t6EB6498AFAF7133B4FC1AA574C78C3DB3AB44C6F);
	const Il2CppFullySharedGenericAny L_24 = L_9;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_U_t6EB6498AFAF7133B4FC1AA574C78C3DB3AB44C6F);
	const Il2CppFullySharedGenericAny L_25 = L_10;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_lo), (&___2_hi), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26675));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26676));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26677));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1079>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26678));
		int32_t* L_0 = ___2_hi;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		int32_t* L_2 = ___1_lo;
		int32_t L_3 = il2cpp_codegen_ldind<int32_t, int32_t>(L_2);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_1, L_3)), 1));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1081>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26679));
		int32_t L_4 = V_0;
		V_1 = ((int32_t)(L_4/2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26680));
		goto IL_0020;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26681));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1083>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26682));
		void* L_5 = ___0_array;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		int32_t* L_8 = ___1_lo;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t6EB6498AFAF7133B4FC1AA574C78C3DB3AB44C6F);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26683));
		NativeSortExtension_HeapifyStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6B0A1FA3EA057556E42D3B8022C12B8256BDE921(L_5, L_6, L_7, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_10, L_9, SizeOf_U_t6EB6498AFAF7133B4FC1AA574C78C3DB3AB44C6F): *(void**)L_9), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26683));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26684));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1081>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26685));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_0020:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1081>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26686));
		int32_t L_12 = V_1;
		V_2 = (bool)((((int32_t)((((int32_t)L_12) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26687));
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_000f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1086>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26688));
		int32_t L_14 = V_0;
		V_3 = L_14;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26689));
		goto IL_0051;
	}

IL_002f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26690));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1088>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26691));
		void* L_15 = ___0_array;
		int32_t* L_16 = ___1_lo;
		int32_t L_17 = il2cpp_codegen_ldind<int32_t, int32_t>(L_16);
		int32_t* L_18 = ___1_lo;
		int32_t L_19 = il2cpp_codegen_ldind<int32_t, int32_t>(L_18);
		int32_t L_20 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26692));
		NativeSortExtension_SwapStruct_TisIl2CppFullySharedGenericStruct_m9261658699D5BEE6D69B7E825EEA155299319C24(L_15, L_17, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_19, L_20)), 1)), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26692));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1089>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26693));
		void* L_21 = ___0_array;
		int32_t L_22 = V_3;
		int32_t* L_23 = ___1_lo;
		il2cpp_codegen_memcpy(L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t6EB6498AFAF7133B4FC1AA574C78C3DB3AB44C6F);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26694));
		NativeSortExtension_HeapifyStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6B0A1FA3EA057556E42D3B8022C12B8256BDE921(L_21, 1, ((int32_t)il2cpp_codegen_subtract(L_22, 1)), L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_25, L_24, SizeOf_U_t6EB6498AFAF7133B4FC1AA574C78C3DB3AB44C6F): *(void**)L_24), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26694));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26695));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1086>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26696));
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
	}

IL_0051:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1086>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26697));
		int32_t L_27 = V_3;
		V_4 = (bool)((((int32_t)L_27) > ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26698));
		bool L_28 = V_4;
		if (L_28)
		{
			goto IL_002f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1091>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26699));
		return;
	}
}
// Method Definition Index: 52681
// Method Definition Index: 52681
// Method Definition Index: 52681
// Method Definition Index: 52681
// Method Definition Index: 52681
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m0AA47961221DDE83E16CD07FB4C4DC6635F44756_fshared (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	void* L_18 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_32 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
	const Il2CppFullySharedGenericStruct L_13 = L_3;
	const Il2CppFullySharedGenericStruct L_30 = L_3;
	const Il2CppFullySharedGenericStruct L_43 = L_3;
	const Il2CppFullySharedGenericStruct L_52 = L_3;
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
	const Il2CppFullySharedGenericStruct L_31 = L_17;
	const Il2CppFullySharedGenericStruct L_44 = L_17;
	const Il2CppFullySharedGenericStruct L_53 = L_17;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	const Il2CppFullySharedGenericAny L_9 = L_7;
	const Il2CppFullySharedGenericAny L_24 = L_7;
	const Il2CppFullySharedGenericAny L_26 = L_7;
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
	memset(V_0, 0, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
	int32_t V_1 = 0;
	bool V_2 = false;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	memset(V_3, 0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	bool V_4 = false;
	bool V_5 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_i), (&___2_n), (&___3_lo), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0, (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26488));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26489));
	Il2CppFullySharedGenericAny G_B4_0 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	memset(G_B4_0, 0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	memset(G_B3_0, 0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	int32_t G_B6_0 = 0;
	Il2CppFullySharedGenericAny G_B10_0 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	memset(G_B10_0, 0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	Il2CppFullySharedGenericAny G_B9_0 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	memset(G_B9_0, 0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26490));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:928>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26491));
		void* L_0 = ___0_array;
		int32_t L_1 = ___3_lo;
		int32_t L_2 = ___1_i;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26492));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1)), (Il2CppFullySharedGenericStruct*)L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26492));
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26493));
		goto IL_00bc;
	}

IL_0012:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26494));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:932>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26495));
		int32_t L_4 = ___1_i;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_4));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:934>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26496));
		int32_t L_5 = V_1;
		int32_t L_6 = ___2_n;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(L_7, V_3, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		bool L_8 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 2), L_7);
		if (L_8)
		{
			il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
			goto IL_0035;
		}
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	}
	{
		il2cpp_codegen_memcpy(L_9, G_B3_0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(V_3, L_9, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	}

IL_0035:
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___3_lo;
		int32_t L_12 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26497));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_11, L_12)), 1)), (Il2CppFullySharedGenericStruct*)L_13, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26497));
		void* L_14 = ___0_array;
		int32_t L_15 = ___3_lo;
		int32_t L_16 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26498));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), (Il2CppFullySharedGenericStruct*)L_17, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26498));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26499));
		Il2CppConstrainedCallData L_19;
		Il2CppMethodPointer L_20 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)G_B4_0, &L_19, L_18);
		int32_t L_21 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_20, L_19.method,L_19.thisPtr, L_13, L_17);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26499));
		G_B6_0 = ((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		goto IL_005a;
	}

IL_0059:
	{
		G_B6_0 = 0;
	}

IL_005a:
	{
		V_2 = (bool)G_B6_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26500));
		bool L_22 = V_2;
		if (!L_22)
		{
			goto IL_0064;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26501));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:936>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26502));
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26503));
	}

IL_0064:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:939>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26504));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(L_24, V_3, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		bool L_25 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 2), L_24);
		if (L_25)
		{
			il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
			goto IL_007e;
		}
		il2cpp_codegen_memcpy(G_B9_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	}
	{
		il2cpp_codegen_memcpy(L_26, G_B9_0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(V_3, L_26, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	}

IL_007e:
	{
		void* L_27 = ___0_array;
		int32_t L_28 = ___3_lo;
		int32_t L_29 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26505));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_27, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_28, L_29)), 1)), (Il2CppFullySharedGenericStruct*)L_30, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26505));
		il2cpp_codegen_memcpy(L_31, V_0, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26506));
		Il2CppConstrainedCallData L_33;
		Il2CppMethodPointer L_34 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)G_B10_0, &L_33, L_32);
		int32_t L_35 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_34, L_33.method,L_33.thisPtr, L_30, L_31);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26506));
		V_4 = (bool)((((int32_t)L_35) < ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26507));
		bool L_36 = V_4;
		if (!L_36)
		{
			goto IL_00a1;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26508));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:941>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26509));
		goto IL_00ce;
	}

IL_00a1:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:944>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26510));
		void* L_37 = ___0_array;
		int32_t L_38 = ___3_lo;
		int32_t L_39 = ___1_i;
		void* L_40 = ___0_array;
		int32_t L_41 = ___3_lo;
		int32_t L_42 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26511));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_42)), 1)), (Il2CppFullySharedGenericStruct*)L_43, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26511));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26512));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_37, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_38, L_39)), 1)), il2cpp_codegen_memcpy(L_44, L_43, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E), il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26512));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:945>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26513));
		int32_t L_45 = V_1;
		___1_i = L_45;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26514));
	}

IL_00bc:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:930>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26515));
		int32_t L_46 = ___1_i;
		int32_t L_47 = ___2_n;
		V_5 = (bool)((((int32_t)((((int32_t)L_46) > ((int32_t)((int32_t)(L_47/2))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26516));
		bool L_48 = V_5;
		if (L_48)
		{
			goto IL_0012;
		}
	}

IL_00ce:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:948>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26517));
		void* L_49 = ___0_array;
		int32_t L_50 = ___3_lo;
		int32_t L_51 = ___1_i;
		il2cpp_codegen_memcpy(L_52, V_0, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26518));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_49, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_50, L_51)), 1)), il2cpp_codegen_memcpy(L_53, L_52, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E), il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26518));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:949>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26519));
		return;
	}
}
// Method Definition Index: 52681
// Method Definition Index: 52689
// Method Definition Index: 52689
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapifyStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6B0A1FA3EA057556E42D3B8022C12B8256BDE921_fshared (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t* ___3_lo, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	void* L_21 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_36 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
	const Il2CppFullySharedGenericStruct L_15 = L_4;
	const Il2CppFullySharedGenericStruct L_34 = L_4;
	const Il2CppFullySharedGenericStruct L_49 = L_4;
	const Il2CppFullySharedGenericStruct L_59 = L_4;
	const Il2CppFullySharedGenericStruct L_20 = alloca(SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
	const Il2CppFullySharedGenericStruct L_35 = L_20;
	const Il2CppFullySharedGenericStruct L_50 = L_20;
	const Il2CppFullySharedGenericStruct L_60 = L_20;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	const Il2CppFullySharedGenericAny L_10 = L_8;
	const Il2CppFullySharedGenericAny L_27 = L_8;
	const Il2CppFullySharedGenericAny L_29 = L_8;
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
	memset(V_0, 0, SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
	int32_t V_1 = 0;
	bool V_2 = false;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	memset(V_3, 0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	bool V_4 = false;
	bool V_5 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_i), (&___2_n), (&___3_lo), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0, (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26700));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26701));
	Il2CppFullySharedGenericAny G_B4_0 = alloca(SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	memset(G_B4_0, 0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	memset(G_B3_0, 0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	int32_t G_B6_0 = 0;
	Il2CppFullySharedGenericAny G_B10_0 = alloca(SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	memset(G_B10_0, 0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	Il2CppFullySharedGenericAny G_B9_0 = alloca(SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	memset(G_B9_0, 0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26702));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1097>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26703));
		void* L_0 = ___0_array;
		int32_t* L_1 = ___3_lo;
		int32_t L_2 = il2cpp_codegen_ldind<int32_t, int32_t>(L_1);
		int32_t L_3 = ___1_i;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26704));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_2, L_3)), 1)), (Il2CppFullySharedGenericStruct*)L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26704));
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26705));
		goto IL_00c2;
	}

IL_0013:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26706));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1101>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26707));
		int32_t L_5 = ___1_i;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_5));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1103>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26708));
		int32_t L_6 = V_1;
		int32_t L_7 = ___2_n;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_005c;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		il2cpp_codegen_memcpy(L_8, V_3, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		bool L_9 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 2), L_8);
		if (L_9)
		{
			il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
			goto IL_0036;
		}
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	}
	{
		il2cpp_codegen_memcpy(L_10, G_B3_0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		il2cpp_codegen_memcpy(V_3, L_10, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	}

IL_0036:
	{
		void* L_11 = ___0_array;
		int32_t* L_12 = ___3_lo;
		int32_t L_13 = il2cpp_codegen_ldind<int32_t, int32_t>(L_12);
		int32_t L_14 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26709));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_11, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_13, L_14)), 1)), (Il2CppFullySharedGenericStruct*)L_15, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26709));
		void* L_16 = ___0_array;
		int32_t* L_17 = ___3_lo;
		int32_t L_18 = il2cpp_codegen_ldind<int32_t, int32_t>(L_17);
		int32_t L_19 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26710));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_16, ((int32_t)il2cpp_codegen_add(L_18, L_19)), (Il2CppFullySharedGenericStruct*)L_20, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26710));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26711));
		Il2CppConstrainedCallData L_22;
		Il2CppMethodPointer L_23 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)G_B4_0, &L_22, L_21);
		int32_t L_24 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_23, L_22.method,L_22.thisPtr, L_15, L_20);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26711));
		G_B6_0 = ((((int32_t)L_24) < ((int32_t)0))? 1 : 0);
		goto IL_005d;
	}

IL_005c:
	{
		G_B6_0 = 0;
	}

IL_005d:
	{
		V_2 = (bool)G_B6_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26712));
		bool L_25 = V_2;
		if (!L_25)
		{
			goto IL_0067;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26713));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1105>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26714));
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26715));
	}

IL_0067:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1108>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26716));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		il2cpp_codegen_memcpy(L_27, V_3, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		bool L_28 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 2), L_27);
		if (L_28)
		{
			il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
			goto IL_0081;
		}
		il2cpp_codegen_memcpy(G_B9_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	}
	{
		il2cpp_codegen_memcpy(L_29, G_B9_0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		il2cpp_codegen_memcpy(V_3, L_29, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	}

IL_0081:
	{
		void* L_30 = ___0_array;
		int32_t* L_31 = ___3_lo;
		int32_t L_32 = il2cpp_codegen_ldind<int32_t, int32_t>(L_31);
		int32_t L_33 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26717));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_30, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_32, L_33)), 1)), (Il2CppFullySharedGenericStruct*)L_34, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26717));
		il2cpp_codegen_memcpy(L_35, V_0, SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26718));
		Il2CppConstrainedCallData L_37;
		Il2CppMethodPointer L_38 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)G_B10_0, &L_37, L_36);
		int32_t L_39 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_38, L_37.method,L_37.thisPtr, L_34, L_35);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26718));
		V_4 = (bool)((((int32_t)L_39) < ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26719));
		bool L_40 = V_4;
		if (!L_40)
		{
			goto IL_00a5;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26720));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1110>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26721));
		goto IL_00d4;
	}

IL_00a5:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1113>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26722));
		void* L_41 = ___0_array;
		int32_t* L_42 = ___3_lo;
		int32_t L_43 = il2cpp_codegen_ldind<int32_t, int32_t>(L_42);
		int32_t L_44 = ___1_i;
		void* L_45 = ___0_array;
		int32_t* L_46 = ___3_lo;
		int32_t L_47 = il2cpp_codegen_ldind<int32_t, int32_t>(L_46);
		int32_t L_48 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26723));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_45, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_47, L_48)), 1)), (Il2CppFullySharedGenericStruct*)L_49, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26723));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26724));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_41, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_43, L_44)), 1)), il2cpp_codegen_memcpy(L_50, L_49, SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5), il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26724));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1114>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26725));
		int32_t L_51 = V_1;
		___1_i = L_51;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26726));
	}

IL_00c2:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1099>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26727));
		int32_t L_52 = ___1_i;
		int32_t L_53 = ___2_n;
		V_5 = (bool)((((int32_t)((((int32_t)L_52) > ((int32_t)((int32_t)(L_53/2))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26728));
		bool L_54 = V_5;
		if (L_54)
		{
			goto IL_0013;
		}
	}

IL_00d4:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1117>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26729));
		void* L_55 = ___0_array;
		int32_t* L_56 = ___3_lo;
		int32_t L_57 = il2cpp_codegen_ldind<int32_t, int32_t>(L_56);
		int32_t L_58 = ___1_i;
		il2cpp_codegen_memcpy(L_59, V_0, SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26730));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_55, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_57, L_58)), 1)), il2cpp_codegen_memcpy(L_60, L_59, SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5), il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26730));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1118>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26731));
		return;
	}
}
// Method Definition Index: 52678
// Method Definition Index: 52678
// Method Definition Index: 52678
// Method Definition Index: 52678
// Method Definition Index: 52678
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1C2A4A941C9938043B515BF59D9169D0066A8F1F_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_21 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
	const Il2CppFullySharedGenericStruct L_9 = L_4;
	const Il2CppFullySharedGenericStruct L_17 = L_4;
	const Il2CppFullySharedGenericStruct L_28 = L_4;
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
	const Il2CppFullySharedGenericStruct L_20 = L_10;
	const Il2CppFullySharedGenericStruct L_29 = L_10;
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	const Il2CppFullySharedGenericAny L_16 = L_14;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
	memset(V_2, 0, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
	bool V_3 = false;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	memset(V_4, 0, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	bool V_5 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_lo), (&___2_hi), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), V_2);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26392));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26393));
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	memset(G_B6_0, 0, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	Il2CppFullySharedGenericAny G_B5_0 = alloca(SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	memset(G_B5_0, 0, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	int32_t G_B8_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26394));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:858>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26395));
		int32_t L_0 = ___1_lo;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26396));
		goto IL_0078;
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26397));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:860>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26398));
		int32_t L_1 = V_0;
		V_1 = L_1;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:862>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26399));
		void* L_2 = ___0_array;
		int32_t L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26400));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), (Il2CppFullySharedGenericStruct*)L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26400));
		il2cpp_codegen_memcpy(V_2, L_4, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26401));
		goto IL_002b;
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26402));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:865>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26403));
		void* L_5 = ___0_array;
		int32_t L_6 = V_1;
		void* L_7 = ___0_array;
		int32_t L_8 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26404));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_7, L_8, (Il2CppFullySharedGenericStruct*)L_9, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26404));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26405));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), il2cpp_codegen_memcpy(L_10, L_9, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26405));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:866>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26406));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26407));
	}

IL_002b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:863>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26408));
		int32_t L_12 = V_1;
		int32_t L_13 = ___1_lo;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0063;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
		il2cpp_codegen_memcpy(L_14, V_4, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
		bool L_15 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 3), L_14);
		if (L_15)
		{
			il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
			goto IL_004b;
		}
		il2cpp_codegen_memcpy(G_B5_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	}
	{
		il2cpp_codegen_memcpy(L_16, G_B5_0, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
		il2cpp_codegen_memcpy(V_4, L_16, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	}

IL_004b:
	{
		il2cpp_codegen_memcpy(L_17, V_2, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
		void* L_18 = ___0_array;
		int32_t L_19 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26409));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_18, L_19, (Il2CppFullySharedGenericStruct*)L_20, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26409));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26410));
		Il2CppConstrainedCallData L_22;
		Il2CppMethodPointer L_23 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B6_0, &L_22, L_21);
		int32_t L_24 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_23, L_22.method,L_22.thisPtr, L_17, L_20);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26410));
		G_B8_0 = ((((int32_t)L_24) < ((int32_t)0))? 1 : 0);
		goto IL_0064;
	}

IL_0063:
	{
		G_B8_0 = 0;
	}

IL_0064:
	{
		V_3 = (bool)G_B8_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26411));
		bool L_25 = V_3;
		if (L_25)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:869>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26412));
		void* L_26 = ___0_array;
		int32_t L_27 = V_1;
		il2cpp_codegen_memcpy(L_28, V_2, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26413));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_26, ((int32_t)il2cpp_codegen_add(L_27, 1)), il2cpp_codegen_memcpy(L_29, L_28, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26413));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26414));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:858>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26415));
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0078:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:858>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26416));
		int32_t L_31 = V_0;
		int32_t L_32 = ___2_hi;
		V_5 = (bool)((((int32_t)L_31) < ((int32_t)L_32))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26417));
		bool L_33 = V_5;
		if (L_33)
		{
			goto IL_0005;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:871>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26418));
		return;
	}
}
// Method Definition Index: 52678
// Method Definition Index: 52686
// Method Definition Index: 52686
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC6CFFB0A8FC1BF15EAECA35C424AEF6EC0770471_fshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_23 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
	const Il2CppFullySharedGenericStruct L_10 = L_5;
	const Il2CppFullySharedGenericStruct L_19 = L_5;
	const Il2CppFullySharedGenericStruct L_30 = L_5;
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
	const Il2CppFullySharedGenericStruct L_22 = L_11;
	const Il2CppFullySharedGenericStruct L_31 = L_11;
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	const Il2CppFullySharedGenericAny L_18 = L_16;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
	memset(V_2, 0, SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
	bool V_3 = false;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	memset(V_4, 0, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	bool V_5 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_lo), (&___2_hi), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), V_2);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26604));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26605));
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	memset(G_B6_0, 0, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	Il2CppFullySharedGenericAny G_B5_0 = alloca(SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	memset(G_B5_0, 0, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	int32_t G_B8_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26606));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1029>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26607));
		int32_t* L_0 = ___1_lo;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26608));
		goto IL_007a;
	}

IL_0006:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26609));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1031>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26610));
		int32_t L_2 = V_0;
		V_1 = L_2;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1032>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26611));
		void* L_3 = ___0_array;
		int32_t L_4 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26612));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_3, ((int32_t)il2cpp_codegen_add(L_4, 1)), (Il2CppFullySharedGenericStruct*)L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26612));
		il2cpp_codegen_memcpy(V_2, L_5, SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26613));
		goto IL_002c;
	}

IL_0015:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26614));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1035>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26615));
		void* L_6 = ___0_array;
		int32_t L_7 = V_1;
		void* L_8 = ___0_array;
		int32_t L_9 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26616));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_8, L_9, (Il2CppFullySharedGenericStruct*)L_10, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26616));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26617));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), il2cpp_codegen_memcpy(L_11, L_10, SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26617));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1036>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26618));
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26619));
	}

IL_002c:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1033>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26620));
		int32_t L_13 = V_1;
		int32_t* L_14 = ___1_lo;
		int32_t L_15 = il2cpp_codegen_ldind<int32_t, int32_t>(L_14);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0065;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
		il2cpp_codegen_memcpy(L_16, V_4, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
		bool L_17 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 3), L_16);
		if (L_17)
		{
			il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
			goto IL_004d;
		}
		il2cpp_codegen_memcpy(G_B5_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	}
	{
		il2cpp_codegen_memcpy(L_18, G_B5_0, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
		il2cpp_codegen_memcpy(V_4, L_18, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	}

IL_004d:
	{
		il2cpp_codegen_memcpy(L_19, V_2, SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
		void* L_20 = ___0_array;
		int32_t L_21 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26621));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_20, L_21, (Il2CppFullySharedGenericStruct*)L_22, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26621));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26622));
		Il2CppConstrainedCallData L_24;
		Il2CppMethodPointer L_25 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B6_0, &L_24, L_23);
		int32_t L_26 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_25, L_24.method,L_24.thisPtr, L_19, L_22);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26622));
		G_B8_0 = ((((int32_t)L_26) < ((int32_t)0))? 1 : 0);
		goto IL_0066;
	}

IL_0065:
	{
		G_B8_0 = 0;
	}

IL_0066:
	{
		V_3 = (bool)G_B8_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26623));
		bool L_27 = V_3;
		if (L_27)
		{
			goto IL_0015;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1038>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26624));
		void* L_28 = ___0_array;
		int32_t L_29 = V_1;
		il2cpp_codegen_memcpy(L_30, V_2, SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26625));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_28, ((int32_t)il2cpp_codegen_add(L_29, 1)), il2cpp_codegen_memcpy(L_31, L_30, SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26625));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26626));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1029>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26627));
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_007a:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1029>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26628));
		int32_t L_33 = V_0;
		int32_t* L_34 = ___2_hi;
		int32_t L_35 = il2cpp_codegen_ldind<int32_t, int32_t>(L_34);
		V_5 = (bool)((((int32_t)L_33) < ((int32_t)L_35))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26629));
		bool L_36 = V_5;
		if (L_36)
		{
			goto IL_0006;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1040>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26630));
		return;
	}
}
// Method Definition Index: 52676
// Method Definition Index: 52676
// Method Definition Index: 52676
// Method Definition Index: 52676
// Method Definition Index: 52676
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1BA8C658F1FBC5741051F484F1DC355BD941EDBF_fshared (void* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t984657F3CA449F6965F5B6A61D21C535A3B6AD2F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_t984657F3CA449F6965F5B6A61D21C535A3B6AD2F);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_U_t984657F3CA449F6965F5B6A61D21C535A3B6AD2F);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_length), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_comp : &___2_comp));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26337));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26338));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26339));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:803>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26340));
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_length;
		int32_t L_2 = ___1_length;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26341));
		int32_t L_3;
		L_3 = CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26341));
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_comp : &___2_comp), SizeOf_U_t984657F3CA449F6965F5B6A61D21C535A3B6AD2F);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26342));
		NativeSortExtension_IntroSort_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mE7D2E7D393807B71500A81BC5FDE51DB09E4FEB8(L_0, 0, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), ((int32_t)il2cpp_codegen_multiply(2, L_3)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_5, L_4, SizeOf_U_t984657F3CA449F6965F5B6A61D21C535A3B6AD2F): *(void**)L_4), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26342));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:804>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26343));
		return;
	}
}
// Method Definition Index: 52676
// Method Definition Index: 52676
// Method Definition Index: 52684
// Method Definition Index: 52684
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m61BCDF19FE675663E30578C052D29F6003D56756_fshared (void* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t4F6752C130AC1C36A17CEAC700E4F057F6DDC553 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_t4F6752C130AC1C36A17CEAC700E4F057F6DDC553);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_U_t4F6752C130AC1C36A17CEAC700E4F057F6DDC553);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_length), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_comp : &___2_comp));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26548));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26549));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26550));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:975>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26551));
		void* L_0 = ___0_array;
		V_0 = 0;
		int32_t L_1 = ___1_length;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		int32_t L_2 = ___1_length;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26552));
		int32_t L_3;
		L_3 = CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26552));
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_comp : &___2_comp), SizeOf_U_t4F6752C130AC1C36A17CEAC700E4F057F6DDC553);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26553));
		NativeSortExtension_IntroSortStruct_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m27C179EA7B364CA3BA2C517B4C526F7142C7A6A2(L_0, (&V_0), (&V_1), ((int32_t)il2cpp_codegen_multiply(2, L_3)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_5, L_4, SizeOf_U_t4F6752C130AC1C36A17CEAC700E4F057F6DDC553): *(void**)L_4), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26553));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:976>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26554));
		return;
	}
}
// Method Definition Index: 52684
// Method Definition Index: 52685
// Method Definition Index: 52685
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSortStruct_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m27C179EA7B364CA3BA2C517B4C526F7142C7A6A2_fshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2__hi, int32_t ___3_depth, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
	const Il2CppFullySharedGenericAny L_23 = L_15;
	const Il2CppFullySharedGenericAny L_38 = L_15;
	const Il2CppFullySharedGenericAny L_44 = L_15;
	const Il2CppFullySharedGenericAny L_49 = L_15;
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
	const Il2CppFullySharedGenericAny L_24 = L_16;
	const Il2CppFullySharedGenericAny L_39 = L_16;
	const Il2CppFullySharedGenericAny L_45 = L_16;
	const Il2CppFullySharedGenericAny L_50 = L_16;
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
	const Il2CppFullySharedGenericAny L_55 = L_29;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
	const Il2CppFullySharedGenericAny L_56 = L_30;
	const Il2CppFullySharedGenericAny L_34 = alloca(SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
	const Il2CppFullySharedGenericAny L_35 = alloca(SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_lo), (&___2__hi), (&___3_depth), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26555));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26556));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26557));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:982>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26558));
		int32_t* L_0 = ___2__hi;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26559));
		goto IL_00ce;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26560));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:986>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26561));
		int32_t L_2 = V_0;
		int32_t* L_3 = ___1_lo;
		int32_t L_4 = il2cpp_codegen_ldind<int32_t, int32_t>(L_3);
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_2, L_4)), 1));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:987>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26562));
		int32_t L_5 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_5) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26563));
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_008c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26564));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:989>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26565));
		int32_t L_7 = V_1;
		V_4 = (bool)((((int32_t)L_7) == ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26566));
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_002e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26567));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:991>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26568));
		goto IL_00dc;
	}

IL_002e:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:993>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26569));
		int32_t L_9 = V_1;
		V_5 = (bool)((((int32_t)L_9) == ((int32_t)2))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26570));
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_004a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26571));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:995>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26572));
		void* L_11 = ___0_array;
		int32_t* L_12 = ___1_lo;
		int32_t L_13 = il2cpp_codegen_ldind<int32_t, int32_t>(L_12);
		int32_t L_14 = V_0;
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26573));
		NativeSortExtension_SwapIfGreaterWithItemsStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mABB5AA1A8A886F39277828BE310D8FDE2424F322(L_11, L_13, L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_16, L_15, SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46): *(void**)L_15), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26573));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:996>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26574));
		goto IL_00dc;
	}

IL_004a:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:998>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26575));
		int32_t L_17 = V_1;
		V_6 = (bool)((((int32_t)L_17) == ((int32_t)3))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26576));
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_007e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26577));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1000>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26578));
		void* L_19 = ___0_array;
		int32_t* L_20 = ___1_lo;
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(L_20);
		int32_t L_22 = V_0;
		il2cpp_codegen_memcpy(L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26579));
		NativeSortExtension_SwapIfGreaterWithItemsStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mABB5AA1A8A886F39277828BE310D8FDE2424F322(L_19, L_21, ((int32_t)il2cpp_codegen_subtract(L_22, 1)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_24, L_23, SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46): *(void**)L_23), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26579));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1001>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26580));
		void* L_25 = ___0_array;
		int32_t* L_26 = ___1_lo;
		int32_t L_27 = il2cpp_codegen_ldind<int32_t, int32_t>(L_26);
		int32_t L_28 = V_0;
		il2cpp_codegen_memcpy(L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26581));
		NativeSortExtension_SwapIfGreaterWithItemsStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mABB5AA1A8A886F39277828BE310D8FDE2424F322(L_25, L_27, L_28, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_30, L_29, SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46): *(void**)L_29), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26581));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1002>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26582));
		void* L_31 = ___0_array;
		int32_t L_32 = V_0;
		int32_t L_33 = V_0;
		il2cpp_codegen_memcpy(L_34, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26583));
		NativeSortExtension_SwapIfGreaterWithItemsStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mABB5AA1A8A886F39277828BE310D8FDE2424F322(L_31, ((int32_t)il2cpp_codegen_subtract(L_32, 1)), L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_35, L_34, SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46): *(void**)L_34), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26583));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1003>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26584));
		goto IL_00dc;
	}

IL_007e:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1006>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26585));
		void* L_36 = ___0_array;
		int32_t* L_37 = ___1_lo;
		il2cpp_codegen_memcpy(L_38, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26586));
		NativeSortExtension_InsertionSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC6CFFB0A8FC1BF15EAECA35C424AEF6EC0770471(L_36, L_37, (&V_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_39, L_38, SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46): *(void**)L_38), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26586));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1007>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26587));
		goto IL_00dc;
	}

IL_008c:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1010>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26588));
		int32_t L_40 = ___3_depth;
		V_7 = (bool)((((int32_t)L_40) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26589));
		bool L_41 = V_7;
		if (!L_41)
		{
			goto IL_00a5;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26590));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1012>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26591));
		void* L_42 = ___0_array;
		int32_t* L_43 = ___1_lo;
		il2cpp_codegen_memcpy(L_44, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26592));
		NativeSortExtension_HeapSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m2CC31064DF6368EAF82AC8B93E49B5672AB577F8(L_42, L_43, (&V_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_45, L_44, SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46): *(void**)L_44), il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26592));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1013>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26593));
		goto IL_00dc;
	}

IL_00a5:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1015>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26594));
		int32_t L_46 = ___3_depth;
		___3_depth = ((int32_t)il2cpp_codegen_subtract(L_46, 1));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1017>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26595));
		void* L_47 = ___0_array;
		int32_t* L_48 = ___1_lo;
		il2cpp_codegen_memcpy(L_49, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26596));
		int32_t L_51;
		L_51 = NativeSortExtension_PartitionStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m73AD8A0117E3A2C21C4A32B60389FD87BFF08909(L_47, L_48, (&V_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_50, L_49, SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46): *(void**)L_49), il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26596));
		V_2 = L_51;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1018>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26597));
		void* L_52 = ___0_array;
		int32_t L_53 = V_2;
		V_8 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		int32_t L_54 = ___3_depth;
		il2cpp_codegen_memcpy(L_55, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26598));
		NativeSortExtension_IntroSortStruct_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m27C179EA7B364CA3BA2C517B4C526F7142C7A6A2(L_52, (&V_8), (&V_0), L_54, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_56, L_55, SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46): *(void**)L_55), il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26598));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1019>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26599));
		int32_t L_57 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_57, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26600));
	}

IL_00ce:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:984>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26601));
		int32_t L_58 = V_0;
		int32_t* L_59 = ___1_lo;
		int32_t L_60 = il2cpp_codegen_ldind<int32_t, int32_t>(L_59);
		V_9 = (bool)((((int32_t)L_58) > ((int32_t)L_60))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26602));
		bool L_61 = V_9;
		if (L_61)
		{
			goto IL_0009;
		}
	}

IL_00dc:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1021>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26603));
		return;
	}
}
// Method Definition Index: 52677
// Method Definition Index: 52677
// Method Definition Index: 52677
// Method Definition Index: 52677
// Method Definition Index: 52677
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mE7D2E7D393807B71500A81BC5FDE51DB09E4FEB8_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
	const Il2CppFullySharedGenericAny L_18 = L_11;
	const Il2CppFullySharedGenericAny L_33 = L_11;
	const Il2CppFullySharedGenericAny L_40 = L_11;
	const Il2CppFullySharedGenericAny L_46 = L_11;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
	const Il2CppFullySharedGenericAny L_19 = L_12;
	const Il2CppFullySharedGenericAny L_34 = L_12;
	const Il2CppFullySharedGenericAny L_41 = L_12;
	const Il2CppFullySharedGenericAny L_47 = L_12;
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
	const Il2CppFullySharedGenericAny L_53 = L_23;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
	const Il2CppFullySharedGenericAny L_54 = L_24;
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_lo), (&___2_hi), (&___3_depth), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26344));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26345));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26346));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26347));
		goto IL_00be;
	}

IL_0006:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26348));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:815>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26349));
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:816>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26350));
		int32_t L_2 = V_0;
		V_2 = (bool)((((int32_t)((((int32_t)L_2) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26351));
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0082;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26352));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:818>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26353));
		int32_t L_4 = V_0;
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26354));
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26355));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:820>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26356));
		goto IL_00cb;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:822>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26357));
		int32_t L_6 = V_0;
		V_4 = (bool)((((int32_t)L_6) == ((int32_t)2))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26358));
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26359));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:824>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26360));
		void* L_8 = ___0_array;
		int32_t L_9 = ___1_lo;
		int32_t L_10 = ___2_hi;
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26361));
		NativeSortExtension_SwapIfGreaterWithItems_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m7087041FF408AE8DAAA069326FE6A617E9E0EF3C(L_8, L_9, L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_12, L_11, SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D): *(void**)L_11), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26361));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:825>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26362));
		goto IL_00cb;
	}

IL_0043:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:827>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26363));
		int32_t L_13 = V_0;
		V_5 = (bool)((((int32_t)L_13) == ((int32_t)3))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26364));
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0075;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26365));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:829>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26366));
		void* L_15 = ___0_array;
		int32_t L_16 = ___1_lo;
		int32_t L_17 = ___2_hi;
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26367));
		NativeSortExtension_SwapIfGreaterWithItems_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m7087041FF408AE8DAAA069326FE6A617E9E0EF3C(L_15, L_16, ((int32_t)il2cpp_codegen_subtract(L_17, 1)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_19, L_18, SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D): *(void**)L_18), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26367));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:830>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26368));
		void* L_20 = ___0_array;
		int32_t L_21 = ___1_lo;
		int32_t L_22 = ___2_hi;
		il2cpp_codegen_memcpy(L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26369));
		NativeSortExtension_SwapIfGreaterWithItems_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m7087041FF408AE8DAAA069326FE6A617E9E0EF3C(L_20, L_21, L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_24, L_23, SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D): *(void**)L_23), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26369));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:831>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26370));
		void* L_25 = ___0_array;
		int32_t L_26 = ___2_hi;
		int32_t L_27 = ___2_hi;
		il2cpp_codegen_memcpy(L_28, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26371));
		NativeSortExtension_SwapIfGreaterWithItems_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m7087041FF408AE8DAAA069326FE6A617E9E0EF3C(L_25, ((int32_t)il2cpp_codegen_subtract(L_26, 1)), L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_29, L_28, SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D): *(void**)L_28), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26371));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:832>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26372));
		goto IL_00cb;
	}

IL_0075:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:835>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26373));
		void* L_30 = ___0_array;
		int32_t L_31 = ___1_lo;
		int32_t L_32 = ___2_hi;
		il2cpp_codegen_memcpy(L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26374));
		NativeSortExtension_InsertionSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1C2A4A941C9938043B515BF59D9169D0066A8F1F(L_30, L_31, L_32, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_34, L_33, SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D): *(void**)L_33), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26374));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:836>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26375));
		goto IL_00cb;
	}

IL_0082:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:839>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26376));
		int32_t L_35 = ___3_depth;
		V_6 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26377));
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_009a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26378));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:841>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26379));
		void* L_37 = ___0_array;
		int32_t L_38 = ___1_lo;
		int32_t L_39 = ___2_hi;
		il2cpp_codegen_memcpy(L_40, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26380));
		NativeSortExtension_HeapSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m161F46C88A71F876EBED90282ED530DCA0E9A657(L_37, L_38, L_39, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_41, L_40, SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D): *(void**)L_40), il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26380));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:842>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26381));
		goto IL_00cb;
	}

IL_009a:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:844>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26382));
		int32_t L_42 = ___3_depth;
		___3_depth = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:846>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26383));
		void* L_43 = ___0_array;
		int32_t L_44 = ___1_lo;
		int32_t L_45 = ___2_hi;
		il2cpp_codegen_memcpy(L_46, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26384));
		int32_t L_48;
		L_48 = NativeSortExtension_Partition_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6BB9FFB51FC10B9DC7A645E05CB970F49DD9C278(L_43, L_44, L_45, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_47, L_46, SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D): *(void**)L_46), il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26384));
		V_1 = L_48;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:847>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26385));
		void* L_49 = ___0_array;
		int32_t L_50 = V_1;
		int32_t L_51 = ___2_hi;
		int32_t L_52 = ___3_depth;
		il2cpp_codegen_memcpy(L_53, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26386));
		NativeSortExtension_IntroSort_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mE7D2E7D393807B71500A81BC5FDE51DB09E4FEB8(L_49, ((int32_t)il2cpp_codegen_add(L_50, 1)), L_51, L_52, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_54, L_53, SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D): *(void**)L_53), il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26386));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:848>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26387));
		int32_t L_55 = V_1;
		___2_hi = ((int32_t)il2cpp_codegen_subtract(L_55, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26388));
	}

IL_00be:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:813>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26389));
		int32_t L_56 = ___2_hi;
		int32_t L_57 = ___1_lo;
		V_7 = (bool)((((int32_t)L_56) > ((int32_t)L_57))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26390));
		bool L_58 = V_7;
		if (L_58)
		{
			goto IL_0006;
		}
	}

IL_00cb:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:850>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26391));
		return;
	}
}
// Method Definition Index: 52677
// Method Definition Index: 52679
// Method Definition Index: 52679
// Method Definition Index: 52679
// Method Definition Index: 52679
// Method Definition Index: 52679
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6BB9FFB51FC10B9DC7A645E05CB970F49DD9C278_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const uint32_t SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_36 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_51 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_20 = alloca(SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
	const Il2CppFullySharedGenericStruct L_31 = L_20;
	const Il2CppFullySharedGenericStruct L_46 = L_20;
	const Il2CppFullySharedGenericStruct L_35 = alloca(SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
	const Il2CppFullySharedGenericStruct L_50 = L_35;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	const Il2CppFullySharedGenericAny L_28 = L_6;
	const Il2CppFullySharedGenericAny L_30 = L_6;
	const Il2CppFullySharedGenericAny L_43 = L_6;
	const Il2CppFullySharedGenericAny L_45 = L_6;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
	memset(V_1, 0, SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	memset(V_5, 0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_lo), (&___2_hi), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), V_1, (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26419));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26420));
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	memset(G_B6_0, 0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	Il2CppFullySharedGenericAny G_B5_0 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	memset(G_B5_0, 0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	int32_t G_B8_0 = 0;
	Il2CppFullySharedGenericAny G_B14_0 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	memset(G_B14_0, 0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	Il2CppFullySharedGenericAny G_B13_0 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	memset(G_B13_0, 0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	int32_t G_B16_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26421));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:877>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26422));
		int32_t L_0 = ___1_lo;
		int32_t L_1 = ___2_hi;
		int32_t L_2 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, L_2))/2))));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:878>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26423));
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lo;
		int32_t L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26424));
		NativeSortExtension_SwapIfGreaterWithItems_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m7087041FF408AE8DAAA069326FE6A617E9E0EF3C(L_3, L_4, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_7, L_6, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4): *(void**)L_6), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26424));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:879>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26425));
		void* L_8 = ___0_array;
		int32_t L_9 = ___1_lo;
		int32_t L_10 = ___2_hi;
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26426));
		NativeSortExtension_SwapIfGreaterWithItems_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m7087041FF408AE8DAAA069326FE6A617E9E0EF3C(L_8, L_9, L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_12, L_11, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4): *(void**)L_11), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26426));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:880>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26427));
		void* L_13 = ___0_array;
		int32_t L_14 = V_0;
		int32_t L_15 = ___2_hi;
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26428));
		NativeSortExtension_SwapIfGreaterWithItems_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m7087041FF408AE8DAAA069326FE6A617E9E0EF3C(L_13, L_14, L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_17, L_16, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4): *(void**)L_16), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26428));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:882>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26429));
		void* L_18 = ___0_array;
		int32_t L_19 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26430));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_18, L_19, (Il2CppFullySharedGenericStruct*)L_20, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26430));
		il2cpp_codegen_memcpy(V_1, L_20, SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:883>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26431));
		void* L_21 = ___0_array;
		int32_t L_22 = V_0;
		int32_t L_23 = ___2_hi;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26432));
		NativeSortExtension_Swap_TisIl2CppFullySharedGenericStruct_m657D09FBF8CC0DCADE61F3DC08251120E778AAEF(L_21, L_22, ((int32_t)il2cpp_codegen_subtract(L_23, 1)), il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26432));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:884>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26433));
		int32_t L_24 = ___1_lo;
		V_2 = L_24;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:884>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26434));
		int32_t L_25 = ___2_hi;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26435));
		goto IL_00ed;
	}

IL_0045:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26436));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26437));
		goto IL_004a;
	}

IL_0048:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26438));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26439));
	}

IL_004a:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:888>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26440));
		int32_t L_26 = V_2;
		int32_t L_27 = ___2_hi;
		if ((((int32_t)L_26) >= ((int32_t)L_27)))
		{
			goto IL_0086;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(L_28, V_5, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		bool L_29 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_28);
		if (L_29)
		{
			il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
			goto IL_006a;
		}
		il2cpp_codegen_memcpy(G_B5_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	}
	{
		il2cpp_codegen_memcpy(L_30, G_B5_0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(V_5, L_30, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_5, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	}

IL_006a:
	{
		il2cpp_codegen_memcpy(L_31, V_1, SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
		void* L_32 = ___0_array;
		int32_t L_33 = V_2;
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		V_2 = L_34;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26441));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_32, L_34, (Il2CppFullySharedGenericStruct*)L_35, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26441));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26442));
		Il2CppConstrainedCallData L_37;
		Il2CppMethodPointer L_38 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)G_B6_0, &L_37, L_36);
		int32_t L_39 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_38, L_37.method,L_37.thisPtr, L_31, L_35);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26442));
		G_B8_0 = ((((int32_t)L_39) > ((int32_t)0))? 1 : 0);
		goto IL_0087;
	}

IL_0086:
	{
		G_B8_0 = 0;
	}

IL_0087:
	{
		V_4 = (bool)G_B8_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26443));
		bool L_40 = V_4;
		if (L_40)
		{
			goto IL_0048;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26444));
		goto IL_0091;
	}

IL_008f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26445));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26446));
	}

IL_0091:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:892>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26447));
		int32_t L_41 = V_3;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) <= ((int32_t)L_42)))
		{
			goto IL_00cd;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(L_43, V_5, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		bool L_44 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_43);
		if (L_44)
		{
			il2cpp_codegen_memcpy(G_B14_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
			goto IL_00b1;
		}
		il2cpp_codegen_memcpy(G_B13_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	}
	{
		il2cpp_codegen_memcpy(L_45, G_B13_0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(V_5, L_45, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(G_B14_0, (Il2CppFullySharedGenericAny*)V_5, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	}

IL_00b1:
	{
		il2cpp_codegen_memcpy(L_46, V_1, SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
		void* L_47 = ___0_array;
		int32_t L_48 = V_3;
		int32_t L_49 = ((int32_t)il2cpp_codegen_subtract(L_48, 1));
		V_3 = L_49;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26448));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_47, L_49, (Il2CppFullySharedGenericStruct*)L_50, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26448));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26449));
		Il2CppConstrainedCallData L_52;
		Il2CppMethodPointer L_53 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)G_B14_0, &L_52, L_51);
		int32_t L_54 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_53, L_52.method,L_52.thisPtr, L_46, L_50);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26449));
		G_B16_0 = ((((int32_t)L_54) < ((int32_t)0))? 1 : 0);
		goto IL_00ce;
	}

IL_00cd:
	{
		G_B16_0 = 0;
	}

IL_00ce:
	{
		V_6 = (bool)G_B16_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26450));
		bool L_55 = V_6;
		if (L_55)
		{
			goto IL_008f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:896>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26451));
		int32_t L_56 = V_2;
		int32_t L_57 = V_3;
		V_7 = (bool)((((int32_t)((((int32_t)L_56) < ((int32_t)L_57))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26452));
		bool L_58 = V_7;
		if (!L_58)
		{
			goto IL_00e3;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:897>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26453));
		goto IL_00fa;
	}

IL_00e3:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:899>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26454));
		void* L_59 = ___0_array;
		int32_t L_60 = V_2;
		int32_t L_61 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26455));
		NativeSortExtension_Swap_TisIl2CppFullySharedGenericStruct_m657D09FBF8CC0DCADE61F3DC08251120E778AAEF(L_59, L_60, L_61, il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26455));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26456));
	}

IL_00ed:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:886>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26457));
		int32_t L_62 = V_2;
		int32_t L_63 = V_3;
		V_8 = (bool)((((int32_t)L_62) < ((int32_t)L_63))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26458));
		bool L_64 = V_8;
		if (L_64)
		{
			goto IL_0045;
		}
	}

IL_00fa:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:902>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26459));
		void* L_65 = ___0_array;
		int32_t L_66 = V_2;
		int32_t L_67 = ___2_hi;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26460));
		NativeSortExtension_Swap_TisIl2CppFullySharedGenericStruct_m657D09FBF8CC0DCADE61F3DC08251120E778AAEF(L_65, L_66, ((int32_t)il2cpp_codegen_subtract(L_67, 1)), il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26460));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:903>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26461));
		int32_t L_68 = V_2;
		V_9 = L_68;
		goto IL_010a;
	}

IL_010a:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:904>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26462));
		int32_t L_69 = V_9;
		return L_69;
	}
}
// Method Definition Index: 52679
// Method Definition Index: 52687
// Method Definition Index: 52687
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_PartitionStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m73AD8A0117E3A2C21C4A32B60389FD87BFF08909_fshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const uint32_t SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_47 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_62 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_27 = alloca(SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
	const Il2CppFullySharedGenericStruct L_42 = L_27;
	const Il2CppFullySharedGenericStruct L_57 = L_27;
	const Il2CppFullySharedGenericStruct L_46 = alloca(SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
	const Il2CppFullySharedGenericStruct L_61 = L_46;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	const Il2CppFullySharedGenericAny L_39 = L_10;
	const Il2CppFullySharedGenericAny L_41 = L_10;
	const Il2CppFullySharedGenericAny L_54 = L_10;
	const Il2CppFullySharedGenericAny L_56 = L_10;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
	memset(V_1, 0, SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	memset(V_5, 0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_lo), (&___2_hi), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), V_1, (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26631));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26632));
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	memset(G_B6_0, 0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	Il2CppFullySharedGenericAny G_B5_0 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	memset(G_B5_0, 0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	int32_t G_B8_0 = 0;
	Il2CppFullySharedGenericAny G_B14_0 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	memset(G_B14_0, 0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	Il2CppFullySharedGenericAny G_B13_0 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	memset(G_B13_0, 0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	int32_t G_B16_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26633));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1046>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26634));
		int32_t* L_0 = ___1_lo;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		int32_t* L_2 = ___2_hi;
		int32_t L_3 = il2cpp_codegen_ldind<int32_t, int32_t>(L_2);
		int32_t* L_4 = ___1_lo;
		int32_t L_5 = il2cpp_codegen_ldind<int32_t, int32_t>(L_4);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_3, L_5))/2))));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1047>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26635));
		void* L_6 = ___0_array;
		int32_t* L_7 = ___1_lo;
		int32_t L_8 = il2cpp_codegen_ldind<int32_t, int32_t>(L_7);
		int32_t L_9 = V_0;
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26636));
		NativeSortExtension_SwapIfGreaterWithItemsStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mABB5AA1A8A886F39277828BE310D8FDE2424F322(L_6, L_8, L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_11, L_10, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443): *(void**)L_10), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26636));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1048>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26637));
		void* L_12 = ___0_array;
		int32_t* L_13 = ___1_lo;
		int32_t L_14 = il2cpp_codegen_ldind<int32_t, int32_t>(L_13);
		int32_t* L_15 = ___2_hi;
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(L_15);
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26638));
		NativeSortExtension_SwapIfGreaterWithItemsStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mABB5AA1A8A886F39277828BE310D8FDE2424F322(L_12, L_14, L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_18, L_17, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443): *(void**)L_17), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26638));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1049>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26639));
		void* L_19 = ___0_array;
		int32_t L_20 = V_0;
		int32_t* L_21 = ___2_hi;
		int32_t L_22 = il2cpp_codegen_ldind<int32_t, int32_t>(L_21);
		il2cpp_codegen_memcpy(L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26640));
		NativeSortExtension_SwapIfGreaterWithItemsStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mABB5AA1A8A886F39277828BE310D8FDE2424F322(L_19, L_20, L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_24, L_23, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443): *(void**)L_23), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26640));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1051>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26641));
		void* L_25 = ___0_array;
		int32_t L_26 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26642));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_25, L_26, (Il2CppFullySharedGenericStruct*)L_27, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26642));
		il2cpp_codegen_memcpy(V_1, L_27, SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1052>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26643));
		void* L_28 = ___0_array;
		int32_t L_29 = V_0;
		int32_t* L_30 = ___2_hi;
		int32_t L_31 = il2cpp_codegen_ldind<int32_t, int32_t>(L_30);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26644));
		NativeSortExtension_SwapStruct_TisIl2CppFullySharedGenericStruct_m9261658699D5BEE6D69B7E825EEA155299319C24(L_28, L_29, ((int32_t)il2cpp_codegen_subtract(L_31, 1)), il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26644));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1053>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26645));
		int32_t* L_32 = ___1_lo;
		int32_t L_33 = il2cpp_codegen_ldind<int32_t, int32_t>(L_32);
		V_2 = L_33;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1053>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26646));
		int32_t* L_34 = ___2_hi;
		int32_t L_35 = il2cpp_codegen_ldind<int32_t, int32_t>(L_34);
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26647));
		goto IL_00f8;
	}

IL_004f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26648));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26649));
		goto IL_0054;
	}

IL_0052:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26650));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26651));
	}

IL_0054:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1057>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26652));
		int32_t L_36 = V_2;
		int32_t* L_37 = ___2_hi;
		int32_t L_38 = il2cpp_codegen_ldind<int32_t, int32_t>(L_37);
		if ((((int32_t)L_36) >= ((int32_t)L_38)))
		{
			goto IL_0091;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		il2cpp_codegen_memcpy(L_39, V_5, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		bool L_40 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_39);
		if (L_40)
		{
			il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
			goto IL_0075;
		}
		il2cpp_codegen_memcpy(G_B5_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	}
	{
		il2cpp_codegen_memcpy(L_41, G_B5_0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		il2cpp_codegen_memcpy(V_5, L_41, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_5, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	}

IL_0075:
	{
		il2cpp_codegen_memcpy(L_42, V_1, SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
		void* L_43 = ___0_array;
		int32_t L_44 = V_2;
		int32_t L_45 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		V_2 = L_45;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26653));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_43, L_45, (Il2CppFullySharedGenericStruct*)L_46, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26653));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26654));
		Il2CppConstrainedCallData L_48;
		Il2CppMethodPointer L_49 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)G_B6_0, &L_48, L_47);
		int32_t L_50 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_49, L_48.method,L_48.thisPtr, L_42, L_46);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26654));
		G_B8_0 = ((((int32_t)L_50) > ((int32_t)0))? 1 : 0);
		goto IL_0092;
	}

IL_0091:
	{
		G_B8_0 = 0;
	}

IL_0092:
	{
		V_4 = (bool)G_B8_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26655));
		bool L_51 = V_4;
		if (L_51)
		{
			goto IL_0052;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26656));
		goto IL_009c;
	}

IL_009a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26657));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26658));
	}

IL_009c:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1061>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26659));
		int32_t L_52 = V_3;
		int32_t L_53 = V_2;
		if ((((int32_t)L_52) <= ((int32_t)L_53)))
		{
			goto IL_00d8;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		il2cpp_codegen_memcpy(L_54, V_5, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		bool L_55 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_54);
		if (L_55)
		{
			il2cpp_codegen_memcpy(G_B14_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
			goto IL_00bc;
		}
		il2cpp_codegen_memcpy(G_B13_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	}
	{
		il2cpp_codegen_memcpy(L_56, G_B13_0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		il2cpp_codegen_memcpy(V_5, L_56, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		il2cpp_codegen_memcpy(G_B14_0, (Il2CppFullySharedGenericAny*)V_5, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	}

IL_00bc:
	{
		il2cpp_codegen_memcpy(L_57, V_1, SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
		void* L_58 = ___0_array;
		int32_t L_59 = V_3;
		int32_t L_60 = ((int32_t)il2cpp_codegen_subtract(L_59, 1));
		V_3 = L_60;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26660));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_58, L_60, (Il2CppFullySharedGenericStruct*)L_61, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26660));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26661));
		Il2CppConstrainedCallData L_63;
		Il2CppMethodPointer L_64 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)G_B14_0, &L_63, L_62);
		int32_t L_65 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_64, L_63.method,L_63.thisPtr, L_57, L_61);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26661));
		G_B16_0 = ((((int32_t)L_65) < ((int32_t)0))? 1 : 0);
		goto IL_00d9;
	}

IL_00d8:
	{
		G_B16_0 = 0;
	}

IL_00d9:
	{
		V_6 = (bool)G_B16_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26662));
		bool L_66 = V_6;
		if (L_66)
		{
			goto IL_009a;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1065>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26663));
		int32_t L_67 = V_2;
		int32_t L_68 = V_3;
		V_7 = (bool)((((int32_t)((((int32_t)L_67) < ((int32_t)L_68))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26664));
		bool L_69 = V_7;
		if (!L_69)
		{
			goto IL_00ee;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1066>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26665));
		goto IL_0105;
	}

IL_00ee:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1068>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26666));
		void* L_70 = ___0_array;
		int32_t L_71 = V_2;
		int32_t L_72 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26667));
		NativeSortExtension_SwapStruct_TisIl2CppFullySharedGenericStruct_m9261658699D5BEE6D69B7E825EEA155299319C24(L_70, L_71, L_72, il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26667));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26668));
	}

IL_00f8:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1055>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26669));
		int32_t L_73 = V_2;
		int32_t L_74 = V_3;
		V_8 = (bool)((((int32_t)L_73) < ((int32_t)L_74))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26670));
		bool L_75 = V_8;
		if (L_75)
		{
			goto IL_004f;
		}
	}

IL_0105:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1071>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26671));
		void* L_76 = ___0_array;
		int32_t L_77 = V_2;
		int32_t* L_78 = ___2_hi;
		int32_t L_79 = il2cpp_codegen_ldind<int32_t, int32_t>(L_78);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26672));
		NativeSortExtension_SwapStruct_TisIl2CppFullySharedGenericStruct_m9261658699D5BEE6D69B7E825EEA155299319C24(L_76, L_77, ((int32_t)il2cpp_codegen_subtract(L_79, 1)), il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26672));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1072>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26673));
		int32_t L_80 = V_2;
		V_9 = L_80;
		goto IL_0116;
	}

IL_0116:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1073>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26674));
		int32_t L_81 = V_9;
		return L_81;
	}
}
// Method Definition Index: 52656
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m3F424B0619C8F1DE51A5059CE9F9B9C77E8AD2E5_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26187));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26188));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26189));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:470>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26190));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26191));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = NativeArray_1_AsSpan_m5E5BA6DA8F13E99DA9E483864C4FE5CC56ED1259((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26191));
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26192));
		NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m457C521397981CA0D0A024FF470BA91607194EAB(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26192));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:471>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26193));
		return;
	}
}
// Method Definition Index: 52660
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m1859D96C5F86215E7A5E852801B9AE8C2B95E239_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26215));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26216));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26217));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:528>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26218));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26219));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = NativeList_1_AsSpan_m1A0A9D3ECFE64C1DE6A7D657918AD075C547E8D3((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26219));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26220));
		NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_mBF35B93651FA209CF501B41C815D071FE63CDA88(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26220));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:529>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26221));
		return;
	}
}
// Method Definition Index: 52672
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m4FEF95715361F218DC8D173A80638DD74D4CF9DC_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26305));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26306));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26307));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:739>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26308));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26309));
		NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m33CF6A0610F6ED93F84E57A1B06B8458C99A2369(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26309));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:740>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26310));
		return;
	}
}
// Method Definition Index: 52652
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_mBF35B93651FA209CF501B41C815D071FE63CDA88_fshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	Il2CppFullySharedGenericStruct* V_2 = NULL;
	Il2CppFullySharedGenericStruct* V_3 = NULL;
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_4;
	memset((&V_4), 0, sizeof(V_4));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_span));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26133));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26134));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26135));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:376>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26136));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26137));
		int32_t L_0;
		L_0 = Span_1_get_Length_m1AADCDF6D1BB9B4B07BB14C7E31273E22A096E74_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26137));
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:377>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26138));
		int32_t L_1 = V_0;
		V_1 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26139));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26140));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26141));
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&___0_span), 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26141));
		V_3 = L_3;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:379>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26142));
		Il2CppFullySharedGenericStruct* L_4 = V_3;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_4,NULL));
		V_2 = (Il2CppFullySharedGenericStruct*)L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26143));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:381>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26144));
		Il2CppFullySharedGenericStruct* L_6 = V_2;
		int32_t L_7 = V_0;
		il2cpp_codegen_initobj((&V_4), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_8 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26145));
		NativeSortExtension_IntroSortStruct_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m6F39B3D7410D7450329825AF014077A33502AB26((void*)L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26145));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26146));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26147));
		uintptr_t L_9 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_3 = (Il2CppFullySharedGenericStruct*)L_9;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26148));
	}

IL_0036:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:384>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26149));
		return;
	}
}
// Method Definition Index: 52668
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_mB449135843E754594001B0EAD70A205709265163_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26277));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26278));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26279));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:681>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26280));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26281));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = UnsafeList_1_AsSpan_mAC472C7C01C97D39BB00813DF052291C2A755417((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26281));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26282));
		NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_mBF35B93651FA209CF501B41C815D071FE63CDA88(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26282));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:682>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26283));
		return;
	}
}
// Method Definition Index: 52648
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m197B30912ECA075B47D7BD7712A9F37F52EA5D8D_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr), (&___1_length));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26111));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26112));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26113));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:311>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26114));
		Il2CppFullySharedGenericStruct* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26115));
		NativeSortExtension_IntroSort_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m953753EFB68B3528E6B4381ECB390720B5ACDD39((void*)L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26115));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:312>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26116));
		return;
	}
}
// Method Definition Index: 52653
// Method Definition Index: 52657
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m5E371D15E2A098907CED70FD190AB6E6A7A7286D_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t8392FCD72BC16205155382ED30EBB421226175FF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t8392FCD72BC16205155382ED30EBB421226175FF);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t8392FCD72BC16205155382ED30EBB421226175FF);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26194));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26195));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26196));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:485>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26197));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26198));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = NativeArray_1_AsSpan_m5E5BA6DA8F13E99DA9E483864C4FE5CC56ED1259((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26198));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp), SizeOf_U_t8392FCD72BC16205155382ED30EBB421226175FF);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26199));
		NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m9FF262B17E1E7B2DCDC9470732751FBAE353C73E(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t8392FCD72BC16205155382ED30EBB421226175FF): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26199));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:486>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26200));
		return;
	}
}
// Method Definition Index: 52661
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m740CC60990F0F5017BED9F38F26CECFCC1BA78C1_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t716BCA6917D7AE5B382B05528161A14F7E0D2216 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t716BCA6917D7AE5B382B05528161A14F7E0D2216);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t716BCA6917D7AE5B382B05528161A14F7E0D2216);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26222));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26223));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26224));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:543>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26225));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26226));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = NativeList_1_AsSpan_m1A0A9D3ECFE64C1DE6A7D657918AD075C547E8D3((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26226));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp), SizeOf_U_t716BCA6917D7AE5B382B05528161A14F7E0D2216);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26227));
		NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m9FF262B17E1E7B2DCDC9470732751FBAE353C73E(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t716BCA6917D7AE5B382B05528161A14F7E0D2216): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26227));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:544>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26228));
		return;
	}
}
// Method Definition Index: 52673
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m201F2E16B83FD461CE57913123761F986C0F912D_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_tBB6E307985DBD1BF69234321DCE63D47A5A3854A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_U_tBB6E307985DBD1BF69234321DCE63D47A5A3854A);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_U_tBB6E307985DBD1BF69234321DCE63D47A5A3854A);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___1_comp : &___1_comp));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26311));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26312));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26313));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:754>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26314));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26315));
		void* L_1;
		L_1 = NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26315));
		V_0 = (Il2CppFullySharedGenericStruct*)L_1;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:755>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26316));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26317));
		int32_t L_2;
		L_2 = NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_inline((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26317));
		V_1 = L_2;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:759>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26318));
		Il2CppFullySharedGenericStruct* L_3 = V_0;
		int32_t L_4 = V_1;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___1_comp : &___1_comp), SizeOf_U_tBB6E307985DBD1BF69234321DCE63D47A5A3854A);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26319));
		NativeSortExtension_IntroSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m61BCDF19FE675663E30578C052D29F6003D56756((void*)L_3, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_6, L_5, SizeOf_U_tBB6E307985DBD1BF69234321DCE63D47A5A3854A): *(void**)L_5), il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26319));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:760>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26320));
		return;
	}
}
// Method Definition Index: 52653
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m9FF262B17E1E7B2DCDC9470732751FBAE353C73E_fshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_tAD27A7B134D0C0741758D3AEDEB8E2EC75D7DB4F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_U_tAD27A7B134D0C0741758D3AEDEB8E2EC75D7DB4F);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_U_tAD27A7B134D0C0741758D3AEDEB8E2EC75D7DB4F);
	int32_t V_0 = 0;
	bool V_1 = false;
	Il2CppFullySharedGenericStruct* V_2 = NULL;
	Il2CppFullySharedGenericStruct* V_3 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_span), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___1_comp : &___1_comp));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26150));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26151));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26152));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:398>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26153));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26154));
		int32_t L_0;
		L_0 = Span_1_get_Length_m1AADCDF6D1BB9B4B07BB14C7E31273E22A096E74_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26154));
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:399>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26155));
		int32_t L_1 = V_0;
		V_1 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26156));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26157));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26158));
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&___0_span), 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26158));
		V_3 = L_3;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:401>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26159));
		Il2CppFullySharedGenericStruct* L_4 = V_3;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_4,NULL));
		V_2 = (Il2CppFullySharedGenericStruct*)L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26160));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:404>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26161));
		Il2CppFullySharedGenericStruct* L_6 = V_2;
		int32_t L_7 = V_0;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___1_comp : &___1_comp), SizeOf_U_tAD27A7B134D0C0741758D3AEDEB8E2EC75D7DB4F);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26162));
		NativeSortExtension_IntroSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m61BCDF19FE675663E30578C052D29F6003D56756((void*)L_6, L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_9, L_8, SizeOf_U_tAD27A7B134D0C0741758D3AEDEB8E2EC75D7DB4F): *(void**)L_8), il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26162));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26163));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26164));
		uintptr_t L_10 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_3 = (Il2CppFullySharedGenericStruct*)L_10;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26165));
	}

IL_002d:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:407>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26166));
		return;
	}
}
// Method Definition Index: 52669
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mEA0AAB94EC7DADF99B56086E173D45DD63A2AF35_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t0522B71478B41B1C4B354E36ABEFBD88E1F2B88D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t0522B71478B41B1C4B354E36ABEFBD88E1F2B88D);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t0522B71478B41B1C4B354E36ABEFBD88E1F2B88D);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26284));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26285));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26286));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:696>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26287));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26288));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = UnsafeList_1_AsSpan_mAC472C7C01C97D39BB00813DF052291C2A755417((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26288));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp), SizeOf_U_t0522B71478B41B1C4B354E36ABEFBD88E1F2B88D);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26289));
		NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m9FF262B17E1E7B2DCDC9470732751FBAE353C73E(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t0522B71478B41B1C4B354E36ABEFBD88E1F2B88D): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26289));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:697>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26290));
		return;
	}
}
// Method Definition Index: 52673
// Method Definition Index: 52653
// Method Definition Index: 52649
// Method Definition Index: 52649
// Method Definition Index: 52649
// Method Definition Index: 52649
// Method Definition Index: 52649
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC1D8773F403E942EBAE0283BDE80699517E8BBA1_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t0AA3CBE142BDF838CEA47DDD683A9421842FBB68 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t0AA3CBE142BDF838CEA47DDD683A9421842FBB68);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_U_t0AA3CBE142BDF838CEA47DDD683A9421842FBB68);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr), (&___1_length), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_comp : &___2_comp));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26117));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26118));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26119));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:328>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26120));
		Il2CppFullySharedGenericStruct* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_comp : &___2_comp), SizeOf_U_t0AA3CBE142BDF838CEA47DDD683A9421842FBB68);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26121));
		NativeSortExtension_IntroSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1BA8C658F1FBC5741051F484F1DC355BD941EDBF((void*)L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_3, L_2, SizeOf_U_t0AA3CBE142BDF838CEA47DDD683A9421842FBB68): *(void**)L_2), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26121));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:329>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26122));
		return;
	}
}
// Method Definition Index: 52649
// Method Definition Index: 52663
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortIndices_TisIl2CppFullySharedGenericStruct_m8294508A624290C25F7FD9D80316080CE83309F8_fshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_indices, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___1_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_indices), (&___1_values));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26246));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26247));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26248));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:602>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26249));
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_0 = ___0_indices;
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_1 = ___1_values;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26250));
		NativeSortExtension_SortIndices_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_mA1968F7F5487FC1290B528E1B4BBE208FD8FFEC3(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26250));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:603>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26251));
		return;
	}
}
// Method Definition Index: 52662
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortIndices_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mF75387D15CB11681384340B94B35E7AF9D80662F_fshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_indices, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___1_values, Il2CppFullySharedGenericStruct ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const uint32_t SizeOf_U_t1A65BC80DBFF9DF0B0C300328302D7C99591952D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_U_t1A65BC80DBFF9DF0B0C300328302D7C99591952D);
	const SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E L_9 = alloca(SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC);
	const SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E L_10 = alloca(SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC);
	int32_t V_0 = 0;
	bool V_1 = false;
	Il2CppFullySharedGenericStruct* V_2 = NULL;
	Il2CppFullySharedGenericStruct* V_3 = NULL;
	SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E V_4 = alloca(SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC);
	memset(V_4, 0, SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_indices), (&___1_values), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? ___2_comp : &___2_comp));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26229));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26230));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26231));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:577>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26232));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26233));
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m3CC53FCCDE299F21DEF7AB63EF3D378DAB954005_inline((&___1_values), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26233));
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:578>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26234));
		int32_t L_1 = V_0;
		V_1 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26235));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0045;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26236));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26237));
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = ReadOnlySpan_1_get_Item_mAFFA21964234394982172838F35555A4D5681233_inline((&___1_values), 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26237));
		V_3 = L_3;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:580>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26238));
		Il2CppFullySharedGenericStruct* L_4 = V_3;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_4,NULL));
		V_2 = (Il2CppFullySharedGenericStruct*)L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26239));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:582>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26240));
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_6 = ___0_indices;
		il2cpp_codegen_initobj((SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E*)V_4, SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC);
		Il2CppFullySharedGenericStruct* L_7 = V_2;
		il2cpp_codegen_write_field_data<Il2CppFullySharedGenericStruct*, false>((SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E*)V_4, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),0), il2cpp_rgctx_offset(method->rgctx_data, 3), L_7);
		il2cpp_codegen_memcpy(L_8, ___2_comp, SizeOf_U_t1A65BC80DBFF9DF0B0C300328302D7C99591952D);
		il2cpp_codegen_write_field_data<true>((SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E*)V_4, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),1), il2cpp_rgctx_offset(method->rgctx_data, 5), L_8, SizeOf_U_t1A65BC80DBFF9DF0B0C300328302D7C99591952D);
		il2cpp_codegen_memcpy(L_9, V_4, SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26241));
		NativeSortExtension_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E_m0B2E37041303826C0FE97B765B159B5ADE62F5CD(L_6, il2cpp_codegen_memcpy(L_10, L_9, SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC), il2cpp_rgctx_method(method->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26241));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26242));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26243));
		uintptr_t L_11 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_3 = (Il2CppFullySharedGenericStruct*)L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26244));
	}

IL_0045:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:585>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26245));
		return;
	}
}
// Method Definition Index: 52662
// Method Definition Index: 52658
// Method Definition Index: 52658
// Method Definition Index: 52658
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_m52C3084BCC423645720ECD04047E9DFF095C1E04_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26201));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26202));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26203));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:499>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26204));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26205));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = NativeArray_1_AsSpan_m5E5BA6DA8F13E99DA9E483864C4FE5CC56ED1259((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26205));
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26206));
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_2;
		L_2 = NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m65B440AF43CC55536C485CAF2C68C83409E133DC(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26206));
		V_1 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:500>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26207));
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_3 = V_1;
		return L_3;
	}
}
// Method Definition Index: 52664
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_mB0EF9F438D8F4C889C4190D038616A751AD65191_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26252));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26253));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26254));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:617>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26255));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26256));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = NativeList_1_AsSpan_m1A0A9D3ECFE64C1DE6A7D657918AD075C547E8D3((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26256));
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26257));
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_2;
		L_2 = NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m65B440AF43CC55536C485CAF2C68C83409E133DC(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26257));
		V_1 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:618>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26258));
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_3 = V_1;
		return L_3;
	}
}
// Method Definition Index: 52674
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_m618668B901D3B28C9500C5AF37A84C0F064D750B_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26321));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26322));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26323));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:774>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26324));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26325));
		void* L_1;
		L_1 = NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26325));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26326));
		int32_t L_2;
		L_2 = NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_inline((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26326));
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26327));
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_4;
		L_4 = NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m49FAE04A2FA1528FE91ECA368358ABD62B40A69C((Il2CppFullySharedGenericStruct*)L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26327));
		V_1 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:775>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26328));
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_5 = V_1;
		return L_5;
	}
}
// Method Definition Index: 52654
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_m0E2D3F6358F92058E2A1689788F26C5180DCA723_fshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_span));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26167));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26168));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26169));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:420>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26170));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0 = ___0_span;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26171));
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_2;
		L_2 = NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m65B440AF43CC55536C485CAF2C68C83409E133DC(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26171));
		V_1 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:421>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26172));
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_3 = V_1;
		return L_3;
	}
}
// Method Definition Index: 52670
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_mAD15487126464DAE40F7F98A11708118DC89AA8D_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26291));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26292));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26293));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:710>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26294));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26295));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = UnsafeList_1_AsSpan_mAC472C7C01C97D39BB00813DF052291C2A755417((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26295));
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26296));
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_2;
		L_2 = NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m65B440AF43CC55536C485CAF2C68C83409E133DC(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26296));
		V_1 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:711>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26297));
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_3 = V_1;
		return L_3;
	}
}
// Method Definition Index: 52650
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_mCDB8D25250D9675E93E37552EA51A8CB24C09931_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD V_0;
	memset((&V_0), 0, sizeof(V_0));
	SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr), (&___1_length));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26123));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26124));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26125));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:344>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26126));
		il2cpp_codegen_initobj((&V_0), sizeof(SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD));
		Il2CppFullySharedGenericStruct* L_0 = ___0_ptr;
		(&V_0)->___Data = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___Length = L_1;
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522* L_2 = (DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522*)(&(&V_0)->___Comp);
		il2cpp_codegen_initobj(L_2, sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_3 = V_0;
		V_1 = L_3;
		goto IL_002a;
	}

IL_002a:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:345>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26127));
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_4 = V_1;
		return L_4;
	}
}
// Method Definition Index: 52655
// Method Definition Index: 52655
// Method Definition Index: 52659
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mDEDD35A24EC7064750CF9A006D9ED072EC9CC47A_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_SortJob_2_t91AF45E9356CB7D6C30BB1201E6533ACAB970FEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const uint32_t SizeOf_U_t8C703775DC289FA78AE776C82FDD1614C468B12B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t8C703775DC289FA78AE776C82FDD1614C468B12B);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t8C703775DC289FA78AE776C82FDD1614C468B12B);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_3 = alloca(SizeOf_SortJob_2_t91AF45E9356CB7D6C30BB1201E6533ACAB970FEC);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_4 = L_3;
	SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A V_0 = alloca(SizeOf_SortJob_2_t91AF45E9356CB7D6C30BB1201E6533ACAB970FEC);
	memset(V_0, 0, SizeOf_SortJob_2_t91AF45E9356CB7D6C30BB1201E6533ACAB970FEC);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26208));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26209));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26210));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:516>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26211));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26212));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = NativeArray_1_AsSpan_m5E5BA6DA8F13E99DA9E483864C4FE5CC56ED1259((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26212));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp), SizeOf_U_t8C703775DC289FA78AE776C82FDD1614C468B12B);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26213));
		NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA47E9D98FCFFC3B156B359C1A1265D485601FBAA(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t8C703775DC289FA78AE776C82FDD1614C468B12B): *(void**)L_1), (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26213));
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_SortJob_2_t91AF45E9356CB7D6C30BB1201E6533ACAB970FEC);
		goto IL_0011;
	}

IL_0011:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:517>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26214));
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_SortJob_2_t91AF45E9356CB7D6C30BB1201E6533ACAB970FEC);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_SortJob_2_t91AF45E9356CB7D6C30BB1201E6533ACAB970FEC);
		return;
	}
}
// Method Definition Index: 52665
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mB3A64630AC80B0CD54DDB37DABCA63F03F45C57D_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_SortJob_2_tCE99FB9688E01536AB80846FA62279179AC0709A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const uint32_t SizeOf_U_t0E14C11FCB10DDF82D8692C80ED63664F909D249 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t0E14C11FCB10DDF82D8692C80ED63664F909D249);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t0E14C11FCB10DDF82D8692C80ED63664F909D249);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_3 = alloca(SizeOf_SortJob_2_tCE99FB9688E01536AB80846FA62279179AC0709A);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_4 = L_3;
	SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A V_0 = alloca(SizeOf_SortJob_2_tCE99FB9688E01536AB80846FA62279179AC0709A);
	memset(V_0, 0, SizeOf_SortJob_2_tCE99FB9688E01536AB80846FA62279179AC0709A);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26259));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26260));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26261));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:635>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26262));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26263));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = NativeList_1_AsSpan_m1A0A9D3ECFE64C1DE6A7D657918AD075C547E8D3((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26263));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp), SizeOf_U_t0E14C11FCB10DDF82D8692C80ED63664F909D249);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26264));
		NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA47E9D98FCFFC3B156B359C1A1265D485601FBAA(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t0E14C11FCB10DDF82D8692C80ED63664F909D249): *(void**)L_1), (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26264));
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_SortJob_2_tCE99FB9688E01536AB80846FA62279179AC0709A);
		goto IL_0011;
	}

IL_0011:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:636>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26265));
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_SortJob_2_tCE99FB9688E01536AB80846FA62279179AC0709A);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_SortJob_2_tCE99FB9688E01536AB80846FA62279179AC0709A);
		return;
	}
}
// Method Definition Index: 52675
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m156DD6D59CA5B809BEFB0724A56CACE0B92B035D_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_SortJob_2_t6BA338B0152457B9323965CD909F5CA799B6D1C4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	const uint32_t SizeOf_U_t02C55F23A1A61BD14220D0BFF6D029617DDF7EFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_U_t02C55F23A1A61BD14220D0BFF6D029617DDF7EFF);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_t02C55F23A1A61BD14220D0BFF6D029617DDF7EFF);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_5 = alloca(SizeOf_SortJob_2_t6BA338B0152457B9323965CD909F5CA799B6D1C4);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_6 = L_5;
	SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A V_0 = alloca(SizeOf_SortJob_2_t6BA338B0152457B9323965CD909F5CA799B6D1C4);
	memset(V_0, 0, SizeOf_SortJob_2_t6BA338B0152457B9323965CD909F5CA799B6D1C4);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___1_comp : &___1_comp));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26329));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26330));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26331));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:792>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26332));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26333));
		void* L_1;
		L_1 = NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26333));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26334));
		int32_t L_2;
		L_2 = NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_inline((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26334));
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___1_comp : &___1_comp), SizeOf_U_t02C55F23A1A61BD14220D0BFF6D029617DDF7EFF);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26335));
		NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m337928D5AC4C50E948C80C38FB30ABDD0FEDFEE2((Il2CppFullySharedGenericStruct*)L_1, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_4, L_3, SizeOf_U_t02C55F23A1A61BD14220D0BFF6D029617DDF7EFF): *(void**)L_3), (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26335));
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_SortJob_2_t6BA338B0152457B9323965CD909F5CA799B6D1C4);
		goto IL_0017;
	}

IL_0017:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:793>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26336));
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_SortJob_2_t6BA338B0152457B9323965CD909F5CA799B6D1C4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_SortJob_2_t6BA338B0152457B9323965CD909F5CA799B6D1C4);
		return;
	}
}
// Method Definition Index: 52655
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA47E9D98FCFFC3B156B359C1A1265D485601FBAA_fshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const uint32_t SizeOf_U_t4184EF00B6B20CF1D23ACC689B69FAE0AFCDD0C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_U_t4184EF00B6B20CF1D23ACC689B69FAE0AFCDD0C1);
	const Il2CppFullySharedGenericAny L_11 = L_8;
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_9 = alloca(SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_12 = L_9;
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_13 = L_9;
	int32_t V_0 = 0;
	bool V_1 = false;
	Il2CppFullySharedGenericStruct* V_2 = NULL;
	Il2CppFullySharedGenericStruct* V_3 = NULL;
	SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A V_4 = alloca(SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
	memset(V_4, 0, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
	SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A V_5 = alloca(SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
	memset(V_5, 0, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_span), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? ___1_comp : &___1_comp));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26173));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26174));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26175));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:437>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26176));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26177));
		int32_t L_0;
		L_0 = Span_1_get_Length_m1AADCDF6D1BB9B4B07BB14C7E31273E22A096E74_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26177));
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:438>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26178));
		int32_t L_1 = V_0;
		V_1 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26179));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0045;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26180));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26181));
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&___0_span), 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26181));
		V_3 = L_3;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:440>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26182));
		Il2CppFullySharedGenericStruct* L_4 = V_3;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_4,NULL));
		V_2 = (Il2CppFullySharedGenericStruct*)L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26183));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:444>
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:445>
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:446>
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:447>
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:448>
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:449>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26184));
		il2cpp_codegen_initobj((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_4, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
		Il2CppFullySharedGenericStruct* L_6 = V_2;
		il2cpp_codegen_write_field_data<Il2CppFullySharedGenericStruct*, false>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_4, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),0), il2cpp_rgctx_offset(method->rgctx_data, 3), L_6);
		int32_t L_7 = V_0;
		il2cpp_codegen_write_field_data<int32_t, false>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_4, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),2), il2cpp_rgctx_offset(method->rgctx_data, 4), L_7);
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? ___1_comp : &___1_comp), SizeOf_U_t4184EF00B6B20CF1D23ACC689B69FAE0AFCDD0C1);
		il2cpp_codegen_write_field_data<true>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_4, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),1), il2cpp_rgctx_offset(method->rgctx_data, 6), L_8, SizeOf_U_t4184EF00B6B20CF1D23ACC689B69FAE0AFCDD0C1);
		il2cpp_codegen_memcpy(L_9, V_4, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
		il2cpp_codegen_memcpy(V_5, L_9, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
		goto IL_006c;
	}

IL_0045:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:453>
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:454>
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:455>
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:456>
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:457>
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:458>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26185));
		il2cpp_codegen_initobj((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_4, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
		uintptr_t L_10 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		il2cpp_codegen_write_field_data<Il2CppFullySharedGenericStruct*, false>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_4, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),0), il2cpp_rgctx_offset(method->rgctx_data, 3), (Il2CppFullySharedGenericStruct*)L_10);
		il2cpp_codegen_write_field_data<int32_t, false>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_4, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),2), il2cpp_rgctx_offset(method->rgctx_data, 4), 0);
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? ___1_comp : &___1_comp), SizeOf_U_t4184EF00B6B20CF1D23ACC689B69FAE0AFCDD0C1);
		il2cpp_codegen_write_field_data<true>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_4, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),1), il2cpp_rgctx_offset(method->rgctx_data, 6), L_11, SizeOf_U_t4184EF00B6B20CF1D23ACC689B69FAE0AFCDD0C1);
		il2cpp_codegen_memcpy(L_12, V_4, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
		il2cpp_codegen_memcpy(V_5, L_12, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
		goto IL_006c;
	}

IL_006c:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:459>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26186));
		il2cpp_codegen_memcpy(L_13, V_5, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_13, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
		return;
	}
}
// Method Definition Index: 52671
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m803FCB042598C1E503C59013F0DD3E33DE8D5F04_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_SortJob_2_t5A79827293D20DC4A7E8D5EB4FAD12EAF62D5859 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const uint32_t SizeOf_U_tEAE35D4DEFE1BC3BB9AF8F3483A8B44B86D86D58 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_tEAE35D4DEFE1BC3BB9AF8F3483A8B44B86D86D58);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_tEAE35D4DEFE1BC3BB9AF8F3483A8B44B86D86D58);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_3 = alloca(SizeOf_SortJob_2_t5A79827293D20DC4A7E8D5EB4FAD12EAF62D5859);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_4 = L_3;
	SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A V_0 = alloca(SizeOf_SortJob_2_t5A79827293D20DC4A7E8D5EB4FAD12EAF62D5859);
	memset(V_0, 0, SizeOf_SortJob_2_t5A79827293D20DC4A7E8D5EB4FAD12EAF62D5859);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26298));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26299));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26300));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:727>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26301));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26302));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = UnsafeList_1_AsSpan_mAC472C7C01C97D39BB00813DF052291C2A755417((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26302));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp), SizeOf_U_tEAE35D4DEFE1BC3BB9AF8F3483A8B44B86D86D58);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26303));
		NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA47E9D98FCFFC3B156B359C1A1265D485601FBAA(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_tEAE35D4DEFE1BC3BB9AF8F3483A8B44B86D86D58): *(void**)L_1), (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26303));
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_SortJob_2_t5A79827293D20DC4A7E8D5EB4FAD12EAF62D5859);
		goto IL_0011;
	}

IL_0011:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:728>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26304));
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_SortJob_2_t5A79827293D20DC4A7E8D5EB4FAD12EAF62D5859);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_SortJob_2_t5A79827293D20DC4A7E8D5EB4FAD12EAF62D5859);
		return;
	}
}
// Method Definition Index: 52655
// Method Definition Index: 52651
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m337928D5AC4C50E948C80C38FB30ABDD0FEDFEE2_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_U_t42D5912367A307AEEE9667CC0F4FD8E82570C246 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t42D5912367A307AEEE9667CC0F4FD8E82570C246);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_3 = alloca(SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_4 = L_3;
	SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A V_0 = alloca(SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
	memset(V_0, 0, SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
	SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A V_1 = alloca(SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
	memset(V_1, 0, SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr), (&___1_length), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_comp : &___2_comp));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26128));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26129));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26130));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:364>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26131));
		il2cpp_codegen_initobj((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_0, SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
		Il2CppFullySharedGenericStruct* L_0 = ___0_ptr;
		il2cpp_codegen_write_field_data<Il2CppFullySharedGenericStruct*, false>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),0), il2cpp_rgctx_offset(method->rgctx_data, 1), L_0);
		int32_t L_1 = ___1_length;
		il2cpp_codegen_write_field_data<int32_t, false>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),2), il2cpp_rgctx_offset(method->rgctx_data, 2), L_1);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_comp : &___2_comp), SizeOf_U_t42D5912367A307AEEE9667CC0F4FD8E82570C246);
		il2cpp_codegen_write_field_data<true>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),1), il2cpp_rgctx_offset(method->rgctx_data, 4), L_2, SizeOf_U_t42D5912367A307AEEE9667CC0F4FD8E82570C246);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
		il2cpp_codegen_memcpy(V_1, L_3, SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
		goto IL_0025;
	}

IL_0025:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:365>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26132));
		il2cpp_codegen_memcpy(L_4, V_1, SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
		return;
	}
}
// Method Definition Index: 52651
// Method Definition Index: 52666
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJobDefer_2_t08B115591D33E0E12BE3194612F33E29C62FD509 NativeSortExtension_SortJobDefer_TisIl2CppFullySharedGenericStruct_m32EF1EDFDD285088E68A52C9FA22CF962A0315F0_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SortJobDefer_2_t08B115591D33E0E12BE3194612F33E29C62FD509 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26266));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26267));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26268));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:651>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26269));
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26270));
		SortJobDefer_2_t08B115591D33E0E12BE3194612F33E29C62FD509 L_2;
		L_2 = NativeSortExtension_SortJobDefer_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m529440F9811FE87B9175DE647132A34462413C2C(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26270));
		V_1 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:652>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26271));
		SortJobDefer_2_t08B115591D33E0E12BE3194612F33E29C62FD509 L_3 = V_1;
		return L_3;
	}
}
// Method Definition Index: 52667
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJobDefer_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m08A07FE4FC0572B5AD96D95F043F26AD8020A463_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, Il2CppFullySharedGenericAny ___1_comp, SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_U_tA3EA785A061FC1C615AD0676A68BC523D16DDB4F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_tA3EA785A061FC1C615AD0676A68BC523D16DDB4F);
	const SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A L_2 = alloca(SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
	const SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A L_3 = L_2;
	SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A V_0 = alloca(SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
	memset(V_0, 0, SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
	SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A V_1 = alloca(SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
	memset(V_1, 0, SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___1_comp : &___1_comp));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26272));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26273));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26274));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:670>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26275));
		il2cpp_codegen_initobj((SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A*)V_0, SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_0 = ___0_container;
		il2cpp_codegen_write_field_data<NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1, false>((SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),0), il2cpp_rgctx_offset(method->rgctx_data, 1), L_0);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___1_comp : &___1_comp), SizeOf_U_tA3EA785A061FC1C615AD0676A68BC523D16DDB4F);
		il2cpp_codegen_write_field_data<true>((SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),1), il2cpp_rgctx_offset(method->rgctx_data, 3), L_1, SizeOf_U_tA3EA785A061FC1C615AD0676A68BC523D16DDB4F);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
		il2cpp_codegen_memcpy(V_1, L_2, SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
		goto IL_001d;
	}

IL_001d:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:671>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26276));
		il2cpp_codegen_memcpy(L_3, V_1, SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
		return;
	}
}
// Method Definition Index: 52667
// Method Definition Index: 52682
// Method Definition Index: 52682
// Method Definition Index: 52682
// Method Definition Index: 52682
// Method Definition Index: 52682
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisIl2CppFullySharedGenericStruct_m657D09FBF8CC0DCADE61F3DC08251120E778AAEF_fshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	const Il2CppFullySharedGenericStruct L_12 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	memset(V_0, 0, SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_lhs), (&___2_rhs));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26520));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26521));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26522));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:953>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26523));
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_lhs;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26524));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26524));
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:954>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26525));
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		void* L_5 = ___0_array;
		int32_t L_6 = ___2_rhs;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26526));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_5, L_6, (Il2CppFullySharedGenericStruct*)L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26526));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26527));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_3, L_4, il2cpp_codegen_memcpy(L_8, L_7, SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26527));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:955>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26528));
		void* L_9 = ___0_array;
		int32_t L_10 = ___2_rhs;
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26529));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_9, L_10, il2cpp_codegen_memcpy(L_12, L_11, SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26529));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:956>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26530));
		return;
	}
}
// Method Definition Index: 52682
// Method Definition Index: 52683
// Method Definition Index: 52683
// Method Definition Index: 52683
// Method Definition Index: 52683
// Method Definition Index: 52683
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m7087041FF408AE8DAAA069326FE6A617E9E0EF3C_fshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_tFC2A00320878DE26C1676CA44DEC8F6FC9EA8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_tFC2A00320878DE26C1676CA44DEC8F6FC9EA8F14);
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_T_tFC2A00320878DE26C1676CA44DEC8F6FC9EA8F14);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	bool V_0 = false;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	memset(V_2, 0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_lhs), (&___2_rhs), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26531));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26532));
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	memset(G_B3_0, 0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	memset(G_B2_0, 0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26533));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:962>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26534));
		int32_t L_0 = ___1_lhs;
		int32_t L_1 = ___2_rhs;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26535));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26536));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:964>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26537));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
		il2cpp_codegen_memcpy(L_3, V_2, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_3);
		if (L_4)
		{
			il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
			goto IL_0027;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	}
	{
		il2cpp_codegen_memcpy(L_5, G_B2_0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
		il2cpp_codegen_memcpy(V_2, L_5, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	}

IL_0027:
	{
		void* L_6 = ___0_array;
		int32_t L_7 = ___1_lhs;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26538));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_6, L_7, (Il2CppFullySharedGenericStruct*)L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26538));
		void* L_9 = ___0_array;
		int32_t L_10 = ___2_rhs;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26539));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_9, L_10, (Il2CppFullySharedGenericStruct*)L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26539));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26540));
		Il2CppConstrainedCallData L_13;
		Il2CppMethodPointer L_14 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)G_B3_0, &L_13, L_12);
		int32_t L_15 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_14, L_13.method,L_13.thisPtr, L_8, L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26540));
		V_1 = (bool)((((int32_t)L_15) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26541));
		bool L_16 = V_1;
		if (!L_16)
		{
			goto IL_0052;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26542));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:966>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26543));
		void* L_17 = ___0_array;
		int32_t L_18 = ___1_lhs;
		int32_t L_19 = ___2_rhs;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26544));
		NativeSortExtension_Swap_TisIl2CppFullySharedGenericStruct_m657D09FBF8CC0DCADE61F3DC08251120E778AAEF(L_17, L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26544));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26545));
	}

IL_0052:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26546));
	}

IL_0053:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:969>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26547));
		return;
	}
}
// Method Definition Index: 52683
// Method Definition Index: 52691
// Method Definition Index: 52691
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItemsStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mABB5AA1A8A886F39277828BE310D8FDE2424F322_fshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t3C28AADEDB0D36242D2223B92B887BAF86BA60F0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t3C28AADEDB0D36242D2223B92B887BAF86BA60F0);
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_T_t3C28AADEDB0D36242D2223B92B887BAF86BA60F0);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	bool V_0 = false;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	memset(V_2, 0, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_lhs), (&___2_rhs), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26743));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26744));
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	memset(G_B3_0, 0, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	memset(G_B2_0, 0, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26745));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1132>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26746));
		int32_t L_0 = ___1_lhs;
		int32_t L_1 = ___2_rhs;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26747));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26748));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1134>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26749));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
		il2cpp_codegen_memcpy(L_3, V_2, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_3);
		if (L_4)
		{
			il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
			goto IL_0027;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	}
	{
		il2cpp_codegen_memcpy(L_5, G_B2_0, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
		il2cpp_codegen_memcpy(V_2, L_5, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	}

IL_0027:
	{
		void* L_6 = ___0_array;
		int32_t L_7 = ___1_lhs;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26750));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_6, L_7, (Il2CppFullySharedGenericStruct*)L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26750));
		void* L_9 = ___0_array;
		int32_t L_10 = ___2_rhs;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26751));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_9, L_10, (Il2CppFullySharedGenericStruct*)L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26751));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26752));
		Il2CppConstrainedCallData L_13;
		Il2CppMethodPointer L_14 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)G_B3_0, &L_13, L_12);
		int32_t L_15 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_14, L_13.method,L_13.thisPtr, L_8, L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26752));
		V_1 = (bool)((((int32_t)L_15) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26753));
		bool L_16 = V_1;
		if (!L_16)
		{
			goto IL_0052;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26754));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1136>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26755));
		void* L_17 = ___0_array;
		int32_t L_18 = ___1_lhs;
		int32_t L_19 = ___2_rhs;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26756));
		NativeSortExtension_SwapStruct_TisIl2CppFullySharedGenericStruct_m9261658699D5BEE6D69B7E825EEA155299319C24(L_17, L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26756));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26757));
	}

IL_0052:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26758));
	}

IL_0053:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1139>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26759));
		return;
	}
}
// Method Definition Index: 52690
// Method Definition Index: 52690
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapStruct_TisIl2CppFullySharedGenericStruct_m9261658699D5BEE6D69B7E825EEA155299319C24_fshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	const Il2CppFullySharedGenericStruct L_12 = alloca(SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	memset(V_0, 0, SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_lhs), (&___2_rhs));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26732));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26733));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26734));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1123>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26735));
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_lhs;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26736));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26736));
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1124>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26737));
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		void* L_5 = ___0_array;
		int32_t L_6 = ___2_rhs;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26738));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_5, L_6, (Il2CppFullySharedGenericStruct*)L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26738));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26739));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_3, L_4, il2cpp_codegen_memcpy(L_8, L_7, SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26739));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1125>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26740));
		void* L_9 = ___0_array;
		int32_t L_10 = ___2_rhs;
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26741));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_9, L_10, il2cpp_codegen_memcpy(L_12, L_11, SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26741));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeSort.cs:1126>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26742));
		return;
	}
}
// Method Definition Index: 52703
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 NativeStream_ScheduleConstruct_TisIl2CppFullySharedGenericStruct_m27645D3BD937891B0D2D164E55DCCD4A4F4D4E89_fshared (NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* ___0_stream, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___1_bufferCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___2_dependency, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707 V_1;
	memset((&V_1), 0, sizeof(V_1));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_stream), (&___1_bufferCount), (&___2_dependency), (&___3_allocator));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26982));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26983));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26984));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeStream.cs:74>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26985));
		NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* L_0 = ___0_stream;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___3_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26986));
		NativeStream_AllocateBlock_mAD29C962FDE6B17A135737E09693B6FAB6E974AF(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26986));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeStream.cs:75>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26987));
		il2cpp_codegen_initobj((&V_1), sizeof(ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26988));
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_2;
		L_2 = NativeList_1_GetUnsafeList_m4787F7FF0C74B362B5DC98531C2FF66279A5EAEF_inline((&___1_bufferCount), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26988));
		(&V_1)->___List = (UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2*)L_2;
		NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* L_3 = ___0_stream;
		NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376 L_4 = (*(NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376*)L_3);
		(&V_1)->___Container = L_4;
		ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707 L_5 = V_1;
		V_0 = L_5;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeStream.cs:76>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26989));
		ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707 L_6 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_7 = ___2_dependency;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26990));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_8;
		L_8 = IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF(L_6, L_7, IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26990));
		V_2 = L_8;
		goto IL_0038;
	}

IL_0038:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeStream.cs:77>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26991));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 52712
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeStream_ToNativeArray_TisIl2CppFullySharedGenericStruct_m7F7EEAC0A5F9619B9A028BE880C504844C338E8D_fshared (NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 27045));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 27046));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 27047));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeStream.cs:198>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 27048));
		UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66* L_0 = (UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66*)(&__this->___m_Stream);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___0_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 27049));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2;
		L_2 = UnsafeStream_ToNativeArray_TisIl2CppFullySharedGenericStruct_m418267CD08E32A95A5829724C5BCD60D35C261E8(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 27049));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeStream.cs:199>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 27050));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 73822
// Method Definition Index: 73822
// Method Definition Index: 73822
// Method Definition Index: 73822
// Method Definition Index: 73822
// Method Definition Index: 73822
// Method Definition Index: 73822
// Method Definition Index: 73822
// Method Definition Index: 73822
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC NoAllocHelpers_CreateReadOnlySpan_TisIl2CppFullySharedGenericAny_m8B09F58B1533EE5889930503D32D66FA43EA49DB_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* V_0 = NULL;
	ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_list));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 157));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 158));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:66>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 159));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:67>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 160));
		il2cpp_codegen_initobj((&V_1), sizeof(ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_1 = V_1;
		return L_1;
	}

IL_000d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:69>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 161));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = ___0_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 162));
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_3;
		L_3 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE*>((RuntimeObject*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 162));
		V_0 = L_3;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:70>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 163));
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_4 = V_0;
		NullCheck(L_4);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = L_4->____items;
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->____size;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 164));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_inline((&L_8), L_5, 0, L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 164));
		return L_8;
	}
}
// Method Definition Index: 73821
// Method Definition Index: 73821
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 NoAllocHelpers_CreateSpan_TisIl2CppFullySharedGenericAny_m8FA189A6CDBD9B7477A87CEE776826340CDEE909_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* V_0 = NULL;
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_list));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 149));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 150));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:56>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 151));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:57>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 152));
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_1 = V_1;
		return L_1;
	}

IL_000d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:59>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 153));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = ___0_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 154));
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_3;
		L_3 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE*>((RuntimeObject*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 154));
		V_0 = L_3;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:60>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 155));
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_4 = V_0;
		NullCheck(L_4);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = L_4->____items;
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->____size;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 156));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_inline((&L_8), L_5, 0, L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 156));
		return L_8;
	}
}
// Method Definition Index: 73817
// Method Definition Index: 73817
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_EnsureListElemCount_TisIl2CppFullySharedGenericAny_m74270910BAB663797ED6E0784FA1669689B9CAB9_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, int32_t ___1_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_list), (&___1_count));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 113));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 114));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:19>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 115));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:20>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 116));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 117));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 117));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:22>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 118));
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:23>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 119));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 120));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 120));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0022:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:25>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 121));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_4 = ___0_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 122));
		NullCheck(L_4);
		List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_inline(L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 122));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:28>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 123));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_5 = ___0_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 124));
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Capacity_m5BE6D733C76E1AB093FB6D2783220A5B96EF61DF(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 124));
		int32_t L_7 = ___1_count;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0038;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:29>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 125));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_8 = ___0_list;
		int32_t L_9 = ___1_count;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 126));
		NullCheck(L_8);
		List_1_set_Capacity_mD365C22FA3D32D70A2088AB13116E7BA5FBF0BFB(L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 126));
	}

IL_0038:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:31>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 127));
		int32_t L_10 = ___1_count;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_11 = ___0_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 128));
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_inline(L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 128));
		if ((((int32_t)L_10) == ((int32_t)L_12)))
		{
			goto IL_005d;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:33>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 129));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 130));
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE** L_13;
		L_13 = il2cpp_unsafe_as_ref<ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE*>((&___0_list));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 130));
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_14 = il2cpp_codegen_ldind<ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE*, ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE*>(L_13);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:34>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 131));
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_15 = L_14;
		int32_t L_16 = ___1_count;
		NullCheck(L_15);
		L_15->____size = L_16;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:35>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 132));
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_17 = L_15;
		NullCheck(L_17);
		int32_t L_18 = L_17->____version;
		NullCheck(L_17);
		L_17->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_005d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:37>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 133));
		return;
	}
}
// Method Definition Index: 73820
// Method Definition Index: 73820
// Method Definition Index: 73820
// Method Definition Index: 73820
// Method Definition Index: 73820
// Method Definition Index: 73820
// Method Definition Index: 73820
// Method Definition Index: 73820
// Method Definition Index: 73820
// Method Definition Index: 73820
// Method Definition Index: 73820
// Method Definition Index: 73820
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* NoAllocHelpers_ExtractArrayFromList_TisIl2CppFullySharedGenericAny_m939A9FD04DDB2C021F8F2A09A8A13816556D8F2A_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_list));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 142));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 143));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:46>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 144));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:47>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 145));
		return (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
	}

IL_0005:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:49>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 146));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = ___0_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 147));
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_2;
		L_2 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE*>((RuntimeObject*)L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 147));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:50>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 148));
		NullCheck(L_2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = L_2->____items;
		return L_3;
	}
}
// Method Definition Index: 73820
// Method Definition Index: 73824
// Method Definition Index: 73824
// Method Definition Index: 73824
// Method Definition Index: 73824
// Method Definition Index: 73824
// Method Definition Index: 73824
// Method Definition Index: 73824
// Method Definition Index: 73824
// Method Definition Index: 73824
// Method Definition Index: 73824
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_InvalidateListEnumerators_TisIl2CppFullySharedGenericAny_m424A09D93D30AB352CCB19CE0ABBC404A8DB060F_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tF720B3B545B9EB09FECC078AAFA8A26C14F666BD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tF720B3B545B9EB09FECC078AAFA8A26C14F666BD);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_list));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 182));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 183));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:120>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 184));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 185));
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 185));
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:121>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 186));
		return;
	}

IL_0009:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:124>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 187));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = ___0_list;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = ___0_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 188));
		NullCheck(L_3);
		List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937(L_3, 0, (Il2CppFullySharedGenericAny*)L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 188));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 189));
		NullCheck(L_2);
		List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813(L_2, 0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_4: *(void**)L_4), il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 189));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:125>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 190));
		return;
	}
}
// Method Definition Index: 73823
// Method Definition Index: 73823
// Method Definition Index: 73823
// Method Definition Index: 73823
// Method Definition Index: 73823
// Method Definition Index: 73823
// Method Definition Index: 73823
// Method Definition Index: 73823
// Method Definition Index: 73823
// Method Definition Index: 73823
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResetListSize_TisIl2CppFullySharedGenericAny_mCA382D116436816B791F79BB84B5F2D335F17A64_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_list), (&___1_size));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 165));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 166));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:106>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 167));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 168));
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Capacity_m5BE6D733C76E1AB093FB6D2783220A5B96EF61DF(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 168));
		int32_t L_2 = ___1_size;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:106>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 169));
		int32_t L_3 = ___1_size;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_6 = ___0_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 170));
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Capacity_m5BE6D733C76E1AB093FB6D2783220A5B96EF61DF(L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 170));
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 171));
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral13305A544CEEBE303C75EFD465972DD7EB8221B7)), L_5, L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 171));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 172));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 172));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_002a:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:108>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 173));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_12 = ___0_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 174));
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_13;
		L_13 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE*>((RuntimeObject*)L_12);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 174));
		V_0 = L_13;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:110>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 175));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 176));
		bool L_14;
		L_14 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 176));
		if (!L_14)
		{
			goto IL_0055;
		}
	}
	{
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = L_15->____size;
		int32_t L_17 = ___1_size;
		if ((((int32_t)L_16) <= ((int32_t)L_17)))
		{
			goto IL_0055;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:111>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 177));
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_18 = V_0;
		NullCheck(L_18);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = L_18->____items;
		int32_t L_20 = ___1_size;
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = L_21->____size;
		int32_t L_23 = ___1_size;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 178));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, ((int32_t)il2cpp_codegen_subtract(L_22, L_23)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 178));
	}

IL_0055:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:113>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 179));
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_24 = V_0;
		int32_t L_25 = ___1_size;
		NullCheck(L_24);
		L_24->____size = L_25;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:114>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 180));
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_26 = V_0;
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_27 = L_26;
		NullCheck(L_27);
		int32_t L_28 = L_27->____version;
		NullCheck(L_27);
		L_27->____version = ((int32_t)il2cpp_codegen_add(L_28, 1));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:115>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 181));
		return;
	}
}
// Method Definition Index: 73819
// Method Definition Index: 73819
// Method Definition Index: 73819
// Method Definition Index: 73819
// Method Definition Index: 73819
// Method Definition Index: 73819
// Method Definition Index: 73819
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisIl2CppFullySharedGenericAny_mB18CEBDDF0A538A97CF6A7A38894F8094351E7B9_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_values));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 138));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 139));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/NoAllocHelpers.bindings.cs:41>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 140));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_values;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = ___0_values;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 141));
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 141));
		return L_2;
	}
}
// Method Definition Index: 38086
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Object_FindFirstObjectByType_TisIl2CppSharedGenericObject_mA16B025BD06FE39DECFD2AD43581FDB75BF18371_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12928));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12929));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/UnityEngineObject.bindings.cs:893>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12930));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12931));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12931));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12932));
		CHECKED_LOCAL_INIT(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Object_FindFirstObjectByType_mC479B3C54E61550A6A405DC1BCF0CBA2BA8FC66F(L_1, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12932));
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// Method Definition Index: 38084
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Object_FindObjectsByType_TisIl2CppSharedGenericObject_m7121DFBE7D65E8B410E78D111580087B59B2A0B6_gshared (int32_t ___0_sortMode, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_sortMode));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12916));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12917));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/UnityEngineObject.bindings.cs:860>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12918));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12919));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12919));
		int32_t L_2 = ___0_sortMode;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12920));
		CHECKED_LOCAL_INIT(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_3;
		L_3 = Object_FindObjectsByType_m2FD4029E94449E11B16018C0A42F53978722D980(L_1, 0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12920));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12921));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4;
		L_4 = Resources_ConvertObjects_TisIl2CppSharedGenericObject_m9BE1F255F2CB43F5F4EC6B3E4A12E88D5388D6F2(L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12921));
		return L_4;
	}
}
// Method Definition Index: 38085
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Object_FindObjectsByType_TisIl2CppSharedGenericObject_m7ADC7329621D50AC6601075695C5C1130BC60B3E_gshared (int32_t ___0_findObjectsInactive, int32_t ___1_sortMode, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_findObjectsInactive), (&___1_sortMode));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12922));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12923));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/UnityEngineObject.bindings.cs:874>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12924));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12925));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12925));
		int32_t L_2 = ___0_findObjectsInactive;
		int32_t L_3 = ___1_sortMode;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12926));
		CHECKED_LOCAL_INIT(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_4;
		L_4 = Object_FindObjectsByType_m2FD4029E94449E11B16018C0A42F53978722D980(L_1, L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12926));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12927));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_5;
		L_5 = Resources_ConvertObjects_TisIl2CppSharedGenericObject_m9BE1F255F2CB43F5F4EC6B3E4A12E88D5388D6F2(L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12927));
		return L_5;
	}
}
// Method Definition Index: 38072
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Object_Instantiate_TisIl2CppSharedGenericObject_mF0D359599A496A8B6523AA2B27AB24A4270153CD_gshared (Il2CppSharedGenericObject* ___0_original, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF704B54D833421164E45E576DFD279921246BCEA);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_original));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12881));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12882));
	Il2CppSharedGenericObject* G_B2_0 = NULL;
	Il2CppSharedGenericObject* G_B1_0 = NULL;
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/UnityEngineObject.bindings.cs:687>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12883));
		Il2CppSharedGenericObject* L_0 = ___0_original;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12884));
		CHECKED_LOCAL_INIT(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Object_CheckNullArgument_m4D03BBBD975CCCCB3F9438864E3E8BF54E1E3F26((RuntimeObject*)L_0, _stringLiteralF704B54D833421164E45E576DFD279921246BCEA, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12884));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/UnityEngineObject.bindings.cs:688>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12885));
		Il2CppSharedGenericObject* L_1 = ___0_original;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12886));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Object_Internal_CloneSingle_m24ECA1416702930DF5C316EA8B70D575315B636A((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12886));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/UnityEngineObject.bindings.cs:690>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12887));
		Il2CppSharedGenericObject* L_3 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0)));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12888));
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12888));
		if (!L_4)
		{
			G_B2_0 = L_3;
			goto IL_0039;
		}
		G_B1_0 = L_3;
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/UnityEngineObject.bindings.cs:691>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12889));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12890));
		UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* L_5 = (UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var)));
		UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1C09770F25C8580FC7F6623067ACD12EBA570614)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12890));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0039:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/UnityEngineObject.bindings.cs:693>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12891));
		return G_B2_0;
	}
}
// Method Definition Index: 38074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Object_Instantiate_TisIl2CppSharedGenericObject_m9010D4C7E7C5F6C9B8D03AC614354A54D70F4EE0_gshared (Il2CppSharedGenericObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_original), (&___1_parent));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12896));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12897));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/UnityEngineObject.bindings.cs:708>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12898));
		Il2CppSharedGenericObject* L_0 = ___0_original;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_parent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12899));
		CHECKED_LOCAL_INIT(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Il2CppSharedGenericObject* L_2;
		L_2 = Object_Instantiate_TisIl2CppSharedGenericObject_m67EE8108088342284BD20FC941DF00B3D10A3550(L_0, L_1, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12899));
		return L_2;
	}
}
// Method Definition Index: 38075
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Object_Instantiate_TisIl2CppSharedGenericObject_m67EE8108088342284BD20FC941DF00B3D10A3550_gshared (Il2CppSharedGenericObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, bool ___2_worldPositionStays, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_original), (&___1_parent), (&___2_worldPositionStays));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12900));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12901));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/UnityEngineObject.bindings.cs:713>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12902));
		Il2CppSharedGenericObject* L_0 = ___0_original;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___1_parent;
		bool L_2 = ___2_worldPositionStays;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12903));
		CHECKED_LOCAL_INIT(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = Object_Instantiate_m99F2A72EF6BFE09E6CF4FCF6207C5BCFAD1D76CF((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0, L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12903));
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}
}
// Method Definition Index: 38073
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Object_Instantiate_TisIl2CppSharedGenericObject_m20DC5E89C0E04C0432DE2AEBF8E1C797D4347641_gshared (Il2CppSharedGenericObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_original), (&___1_position), (&___2_rotation));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12892));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12893));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Scripting/UnityEngineObject.bindings.cs:698>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12894));
		Il2CppSharedGenericObject* L_0 = ___0_original;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___2_rotation;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12895));
		CHECKED_LOCAL_INIT(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = Object_Instantiate_m99C9917ED3F7B2B9C569B55F52411620B52DA19D((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0, L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 12895));
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}
}
// Method Definition Index: 37582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDispatcher_EnableTransformTracking_TisIl2CppSharedGenericObject_mF20B6818C25684E27FFB35D4D08E75EABB5A262A_gshared (ObjectDispatcher_tEAB1C719841725D9587A7F17646D5D467D498D69* __this, int32_t ___0_trackingType, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_trackingType));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10906));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10907));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Misc/ObjectDispatcher.bindings.cs:423>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10908));
		int32_t L_0 = ___0_trackingType;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = L_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10909));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10909));
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10910));
		ObjectDispatcher_EnableTransformTracking_m02C2084445E6ACB87BACF478E61FA597532044C1(__this, L_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10910));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Misc/ObjectDispatcher.bindings.cs:424>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10911));
		return;
	}
}
// Method Definition Index: 37581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDispatcher_EnableTypeTracking_TisIl2CppSharedGenericObject_m40B7F2B8AF8EA725166B6E58465A6F3B21726699_gshared (ObjectDispatcher_tEAB1C719841725D9587A7F17646D5D467D498D69* __this, int32_t ___0_typeTrackingMask, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_typeTrackingMask));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10900));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10901));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Misc/ObjectDispatcher.bindings.cs:413>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10902));
		int32_t L_0 = ___0_typeTrackingMask;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = L_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10903));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10903));
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10904));
		ObjectDispatcher_EnableTypeTracking_m6C28705689C0A395B418FC54AF3B94F79310A371(__this, L_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10904));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Misc/ObjectDispatcher.bindings.cs:414>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10905));
		return;
	}
}
// Method Definition Index: 37580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformDispatchData_tDD80F62146EC1E25A25FD4C562BED0C52731E1B4 ObjectDispatcher_GetTransformChangesAndClear_TisIl2CppSharedGenericObject_m5EC258349D90292FFCE2D21783CBE4155D3C8C36_gshared (ObjectDispatcher_tEAB1C719841725D9587A7F17646D5D467D498D69* __this, int32_t ___0_trackingType, int32_t ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Type_t_StaticInit);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_trackingType), (&___1_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10895));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10896));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Misc/ObjectDispatcher.bindings.cs:408>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10897));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10898));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10898));
		int32_t L_2 = ___0_trackingType;
		int32_t L_3 = ___1_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10899));
		TransformDispatchData_tDD80F62146EC1E25A25FD4C562BED0C52731E1B4 L_4;
		L_4 = ObjectDispatcher_GetTransformChangesAndClear_mE189DCB6402D0E26D77A0C054E42A6C080B7BC23(__this, L_1, L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10899));
		return L_4;
	}
}
// Method Definition Index: 37579
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeDispatchData_tF20A8BD105729A9AA353F600381DFB39DD8BF21F ObjectDispatcher_GetTypeChangesAndClear_TisIl2CppSharedGenericObject_m893D3B309DC70E2BF44C3E3619A234772D65A61F_gshared (ObjectDispatcher_tEAB1C719841725D9587A7F17646D5D467D498D69* __this, int32_t ___0_allocator, bool ___1_sortByInstanceID, bool ___2_noScriptingArray, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Type_t_StaticInit);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_allocator), (&___1_sortByInstanceID), (&___2_noScriptingArray));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10890));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10891));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Misc/ObjectDispatcher.bindings.cs:393>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10892));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10893));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10893));
		int32_t L_2 = ___0_allocator;
		bool L_3 = ___1_sortByInstanceID;
		bool L_4 = ___2_noScriptingArray;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10894));
		TypeDispatchData_tF20A8BD105729A9AA353F600381DFB39DD8BF21F L_5;
		L_5 = ObjectDispatcher_GetTypeChangesAndClear_mBE6304A78592FF8271D7CD8E26C57544CF1675B9(__this, L_1, L_2, L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10894));
		return L_5;
	}
}
// Method Definition Index: 34533
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_Call_TisIl2CppFullySharedGenericAny_m98BA218FB32F6BD71591145929AD70307A2080A5_fshared (RuntimeObject* ___0_source, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___1_action, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_source), (&___1_action));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80900));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80901));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80902));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:236>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80903));
		RuntimeObject* L_0 = ___0_source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80904));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:237>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80905));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80906));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80906));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:238>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80907));
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_3 = ___1_action;
		V_1 = (bool)((((RuntimeObject*)(Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80908));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:239>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80909));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80910));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80910));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:240>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80911));
		RuntimeObject* L_6 = ___0_source;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_7 = ___1_action;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80912));
		Observer_1_tA0F9A80691B69597D25B36C1C3B0B53429D94849* L_8 = (Observer_1_tA0F9A80691B69597D25B36C1C3B0B53429D94849*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		Observer_1__ctor_mD1D555889C192C22513070B5EEB4E1AE8826B630(L_8, L_7, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80912));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80913));
		NullCheck(L_6);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 2), L_6, (RuntimeObject*)L_8);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80913));
		V_2 = L_9;
		goto IL_0037;
	}

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:241>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80914));
		RuntimeObject* L_10 = V_2;
		return L_10;
	}
}
// Method Definition Index: 34532
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_CallOnce_TisIl2CppFullySharedGenericAny_m967FE7E3F2B0865DA091FE0114DF9C5E39027B3B_fshared (RuntimeObject* ___0_source, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___1_action, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_source), (&___1_action));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80879));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80880));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80881));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80882));
		U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF* L_0 = (U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		U3CU3Ec__DisplayClass6_0_1__ctor_mEB55F4856135C234D6057D0158C2C73E08EFB79B(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80882));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80883));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:204>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80884));
		RuntimeObject* L_1 = ___0_source;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80885));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:205>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80886));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80887));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80887));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001a:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:206>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80888));
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_4 = ___1_action;
		V_2 = (bool)((((RuntimeObject*)(Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80889));
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:207>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80890));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80891));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80891));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002d:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:209>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80892));
		U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF* L_7 = V_0;
		NullCheck(L_7);
		L_7->___subscription = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___subscription), (void*)(RuntimeObject*)NULL);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:210>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80893));
		U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF* L_8 = V_0;
		RuntimeObject* L_9 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80894));
		RuntimeObject* L_10;
		L_10 = Observable_Take_TisIl2CppFullySharedGenericAny_m3193EEC4711789816ADFE2B254FB5833764C6377(L_9, 1, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80894));
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_11 = ___1_action;
		U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF* L_12 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80895));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_13, (RuntimeObject*)L_12, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80895));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80896));
		Observer_1_tA0F9A80691B69597D25B36C1C3B0B53429D94849* L_14 = (Observer_1_tA0F9A80691B69597D25B36C1C3B0B53429D94849*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 4));
		Observer_1__ctor_mD1D555889C192C22513070B5EEB4E1AE8826B630(L_14, L_11, L_13, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80896));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80897));
		NullCheck(L_10);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 6), L_10, (RuntimeObject*)L_14);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80897));
		NullCheck(L_8);
		L_8->___subscription = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___subscription), (void*)L_15);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:211>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80898));
		U3CU3Ec__DisplayClass6_0_1_t23578FC2DEEC4FA166F3FEAA657A81AE4D01F3AF* L_16 = V_0;
		NullCheck(L_16);
		RuntimeObject* L_17 = L_16->___subscription;
		V_3 = L_17;
		goto IL_0061;
	}

IL_0061:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:212>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80899));
		RuntimeObject* L_18 = V_3;
		return L_18;
	}
}
// Method Definition Index: 34531
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_ForDevice_TisIl2CppSharedGenericObject_mB85DBDCF01454C35AB6DCCA294D17FCCBB31F3A8_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ForDeviceEventObservable_t8A72659C906D6280192E680AF251425A67A7D889_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_source));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80868));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80869));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80870));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:176>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80871));
		RuntimeObject* L_0 = ___0_source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80872));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:177>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80873));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80874));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80874));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:178>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80875));
		RuntimeObject* L_3 = ___0_source;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80876));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80876));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80877));
		ForDeviceEventObservable_t8A72659C906D6280192E680AF251425A67A7D889* L_6 = (ForDeviceEventObservable_t8A72659C906D6280192E680AF251425A67A7D889*)il2cpp_codegen_object_new(ForDeviceEventObservable_t8A72659C906D6280192E680AF251425A67A7D889_il2cpp_TypeInfo_var);
		ForDeviceEventObservable__ctor_mB1C31FA7E513DB5D377B8F95AB66DBA80A0B2EFC(L_6, L_3, L_5, (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80877));
		V_1 = L_6;
		goto IL_0028;
	}

IL_0028:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:179>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80878));
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 34527
// Method Definition Index: 34527
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_Select_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m1D4CDBCC87BAAB5B21B32BE27B7A5DCB226F6E71_fshared (RuntimeObject* ___0_source, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___1_filter, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_source), (&___1_filter));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80816));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80817));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80818));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:68>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80819));
		RuntimeObject* L_0 = ___0_source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80820));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:69>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80821));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80822));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80822));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:70>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80823));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_3 = ___1_filter;
		V_1 = (bool)((((RuntimeObject*)(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80824));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:71>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80825));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80826));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5601A0ED74C235668EBD9B6850B0C73C8B338118)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80826));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:72>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80827));
		RuntimeObject* L_6 = ___0_source;
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_7 = ___1_filter;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80828));
		SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383* L_8 = (SelectObservable_2_t3088BA40A393B1C6E2488B44E7931CB358FAB383*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		SelectObservable_2__ctor_mC5488B7793116D4A34581D9981A5E23F20ACDB26(L_8, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80828));
		V_2 = (RuntimeObject*)L_8;
		goto IL_0031;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:73>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80829));
		RuntimeObject* L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 34528
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_SelectMany_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m6B8B7ECD69CDB004D46D0E106F7740644C2C15E3_fshared (RuntimeObject* ___0_source, Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61* ___1_filter, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_source), (&___1_filter));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80830));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80831));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80832));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:99>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80833));
		RuntimeObject* L_0 = ___0_source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80834));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:100>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80835));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80836));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80836));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:101>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80837));
		Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61* L_3 = ___1_filter;
		V_1 = (bool)((((RuntimeObject*)(Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80838));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:102>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80839));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80840));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5601A0ED74C235668EBD9B6850B0C73C8B338118)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80840));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:103>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80841));
		RuntimeObject* L_6 = ___0_source;
		Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61* L_7 = ___1_filter;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80842));
		SelectManyObservable_2_tBEFCCBF20DBB52417E0D9CD64E2B1C731985C9A8* L_8 = (SelectManyObservable_2_tBEFCCBF20DBB52417E0D9CD64E2B1C731985C9A8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		SelectManyObservable_2__ctor_m068A7BA0620FA05C19C61BBAED9DC3A8D2A63016(L_8, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80842));
		V_2 = (RuntimeObject*)L_8;
		goto IL_0031;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:104>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80843));
		RuntimeObject* L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 34529
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_Take_TisIl2CppFullySharedGenericAny_m3193EEC4711789816ADFE2B254FB5833764C6377_fshared (RuntimeObject* ___0_source, int32_t ___1_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_source), (&___1_count));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80844));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80845));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80846));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:117>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80847));
		RuntimeObject* L_0 = ___0_source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80848));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:118>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80849));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80850));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80850));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:119>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80851));
		int32_t L_3 = ___1_count;
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80852));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:120>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80853));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80854));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80854));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:121>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80855));
		RuntimeObject* L_6 = ___0_source;
		int32_t L_7 = ___1_count;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80856));
		TakeNObservable_1_t4E8AA9483FF4FE41338461B42FD2FDFD350E1C6D* L_8 = (TakeNObservable_1_t4E8AA9483FF4FE41338461B42FD2FDFD350E1C6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TakeNObservable_1__ctor_mD0E67EC8298ABE2FCD054ADE48507D1AFC039CB4(L_8, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80856));
		V_2 = (RuntimeObject*)L_8;
		goto IL_0031;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:122>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80857));
		RuntimeObject* L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 34526
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Observable_Where_TisIl2CppFullySharedGenericAny_mA2778DBF842AD108A115A4BCF0D6D30F7F4F5B32_fshared (RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_source), (&___1_predicate));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80802));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80803));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80804));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:35>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80805));
		RuntimeObject* L_0 = ___0_source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80806));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:36>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80807));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80808));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80808));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:37>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80809));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_3 = ___1_predicate;
		V_1 = (bool)((((RuntimeObject*)(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80810));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:38>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80811));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80812));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80812));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0027:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:39>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80813));
		RuntimeObject* L_6 = ___0_source;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = ___1_predicate;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80814));
		WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816* L_8 = (WhereObservable_1_tEA716A5FC9C57957678BF073F6DD611E500A5816*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		WhereObservable_1__ctor_m6C7B01F3F1790F57E8A6CB4AA4B3C3FF98902286(L_8, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80814));
		V_2 = (RuntimeObject*)L_8;
		goto IL_0031;
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/Observables/Observable.cs:40>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80815));
		RuntimeObject* L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 32649
// Method Definition Index: 32649
// Method Definition Index: 32649
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnScreenControl_SendValueToControl_TisIl2CppFullySharedGenericStruct_m5CF45A210F89CBADDC0AA576A7E7FDF653A63CCA_fshared (OnScreenControl_t449BC1FA3DCA3F7787643FAB4F4B1906A7B32418* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputRuntime_t97E0310F85D952B7B42F6FEB50A1C8D88A0C0C09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_TValue_t651438BCED9336A6901823350FFEB92382601292 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	CHECKED_LOCAL(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_StaticInit);
	const Il2CppFullySharedGenericStruct L_25 = alloca(SizeOf_TValue_t651438BCED9336A6901823350FFEB92382601292);
	const Il2CppFullySharedGenericStruct L_27 = alloca(SizeOf_TValue_t651438BCED9336A6901823350FFEB92382601292);
	InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___0_value : &___0_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57261));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57262));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57263));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Plugins/OnScreen/OnScreenControl.cs:196>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57264));
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_0 = __this->___m_Control;
		V_1 = (bool)((((RuntimeObject*)(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57265));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Plugins/OnScreen/OnScreenControl.cs:197>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57266));
		goto IL_00b6;
	}

IL_0013:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Plugins/OnScreen/OnScreenControl.cs:199>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57267));
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_2 = __this->___m_Control;
		V_0 = ((InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0)));
		InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B* L_3 = V_0;
		V_2 = (bool)((((int32_t)((!(((RuntimeObject*)(InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57268));
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0086;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Plugins/OnScreen/OnScreenControl.cs:200>
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Plugins/OnScreen/OnScreenControl.cs:201>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57269));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73FAAC2BC0DAF3CA8C0F99D19FCFEF396EC4D778)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57270));
		String_t* L_8;
		L_8 = OnScreenControl_get_controlPath_m70FBF27F59E8953B7DE270BA8C426970E7D118D1(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57270));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral213ABAA76E922BC10339BAF6AC97E9B778E7774F)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_11 = __this->___m_Control;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57271));
		NullCheck(L_11);
		Type_t* L_12;
		L_12 = il2cpp_codegen_object_get_type(L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57271));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57272));
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_12);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57272));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_10;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6D17034B21712EB7B5957FBBF819632D04221839)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57273));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57273));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57274));
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_17);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57274));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_18);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57275));
		String_t* L_19;
		L_19 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57275));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57276));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_20, L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57276));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_0086:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Plugins/OnScreen/OnScreenControl.cs:204>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57277));
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0* L_21 = (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0*)(&__this->___m_InputEventPtr);
		RuntimeObject* L_22 = ((InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_StaticFields*)il2cpp_codegen_static_fields_for(InputRuntime_t225BBC258A47D8CC1DE6C04E13FB51C375EEB4C3_il2cpp_TypeInfo_var))->___s_Instance;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57278));
		NullCheck(L_22);
		double L_23;
		L_23 = InterfaceFuncInvoker0< double >::Invoke(20, IInputRuntime_t97E0310F85D952B7B42F6FEB50A1C8D88A0C0C09_il2cpp_TypeInfo_var, L_22);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57278));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57279));
		InputEventPtr_set_internalTime_mBD0B465C6882DD13F5FA3AAE487C0FA8A68E3810(L_21, L_23, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57279));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Plugins/OnScreen/OnScreenControl.cs:205>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57280));
		InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B* L_24 = V_0;
		il2cpp_codegen_memcpy(L_25, ___0_value, SizeOf_TValue_t651438BCED9336A6901823350FFEB92382601292);
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_26 = __this->___m_InputEventPtr;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57281));
		InputControlExtensions_WriteValueIntoEvent_TisIl2CppFullySharedGenericStruct_mB215E1CA658246C0181792E9A28803B9AF0605F5(L_24, il2cpp_codegen_memcpy(L_27, L_25, SizeOf_TValue_t651438BCED9336A6901823350FFEB92382601292), L_26, il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57281));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Plugins/OnScreen/OnScreenControl.cs:206>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57282));
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_28 = __this->___m_InputEventPtr;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57283));
		CHECKED_LOCAL_INIT(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_StaticInit,(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		InputSystem_QueueEvent_mC30D182ADDD60BFC2AF10D24CEE2481D0EB77996(L_28, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57283));
	}

IL_00b6:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Plugins/OnScreen/OnScreenControl.cs:207>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 57284));
		return;
	}
}
// Method Definition Index: 71302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* OnceInScope_OnceIn_TisIl2CppFullySharedGenericAny_m13092BD953F8DD37AB75320678FF09A4834DA6AC_fshared (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_todo, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Type_t_StaticInit);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_todo));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 2470));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Scripting + 2471));
	{
		//<source_info:/home/bokken/build/output/unity/unity/External/ScriptingCore/Unity.Scripting/LifecycleManagement/OnceInScope.cs:21>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 2472));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_todo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 2473));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 2473));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 2474));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
		L_3 = OnceInScope_OnceIn_m4F8C9FC123BFDFEE9BEAFA9EDB8F4AB95E83C813(L_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Scripting + 2474));
		return L_3;
	}
}
// Method Definition Index: 61431
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
// Method Definition Index: 52255
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_mBCE0D52E1FEFC40B5CFEE2F41B493C7FF6A07FA7_fshared_inline (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22307));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 22308));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22309));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeList.cs:265>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22310));
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_0 = __this->___m_ListData;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22311));
		int32_t L_1;
		L_1 = UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_inline((UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*)L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22311));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22312));
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22312));
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeList.cs:266>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22313));
		int32_t L_3 = V_0;
		return L_3;
	}
}
// Method Definition Index: 2346
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_4 = ___0_pointer;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((uint8_t*)L_4);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_6;
		memset((&L_6), 0, sizeof(L_6));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_6), L_5);
		__this->____pointer = L_6;
		int32_t L_7 = ___1_length;
		__this->____length = L_7;
		return;
	}
}
// Method Definition Index: 52261
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* NativeList_1_GetUnsafeList_m4787F7FF0C74B362B5DC98531C2FF66279A5EAEF_fshared_inline (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22340));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 22341));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeList.cs:323>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 22342));
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_0 = __this->___m_ListData;
		return L_0;
	}
}
// Method Definition Index: 35066
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1061));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1062));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:170>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1063));
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
// Method Definition Index: 35067
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1064));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1065));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:226>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1066));
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_index;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1067));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1067));
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022);
		return;
	}
}
// Method Definition Index: 35068
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)) ? ___1_value : &___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1068));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1069));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:234>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1070));
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_index;
		il2cpp_codegen_memcpy(L_2, ___1_value, SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1071));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_0, L_1, il2cpp_codegen_memcpy(L_3, L_2, SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1071));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:235>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1072));
		return;
	}
}
// Method Definition Index: 35191
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_fshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_nativeSlice));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1724));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1725));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeSlice.cs:456>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1726));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		return (void*)(L_1);
	}
}
// Method Definition Index: 35153
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_fshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1583));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1584));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeSlice.cs:300>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1585));
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
// Method Definition Index: 2357
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2348
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* ReadOnlySpan_1_get_Item_m9143C9CF6493AF0AD667C5BDEEF1D22895283F77_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t120950580BDFD368223E024446019DB239080837 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	//<source_info:<no-source>:1>
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppFullySharedGenericAny* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_3, L_4, SizeOf_T_t120950580BDFD368223E024446019DB239080837);
		return L_5;
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
// Method Definition Index: 2456
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2444
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	//<source_info:<no-source>:1>
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppFullySharedGenericAny* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_3, L_4, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		return L_5;
	}
}
// Method Definition Index: 35190
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_fshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_nativeSlice));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1721));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1722));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeSlice.cs:448>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1723));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		return (void*)(L_1);
	}
}
// Method Definition Index: 2345
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t120950580BDFD368223E024446019DB239080837 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___0_array;
		NullCheck((RuntimeArray*)L_10);
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Il2CppFullySharedGenericAny* L_12;
		L_12 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_11);
		int32_t L_13 = ___1_start;
		Il2CppFullySharedGenericAny* L_14;
		L_14 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_12, L_13, SizeOf_T_t120950580BDFD368223E024446019DB239080837);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
// Method Definition Index: 2441
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	memset(V_0, 0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_3);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = il2cpp_codegen_object_get_type((RuntimeObject*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0042:
	{
		int32_t L_10 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___0_array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		if ((!(((uint32_t)L_10) <= ((uint32_t)L_12))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = ___2_length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = ___0_array;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		int32_t L_16 = ___1_start;
		if ((!(((uint32_t)L_13) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_15, L_16))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___0_array;
		NullCheck((RuntimeArray*)L_17);
		uint8_t* L_18;
		L_18 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_17, NULL);
		Il2CppFullySharedGenericAny* L_19;
		L_19 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_18);
		int32_t L_20 = ___1_start;
		Il2CppFullySharedGenericAny* L_21;
		L_21 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_19, L_20, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_22;
		memset((&L_22), 0, sizeof(L_22));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_22), L_21);
		__this->____pointer = L_22;
		int32_t L_23 = ___2_length;
		__this->____length = L_23;
		return;
	}
}
// Method Definition Index: 11143
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24));
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = __this->____size;
		V_0 = L_2;
		__this->____size = 0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
		return;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
// Method Definition Index: 11124
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 50567
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 2889));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 2890));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 2891));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/CollectionHelper.cs:252>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 2892));
		int32_t L_0 = ___0_value;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/CollectionHelper.cs:253>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 2893));
		int32_t L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 3208
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}
// Method Definition Index: 53330
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_fshared_inline (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33702));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 33703));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/UnsafeList.cs:92>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33704));
		int32_t L_0 = __this->___m_length;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33705));
		int32_t L_1;
		L_1 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 33705));
		return L_1;
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
