#include "pch-cpp.hpp"





template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518;
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
struct Dictionary_2_t6B4B40DA71BA0031F5736DF4459253299D8AF5F2;
struct Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC;
struct IEnumerable_1_t1447BF8E1A962EF1787C1E07658EB94E72BA2CEF;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t74105E6C32CA7AC4F4202BB870BF99B1C95BA2DE;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
struct List_1_tB1D3AE6638063900DFF2ED463335EF8912FBBF7B;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD;
struct UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D;
struct UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B;
struct UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0;
struct UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718;
struct UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6;
struct UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4;
struct UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A;
struct UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516;
struct UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB;
struct UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6;
struct UnsafeList_1_tBBA2813E39DF02BCF903DF5387C884420C28F644;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEventHandler_tB1627CA1B7729F3E714572E69A79C91A1578C9A3;
struct IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E;
struct IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5;
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A;
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3;
struct JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
struct PathRef_t76F7677792A14AF9D6A6EAB7F08C1A3DC2B27A55;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2;
struct ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
struct Type_t;
struct UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualElementSelectorData_t4C4043092A19A653CE8637C7659E36E0D3CC23A0;
struct VisualElementTransformData_t3DD575B5990B68FF956673EFF036171C86A38DF3;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Record_tD4D528E1BFF948E92C590DCE7A010BA356D50049;
struct EqualityComparer_tF8FCE99C5DBB2F35D74728CB65346435381CFD5B;
struct Data_t6BD087CC0FA9794D342D260035A70E365224C66E;
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsAssemblyU2DCSharp[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_ScriptingModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_U2DRuntimeModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UIElementsModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_2D_Animation_Runtime[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_2D_Common_Runtime[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Collections[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_InputSystem[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_RenderPipelines_Universal_Runtime[];
IL2CPP_EXTERN_C RuntimeClass* AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t74105E6C32CA7AC4F4202BB870BF99B1C95BA2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshRendererComponentMask_t9A6A143E8B9C3374C4996ACD2C09D03FA0ABA156_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModuleHandle_t2F8BE4233858E78501EF0B4D650CECD9A6D5D9F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModuleHandle_t5D0F96F84469E2969C2509C1965812B79964CC83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral110D1733D85BF5EFB139B95FF286BB627337195E;
IL2CPP_EXTERN_C String_t* _stringLiteral2AAF6C7A90E58D7205596DC636D6A02BDB914696;
IL2CPP_EXTERN_C String_t* _stringLiteral3262873DA2491E1CC4FF127E6A3921EE483D61CB;
IL2CPP_EXTERN_C String_t* _stringLiteral3557380BE9E7E98862A3A71F25DC349E0384F4E2;
IL2CPP_EXTERN_C String_t* _stringLiteral3D3D9CC7DBA60B04E5E5DF1904398CBAA8E8C8BB;
IL2CPP_EXTERN_C String_t* _stringLiteral44F1E7DB2E8AAD233857868896DFEFE5A63EECEF;
IL2CPP_EXTERN_C String_t* _stringLiteral4E3BEC05C920F32F86740D8CDDA5F47847F01CBF;
IL2CPP_EXTERN_C String_t* _stringLiteral5B55E99D2378945F711DB994B7430E820BA05B5D;
IL2CPP_EXTERN_C String_t* _stringLiteral6B84C223C597EA5D24F707973167E04ECF07D7DE;
IL2CPP_EXTERN_C String_t* _stringLiteral7ECFB57A0D1B5CE741045B6B75AB6521BC5B5C0F;
IL2CPP_EXTERN_C String_t* _stringLiteral85AC6F85B2CAE2372D2D9B9574AF54BF6A3AB1FB;
IL2CPP_EXTERN_C String_t* _stringLiteral99114D2718EFDC1BFFB41866DC4BFC8066C1B7D2;
IL2CPP_EXTERN_C String_t* _stringLiteralA2253D0D64C3CE2F70001AEF414A71355CC152DD;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46;
IL2CPP_EXTERN_C String_t* _stringLiteralB76C1A87204BBFDC1EB8755ECBEA3E6B651710A2;
IL2CPP_EXTERN_C String_t* _stringLiteralCF095D21C8682C856795D9759E2617E87C893F1E;
IL2CPP_EXTERN_C String_t* _stringLiteralD4DA1775B4A90CAFED0EA239A445EE64DFCB92CE;
IL2CPP_EXTERN_C String_t* _stringLiteralDA7AEF839C310E50649FABCB16048EC805ED1DCF;
IL2CPP_EXTERN_C String_t* _stringLiteralE518C71E95CD77DE3B5BAA3682242D4FFE4F9D1E;
IL2CPP_EXTERN_C String_t* _stringLiteralECD68B5596F20DCD97A00D59FC408D26A9E78960;
IL2CPP_EXTERN_C const RuntimeMethod* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BindingsAllocator_GetNativeOwnedDataPointer_m3668639A4B328ECC1DBB756D0217BEAFE136F25A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JaggedSpan_1_get_sectionCount_m30E23BC0F8F4D2365568C2848BFE50786E8B30DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NamedValue_set_name_mCF3BCACF7F87CF0C64AB3E4547BA5876ADF1940C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NamedValue_set_value_mD96CEA0EB28C32139F47AEF613FE40B6DD7A5D7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ByteU2A_t7A03686A8034AF92EF1EA2D09B280EF590D1174D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DataOwner_tCE1526E8508042F97CE454B8F70D36044C421CA5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IEnumerator_1_t74105E6C32CA7AC4F4202BB870BF99B1C95BA2DE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MarshalledArray_t6AEAFB9F03F350E0CCFF93A3CA6C14A99D3F3536_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MeshRendererUpdateBatch_t386C6151480A8A39F3A9703B56B8A87AAD5EEED2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeArray_1_t6E2931CC2E1AA6B9F666FF4270BD177E2114779B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeSlice_1_t4906DEA99476205C846F099C0196685F790D468E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518 : public RuntimeObject {};
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
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95  : public RuntimeObject
{
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4  : public RuntimeObject
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ____items;
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
struct MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487  : public RuntimeObject
{
};
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	bool ___isIMGUIContainer;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry;
};
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3  : public RuntimeObject
{
	JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A* ____parent;
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____previous;
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____next;
	RuntimeObject* ____annotations;
};
struct Math_tEB65DE7CA8B083C412C969C92981C030865486CE  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct MemoryExtensions_t2DC3604DB167FA4473786CD400C718D98E20C6D7  : public RuntimeObject
{
};
struct MemoryHelpers_t9AF54CC92C8DCA92B126F4DDDCA8EC54F47F3924  : public RuntimeObject
{
};
struct MemoryMarshal_t0208DBB300D970EB22EDC8C08FB57418DE91D026  : public RuntimeObject
{
};
struct MemoryUtilities_t1507F6242BCFF74AAD3BBD23641EF0DFA2B02220  : public RuntimeObject
{
};
struct MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187  : public RuntimeObject
{
	int32_t ___id;
	String_t* ___seq;
	String_t* ___name;
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___data;
};
struct MiscHelpers_t0E2E65567737EF42997B6245617046C681F9AB1D  : public RuntimeObject
{
};
struct MonoLinqHelper_t4B7F56CAAFAAAA0ABD411D943BA644B0C3BDA1D3  : public RuntimeObject
{
};
struct MouseEventsHelper_tCA2B2B4B36A3F80CE118DECAE91AB7658A68437F  : public RuntimeObject
{
};
struct NativeArrayExtensions_t9A6F3FA904DDB64CC47FB8CECF1EE92FAFD47BA2  : public RuntimeObject
{
};
struct NativeArrayExtensions_t36BA4CCABADE7EC33970CCCB625455C3D6F85372  : public RuntimeObject
{
};
struct NativeArrayHelpers_t427C0EEA0692067215F4A74736B499D53C42AA0A  : public RuntimeObject
{
};
struct NativeArrayUnsafeUtility_tB4D8A974D44EE6F4B2C32D5D19861FB081F88FCE  : public RuntimeObject
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
struct ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____offset;
	int32_t ____count;
};
struct Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct NativeHashSet_1_t4A3FF5E5E7880324EBA79057A83F747452D87D7B 
{
	HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* ___m_Data;
};
struct NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030 
{
	UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* ___m_ListData;
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
struct ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
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
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	bool ___m_Focusable;
	int32_t ___m_TabIndex;
	bool ___m_DelegatesFocus;
	bool ___m_ExcludeFromFocusRing;
	bool ___U3CisEligibleToReceiveFocusFromDisabledChildU3Ek__BackingField;
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
struct ModuleHandle_t2F8BE4233858E78501EF0B4D650CECD9A6D5D9F4 
{
	union
	{
		struct
		{
		};
		uint8_t ModuleHandle_t2F8BE4233858E78501EF0B4D650CECD9A6D5D9F4__padding[1];
	};
};
struct ModuleHandle_t5D0F96F84469E2969C2509C1965812B79964CC83 
{
	union
	{
		struct
		{
		};
		uint8_t ModuleHandle_t5D0F96F84469E2969C2509C1965812B79964CC83__padding[1];
	};
};
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	int32_t ___id;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct StyleClassList_tCA2E8910D5BCCB7029CF852421F1E07E8EDF9744 
{
	Record_tD4D528E1BFF948E92C590DCE7A010BA356D50049* ___m_Record;
};
struct StyleClassList_tCA2E8910D5BCCB7029CF852421F1E07E8EDF9744_marshaled_pinvoke
{
	Record_tD4D528E1BFF948E92C590DCE7A010BA356D50049* ___m_Record;
};
struct StyleClassList_tCA2E8910D5BCCB7029CF852421F1E07E8EDF9744_marshaled_com
{
	Record_tD4D528E1BFF948E92C590DCE7A010BA356D50049* ___m_Record;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF 
{
	int32_t ___m_Id;
};
struct UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
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
struct NativeOwnedMemory_t78EF0D467F14059891C564355B0AEFDE81175B2B 
{
	void* ___data;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
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
struct HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC 
{
	uint8_t* ___Ptr;
	Il2CppFullySharedGenericStruct* ___Keys;
	int32_t* ___Next;
	int32_t* ___Buckets;
	int32_t ___Count;
	int32_t ___Capacity;
	int32_t ___Log2MinGrowth;
	int32_t ___BucketCapacity;
	int32_t ___AllocatedIndex;
	int32_t ___FirstFreeIdx;
	int32_t ___SizeOfTValue;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct UnsafeList_1_tEF402E259D390EA25AFFFF8D967B3EB014B9A7DC 
{
	UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t045D20B5AD78A93EF71288E2EE1F31B44B682778 
{
	UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t50550CEABB959BFA1A623C8BEA7F57DB44B12093 
{
	UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t562F009533B9AD3A7B0F4DBF2D3DD41A07EBA140 
{
	UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tA360AA1D3FAC94F732905EC58605414C4592FCBD 
{
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tADF105D4D0254C44A022A3B2928E3A129B090DA6 
{
	UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tCB6C3D0DF6D45E8D0F1AB899D3F6184EB53CACD5 
{
	UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tBDD383F66A245BBF180BD9D9BCD6D9C48B36325C 
{
	UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tB16A935C476248B9129865F308F511262905777F 
{
	UnsafeList_1_t0B514D46EF09CD2AD227C46904D4A19A6BCD3516* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t42D7397763B114A70D610F1FFBBC262DE2D9E5FC 
{
	UnsafeList_1_t7A543190DA1A83E02E2B1A875EA82180D6B548AB* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tE754000F0ACA8BA027341077855B191D08E98144 
{
	UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tB698B9DE7D882F49506F01854E176CB7BEC89B30 
{
	UnsafeList_1_tBBA2813E39DF02BCF903DF5387C884420C28F644* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tEECA348F0E34147530D222AB9E0B420D6190B22E 
{
	UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
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
struct IndexFormat_tE699D38323B3B0887DF054EAFF0CF035DF28E2BB 
{
	int32_t ___value__;
};
struct LanguageDirection_t30A3B6BBCEE6A6F57641E4E008E0DCC40603558C 
{
	int32_t ___value__;
};
struct MeshRendererComponentMask_t9A6A143E8B9C3374C4996ACD2C09D03FA0ABA156 
{
	int32_t ___value__;
};
struct MeshRendererUpdateType_t1A5CB58D1DC16CBF8A09F4199C6680A1C2E39416 
{
	int32_t ___value__;
};
struct MeshTopology_t815FF5CF04D62195A23E2DF8A5C0A071F11FBCBF 
{
	int32_t ___value__;
};
struct MeshUpdateFlags_tCCD32DF7F112AE37CA85E45959DC6CDF64444DF6 
{
	int32_t ___value__;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
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
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct PropagationPhase_tF3BE8BF5ED45FC52A828B7B6F078B64F01FAE6D6 
{
	int32_t ___value__;
};
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct RenderHints_t4032FC4AB3FD946FD2A484865B8861730D9035E7 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79 
{
	int32_t ___value__;
};
struct VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6 
{
	int32_t ___value__;
};
struct VertexAttributeFormat_tD714C51E671502B116ACE5E23F042BA80649D32F 
{
	int32_t ___value__;
};
struct VisualElementFlags_t4D1066E11400967A1A2DA7331391ACDC4AA14409 
{
	int32_t ___value__;
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
struct EventPropagation_t024AF56F7A787C03AA21B065B624553EF52E7B83 
{
	int32_t ___value__;
};
struct LifeCycleStatus_tEE500629F5431B574B8047EB70864747D348D38C 
{
	int32_t ___value__;
};
struct DataOwner_tCE1526E8508042F97CE454B8F70D36044C421CA5 
{
	int32_t ___value__;
};
struct BlendProbesUsage_tFD5E0A98D2DF9D8CFC25666743C6189C33CE4AA0 
{
	int32_t ___value__;
};
struct LightmapUsage_t2F244D6F9FFD700E6CBC90571DAA5B1627B13CF5 
{
	int32_t ___value__;
};
struct JaggedSpan_1_t066A9B4751C6582FF62E2CF935551C2DD681A1F4 
{
	UnsafeList_1_tEF402E259D390EA25AFFFF8D967B3EB014B9A7DC ___m_Sections;
	int32_t ___m_TotalLength;
};
struct JaggedSpan_1_tE10FCFEF557E7CDDDF12AF04C799238E4CA6F874 
{
	UnsafeList_1_t045D20B5AD78A93EF71288E2EE1F31B44B682778 ___m_Sections;
	int32_t ___m_TotalLength;
};
struct JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 
{
	UnsafeList_1_t50550CEABB959BFA1A623C8BEA7F57DB44B12093 ___m_Sections;
	int32_t ___m_TotalLength;
};
struct JaggedSpan_1_t848B290FCAF87832F0DE1F634992933A7FA4B95F 
{
	UnsafeList_1_t562F009533B9AD3A7B0F4DBF2D3DD41A07EBA140 ___m_Sections;
	int32_t ___m_TotalLength;
};
struct JaggedSpan_1_t3067D919B458680EEE24F0A13D7197E9BE12F1DD 
{
	UnsafeList_1_tA360AA1D3FAC94F732905EC58605414C4592FCBD ___m_Sections;
	int32_t ___m_TotalLength;
};
struct JaggedSpan_1_t4B0F610CB9F0D07DBACC7A1ED0E369A5597B231F 
{
	UnsafeList_1_tADF105D4D0254C44A022A3B2928E3A129B090DA6 ___m_Sections;
	int32_t ___m_TotalLength;
};
struct JaggedSpan_1_t32830D1535854EAD8BA48104F08F3272C7E769E7 
{
	UnsafeList_1_tCB6C3D0DF6D45E8D0F1AB899D3F6184EB53CACD5 ___m_Sections;
	int32_t ___m_TotalLength;
};
struct JaggedSpan_1_tF94ED6AFD24DDD9CC417FB82D16DAD8AE8CCFC7F 
{
	UnsafeList_1_tBDD383F66A245BBF180BD9D9BCD6D9C48B36325C ___m_Sections;
	int32_t ___m_TotalLength;
};
struct JaggedSpan_1_t98DBB4FD566BB801AEBF84AF70C2A481481937B1 
{
	UnsafeList_1_tB16A935C476248B9129865F308F511262905777F ___m_Sections;
	int32_t ___m_TotalLength;
};
struct JaggedSpan_1_tD52D0E3D01502F379DAF3E7728EBCD3288585786 
{
	UnsafeList_1_t42D7397763B114A70D610F1FFBBC262DE2D9E5FC ___m_Sections;
	int32_t ___m_TotalLength;
};
struct JaggedSpan_1_t5475961F6CB0A4DA335CC6353957B44A21E82D9A 
{
	UnsafeList_1_tE754000F0ACA8BA027341077855B191D08E98144 ___m_Sections;
	int32_t ___m_TotalLength;
};
struct JaggedSpan_1_t8E2079A8EEB42C081D4EFFCCC9728C89D0DFE13E 
{
	UnsafeList_1_tB698B9DE7D882F49506F01854E176CB7BEC89B30 ___m_Sections;
	int32_t ___m_TotalLength;
};
struct NativeArray_1_tF49BE9DFA69A57FDAC8075E1B6F62686152D557D 
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
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
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
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
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
struct UnsafeHashSet_1_tDA0EA0F3984CE39895311C7838A2EC512B3F07A4 
{
	HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC ___m_Data;
};
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C  : public RuntimeObject
{
	int32_t ___U3CeventCategoriesU3Ek__BackingField;
	int64_t ___U3CtimestampU3Ek__BackingField;
	uint64_t ___U3CeventIdU3Ek__BackingField;
	uint64_t ___U3CtriggerEventIdU3Ek__BackingField;
	int32_t ___U3CpropagationU3Ek__BackingField;
	int32_t ___U3ClifeCycleStatusU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CelementTargetU3Ek__BackingField;
	int32_t ___U3CpropagationPhaseU3Ek__BackingField;
	RuntimeObject* ___m_CurrentTarget;
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ImguiEvent;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CoriginalMousePositionU3Ek__BackingField;
};
struct JaggedBitSpan_t63FCCB84ABFE6FCD2C4EA4C81803C801F5BB6657 
{
	UnsafeList_1_tEECA348F0E34147530D222AB9E0B420D6190B22E ___m_Sections;
	int32_t ___m_TotalLength;
};
struct MarshalledArray_t6AEAFB9F03F350E0CCFF93A3CA6C14A99D3F3536 
{
	void* ___data;
	int32_t ___size;
	int32_t ___capacity;
	int32_t ___dataOwner;
};
struct MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 
{
	union
	{
		struct
		{
			intptr_t ___pointer;
			int32_t ___allocator;
		};
		uint8_t MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2__padding[16];
	};
};
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Array_1_t6B7799491F8633D7A2A3353B59A01AAC47D82A01 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___m_Array;
	int32_t ___m_MaxSize;
	int32_t ___m_AllocLabel;
	int32_t ___m_Options;
};
struct Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___m_Array;
	int32_t ___m_MaxSize;
	int32_t ___m_AllocLabel;
	int32_t ___m_Options;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct MeshRendererUpdateBatch_t386C6151480A8A39F3A9703B56B8A87AAD5EEED2 
{
	JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 ___instanceIDs;
	JaggedSpan_1_t8E2079A8EEB42C081D4EFFCCC9728C89D0DFE13E ___localToWorlds;
	JaggedSpan_1_t8E2079A8EEB42C081D4EFFCCC9728C89D0DFE13E ___prevLocalToWorlds;
	JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 ___meshIDs;
	JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 ___materialIDs;
	JaggedSpan_1_tF94ED6AFD24DDD9CC417FB82D16DAD8AE8CCFC7F ___subMaterialRanges;
	JaggedSpan_1_t98DBB4FD566BB801AEBF84AF70C2A481481937B1 ___subMeshStartIndices;
	JaggedSpan_1_t98DBB4FD566BB801AEBF84AF70C2A481481937B1 ___staticBatchSubMeshCounts;
	JaggedSpan_1_t066A9B4751C6582FF62E2CF935551C2DD681A1F4 ___localBounds;
	JaggedSpan_1_t32830D1535854EAD8BA48104F08F3272C7E769E7 ___rendererSettings;
	JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 ___parentLODGroupIDs;
	JaggedSpan_1_tE10FCFEF557E7CDDDF12AF04C799238E4CA6F874 ___lodMasks;
	JaggedSpan_1_t4B0F610CB9F0D07DBACC7A1ED0E369A5597B231F ___meshLodSettings;
	JaggedSpan_1_t848B290FCAF87832F0DE1F634992933A7FA4B95F ___lightmapIndices;
	JaggedSpan_1_t3067D919B458680EEE24F0A13D7197E9BE12F1DD ___rendererPriorities;
	JaggedSpan_1_tD52D0E3D01502F379DAF3E7728EBCD3288585786 ___sceneCullingMasks;
	NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030 ___sharedSceneCullingMasks;
	NativeArray_1_tF49BE9DFA69A57FDAC8075E1B6F62686152D557D ___gpuComponentUpdates;
	JaggedBitSpan_t63FCCB84ABFE6FCD2C4EA4C81803C801F5BB6657 ___renderingEnabled;
	int32_t ___componentMask;
	int32_t ___updateType;
	int32_t ___lightmapUsage;
	int32_t ___blendProbesUsage;
	bool ___useSharedSceneCullingMask;
	bool ___mightIncludeTrees;
};
struct MeshRendererUpdateBatch_t386C6151480A8A39F3A9703B56B8A87AAD5EEED2_marshaled_pinvoke
{
	JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 ___instanceIDs;
	JaggedSpan_1_t8E2079A8EEB42C081D4EFFCCC9728C89D0DFE13E ___localToWorlds;
	JaggedSpan_1_t8E2079A8EEB42C081D4EFFCCC9728C89D0DFE13E ___prevLocalToWorlds;
	JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 ___meshIDs;
	JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 ___materialIDs;
	JaggedSpan_1_tF94ED6AFD24DDD9CC417FB82D16DAD8AE8CCFC7F ___subMaterialRanges;
	JaggedSpan_1_t98DBB4FD566BB801AEBF84AF70C2A481481937B1 ___subMeshStartIndices;
	JaggedSpan_1_t98DBB4FD566BB801AEBF84AF70C2A481481937B1 ___staticBatchSubMeshCounts;
	JaggedSpan_1_t066A9B4751C6582FF62E2CF935551C2DD681A1F4 ___localBounds;
	JaggedSpan_1_t32830D1535854EAD8BA48104F08F3272C7E769E7 ___rendererSettings;
	JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 ___parentLODGroupIDs;
	JaggedSpan_1_tE10FCFEF557E7CDDDF12AF04C799238E4CA6F874 ___lodMasks;
	JaggedSpan_1_t4B0F610CB9F0D07DBACC7A1ED0E369A5597B231F ___meshLodSettings;
	JaggedSpan_1_t848B290FCAF87832F0DE1F634992933A7FA4B95F ___lightmapIndices;
	JaggedSpan_1_t3067D919B458680EEE24F0A13D7197E9BE12F1DD ___rendererPriorities;
	JaggedSpan_1_tD52D0E3D01502F379DAF3E7728EBCD3288585786 ___sceneCullingMasks;
	NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030 ___sharedSceneCullingMasks;
	NativeArray_1_tF49BE9DFA69A57FDAC8075E1B6F62686152D557D ___gpuComponentUpdates;
	JaggedBitSpan_t63FCCB84ABFE6FCD2C4EA4C81803C801F5BB6657 ___renderingEnabled;
	int32_t ___componentMask;
	int32_t ___updateType;
	int32_t ___lightmapUsage;
	int32_t ___blendProbesUsage;
	int32_t ___useSharedSceneCullingMask;
	int32_t ___mightIncludeTrees;
};
struct MeshRendererUpdateBatch_t386C6151480A8A39F3A9703B56B8A87AAD5EEED2_marshaled_com
{
	JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 ___instanceIDs;
	JaggedSpan_1_t8E2079A8EEB42C081D4EFFCCC9728C89D0DFE13E ___localToWorlds;
	JaggedSpan_1_t8E2079A8EEB42C081D4EFFCCC9728C89D0DFE13E ___prevLocalToWorlds;
	JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 ___meshIDs;
	JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 ___materialIDs;
	JaggedSpan_1_tF94ED6AFD24DDD9CC417FB82D16DAD8AE8CCFC7F ___subMaterialRanges;
	JaggedSpan_1_t98DBB4FD566BB801AEBF84AF70C2A481481937B1 ___subMeshStartIndices;
	JaggedSpan_1_t98DBB4FD566BB801AEBF84AF70C2A481481937B1 ___staticBatchSubMeshCounts;
	JaggedSpan_1_t066A9B4751C6582FF62E2CF935551C2DD681A1F4 ___localBounds;
	JaggedSpan_1_t32830D1535854EAD8BA48104F08F3272C7E769E7 ___rendererSettings;
	JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 ___parentLODGroupIDs;
	JaggedSpan_1_tE10FCFEF557E7CDDDF12AF04C799238E4CA6F874 ___lodMasks;
	JaggedSpan_1_t4B0F610CB9F0D07DBACC7A1ED0E369A5597B231F ___meshLodSettings;
	JaggedSpan_1_t848B290FCAF87832F0DE1F634992933A7FA4B95F ___lightmapIndices;
	JaggedSpan_1_t3067D919B458680EEE24F0A13D7197E9BE12F1DD ___rendererPriorities;
	JaggedSpan_1_tD52D0E3D01502F379DAF3E7728EBCD3288585786 ___sceneCullingMasks;
	NativeList_1_tB6007C869E1511FACD91D9611A0C7B98D6E9D030 ___sharedSceneCullingMasks;
	NativeArray_1_tF49BE9DFA69A57FDAC8075E1B6F62686152D557D ___gpuComponentUpdates;
	JaggedBitSpan_t63FCCB84ABFE6FCD2C4EA4C81803C801F5BB6657 ___renderingEnabled;
	int32_t ___componentMask;
	int32_t ___updateType;
	int32_t ___lightmapUsage;
	int32_t ___blendProbesUsage;
	int32_t ___useSharedSceneCullingMask;
	int32_t ___mightIncludeTrees;
};
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED 
{
	String_t* ___U3CnameU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___U3CvalueU3Ek__BackingField;
};
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___U3CvalueU3Ek__BackingField;
};
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___U3CvalueU3Ek__BackingField;
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
struct UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 
{
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
	Data_t6BD087CC0FA9794D342D260035A70E365224C66E* ___m_Data;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E 
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___m_PropertyPath;
	String_t* ___m_Path;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_pinvoke
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke ___m_PropertyPath;
	char* ___m_Path;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_com
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com ___m_PropertyPath;
	Il2CppChar* ___m_Path;
};
struct LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA 
{
	int32_t ___m_Manager;
	UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 ___m_Nodes;
	UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 ___m_Configs;
};
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	String_t* ____objectName;
};
struct LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE 
{
	LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA ___m_Access;
	UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1 ___m_Handle;
};
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField;
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField;
	String_t* ___m_Name;
	StyleClassList_tCA2E8910D5BCCB7029CF852421F1E07E8EDF9744 ___m_ClassList;
	Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35* ___m_PropertyBag;
	int32_t ___m_Flags;
	int32_t ___m_RenderHints;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding;
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___renderData;
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___nestedRenderData;
	int32_t ___insertionIndex;
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField;
	String_t* ___m_ViewDataKey;
	int32_t ___m_LanguageDirection;
	LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE ___m_LayoutNode;
	VisualElementTransformData_t3DD575B5990B68FF956673EFF036171C86A38DF3* ___m_TransformDataPTr;
	VisualElementSelectorData_t4C4043092A19A653CE8637C7659E36E0D3CC23A0* ___m_SelectorDataPtr;
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext;
	int32_t ___inheritedStylesHash;
	uint32_t ___controlid;
	int32_t ___imguiContainerDescendantCount;
	int32_t ___m_LocalLanguageDirection;
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField;
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations;
	RuntimeObject* ___m_DataSource;
	PathRef_t76F7677792A14AF9D6A6EAB7F08C1A3DC2B27A55* ___m_DataSourcePath;
	int32_t ___m_TrickleDownHandleEventCategories;
	int32_t ___m_BubbleUpHandleEventCategories;
	int32_t ___m_BubbleUpEventCallbackCategories;
	int32_t ___m_TrickleDownEventCallbackCategories;
	int32_t ___m_EventInterestSelfCategories;
	int32_t ___m_CachedEventInterestParentCategories;
	uint32_t ___m_NextParentCachedVersion;
	uint32_t ___m_NextParentRequiredVersion;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_CachedNextParentWithEventInterests;
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource;
	List_1_tB1D3AE6638063900DFF2ED463335EF8912FBBF7B* ___m_MeshModifiers;
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess;
	ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45* ___resolvedStyleAccess;
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList;
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData;
};
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___Value;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95_StaticFields
{
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___s_emptyArray;
};
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4_StaticFields
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_StaticFields
{
	JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46* ____equalityComparer;
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BooleanTypes;
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___NumberTypes;
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___StringTypes;
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___GuidTypes;
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___TimeSpanTypes;
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___UriTypes;
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___CharTypes;
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___DateTimeTypes;
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BytesTypes;
};
struct Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticFields
{
	double ___doubleRoundLimit;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___roundPower10Double;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178_StaticFields
{
	ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 ___U3CEmptyU3Ek__BackingField;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct ModuleHandle_t2F8BE4233858E78501EF0B4D650CECD9A6D5D9F4_StaticFields
{
	int32_t ___kMaxArea;
	int32_t ___kMaxEdgeCount;
	int32_t ___kMaxIndexCount;
	int32_t ___kMaxVertexCount;
	int32_t ___kMaxTriangleCount;
	int32_t ___kMaxRefineIterations;
	int32_t ___kMaxSmoothenIterations;
	float ___kIncrementAreaFactor;
};
struct ModuleHandle_t5D0F96F84469E2969C2509C1965812B79964CC83_StaticFields
{
	int32_t ___kMaxArea;
	int32_t ___kMaxEdgeCount;
	int32_t ___kMaxIndexCount;
	int32_t ___kMaxVertexCount;
	int32_t ___kMaxTriangleCount;
	int32_t ___kMaxRefineIterations;
	int32_t ___kMaxSmoothenIterations;
	float ___kIncrementAreaFactor;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_StaticFields
{
	int64_t ___s_LastTypeId;
	uint64_t ___s_NextEventId;
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
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	uint32_t ___s_NextId;
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey;
	String_t* ___disabledUssClassName;
	UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF ___disabledUssClassNameUnique;
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey;
	int32_t ___s_FinalizerCount;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___childCountProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___contentRectProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___dataSourcePathProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___dataSourceProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___disablePlayModeTintProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___enabledInHierarchyProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___enabledSelfProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___layoutProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___languageDirectionProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___localBoundProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___nameProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___panelProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___pickingModeProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___styleSheetsProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___tooltipProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___usageHintsProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___userDataProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___viewDataKeyProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___visibleProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___visualTreeAssetSourceProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___worldBoundProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___worldTransformProperty;
	uint32_t ___s_NextParentVersion;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList;
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath;
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData;
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
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1  : public RuntimeArray
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m0EA73CEAF52AB31E2713E59AB88541332594D914_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m6514A6564F9827564455D5BA04850C10B42CAEFA_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MemoryExtensions_IsTypeComparableAsBytes_TisIl2CppFullySharedGenericAny_m222C2D308418E5EF828B7DB3393EF84053FBA614_fshared_inline (uint64_t* ___0_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___0_span, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_TisIl2CppFullySharedGenericAny_mEB89EB892E7BFDB9AB968DFE0A5FEF3AAAE1E424_fshared (Il2CppFullySharedGenericAny* ___0_first, Il2CppFullySharedGenericAny* ___1_second, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisIl2CppFullySharedGenericAny_m28DDF4475C9EA0E0C80C0C9A0E6D96CCC3609FB4_fshared (Il2CppFullySharedGenericAny* ___0_searchSpace, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOfAny_TisIl2CppFullySharedGenericAny_mD777B4B83B2CBE31F541334C63B38FCAD99CBF5B_fshared (Il2CppFullySharedGenericAny* ___0_searchSpace, int32_t ___1_searchSpaceLength, Il2CppFullySharedGenericAny* ___2_value, int32_t ___3_valueLength, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_m5144BD426181728CA94C44B8778ECDF811B77843_fshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisIl2CppFullySharedGenericAny_mD5748385042811E049C06FFD865AFD213C5FA9EB_fshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyMemory_1_GetObjectStartLength_m76D2DB58E89EF8DAAB0BEEC5E80CC99E7C3CB752_fshared_inline (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, int32_t* ___0_start, int32_t* ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArraySegment_1_get_Array_mE4A35DFD81ABF447350B9A05C0F4BF0248A3CFF2_fshared_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m4FAFF061AB36BF278BA8DC37B6D13718A06301E6_fshared_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m3A1337B17EA471D2D1538CB43ADB3B91267F978F_fshared (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 ArraySegment_1_get_Empty_m90EEE776AECD3AE35BB8634281B140DA015FFD49_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Mesh_GetAllocArrayFromChannel_TisIl2CppFullySharedGenericAny_m8B7685BD0F7A25A9C8D727A229B5E14195FF0832_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetListForChannel_TisIl2CppFullySharedGenericStruct_mCA1D8340E0742A8BD36777E680B6D6FF0459659C_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___0_buffer, int32_t ___1_capacity, int32_t ___2_channel, int32_t ___3_dim, int32_t ___4_channelType, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_EnsureListElemCount_TisIl2CppFullySharedGenericAny_m74270910BAB663797ED6E0784FA1669689B9CAB9_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 UnsafeUtility_GetByteSpanFromList_TisIl2CppFullySharedGenericStruct_m7644779593338EF0C449D6761DD2578F7DAEB46E_fshared_inline (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetListForChannel_TisIl2CppFullySharedGenericStruct_mC8A03EDDAAE470040D392DFC47AD8587DAD50A09_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___0_buffer, int32_t ___1_capacity, int32_t ___2_channel, int32_t ___3_dim, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 MemoryExtensions_AsSpan_TisIl2CppFullySharedGenericAny_m788D06C7A78ACE9317501CAAB3ACB95E63B8B3BD_fshared_inline (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryMarshal_AsBytes_TisIl2CppFullySharedGenericStruct_mF17987979FA677881AF5A25ECF5A4A8FECDC7FC5_fshared_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetIndices_TisIl2CppFullySharedGenericStruct_m807463610A6EB5B42B1E72682832EBF24C6D7518_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_indices, int32_t ___1_indicesStart, int32_t ___2_indicesLength, int32_t ___3_topology, int32_t ___4_submesh, bool ___5_calculateBounds, int32_t ___6_baseVertex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetIndices_TisIl2CppFullySharedGenericStruct_m92D7D70FDE424B019A8F127C8288668FC92BEA50_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_indices, int32_t ___1_indicesStart, int32_t ___2_indicesLength, int32_t ___3_topology, int32_t ___4_submesh, int32_t ___5_meshLod, bool ___6_calculateBounds, int32_t ___7_baseVertex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisIl2CppFullySharedGenericAny_mB18CEBDDF0A538A97CF6A7A38894F8094351E7B9_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetNormals_TisIl2CppFullySharedGenericStruct_mFA4C735A5DB5E829E0868A1EE1E270BD23F566C4_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_inNormals, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetNormals_TisIl2CppFullySharedGenericStruct_mBD8ABDB8D35978C8BEED68B7F31196622A24686F_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_inNormals, int32_t ___1_start, int32_t ___2_length, int32_t ___3_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_TisIl2CppFullySharedGenericStruct_m8EBE44A00E06C6C07C66622BEA4449D580E775DF_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_uvs, int32_t ___2_start, int32_t ___3_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_TisIl2CppFullySharedGenericStruct_m4B2A5AA1A7EA0714BA77859333749EB8BF88C2E2_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_uvs, int32_t ___2_start, int32_t ___3_length, int32_t ___4_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetListForChannel_TisIl2CppFullySharedGenericStruct_m65E9F2E903D3B8FC06F6F3FE946EC9A0F74F4264_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___3_values, int32_t ___4_start, int32_t ___5_length, int32_t ___6_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetVertices_TisIl2CppFullySharedGenericStruct_m8A18C2DD85A9F6D2D61F2643CDF0E79307A5CEA1_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_inVertices, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetVertices_TisIl2CppFullySharedGenericStruct_m019B9059D7AF28E367D078D856E4FD61153A347B_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_inVertices, int32_t ___1_start, int32_t ___2_length, int32_t ___3_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JaggedSpan_1_get_isEmpty_mBABC4514687000C51E69CE21E4E99093E05B72A2_fshared (JaggedSpan_1_t5475961F6CB0A4DA335CC6353957B44A21E82D9A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JaggedSpan_1_HasSameLayout_TisIl2CppFullySharedGenericStruct_m4D1BB22B7BAB73FA1B75B9F26C001B99CEB5454E_fshared (JaggedSpan_1_t5475961F6CB0A4DA335CC6353957B44A21E82D9A* __this, JaggedSpan_1_t5475961F6CB0A4DA335CC6353957B44A21E82D9A* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JaggedSpan_1_get_sectionCount_mEC9E28B1D5098F3265B8BAB73C807482317D320C_fshared (JaggedSpan_1_t5475961F6CB0A4DA335CC6353957B44A21E82D9A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_Value_TisIl2CppFullySharedGenericAny_m821CCC36F1FA50BC93426381634588C42D5E3216_fshared (RuntimeObject* ___0_value, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEveryNthU3Ed__1_1__ctor_m83020BDE380BDECEB8C81B76F3D73D86F107758F_fshared (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_Copy_TisIl2CppFullySharedGenericStruct_m0371F16C5C917BEFC98EE2543E82DB386E4E117A_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, int32_t ___1_srcIndex, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___2_dst, int32_t ___3_dstIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_m8831A4576613C49F9A635455804441337A122D59_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, int32_t ___1_srcIndex, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___2_dst, int32_t ___3_dstIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_get_Item_m41E3596F9E8D0B496073753DBB17AEFC4E770582_fshared (Array_1_t6B7799491F8633D7A2A3353B59A01AAC47D82A01* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_fshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_fshared_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_Copy_TisIl2CppFullySharedGenericStruct_m7A047D0293849EC8C78740E2DE5E8574136F188B_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, int32_t ___1_srcIndex, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___2_dst, int32_t ___3_dstIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_get_Item_m4B6EECC3E6603139E5A91FED7AA091CD329A6029_fshared (Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* EnumerableHelpers_ToArray_TisIl2CppFullySharedGenericAny_mC640FA20C2979C79E0D09F20367FD4A27166D3A5_fshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* MouseEventBase_1_GetPooled_m84A60BC498C8DF00411A02A28D9547715B2E87C1_gshared (RuntimeObject* ___0_triggerEvent, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_mousePosition, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 PrimitiveValue_From_TisIl2CppFullySharedGenericStruct_m6846A493CC72CBD82D945883B6E21C3D2A6A18F2_fshared (Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 NativeArray_1_AsReadOnlySpan_mEDF5E795C5FC628766F2016DFB498E87E36BA3A0_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96_fshared (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_roSpan, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 NativeList_1_AsReadOnlySpan_m9B73FBB50388B80F5882E4C29601D1A20DE81C43_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ReadOnly_AsReadOnlySpan_m64C20F2CC8054C58682D3CB09F2D1B7109C17950_fshared (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m91DB739957BD36F24D30A1D26BE5B9B8E4F5C072_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeList_1_AsArray_m1E9616CC42457555561B1165B47ED6E2EEADAC98_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_CopyFrom_m910E1EF42DE5ACF6E07014ADC35D83E87A3C43A8_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeHashSet_1_ToNativeArray_m1F983BA2036D1FB556C421017F8E06EFA51F6E49_fshared (NativeHashSet_1_t4A3FF5E5E7880324EBA79057A83F747452D87D7B* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 UnsafeHashSet_1_ToNativeArray_m8AEAC3278128DBD9AC2E8BEAB88D2DF0FE66DA1B_fshared (UnsafeHashSet_1_tDA0EA0F3984CE39895311C7838A2EC512B3F07A4* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* ReadOnlySpan_1_get_Item_m9143C9CF6493AF0AD667C5BDEEF1D22895283F77_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m24FC981A18EAB95A996CFC6337FAB957062F81E1_fshared (Il2CppFullySharedGenericStruct* ___0_t, Il2CppFullySharedGenericStruct ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisIl2CppFullySharedGenericStruct_m0BC1578CE50C348FF9B616BD602021A69F647803_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtility_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m9BD1C4AD2221B8E77691F613764AAF6D9DA66233_fshared_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_fshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Stride_m3F2ACE95526BFFDE7967887D3C6188F286C6A12D_fshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_op_Inequality_m473523B85EC3F582AF2F86773108D5AF3E6B9D0C_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_left, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_m917794C9B80242C4B43D3C7F4A4CE0D5875AD3F6_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_dst, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Span_1_GetPinnableReference_mBC5955DDAAEA56F142B5C441DB6FBD96F2AB6ADB_fshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisIl2CppFullySharedGenericStruct_m530059660A1E31984686E17CC9E1E8EC5BADDADF_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* NoAllocHelpers_ExtractArrayFromList_TisIl2CppFullySharedGenericAny_m939A9FD04DDB2C021F8F2A09A8A13816556D8F2A_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_fshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_fshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_fshared_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtilityInternal_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m15B3F40D2AAAD385E615370BDEEAF11C94C43831_fshared_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;

inline void ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_fshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline void ReadOnlySpan_1_CopyTo_m50A3A496B3D51522906BB81E1F4FF1899D5C8AA6 (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_destination, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, const RuntimeMethod*))ReadOnlySpan_1_CopyTo_m0EA73CEAF52AB31E2713E59AB88541332594D914_fshared)(__this, ___0_destination, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* BindingsAllocator_GetNativeOwnedDataPointer_m3668639A4B328ECC1DBB756D0217BEAFE136F25A_inline (void* ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void MarshalledArray_ThrowUnimplementedDataOwnerCase_m2C657ACD8D66C1D47CB0880CE2AD37D7385A5538 (int32_t ___0_dataOwner, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, RuntimeObject* ___2_p2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_fshared_inline)(__this, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
inline void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_fshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void ReadOnlySpan_1__ctor_m6514A6564F9827564455D5BA04850C10B42CAEFA_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))ReadOnlySpan_1__ctor_m6514A6564F9827564455D5BA04850C10B42CAEFA_fshared_inline)(__this, ___0_array, method);
}
inline void ReadOnlySpan_1_CopyTo_m0EA73CEAF52AB31E2713E59AB88541332594D914 (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, const RuntimeMethod*))ReadOnlySpan_1_CopyTo_m0EA73CEAF52AB31E2713E59AB88541332594D914_fshared)(__this, ___0_destination, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline)(__this, method);
}
inline bool MemoryExtensions_IsTypeComparableAsBytes_TisIl2CppFullySharedGenericAny_m222C2D308418E5EF828B7DB3393EF84053FBA614_inline (uint64_t* ___0_size, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t*, const RuntimeMethod*))MemoryExtensions_IsTypeComparableAsBytes_TisIl2CppFullySharedGenericAny_m222C2D308418E5EF828B7DB3393EF84053FBA614_fshared_inline)(___0_size, method);
}
inline Il2CppFullySharedGenericAny* MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208 (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___0_span, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericAny* (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC, const RuntimeMethod*))MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208_fshared)(___0_span, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_m69781B64721462BCA1ED200A1BB853E9B7026F2E (uint8_t* ___0_first, uint8_t* ___1_second, uint64_t ___2_length, const RuntimeMethod* method) ;
inline bool SpanHelpers_SequenceEqual_TisIl2CppFullySharedGenericAny_mEB89EB892E7BFDB9AB968DFE0A5FEF3AAAE1E424 (Il2CppFullySharedGenericAny* ___0_first, Il2CppFullySharedGenericAny* ___1_second, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))SpanHelpers_SequenceEqual_TisIl2CppFullySharedGenericAny_mEB89EB892E7BFDB9AB968DFE0A5FEF3AAAE1E424_fshared)(___0_first, ___1_second, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_mB37566B16F2F4C7D14E1CD6EA781AC67110E8C4C (uint8_t* ___0_searchSpace, uint8_t ___1_value, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_m1EBE4594F5288D2297A3A8E8E4F365BE4BD211DC (Il2CppChar* ___0_searchSpace, Il2CppChar ___1_value, int32_t ___2_length, const RuntimeMethod* method) ;
inline int32_t SpanHelpers_IndexOf_TisIl2CppFullySharedGenericAny_m28DDF4475C9EA0E0C80C0C9A0E6D96CCC3609FB4 (Il2CppFullySharedGenericAny* ___0_searchSpace, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, int32_t, const RuntimeMethod*))SpanHelpers_IndexOf_TisIl2CppFullySharedGenericAny_m28DDF4475C9EA0E0C80C0C9A0E6D96CCC3609FB4_fshared)(___0_searchSpace, ___1_value, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOfAny_m73AAF95F81D0C3DBF110AF017A67AB73170F110C (uint8_t* ___0_searchSpace, int32_t ___1_searchSpaceLength, uint8_t* ___2_value, int32_t ___3_valueLength, const RuntimeMethod* method) ;
inline int32_t SpanHelpers_IndexOfAny_TisIl2CppFullySharedGenericAny_mD777B4B83B2CBE31F541334C63B38FCAD99CBF5B (Il2CppFullySharedGenericAny* ___0_searchSpace, int32_t ___1_searchSpaceLength, Il2CppFullySharedGenericAny* ___2_value, int32_t ___3_valueLength, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Il2CppFullySharedGenericAny*, int32_t, Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))SpanHelpers_IndexOfAny_TisIl2CppFullySharedGenericAny_mD777B4B83B2CBE31F541334C63B38FCAD99CBF5B_fshared)(___0_searchSpace, ___1_searchSpaceLength, ___2_value, ___3_valueLength, method);
}
inline int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
inline Il2CppFullySharedGenericAny* MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_m5144BD426181728CA94C44B8778ECDF811B77843 (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericAny* (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, const RuntimeMethod*))MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_m5144BD426181728CA94C44B8778ECDF811B77843_fshared)(___0_span, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* MemoryMarshal_GetReference_TisIl2CppFullySharedGenericStruct_mC7610B0FA8D932755159374A36B473AA45FDFCBC (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_span, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, const RuntimeMethod*))MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208_fshared)(___0_span, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m3CC53FCCDE299F21DEF7AB63EF3D378DAB954005_inline (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline)(__this, method);
}
inline int32_t Unsafe_SizeOf_TisIl2CppFullySharedGenericStruct_m5B40ADA085C40138AB7DFD671EED6795DE06E8CB (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))Unsafe_SizeOf_TisIl2CppFullySharedGenericAny_mD5748385042811E049C06FFD865AFD213C5FA9EB_fshared)(method);
}
inline void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, uint8_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline Il2CppFullySharedGenericStruct* MemoryMarshal_GetReference_TisIl2CppFullySharedGenericStruct_mE6EF4F8FFA4C5C6F3BA18346118C88E7F3E65F9D (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, const RuntimeMethod*))MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_m5144BD426181728CA94C44B8778ECDF811B77843_fshared)(___0_span, method);
}
inline int32_t Span_1_get_Length_m1AADCDF6D1BB9B4B07BB14C7E31273E22A096E74_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline RuntimeObject* ReadOnlyMemory_1_GetObjectStartLength_m76D2DB58E89EF8DAAB0BEEC5E80CC99E7C3CB752_inline (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, int32_t* ___0_start, int32_t* ___1_length, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*, int32_t*, int32_t*, const RuntimeMethod*))ReadOnlyMemory_1_GetObjectStartLength_m76D2DB58E89EF8DAAB0BEEC5E80CC99E7C3CB752_fshared_inline)(__this, ___0_start, ___1_length, method);
}
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArraySegment_1_get_Array_mE4A35DFD81ABF447350B9A05C0F4BF0248A3CFF2_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))ArraySegment_1_get_Array_mE4A35DFD81ABF447350B9A05C0F4BF0248A3CFF2_fshared_inline)(__this, method);
}
inline int32_t ArraySegment_1_get_Offset_m4FAFF061AB36BF278BA8DC37B6D13718A06301E6_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))ArraySegment_1_get_Offset_m4FAFF061AB36BF278BA8DC37B6D13718A06301E6_fshared_inline)(__this, method);
}
inline void ArraySegment_1__ctor_m3A1337B17EA471D2D1538CB43ADB3B91267F978F (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))ArraySegment_1__ctor_m3A1337B17EA471D2D1538CB43ADB3B91267F978F_fshared)(__this, ___0_array, ___1_offset, ___2_count, method);
}
inline ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 ArraySegment_1_get_Empty_m90EEE776AECD3AE35BB8634281B140DA015FFD49_inline (const RuntimeMethod* method)
{
	return ((  ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 (*) (const RuntimeMethod*))ArraySegment_1_get_Empty_m90EEE776AECD3AE35BB8634281B140DA015FFD49_fshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_Free_mFF99F4F02FE7F735AB30D8987D6953E55A2B23E1 (void* ___0_memory, int32_t ___1_allocator, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_fshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_fshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_Malloc_mD7BD28D5AE7E4901B225B7DFFE2B568EE7BDC0C9 (int64_t ___0_size, int32_t ___1_alignment, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_DefaultDimensionForChannel_mCE2BFE4516CB37EA677E8671997D986FF654C130 (int32_t ___0_channel, const RuntimeMethod* method) ;
inline __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* Mesh_GetAllocArrayFromChannel_TisIl2CppFullySharedGenericStruct_m98848E1CD7EAD8C1064AA1920EE38BC3E825AF85 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t, int32_t, int32_t, const RuntimeMethod*))Mesh_GetAllocArrayFromChannel_TisIl2CppFullySharedGenericAny_m8B7685BD0F7A25A9C8D727A229B5E14195FF0832_fshared)(__this, ___0_channel, ___1_format, ___2_dim, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_get_canAccess_m97F255BBB8C009D643920E2D095B6DB8868E3572 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_HasVertexAttribute_m6FA9574E4DEE19158535F93281791AD6FB550595 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_attr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Mesh_GetAllocArrayFromChannelImpl_m30C7972CA5A67CD01EBBDDE2FD8F48CE2F8F86F6 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_PrintErrorCantAccessChannel_mD80AC1870BC51714BE0C97B15D3E3D4EC42AC85E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_ch, const RuntimeMethod* method) ;
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_inline (const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_fshared_inline)(method);
}
inline void Mesh_GetListForChannel_TisIl2CppFullySharedGenericStruct_mCA1D8340E0742A8BD36777E680B6D6FF0459659C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___0_buffer, int32_t ___1_capacity, int32_t ___2_channel, int32_t ___3_dim, int32_t ___4_channelType, const RuntimeMethod* method)
{
	((  void (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Mesh_GetListForChannel_TisIl2CppFullySharedGenericStruct_mCA1D8340E0742A8BD36777E680B6D6FF0459659C_fshared)(__this, ___0_buffer, ___1_capacity, ___2_channel, ___3_dim, ___4_channelType, method);
}
inline void List_1_Clear_mAB38E4DFB42AEB226BCF52B9D8A9A0E0CBAA7653_inline (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_fshared_inline)(__this, method);
}
inline void NoAllocHelpers_EnsureListElemCount_TisIl2CppFullySharedGenericStruct_mF42FFF3FE359CB02D1DA68605F8DB48B6FA0C3DE (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___0_list, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, int32_t, const RuntimeMethod*))NoAllocHelpers_EnsureListElemCount_TisIl2CppFullySharedGenericAny_m74270910BAB663797ED6E0784FA1669689B9CAB9_fshared)(___0_list, ___1_count, method);
}
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 UnsafeUtility_GetByteSpanFromList_TisIl2CppFullySharedGenericStruct_m7644779593338EF0C449D6761DD2578F7DAEB46E_inline (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___0_list, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))UnsafeUtility_GetByteSpanFromList_TisIl2CppFullySharedGenericStruct_m7644779593338EF0C449D6761DD2578F7DAEB46E_fshared_inline)(___0_list, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetArrayFromChannelImpl_m667A8AB1DECA99476216E1A4AA392E7202067AB3 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___3_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_GetUVChannel_m52936A342F9C96EB7F0214A2F310018E1A25A689 (int32_t ___0_uvIndex, const RuntimeMethod* method) ;
inline void Mesh_GetListForChannel_TisIl2CppFullySharedGenericStruct_mC8A03EDDAAE470040D392DFC47AD8587DAD50A09 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___0_buffer, int32_t ___1_capacity, int32_t ___2_channel, int32_t ___3_dim, const RuntimeMethod* method)
{
	((  void (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, int32_t, int32_t, int32_t, const RuntimeMethod*))Mesh_GetListForChannel_TisIl2CppFullySharedGenericStruct_mC8A03EDDAAE470040D392DFC47AD8587DAD50A09_fshared)(__this, ___0_buffer, ___1_capacity, ___2_channel, ___3_dim, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_mB1F1CBA3C310ABE49EFFD290BF33527B14657DEF (RuntimeArray* ___0_values, const RuntimeMethod* method) ;
inline Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD MemoryExtensions_AsSpan_TisIl2CppFullySharedGenericStruct_mF8415BE462F218CF45D5AAA3183883F406EFD7BB_inline (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_array, const RuntimeMethod* method)
{
	return ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*, const RuntimeMethod*))MemoryExtensions_AsSpan_TisIl2CppFullySharedGenericAny_m788D06C7A78ACE9317501CAAB3ACB95E63B8B3BD_fshared_inline)(___0_array, method);
}
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryMarshal_AsBytes_TisIl2CppFullySharedGenericStruct_mF17987979FA677881AF5A25ECF5A4A8FECDC7FC5_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, const RuntimeMethod*))MemoryMarshal_AsBytes_TisIl2CppFullySharedGenericStruct_mF17987979FA677881AF5A25ECF5A4A8FECDC7FC5_fshared_inline)(___0_span, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetSizedArrayForChannel_mF84A744E887E2207A45909F9FAB6D2D016CF48BF (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___3_values, int32_t ___4_valuesArrayLength, int32_t ___5_valuesStart, int32_t ___6_valuesCount, int32_t ___7_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_PrintErrorCantAccessIndices_mC2A8F7BBED09D4D6ABC265AFCC2979795C1ABF0C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
inline int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_InternalSetIndexBufferData_m1CC300AEF876DF894E192CD7EA84A14E69159028 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, intptr_t ___0_data, int32_t ___1_dataStart, int32_t ___2_meshBufferStart, int32_t ___3_count, int32_t ___4_elemSize, int32_t ___5_flags, const RuntimeMethod* method) ;
inline void Mesh_SetIndices_TisIl2CppFullySharedGenericStruct_m807463610A6EB5B42B1E72682832EBF24C6D7518 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_indices, int32_t ___1_indicesStart, int32_t ___2_indicesLength, int32_t ___3_topology, int32_t ___4_submesh, bool ___5_calculateBounds, int32_t ___6_baseVertex, const RuntimeMethod* method)
{
	((  void (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, int32_t, int32_t, bool, int32_t, const RuntimeMethod*))Mesh_SetIndices_TisIl2CppFullySharedGenericStruct_m807463610A6EB5B42B1E72682832EBF24C6D7518_fshared)(__this, ___0_indices, ___1_indicesStart, ___2_indicesLength, ___3_topology, ___4_submesh, ___5_calculateBounds, ___6_baseVertex, method);
}
inline void Mesh_SetIndices_TisIl2CppFullySharedGenericStruct_m92D7D70FDE424B019A8F127C8288668FC92BEA50 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_indices, int32_t ___1_indicesStart, int32_t ___2_indicesLength, int32_t ___3_topology, int32_t ___4_submesh, int32_t ___5_meshLod, bool ___6_calculateBounds, int32_t ___7_baseVertex, const RuntimeMethod* method)
{
	((  void (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, int32_t, int32_t, int32_t, bool, int32_t, const RuntimeMethod*))Mesh_SetIndices_TisIl2CppFullySharedGenericStruct_m92D7D70FDE424B019A8F127C8288668FC92BEA50_fshared)(__this, ___0_indices, ___1_indicesStart, ___2_indicesLength, ___3_topology, ___4_submesh, ___5_meshLod, ___6_calculateBounds, ___7_baseVertex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_CheckCanAccessSubmeshIndices_mB6659E6FDE4EFDECB233C194E4AC066F5FF60533 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_submesh, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_CheckIndicesArrayRange_m0B8030BE6248E1E411D92E3255777E6E530527F4 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_valuesLength, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetIndicesNativeArrayImpl_m43DA64A7435E339FAB453A95FA43F53641E28C0F (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_submesh, int32_t ___1_topology, int32_t ___2_indicesFormat, intptr_t ___3_indices, int32_t ___4_arrayStart, int32_t ___5_arraySize, bool ___6_calculateBounds, int32_t ___7_baseVertex, int32_t ___8_meshlod, const RuntimeMethod* method) ;
inline int32_t NoAllocHelpers_SafeLength_TisIl2CppFullySharedGenericStruct_mC49B006E63419EFD2FA5B792E9ED7427A1D9135F (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___0_values, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))NoAllocHelpers_SafeLength_TisIl2CppFullySharedGenericAny_mB18CEBDDF0A538A97CF6A7A38894F8094351E7B9_fshared)(___0_values, method);
}
inline void Mesh_SetNormals_TisIl2CppFullySharedGenericStruct_mFA4C735A5DB5E829E0868A1EE1E270BD23F566C4 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_inNormals, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, const RuntimeMethod*))Mesh_SetNormals_TisIl2CppFullySharedGenericStruct_mFA4C735A5DB5E829E0868A1EE1E270BD23F566C4_fshared)(__this, ___0_inNormals, ___1_start, ___2_length, method);
}
inline void Mesh_SetNormals_TisIl2CppFullySharedGenericStruct_mBD8ABDB8D35978C8BEED68B7F31196622A24686F (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_inNormals, int32_t ___1_start, int32_t ___2_length, int32_t ___3_flags, const RuntimeMethod* method)
{
	((  void (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, int32_t, const RuntimeMethod*))Mesh_SetNormals_TisIl2CppFullySharedGenericStruct_mBD8ABDB8D35978C8BEED68B7F31196622A24686F_fshared)(__this, ___0_inNormals, ___1_start, ___2_length, ___3_flags, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetSizedNativeArrayForChannel_m6571CA632A3B7D9F2D110B5F76D47652A8B81372 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, intptr_t ___3_values, int32_t ___4_valuesArrayLength, int32_t ___5_valuesStart, int32_t ___6_valuesCount, int32_t ___7_flags, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetIndicesImpl_m0938B1C006C16E9E1DA63028D3F7C1DA2B8BC167 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_submesh, int32_t ___1_topology, int32_t ___2_indicesFormat, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___3_indices, int32_t ___4_arrayStart, int32_t ___5_arraySize, bool ___6_calculateBounds, int32_t ___7_baseVertex, int32_t ___8_meshlod, const RuntimeMethod* method) ;
inline void Mesh_SetUVs_TisIl2CppFullySharedGenericStruct_m8EBE44A00E06C6C07C66622BEA4449D580E775DF (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_uvs, int32_t ___2_start, int32_t ___3_length, const RuntimeMethod* method)
{
	((  void (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, const RuntimeMethod*))Mesh_SetUVs_TisIl2CppFullySharedGenericStruct_m8EBE44A00E06C6C07C66622BEA4449D580E775DF_fshared)(__this, ___0_channel, ___1_uvs, ___2_start, ___3_length, method);
}
inline void Mesh_SetUVs_TisIl2CppFullySharedGenericStruct_m4B2A5AA1A7EA0714BA77859333749EB8BF88C2E2 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_uvs, int32_t ___2_start, int32_t ___3_length, int32_t ___4_flags, const RuntimeMethod* method)
{
	((  void (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, int32_t, const RuntimeMethod*))Mesh_SetUVs_TisIl2CppFullySharedGenericStruct_m4B2A5AA1A7EA0714BA77859333749EB8BF88C2E2_fshared)(__this, ___0_channel, ___1_uvs, ___2_start, ___3_length, ___4_flags, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
inline void Mesh_SetListForChannel_TisIl2CppFullySharedGenericStruct_m65E9F2E903D3B8FC06F6F3FE946EC9A0F74F4264 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___3_values, int32_t ___4_start, int32_t ___5_length, int32_t ___6_flags, const RuntimeMethod* method)
{
	((  void (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, int32_t, int32_t, int32_t, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, int32_t, int32_t, int32_t, const RuntimeMethod*))Mesh_SetListForChannel_TisIl2CppFullySharedGenericStruct_m65E9F2E903D3B8FC06F6F3FE946EC9A0F74F4264_fshared)(__this, ___0_channel, ___1_format, ___2_dim, ___3_values, ___4_start, ___5_length, ___6_flags, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_InternalSetVertexBufferData_m3B8AC41D45EC66E17500B19B7E93AE01B28AA0F9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_stream, intptr_t ___1_data, int32_t ___2_dataStart, int32_t ___3_meshBufferStart, int32_t ___4_count, int32_t ___5_elemSize, int32_t ___6_flags, const RuntimeMethod* method) ;
inline void Mesh_SetVertices_TisIl2CppFullySharedGenericStruct_m8A18C2DD85A9F6D2D61F2643CDF0E79307A5CEA1 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_inVertices, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, const RuntimeMethod*))Mesh_SetVertices_TisIl2CppFullySharedGenericStruct_m8A18C2DD85A9F6D2D61F2643CDF0E79307A5CEA1_fshared)(__this, ___0_inVertices, ___1_start, ___2_length, method);
}
inline void Mesh_SetVertices_TisIl2CppFullySharedGenericStruct_m019B9059D7AF28E367D078D856E4FD61153A347B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_inVertices, int32_t ___1_start, int32_t ___2_length, int32_t ___3_flags, const RuntimeMethod* method)
{
	((  void (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, int32_t, const RuntimeMethod*))Mesh_SetVertices_TisIl2CppFullySharedGenericStruct_m019B9059D7AF28E367D078D856E4FD61153A347B_fshared)(__this, ___0_inVertices, ___1_start, ___2_length, ___3_flags, method);
}
inline bool JaggedSpan_1_get_isEmpty_mBABC4514687000C51E69CE21E4E99093E05B72A2 (JaggedSpan_1_t5475961F6CB0A4DA335CC6353957B44A21E82D9A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (JaggedSpan_1_t5475961F6CB0A4DA335CC6353957B44A21E82D9A*, const RuntimeMethod*))JaggedSpan_1_get_isEmpty_mBABC4514687000C51E69CE21E4E99093E05B72A2_fshared)(__this, method);
}
inline bool JaggedSpan_1_HasSameLayout_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mE8AB473AD93B0702DB9E67D9B3161EDC812C9A88 (JaggedSpan_1_t5475961F6CB0A4DA335CC6353957B44A21E82D9A* __this, JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0* ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (JaggedSpan_1_t5475961F6CB0A4DA335CC6353957B44A21E82D9A*, JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0*, const RuntimeMethod*))JaggedSpan_1_HasSameLayout_TisIl2CppFullySharedGenericStruct_m4D1BB22B7BAB73FA1B75B9F26C001B99CEB5454E_fshared)(__this, ___0_other, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
inline int32_t JaggedSpan_1_get_sectionCount_mEC9E28B1D5098F3265B8BAB73C807482317D320C (JaggedSpan_1_t5475961F6CB0A4DA335CC6353957B44A21E82D9A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (JaggedSpan_1_t5475961F6CB0A4DA335CC6353957B44A21E82D9A*, const RuntimeMethod*))JaggedSpan_1_get_sectionCount_mEC9E28B1D5098F3265B8BAB73C807482317D320C_fshared)(__this, method);
}
inline int32_t JaggedSpan_1_get_sectionCount_m30E23BC0F8F4D2365568C2848BFE50786E8B30DC (JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0*, const RuntimeMethod*))JaggedSpan_1_get_sectionCount_mEC9E28B1D5098F3265B8BAB73C807482317D320C_fshared)(__this, method);
}
inline void Extensions_Value_TisIl2CppFullySharedGenericAny_m821CCC36F1FA50BC93426381634588C42D5E3216 (RuntimeObject* ___0_value, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Extensions_Value_TisIl2CppFullySharedGenericAny_m821CCC36F1FA50BC93426381634588C42D5E3216_fshared)(___0_value, il2cppRetVal, method);
}
inline void U3CEveryNthU3Ed__1_1__ctor_m83020BDE380BDECEB8C81B76F3D73D86F107758F (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518*, int32_t, const RuntimeMethod*))U3CEveryNthU3Ed__1_1__ctor_m83020BDE380BDECEB8C81B76F3D73D86F107758F_fshared)(__this, ___0_U3CU3E1__state, method);
}
inline bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692 (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_fshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_fshared_inline)(method);
}
inline void ModuleHandle_Copy_TisIl2CppFullySharedGenericStruct_m0371F16C5C917BEFC98EE2543E82DB386E4E117A (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, int32_t ___1_srcIndex, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___2_dst, int32_t ___3_dstIndex, int32_t ___4_length, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, const RuntimeMethod*))ModuleHandle_Copy_TisIl2CppFullySharedGenericStruct_m0371F16C5C917BEFC98EE2543E82DB386E4E117A_fshared)(___0_src, ___1_srcIndex, ___2_dst, ___3_dstIndex, ___4_length, method);
}
inline void NativeArray_1_Copy_m8831A4576613C49F9A635455804441337A122D59 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, int32_t ___1_srcIndex, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___2_dst, int32_t ___3_dstIndex, int32_t ___4_length, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, const RuntimeMethod*))NativeArray_1_Copy_m8831A4576613C49F9A635455804441337A122D59_fshared)(___0_src, ___1_srcIndex, ___2_dst, ___3_dstIndex, ___4_length, method);
}
inline void Array_1_get_Item_m41E3596F9E8D0B496073753DBB17AEFC4E770582 (Array_1_t6B7799491F8633D7A2A3353B59A01AAC47D82A01* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Array_1_t6B7799491F8633D7A2A3353B59A01AAC47D82A01*, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Array_1_get_Item_m41E3596F9E8D0B496073753DBB17AEFC4E770582_fshared)((Array_1_t6B7799491F8633D7A2A3353B59A01AAC47D82A01*)__this, ___0_index, il2cppRetVal, method);
}
inline void NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_fshared_inline)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, ___0_index, il2cppRetVal, method);
}
inline void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_fshared_inline)(___0_source, ___1_index, il2cppRetVal, method);
}
inline void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericStruct ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_fshared_inline)(___0_destination, ___1_index, (Il2CppFullySharedGenericAny)___2_value, method);
}
inline void ModuleHandle_Copy_TisIl2CppFullySharedGenericStruct_m7A047D0293849EC8C78740E2DE5E8574136F188B (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, int32_t ___1_srcIndex, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___2_dst, int32_t ___3_dstIndex, int32_t ___4_length, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, const RuntimeMethod*))ModuleHandle_Copy_TisIl2CppFullySharedGenericStruct_m7A047D0293849EC8C78740E2DE5E8574136F188B_fshared)(___0_src, ___1_srcIndex, ___2_dst, ___3_dstIndex, ___4_length, method);
}
inline void Array_1_get_Item_m4B6EECC3E6603139E5A91FED7AA091CD329A6029 (Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D*, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Array_1_get_Item_m4B6EECC3E6603139E5A91FED7AA091CD329A6029_fshared)((Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D*)__this, ___0_index, il2cppRetVal, method);
}
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* EnumerableHelpers_ToArray_TisIl2CppFullySharedGenericAny_mC640FA20C2979C79E0D09F20367FD4A27166D3A5 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (RuntimeObject*, const RuntimeMethod*))EnumerableHelpers_ToArray_TisIl2CppFullySharedGenericAny_mC640FA20C2979C79E0D09F20367FD4A27166D3A5_fshared)(___0_source, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4 (Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677* __this, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* MouseEventBase_1_GetPooled_m84A60BC498C8DF00411A02A28D9547715B2E87C1 (RuntimeObject* ___0_triggerEvent, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_mousePosition, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))MouseEventBase_1_GetPooled_m84A60BC498C8DF00411A02A28D9547715B2E87C1_gshared)(___0_triggerEvent, ___1_mousePosition, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* VisualElementListPool_Get_m99F3D55FC85A740A48A062146D40D59F50107CC2 (int32_t ___0_initialCapacity, const RuntimeMethod* method) ;
inline void List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_inline (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_fshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline int32_t List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_inline (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
inline VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092 (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_fshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementListPool_Release_mAF4ED38CC4F9A6E58B06F4B0BD13611F7DECBCFA (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___0_elements, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamedValue_ApplyToObject_m9B5513EAC952611D46852EA28EEA151A1D870DBD (NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED* __this, RuntimeObject* ___0_instance, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NamedValue_set_name_mCF3BCACF7F87CF0C64AB3E4547BA5876ADF1940C_inline (NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED* __this, String_t* ___0_value, const RuntimeMethod* method) ;
inline PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 PrimitiveValue_From_TisIl2CppFullySharedGenericStruct_m6846A493CC72CBD82D945883B6E21C3D2A6A18F2 (Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	return ((  PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 (*) (Il2CppFullySharedGenericStruct, const RuntimeMethod*))PrimitiveValue_From_TisIl2CppFullySharedGenericStruct_m6846A493CC72CBD82D945883B6E21C3D2A6A18F2_fshared)(___0_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NamedValue_set_value_mD96CEA0EB28C32139F47AEF613FE40B6DD7A5D7D_inline (NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED* __this, PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___0_value, const RuntimeMethod* method) ;
inline ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 NativeArray_1_AsReadOnlySpan_mEDF5E795C5FC628766F2016DFB498E87E36BA3A0 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_AsReadOnlySpan_mEDF5E795C5FC628766F2016DFB498E87E36BA3A0_fshared)(__this, method);
}
inline int32_t NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96 (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_roSpan, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96_fshared)(___0_roSpan, ___1_value, method);
}
inline ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 NativeList_1_AsReadOnlySpan_m9B73FBB50388B80F5882E4C29601D1A20DE81C43 (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))NativeList_1_AsReadOnlySpan_m9B73FBB50388B80F5882E4C29601D1A20DE81C43_fshared)(__this, method);
}
inline ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ReadOnly_AsReadOnlySpan_m64C20F2CC8054C58682D3CB09F2D1B7109C17950 (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8*, const RuntimeMethod*))ReadOnly_AsReadOnlySpan_m64C20F2CC8054C58682D3CB09F2D1B7109C17950_fshared)(__this, method);
}
inline int32_t NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m91DB739957BD36F24D30A1D26BE5B9B8E4F5C072 (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m91DB739957BD36F24D30A1D26BE5B9B8E4F5C072_fshared)(___0_ptr, ___1_length, ___2_value, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeList_1_AsArray_m1E9616CC42457555561B1165B47ED6E2EEADAC98 (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))NativeList_1_AsArray_m1E9616CC42457555561B1165B47ED6E2EEADAC98_fshared)(__this, method);
}
inline void NativeArray_1_CopyFrom_m910E1EF42DE5ACF6E07014ADC35D83E87A3C43A8 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeArray_1_CopyFrom_m910E1EF42DE5ACF6E07014ADC35D83E87A3C43A8_fshared)(__this, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D (int32_t ___0_a, const RuntimeMethod* method) ;
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeHashSet_1_ToNativeArray_m1F983BA2036D1FB556C421017F8E06EFA51F6E49 (NativeHashSet_1_t4A3FF5E5E7880324EBA79057A83F747452D87D7B* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (NativeHashSet_1_t4A3FF5E5E7880324EBA79057A83F747452D87D7B*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))NativeHashSet_1_ToNativeArray_m1F983BA2036D1FB556C421017F8E06EFA51F6E49_fshared)(__this, ___0_allocator, method);
}
inline void NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80_fshared)(__this, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 UnsafeHashSet_1_ToNativeArray_m8AEAC3278128DBD9AC2E8BEAB88D2DF0FE66DA1B (UnsafeHashSet_1_tDA0EA0F3984CE39895311C7838A2EC512B3F07A4* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (UnsafeHashSet_1_tDA0EA0F3984CE39895311C7838A2EC512B3F07A4*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeHashSet_1_ToNativeArray_m8AEAC3278128DBD9AC2E8BEAB88D2DF0FE66DA1B_fshared)(__this, ___0_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___0_objectName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_mB8AE9C4CB989A9121F4E3F2E6C7781076DFB3025 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_handle, void* ___1_pointer, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* ReadOnlySpan_1_get_Item_mAFFA21964234394982172838F35555A4D5681233_inline (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_get_Item_m9143C9CF6493AF0AD667C5BDEEF1D22895283F77_fshared_inline)(__this, ___0_index, method);
}
inline void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisIl2CppFullySharedGenericStruct_m89858AB1D0D222803F186CBFDE201D8104D72F9F (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, Il2CppFullySharedGenericStruct ___1_u, int32_t ___2_items, const RuntimeMethod* method)
{
	return ((  void* (*) (Il2CppFullySharedGenericStruct*, Il2CppFullySharedGenericStruct, int32_t, const RuntimeMethod*))AllocatorManager_AllocateStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m24FC981A18EAB95A996CFC6337FAB957062F81E1_fshared)((Il2CppFullySharedGenericStruct*)___0_t, ___1_u, ___2_items, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1 (void* ___0_destination, int64_t ___1_size, const RuntimeMethod* method) ;
inline void* AllocatorManager_AllocateStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m24FC981A18EAB95A996CFC6337FAB957062F81E1 (Il2CppFullySharedGenericStruct* ___0_t, Il2CppFullySharedGenericStruct ___1_u, int32_t ___2_items, const RuntimeMethod* method)
{
	return ((  void* (*) (Il2CppFullySharedGenericStruct*, Il2CppFullySharedGenericStruct, int32_t, const RuntimeMethod*))AllocatorManager_AllocateStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m24FC981A18EAB95A996CFC6337FAB957062F81E1_fshared)(___0_t, ___1_u, ___2_items, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisIl2CppFullySharedGenericStruct_m0BC1578CE50C348FF9B616BD602021A69F647803_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisIl2CppFullySharedGenericStruct_m0BC1578CE50C348FF9B616BD602021A69F647803_fshared_inline)(___0_nativeArray, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline Il2CppFullySharedGenericStruct* UnsafeUtility_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m9BD1C4AD2221B8E77691F613764AAF6D9DA66233_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m9BD1C4AD2221B8E77691F613764AAF6D9DA66233_fshared_inline)(___0_ptr, ___1_index, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
inline void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, const RuntimeMethod*))NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_fshared_inline)(___0_nativeSlice, method);
}
inline int32_t NativeSlice_1_get_Stride_m3F2ACE95526BFFDE7967887D3C6188F286C6A12D_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, const RuntimeMethod*))NativeSlice_1_get_Stride_m3F2ACE95526BFFDE7967887D3C6188F286C6A12D_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90 (void* ___0_destination, int32_t ___1_destinationStride, void* ___2_source, int32_t ___3_sourceStride, int32_t ___4_elementSize, int32_t ___5_count, const RuntimeMethod* method) ;
inline bool NativeArray_1_op_Inequality_m473523B85EC3F582AF2F86773108D5AF3E6B9D0C (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_left, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeArray_1_op_Inequality_m473523B85EC3F582AF2F86773108D5AF3E6B9D0C_fshared)(___0_left, ___1_right, method);
}
inline bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline)(__this, method);
}
inline void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_fshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArray_1_Copy_m917794C9B80242C4B43D3C7F4A4CE0D5875AD3F6 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_dst, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, const RuntimeMethod*))NativeArray_1_Copy_m917794C9B80242C4B43D3C7F4A4CE0D5875AD3F6_fshared)(___0_src, ___1_dst, ___2_length, method);
}
inline Il2CppFullySharedGenericStruct* Span_1_GetPinnableReference_m5624821135CF41406465DA067B72E364926DB271 (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, const RuntimeMethod*))Span_1_GetPinnableReference_mBC5955DDAAEA56F142B5C441DB6FBD96F2AB6ADB_fshared)(__this, method);
}
inline int32_t UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_fshared_inline)(method);
}
inline int32_t UnsafeUtilityInternal_AlignOf_TisIl2CppFullySharedGenericStruct_m530059660A1E31984686E17CC9E1E8EC5BADDADF_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtilityInternal_AlignOf_TisIl2CppFullySharedGenericStruct_m530059660A1E31984686E17CC9E1E8EC5BADDADF_fshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* NoAllocHelpers_ExtractArrayFromList_TisIl2CppFullySharedGenericStruct_m873C6691215D9DD53FE9D82092C0220C03C702DE_inline (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___0_list, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))NoAllocHelpers_ExtractArrayFromList_TisIl2CppFullySharedGenericAny_m939A9FD04DDB2C021F8F2A09A8A13816556D8F2A_fshared_inline)(___0_list, method);
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_fshared)(method);
}
inline void UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_fshared_inline)(___0_source, ___1_index, il2cppRetVal, method);
}
inline void UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_fshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_fshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5 (const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* UnsafeUtilityInternal_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m15B3F40D2AAAD385E615370BDEEAF11C94C43831_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtilityInternal_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m15B3F40D2AAAD385E615370BDEEAF11C94C43831_fshared_inline)(___0_ptr, ___1_index, method);
}
inline int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tA18DF2C95F416AEB06D5F0702F37CBD85E8A7FB8_m934B08DAF1EA7B249CA769E8DCA4EBAC6AEB1885_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_fshared_inline)(method);
}
// Method Definition Index: 73872
// Method Definition Index: 73872
// Method Definition Index: 73872
// Method Definition Index: 73872
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarshalledArray_UnmarshalBlittable_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m94DD4D3A7CD66990C78F194463028761B24F99B1_fshared (MarshalledArray_t6AEAFB9F03F350E0CCFF93A3CA6C14A99D3F3536* __this, Il2CppFullySharedGenericStruct* ___0_collectionAccessor, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* L_4 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_19 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_28 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_34 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_39 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	int32_t V_0 = 0;
	ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_collectionAccessor));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 413));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 414));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/Marshalling/ArrayMarshalling.cs:250>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 415));
		int32_t L_0 = __this->___dataOwner;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 416));
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_00c8;
			}
			case 2:
			{
				goto IL_00bd;
			}
			case 3:
			{
				goto IL_002e;
			}
			case 4:
			{
				goto IL_0066;
			}
			case 5:
			{
				goto IL_00a3;
			}
			case 6:
			{
				goto IL_00b0;
			}
		}
	}
	{
		goto IL_00bd;
	}

IL_002e:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/Marshalling/ArrayMarshalling.cs:256>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 417));
		Il2CppFullySharedGenericStruct* L_2 = ___0_collectionAccessor;
		int32_t L_3 = __this->___size;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 418));
		Il2CppConstrainedCallData L_5;
		Il2CppMethodPointer L_6 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 0), (void*)L_2, &L_5, L_4);
		typedef void ( *func_L_7)(void*,int32_t,const RuntimeMethod*);
		((func_L_7)L_6)(L_5.thisPtr, L_3,L_5.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 418));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/Marshalling/ArrayMarshalling.cs:257>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 419));
		void* L_8 = __this->___data;
		int32_t L_9 = __this->___size;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 420));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 420));
		V_1 = L_10;
		Il2CppFullySharedGenericStruct* L_11 = ___0_collectionAccessor;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 421));
		Il2CppConstrainedCallData L_13;
		Il2CppMethodPointer L_14 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)L_11, &L_13, L_12);
		typedef Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ( *func_L_15)(void*,const RuntimeMethod*);
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_16 = ((func_L_15)L_14)(L_13.thisPtr,L_13.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 421));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 422));
		ReadOnlySpan_1_CopyTo_m50A3A496B3D51522906BB81E1F4FF1899D5C8AA6((&V_1), L_16, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 422));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/Marshalling/ArrayMarshalling.cs:258>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 423));
		return;
	}

IL_0066:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/Marshalling/ArrayMarshalling.cs:260>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 424));
		Il2CppFullySharedGenericStruct* L_17 = ___0_collectionAccessor;
		int32_t L_18 = __this->___size;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 425));
		Il2CppConstrainedCallData L_20;
		Il2CppMethodPointer L_21 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 0), (void*)L_17, &L_20, L_19);
		typedef void ( *func_L_22)(void*,int32_t,const RuntimeMethod*);
		((func_L_22)L_21)(L_20.thisPtr, L_18,L_20.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 425));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/Marshalling/ArrayMarshalling.cs:261>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 426));
		void* L_23 = __this->___data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 427));
		void* L_24;
		L_24 = BindingsAllocator_GetNativeOwnedDataPointer_m3668639A4B328ECC1DBB756D0217BEAFE136F25A_inline(L_23, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 427));
		int32_t L_25 = __this->___size;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 428));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_26;
		memset((&L_26), 0, sizeof(L_26));
		ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline((&L_26), L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 428));
		V_1 = L_26;
		Il2CppFullySharedGenericStruct* L_27 = ___0_collectionAccessor;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 429));
		Il2CppConstrainedCallData L_29;
		Il2CppMethodPointer L_30 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)L_27, &L_29, L_28);
		typedef Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ( *func_L_31)(void*,const RuntimeMethod*);
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_32 = ((func_L_31)L_30)(L_29.thisPtr,L_29.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 429));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 430));
		ReadOnlySpan_1_CopyTo_m50A3A496B3D51522906BB81E1F4FF1899D5C8AA6((&V_1), L_32, il2cpp_rgctx_method(method->rgctx_data, 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 430));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/Marshalling/ArrayMarshalling.cs:262>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 431));
		return;
	}

IL_00a3:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/Marshalling/ArrayMarshalling.cs:264>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 432));
		Il2CppFullySharedGenericStruct* L_33 = ___0_collectionAccessor;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 433));
		Il2CppConstrainedCallData L_35;
		Il2CppMethodPointer L_36 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 6), (void*)L_33, &L_35, L_34);
		typedef void ( *func_L_37)(void*,const RuntimeMethod*);
		((func_L_37)L_36)(L_35.thisPtr,L_35.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 433));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/Marshalling/ArrayMarshalling.cs:265>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 434));
		return;
	}

IL_00b0:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/Marshalling/ArrayMarshalling.cs:267>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 435));
		Il2CppFullySharedGenericStruct* L_38 = ___0_collectionAccessor;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 436));
		Il2CppConstrainedCallData L_40;
		Il2CppMethodPointer L_41 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 7), (void*)L_38, &L_40, L_39);
		typedef void ( *func_L_42)(void*,const RuntimeMethod*);
		((func_L_42)L_41)(L_40.thisPtr,L_40.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 436));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/Marshalling/ArrayMarshalling.cs:268>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 437));
		return;
	}

IL_00bd:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/Marshalling/ArrayMarshalling.cs:270>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 438));
		int32_t L_43 = __this->___dataOwner;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 439));
		MarshalledArray_ThrowUnimplementedDataOwnerCase_m2C657ACD8D66C1D47CB0880CE2AD37D7385A5538(L_43, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 439));
	}

IL_00c8:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/Marshalling/ArrayMarshalling.cs:273>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 440));
		return;
	}
}
// Method Definition Index: 73872
// Method Definition Index: 73872
// Method Definition Index: 2058
// Method Definition Index: 2058
// Method Definition Index: 2058
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Math_ThrowMinMaxException_TisIl2CppFullySharedGenericAny_m557436C09046F5D4CF328BBF348EF8579340BED4_fshared (Il2CppFullySharedGenericAny ___0_min, Il2CppFullySharedGenericAny ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tDA843702ECF47E625B3E8038BC0DE5296BFCE229 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tDA843702ECF47E625B3E8038BC0DE5296BFCE229);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tDA843702ECF47E625B3E8038BC0DE5296BFCE229);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_min : &___0_min), SizeOf_T_tDA843702ECF47E625B3E8038BC0DE5296BFCE229);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), L_0);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_max : &___1_max), SizeOf_T_tDA843702ECF47E625B3E8038BC0DE5296BFCE229);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), L_2);
		String_t* L_4;
		L_4 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral110D1733D85BF5EFB139B95FF286BB627337195E)), L_1, L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}
}
// Method Definition Index: 2128
// Method Definition Index: 2128
// Method Definition Index: 2128
// Method Definition Index: 2128
// Method Definition Index: 2128
// Method Definition Index: 2128
// Method Definition Index: 2128
// Method Definition Index: 2128
// Method Definition Index: 2128
// Method Definition Index: 2128
// Method Definition Index: 2128
// Method Definition Index: 2128
// Method Definition Index: 2128
// Method Definition Index: 2128
// Method Definition Index: 2128
// Method Definition Index: 2128
// Method Definition Index: 2128
// Method Definition Index: 2128
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 MemoryExtensions_AsSpan_TisIl2CppFullySharedGenericAny_m788D06C7A78ACE9317501CAAB3ACB95E63B8B3BD_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_inline((&L_1), L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// Method Definition Index: 2128
// Method Definition Index: 2115
// Method Definition Index: 2115
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 MemoryExtensions_AsSpan_TisIl2CppFullySharedGenericAny_mDEE3A85A39ABA7183EF0E7EEA9B3B20E1763B572_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tDBBC70CD58C1382A042748F51A25344E0308DC7F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tDBBC70CD58C1382A042748F51A25344E0308DC7F);
	//<source_info:<no-source>:1>
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_tDBBC70CD58C1382A042748F51A25344E0308DC7F);
	memset(V_1, 0, SizeOf_T_tDBBC70CD58C1382A042748F51A25344E0308DC7F);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2 = V_0;
		return L_2;
	}

IL_0015:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T_tDBBC70CD58C1382A042748F51A25344E0308DC7F);
		il2cpp_codegen_memcpy(L_3, V_1, SizeOf_T_tDBBC70CD58C1382A042748F51A25344E0308DC7F);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_3);
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		NullCheck((RuntimeObject*)L_5);
		Type_t* L_6;
		L_6 = il2cpp_codegen_object_get_type((RuntimeObject*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0041:
	{
		int32_t L_10 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___0_array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		if ((!(((uint32_t)L_10) > ((uint32_t)L_12))))
		{
			goto IL_004c;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_004c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ___0_array;
		NullCheck((RuntimeArray*)L_13);
		uint8_t* L_14;
		L_14 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_13, NULL);
		Il2CppFullySharedGenericAny* L_15;
		L_15 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_14);
		int32_t L_16 = ___1_start;
		Il2CppFullySharedGenericAny* L_17;
		L_17 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_15, L_16, SizeOf_T_tDBBC70CD58C1382A042748F51A25344E0308DC7F);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = ___0_array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = ___1_start;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_inline((&L_21), L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_21;
	}
}
// Method Definition Index: 2129
// Method Definition Index: 2129
// Method Definition Index: 2129
// Method Definition Index: 2129
// Method Definition Index: 2129
// Method Definition Index: 2129
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 MemoryExtensions_AsSpan_TisIl2CppFullySharedGenericAny_m344D5B88E371389CBB706486DD475040114089B1_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_inline((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_3;
	}
}
// Method Definition Index: 2130
// Method Definition Index: 2130
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryExtensions_CopyTo_TisIl2CppFullySharedGenericAny_m23E99217E98C7DE960285E9F13F9772E7E04993F_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_source, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___1_destination, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_source;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_1;
		memset((&L_1), 0, sizeof(L_1));
		ReadOnlySpan_1__ctor_m6514A6564F9827564455D5BA04850C10B42CAEFA_inline((&L_1), L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2 = ___1_destination;
		ReadOnlySpan_1_CopyTo_m0EA73CEAF52AB31E2713E59AB88541332594D914((&V_0), L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
// Method Definition Index: 2127
// Method Definition Index: 2127
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryExtensions_EndsWith_TisIl2CppFullySharedGenericAny_m69E5B5290F982D6CDF9FA99A428804D6A999886B_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___0_span, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t5B689A4146F20CA7D036391B0D95D7A6AC8270FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t5B689A4146F20CA7D036391B0D95D7A6AC8270FD);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_t5B689A4146F20CA7D036391B0D95D7A6AC8270FD);
	memset(V_3, 0, SizeOf_T_t5B689A4146F20CA7D036391B0D95D7A6AC8270FD);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_inline((&___1_value), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = L_1;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T_t5B689A4146F20CA7D036391B0D95D7A6AC8270FD);
		il2cpp_codegen_memcpy(L_2, V_3, SizeOf_T_t5B689A4146F20CA7D036391B0D95D7A6AC8270FD);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 1), L_2);
		if (!L_3)
		{
			goto IL_0057;
		}
	}
	{
		bool L_4;
		L_4 = MemoryExtensions_IsTypeComparableAsBytes_TisIl2CppFullySharedGenericAny_m222C2D308418E5EF828B7DB3393EF84053FBA614_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_4)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		if ((((int32_t)L_5) > ((int32_t)L_6)))
		{
			goto IL_0055;
		}
	}
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_7 = ___0_span;
		Il2CppFullySharedGenericAny* L_8;
		L_8 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208(L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		Il2CppFullySharedGenericAny* L_11;
		L_11 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), SizeOf_T_t5B689A4146F20CA7D036391B0D95D7A6AC8270FD);
		uint8_t* L_12;
		L_12 = il2cpp_unsafe_as_ref<uint8_t>(L_11);
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_13 = ___1_value;
		Il2CppFullySharedGenericAny* L_14;
		L_14 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208(L_13, il2cpp_rgctx_method(method->rgctx_data, 3));
		uint8_t* L_15;
		L_15 = il2cpp_unsafe_as_ref<uint8_t>(L_14);
		int32_t L_16 = V_1;
		int64_t L_17 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_16,NULL));
		uint64_t L_18 = V_2;
		bool L_19;
		L_19 = SpanHelpers_SequenceEqual_m69781B64721462BCA1ED200A1BB853E9B7026F2E(L_12, L_15, ((int64_t)il2cpp_codegen_multiply(L_17, (int64_t)L_18)), NULL);
		return L_19;
	}

IL_0055:
	{
		return (bool)0;
	}

IL_0057:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) > ((int32_t)L_21)))
		{
			goto IL_0076;
		}
	}
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_22 = ___0_span;
		Il2CppFullySharedGenericAny* L_23;
		L_23 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208(L_22, il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		Il2CppFullySharedGenericAny* L_26;
		L_26 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_23, ((int32_t)il2cpp_codegen_subtract(L_24, L_25)), SizeOf_T_t5B689A4146F20CA7D036391B0D95D7A6AC8270FD);
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_27 = ___1_value;
		Il2CppFullySharedGenericAny* L_28;
		L_28 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208(L_27, il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_29 = V_1;
		bool L_30;
		L_30 = SpanHelpers_SequenceEqual_TisIl2CppFullySharedGenericAny_mEB89EB892E7BFDB9AB968DFE0A5FEF3AAAE1E424(L_26, L_28, L_29, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_30;
	}

IL_0076:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2123
// Method Definition Index: 2123
// Method Definition Index: 2123
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryExtensions_IndexOf_TisIl2CppFullySharedGenericAny_m52AABD71B8E92C641CA6A21594127FE9BFC0B605_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___0_span, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t4B57FD5365DEEB73C0EDDA52693FD505D9C5AC84 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T_t4B57FD5365DEEB73C0EDDA52693FD505D9C5AC84);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T_t4B57FD5365DEEB73C0EDDA52693FD505D9C5AC84);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_1 = ___0_span;
		Il2CppFullySharedGenericAny* L_2;
		L_2 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208(L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_as_ref<uint8_t>(L_2);
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>((Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value));
		int32_t L_5 = il2cpp_codegen_ldind<int32_t, uint8_t>(L_4);
		int32_t L_6;
		L_6 = ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_7;
		L_7 = SpanHelpers_IndexOf_mB37566B16F2F4C7D14E1CD6EA781AC67110E8C4C(L_3, (uint8_t)L_5, L_6, NULL);
		return L_7;
	}

IL_003b:
	{
		bool L_8 = (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 1));
		if (!L_8)
		{
			goto IL_0076;
		}
	}
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_9 = ___0_span;
		Il2CppFullySharedGenericAny* L_10;
		L_10 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208(L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppChar* L_11;
		L_11 = il2cpp_unsafe_as_ref<Il2CppChar>(L_10);
		Il2CppChar* L_12;
		L_12 = il2cpp_unsafe_as_ref<Il2CppChar>((Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value));
		int32_t L_13 = il2cpp_codegen_ldind<int32_t, uint16_t>(((uint16_t*)L_12));
		int32_t L_14;
		L_14 = ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_15;
		L_15 = SpanHelpers_IndexOf_m1EBE4594F5288D2297A3A8E8E4F365BE4BD211DC(L_11, L_13, L_14, NULL);
		return L_15;
	}

IL_0076:
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_16 = ___0_span;
		Il2CppFullySharedGenericAny* L_17;
		L_17 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208(L_16, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_T_t4B57FD5365DEEB73C0EDDA52693FD505D9C5AC84);
		int32_t L_19;
		L_19 = ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_21;
		L_21 = SpanHelpers_IndexOf_TisIl2CppFullySharedGenericAny_m28DDF4475C9EA0E0C80C0C9A0E6D96CCC3609FB4(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_20, L_18, SizeOf_T_t4B57FD5365DEEB73C0EDDA52693FD505D9C5AC84): *(void**)L_18), L_19, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_21;
	}
}
// Method Definition Index: 2124
// Method Definition Index: 2124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryExtensions_IndexOfAny_TisIl2CppFullySharedGenericAny_m9B37738983F1D1DCF7E55B02FB4E7B2B5D83C8E5_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___0_span, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___1_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_0045;
		}
	}
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_1 = ___0_span;
		Il2CppFullySharedGenericAny* L_2;
		L_2 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208(L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_as_ref<uint8_t>(L_2);
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 3));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_5 = ___1_values;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208(L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>(L_6);
		int32_t L_8;
		L_8 = ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_inline((&___1_values), il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_9;
		L_9 = SpanHelpers_IndexOfAny_m73AAF95F81D0C3DBF110AF017A67AB73170F110C(L_3, L_4, L_7, L_8, NULL);
		return L_9;
	}

IL_0045:
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_10 = ___0_span;
		Il2CppFullySharedGenericAny* L_11;
		L_11 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208(L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_12;
		L_12 = ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 3));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_13 = ___1_values;
		Il2CppFullySharedGenericAny* L_14;
		L_14 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208(L_13, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_15;
		L_15 = ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_inline((&___1_values), il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_16;
		L_16 = SpanHelpers_IndexOfAny_TisIl2CppFullySharedGenericAny_mD777B4B83B2CBE31F541334C63B38FCAD99CBF5B(L_11, L_12, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_16;
	}
}
// Method Definition Index: 2131
// Method Definition Index: 2131
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryExtensions_IsTypeComparableAsBytes_TisIl2CppFullySharedGenericAny_m222C2D308418E5EF828B7DB3393EF84053FBA614_fshared (uint64_t* ___0_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 1));
		if (L_0)
		{
			goto IL_0036;
		}
	}
	{
		bool L_1 = (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_003c;
		}
	}

IL_0036:
	{
		uint64_t* L_2 = ___0_size;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		il2cpp_codegen_stind<int64_t>((int64_t*)L_2, (int64_t)L_3);
		return (bool)1;
	}

IL_003c:
	{
		bool L_4 = (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 1));
		if (L_4)
		{
			goto IL_008d;
		}
	}
	{
		bool L_5 = (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 1));
		if (L_5)
		{
			goto IL_008d;
		}
	}
	{
		bool L_6 = (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 1));
		if (!L_6)
		{
			goto IL_0093;
		}
	}

IL_008d:
	{
		uint64_t* L_7 = ___0_size;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		il2cpp_codegen_stind<int64_t>((int64_t*)L_7, (int64_t)L_8);
		return (bool)1;
	}

IL_0093:
	{
		bool L_9 = (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 1));
		if (L_9)
		{
			goto IL_00c9;
		}
	}
	{
		bool L_10 = (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 1));
		if (!L_10)
		{
			goto IL_00cf;
		}
	}

IL_00c9:
	{
		uint64_t* L_11 = ___0_size;
		int64_t L_12 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		il2cpp_codegen_stind<int64_t>((int64_t*)L_11, (int64_t)L_12);
		return (bool)1;
	}

IL_00cf:
	{
		bool L_13 = (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 1));
		if (L_13)
		{
			goto IL_0105;
		}
	}
	{
		bool L_14 = (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 1));
		if (!L_14)
		{
			goto IL_010b;
		}
	}

IL_0105:
	{
		uint64_t* L_15 = ___0_size;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(8,NULL));
		il2cpp_codegen_stind<int64_t>((int64_t*)L_15, (int64_t)L_16);
		return (bool)1;
	}

IL_010b:
	{
		uint64_t* L_17 = ___0_size;
		int64_t L_18 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		il2cpp_codegen_stind<int64_t>((int64_t*)L_17, (int64_t)L_18);
		return (bool)0;
	}
}
// Method Definition Index: 2125
// Method Definition Index: 2125
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryExtensions_SequenceEqual_TisIl2CppFullySharedGenericAny_mF299EB60F4BF8D973B09238DC6FBDBAB11AB0289_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___0_span, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t2DE6199FAE73F26A0DD7ACA82D97809F013CF22E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t2DE6199FAE73F26A0DD7ACA82D97809F013CF22E);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t2DE6199FAE73F26A0DD7ACA82D97809F013CF22E);
	memset(V_2, 0, SizeOf_T_t2DE6199FAE73F26A0DD7ACA82D97809F013CF22E);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_t2DE6199FAE73F26A0DD7ACA82D97809F013CF22E);
		il2cpp_codegen_memcpy(L_1, V_2, SizeOf_T_t2DE6199FAE73F26A0DD7ACA82D97809F013CF22E);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 1), L_1);
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		bool L_3;
		L_3 = MemoryExtensions_IsTypeComparableAsBytes_TisIl2CppFullySharedGenericAny_m222C2D308418E5EF828B7DB3393EF84053FBA614_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_inline((&___1_other), il2cpp_rgctx_method(method->rgctx_data, 0));
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_004b;
		}
	}
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_6 = ___0_span;
		Il2CppFullySharedGenericAny* L_7;
		L_7 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208(L_6, il2cpp_rgctx_method(method->rgctx_data, 3));
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_as_ref<uint8_t>(L_7);
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_9 = ___1_other;
		Il2CppFullySharedGenericAny* L_10;
		L_10 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208(L_9, il2cpp_rgctx_method(method->rgctx_data, 3));
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint8_t>(L_10);
		int32_t L_12 = V_0;
		int64_t L_13 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_12,NULL));
		uint64_t L_14 = V_1;
		bool L_15;
		L_15 = SpanHelpers_SequenceEqual_m69781B64721462BCA1ED200A1BB853E9B7026F2E(L_8, L_11, ((int64_t)il2cpp_codegen_multiply(L_13, (int64_t)L_14)), NULL);
		return L_15;
	}

IL_004b:
	{
		return (bool)0;
	}

IL_004d:
	{
		int32_t L_16 = V_0;
		int32_t L_17;
		L_17 = ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_inline((&___1_other), il2cpp_rgctx_method(method->rgctx_data, 0));
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_006a;
		}
	}
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_18 = ___0_span;
		Il2CppFullySharedGenericAny* L_19;
		L_19 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208(L_18, il2cpp_rgctx_method(method->rgctx_data, 3));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_20 = ___1_other;
		Il2CppFullySharedGenericAny* L_21;
		L_21 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208(L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_22 = V_0;
		bool L_23;
		L_23 = SpanHelpers_SequenceEqual_TisIl2CppFullySharedGenericAny_mEB89EB892E7BFDB9AB968DFE0A5FEF3AAAE1E424(L_19, L_21, L_22, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_23;
	}

IL_006a:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2122
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryExtensions_SequenceEqual_TisIl2CppFullySharedGenericAny_mE644734E503BC56348A5CA9917880F5A114893A1_fshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tAB8335C64A6625351706D021A6DA61593776FBED = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tAB8335C64A6625351706D021A6DA61593776FBED);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tAB8335C64A6625351706D021A6DA61593776FBED);
	memset(V_2, 0, SizeOf_T_tAB8335C64A6625351706D021A6DA61593776FBED);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_tAB8335C64A6625351706D021A6DA61593776FBED);
		il2cpp_codegen_memcpy(L_1, V_2, SizeOf_T_tAB8335C64A6625351706D021A6DA61593776FBED);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 1), L_1);
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		bool L_3;
		L_3 = MemoryExtensions_IsTypeComparableAsBytes_TisIl2CppFullySharedGenericAny_m222C2D308418E5EF828B7DB3393EF84053FBA614_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_inline((&___1_other), il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_004b;
		}
	}
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_6 = ___0_span;
		Il2CppFullySharedGenericAny* L_7;
		L_7 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_m5144BD426181728CA94C44B8778ECDF811B77843(L_6, il2cpp_rgctx_method(method->rgctx_data, 4));
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_as_ref<uint8_t>(L_7);
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_9 = ___1_other;
		Il2CppFullySharedGenericAny* L_10;
		L_10 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208(L_9, il2cpp_rgctx_method(method->rgctx_data, 5));
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint8_t>(L_10);
		int32_t L_12 = V_0;
		int64_t L_13 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_12,NULL));
		uint64_t L_14 = V_1;
		bool L_15;
		L_15 = SpanHelpers_SequenceEqual_m69781B64721462BCA1ED200A1BB853E9B7026F2E(L_8, L_11, ((int64_t)il2cpp_codegen_multiply(L_13, (int64_t)L_14)), NULL);
		return L_15;
	}

IL_004b:
	{
		return (bool)0;
	}

IL_004d:
	{
		int32_t L_16 = V_0;
		int32_t L_17;
		L_17 = ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_inline((&___1_other), il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_006a;
		}
	}
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_18 = ___0_span;
		Il2CppFullySharedGenericAny* L_19;
		L_19 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_m5144BD426181728CA94C44B8778ECDF811B77843(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_20 = ___1_other;
		Il2CppFullySharedGenericAny* L_21;
		L_21 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208(L_20, il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_22 = V_0;
		bool L_23;
		L_23 = SpanHelpers_SequenceEqual_TisIl2CppFullySharedGenericAny_mEB89EB892E7BFDB9AB968DFE0A5FEF3AAAE1E424(L_19, L_21, L_22, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_23;
	}

IL_006a:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2126
// Method Definition Index: 2126
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryExtensions_StartsWith_TisIl2CppFullySharedGenericAny_mA46C6198DF93174F9C3A14C2DAF4AB07990DE103_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___0_span, ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tADE12AD8AE20158C0A27A331A59A5BC3F351D772 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tADE12AD8AE20158C0A27A331A59A5BC3F351D772);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tADE12AD8AE20158C0A27A331A59A5BC3F351D772);
	memset(V_2, 0, SizeOf_T_tADE12AD8AE20158C0A27A331A59A5BC3F351D772);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_inline((&___1_value), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_tADE12AD8AE20158C0A27A331A59A5BC3F351D772);
		il2cpp_codegen_memcpy(L_1, V_2, SizeOf_T_tADE12AD8AE20158C0A27A331A59A5BC3F351D772);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 1), L_1);
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		bool L_3;
		L_3 = MemoryExtensions_IsTypeComparableAsBytes_TisIl2CppFullySharedGenericAny_m222C2D308418E5EF828B7DB3393EF84053FBA614_inline((&V_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 0));
		if ((((int32_t)L_4) > ((int32_t)L_5)))
		{
			goto IL_004b;
		}
	}
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_6 = ___0_span;
		Il2CppFullySharedGenericAny* L_7;
		L_7 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208(L_6, il2cpp_rgctx_method(method->rgctx_data, 3));
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_as_ref<uint8_t>(L_7);
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_9 = ___1_value;
		Il2CppFullySharedGenericAny* L_10;
		L_10 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208(L_9, il2cpp_rgctx_method(method->rgctx_data, 3));
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint8_t>(L_10);
		int32_t L_12 = V_0;
		int64_t L_13 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_12,NULL));
		uint64_t L_14 = V_1;
		bool L_15;
		L_15 = SpanHelpers_SequenceEqual_m69781B64721462BCA1ED200A1BB853E9B7026F2E(L_8, L_11, ((int64_t)il2cpp_codegen_multiply(L_13, (int64_t)L_14)), NULL);
		return L_15;
	}

IL_004b:
	{
		return (bool)0;
	}

IL_004d:
	{
		int32_t L_16 = V_0;
		int32_t L_17;
		L_17 = ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 0));
		if ((((int32_t)L_16) > ((int32_t)L_17)))
		{
			goto IL_006a;
		}
	}
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_18 = ___0_span;
		Il2CppFullySharedGenericAny* L_19;
		L_19 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208(L_18, il2cpp_rgctx_method(method->rgctx_data, 3));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_20 = ___1_value;
		Il2CppFullySharedGenericAny* L_21;
		L_21 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208(L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_22 = V_0;
		bool L_23;
		L_23 = SpanHelpers_SequenceEqual_TisIl2CppFullySharedGenericAny_mEB89EB892E7BFDB9AB968DFE0A5FEF3AAAE1E424(L_19, L_21, L_22, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_23;
	}

IL_006a:
	{
		return (bool)0;
	}
}
// Method Definition Index: 34459
// Method Definition Index: 34459
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryHelpers_Swap_TisIl2CppFullySharedGenericAny_m1715B6AE84465D838F0FE8BA00E5AA4DB2EBACC1_fshared (Il2CppFullySharedGenericAny* ___0_a, Il2CppFullySharedGenericAny* ___1_b, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t442409E0562D56D766E724196A8ECA3B7BB2FFC1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t442409E0562D56D766E724196A8ECA3B7BB2FFC1);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_t442409E0562D56D766E724196A8ECA3B7BB2FFC1);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_t442409E0562D56D766E724196A8ECA3B7BB2FFC1);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t442409E0562D56D766E724196A8ECA3B7BB2FFC1);
	memset(V_0, 0, SizeOf_TValue_t442409E0562D56D766E724196A8ECA3B7BB2FFC1);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80110));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80111));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80112));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/MemoryHelpers.cs:585>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80113));
		Il2CppFullySharedGenericAny* L_0 = ___0_a;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TValue_t442409E0562D56D766E724196A8ECA3B7BB2FFC1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_TValue_t442409E0562D56D766E724196A8ECA3B7BB2FFC1);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/MemoryHelpers.cs:586>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80114));
		Il2CppFullySharedGenericAny* L_2 = ___0_a;
		Il2CppFullySharedGenericAny* L_3 = ___1_b;
		il2cpp_codegen_memcpy(L_4, L_3, SizeOf_TValue_t442409E0562D56D766E724196A8ECA3B7BB2FFC1);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_2, L_4, SizeOf_TValue_t442409E0562D56D766E724196A8ECA3B7BB2FFC1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)L_2, (void*)L_4);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/MemoryHelpers.cs:587>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80115));
		Il2CppFullySharedGenericAny* L_5 = ___1_b;
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_TValue_t442409E0562D56D766E724196A8ECA3B7BB2FFC1);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_5, L_6, SizeOf_TValue_t442409E0562D56D766E724196A8ECA3B7BB2FFC1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)L_5, (void*)L_6);
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/MemoryHelpers.cs:588>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80116));
		return;
	}
}
// Method Definition Index: 34459
// Method Definition Index: 34459
// Method Definition Index: 8036
// Method Definition Index: 8036
// Method Definition Index: 8036
// Method Definition Index: 8036
// Method Definition Index: 8037
// Method Definition Index: 8036
// Method Definition Index: 8037
// Method Definition Index: 8036
// Method Definition Index: 8036
// Method Definition Index: 8036
// Method Definition Index: 8037
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryMarshal_AsBytes_TisIl2CppFullySharedGenericStruct_m8F3347AA857E0A38C9CF99955901D246DB18D8FA_fshared (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_span, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_3 = ___0_span;
		Il2CppFullySharedGenericStruct* L_4;
		L_4 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericStruct_mC7610B0FA8D932755159374A36B473AA45FDFCBC(L_3, il2cpp_rgctx_method(method->rgctx_data, 3));
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		int32_t L_6;
		L_6 = ReadOnlySpan_1_get_Length_m3CC53FCCDE299F21DEF7AB63EF3D378DAB954005_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_7;
		L_7 = Unsafe_SizeOf_TisIl2CppFullySharedGenericStruct_m5B40ADA085C40138AB7DFD671EED6795DE06E8CB(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (((int64_t)L_6 * (int64_t)L_7 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_6 * (int64_t)L_7 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_multiply(L_6, L_7)), ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var);
		return L_8;
	}
}
// Method Definition Index: 8036
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryMarshal_AsBytes_TisIl2CppFullySharedGenericStruct_mF17987979FA677881AF5A25ECF5A4A8FECDC7FC5_fshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_3 = ___0_span;
		Il2CppFullySharedGenericStruct* L_4;
		L_4 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericStruct_mE6EF4F8FFA4C5C6F3BA18346118C88E7F3E65F9D(L_3, il2cpp_rgctx_method(method->rgctx_data, 3));
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		int32_t L_6;
		L_6 = Span_1_get_Length_m1AADCDF6D1BB9B4B07BB14C7E31273E22A096E74_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_7;
		L_7 = Unsafe_SizeOf_TisIl2CppFullySharedGenericStruct_m5B40ADA085C40138AB7DFD671EED6795DE06E8CB(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (((int64_t)L_6 * (int64_t)L_7 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_6 * (int64_t)L_7 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_multiply(L_6, L_7)), Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_RuntimeMethod_var);
		return L_8;
	}
}
// Method Definition Index: 8036
// Method Definition Index: 8038
// Method Definition Index: 8038
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA MemoryMarshal_AsMemory_TisIl2CppFullySharedGenericAny_m366C8AFDF0E3667C2FA2AB196340B950ECFE4D0B_fshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 ___0_memory, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* L_0;
		L_0 = il2cpp_unsafe_as_ref<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>((&___0_memory));
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_1 = (*(Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*)L_0);
		return L_1;
	}
}
// Method Definition Index: 8043
// Method Definition Index: 8043
// Method Definition Index: 8043
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC MemoryMarshal_CreateReadOnlySpan_TisIl2CppFullySharedGenericAny_m5D509016837091D760A6EF9B0F6F74F5534D991F_fshared (Il2CppFullySharedGenericAny* ___0_reference, int32_t ___1_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_reference;
		int32_t L_1 = ___1_length;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_2;
		memset((&L_2), 0, sizeof(L_2));
		ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_inline((&L_2), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// Method Definition Index: 8042
// Method Definition Index: 8041
// Method Definition Index: 8042
// Method Definition Index: 8041
// Method Definition Index: 8042
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* MemoryMarshal_GetNonNullPinnableReference_TisIl2CppFullySharedGenericAny_m5F701949B67B52EC46C7BEF1B3AA97A1108B63E9_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___0_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		intptr_t L_1 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(1,NULL));
		Il2CppFullySharedGenericAny* L_2;
		L_2 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((void*)L_1);
		return L_2;
	}

IL_0011:
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_3 = ___0_span;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_4 = L_3.____pointer;
		V_0 = L_4;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		return L_5;
	}
}
// Method Definition Index: 8041
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* MemoryMarshal_GetNonNullPinnableReference_TisIl2CppFullySharedGenericAny_m55AAB3DF8B968E91EDD900E978018892F333B4C4_fshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		intptr_t L_1 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(1,NULL));
		Il2CppFullySharedGenericAny* L_2;
		L_2 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((void*)L_1);
		return L_2;
	}

IL_0011:
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_3 = ___0_span;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_4 = L_3.____pointer;
		V_0 = L_4;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		return L_5;
	}
}
// Method Definition Index: 8040
// Method Definition Index: 8039
// Method Definition Index: 8040
// Method Definition Index: 8039
// Method Definition Index: 8039
// Method Definition Index: 8039
// Method Definition Index: 8039
// Method Definition Index: 8040
// Method Definition Index: 8039
// Method Definition Index: 8040
// Method Definition Index: 8039
// Method Definition Index: 8039
// Method Definition Index: 8039
// Method Definition Index: 8040
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_mB2BA753159FF98F9277B42B0DDF86434B8415208_fshared (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ___0_span, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_0 = ___0_span;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1 = L_0.____pointer;
		V_0 = L_1;
		Il2CppFullySharedGenericAny* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		return L_2;
	}
}
// Method Definition Index: 8039
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_m5144BD426181728CA94C44B8778ECDF811B77843_fshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_0 = ___0_span;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1 = L_0.____pointer;
		V_0 = L_1;
		Il2CppFullySharedGenericAny* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		return L_2;
	}
}
// Method Definition Index: 8039
// Method Definition Index: 8044
// Method Definition Index: 8044
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryMarshal_TryGetArray_TisIl2CppFullySharedGenericAny_m774655549799B1B3B66321FD1211F53D74747AD1_fshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 ___0_memory, ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* ___1_segment, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(ArraySegment_1_tE5C329D99D0F790564F0D6F97FA693DED25CBE4B_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 V_3;
	memset((&V_3), 0, sizeof(V_3));
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_4 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0;
		L_0 = ReadOnlyMemory_1_GetObjectStartLength_m76D2DB58E89EF8DAAB0BEEC5E80CC99E7C3CB752_inline((&___0_memory), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(((MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487*)CastclassClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1))));
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* >::Invoke(6, ((MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487*)CastclassClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1))), (&V_3));
		if (!L_3)
		{
			goto IL_0066;
		}
	}
	{
		ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* L_4 = ___1_segment;
		CHECKED_LOCAL_INIT(ArraySegment_1_tE5C329D99D0F790564F0D6F97FA693DED25CBE4B_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5;
		L_5 = ArraySegment_1_get_Array_mE4A35DFD81ABF447350B9A05C0F4BF0248A3CFF2_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_6;
		L_6 = ArraySegment_1_get_Offset_m4FAFF061AB36BF278BA8DC37B6D13718A06301E6_inline((&V_3), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 L_9;
		memset((&L_9), 0, sizeof(L_9));
		ArraySegment_1__ctor_m3A1337B17EA471D2D1538CB43ADB3B91267F978F((&L_9), L_5, ((int32_t)il2cpp_codegen_add(L_6, ((int32_t)(L_7&((int32_t)2147483647LL))))), L_8, il2cpp_rgctx_method(method->rgctx_data, 5));
		*(ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*)L_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)&(((ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*)L_4)->____array), (void*)NULL);
		return (bool)1;
	}

IL_0043:
	{
		RuntimeObject* L_10 = V_0;
		V_4 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)IsInst((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 6)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_4;
		if (!L_11)
		{
			goto IL_0066;
		}
	}
	{
		ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* L_12 = ___1_segment;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = V_4;
		int32_t L_14 = V_1;
		int32_t L_15 = V_2;
		ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 L_16;
		memset((&L_16), 0, sizeof(L_16));
		ArraySegment_1__ctor_m3A1337B17EA471D2D1538CB43ADB3B91267F978F((&L_16), L_13, L_14, ((int32_t)(L_15&((int32_t)2147483647LL))), il2cpp_rgctx_method(method->rgctx_data, 5));
		*(ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*)L_12 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*)L_12)->____array), (void*)NULL);
		return (bool)1;
	}

IL_0066:
	{
		int32_t L_17 = V_2;
		if (((int32_t)(L_17&((int32_t)2147483647LL))))
		{
			goto IL_007c;
		}
	}
	{
		ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* L_18 = ___1_segment;
		CHECKED_LOCAL_INIT(ArraySegment_1_tE5C329D99D0F790564F0D6F97FA693DED25CBE4B_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 L_19;
		L_19 = ArraySegment_1_get_Empty_m90EEE776AECD3AE35BB8634281B140DA015FFD49_inline(il2cpp_rgctx_method(method->rgctx_data, 7));
		*(ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*)L_18 = L_19;
		Il2CppCodeGenWriteBarrier((void**)&(((ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*)L_18)->____array), (void*)NULL);
		return (bool)1;
	}

IL_007c:
	{
		ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* L_20 = ___1_segment;
		il2cpp_codegen_initobj(L_20, sizeof(ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178));
		return (bool)0;
	}
}
// Method Definition Index: 61397
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryUtilities_Free_TisIl2CppFullySharedGenericStruct_m417F5A391638E51A2072AA568F71E0F4528410F8_fshared (Il2CppFullySharedGenericStruct* ___0_p, int32_t ___1_allocator, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_p), (&___1_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 18472));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 18473));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 18474));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/GPUDriven/Utilities/MemoryUtilities.cs:19>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 18475));
		Il2CppFullySharedGenericStruct* L_0 = ___0_p;
		int32_t L_1 = ___1_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 18476));
		UnsafeUtility_Free_mFF99F4F02FE7F735AB30D8987D6953E55A2B23E1((void*)L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 18476));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/GPUDriven/Utilities/MemoryUtilities.cs:20>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 18477));
		return;
	}
}
// Method Definition Index: 61396
// Method Definition Index: 61396
// Method Definition Index: 61396
// Method Definition Index: 61396
// Method Definition Index: 61396
// Method Definition Index: 61396
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* MemoryUtilities_Malloc_TisIl2CppFullySharedGenericStruct_m43C7C4CDECC24319B6A56C2EF185AD454D5C0B13_fshared (int32_t ___0_count, int32_t ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_count), (&___1_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 18464));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 18465));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 18466));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/GPUDriven/Utilities/MemoryUtilities.cs:11>
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/GPUDriven/Utilities/MemoryUtilities.cs:12>
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/GPUDriven/Utilities/MemoryUtilities.cs:13>
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/GPUDriven/Utilities/MemoryUtilities.cs:14>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 18467));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 18468));
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 18468));
		int32_t L_1 = ___0_count;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_0, L_1)),NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 18469));
		int32_t L_3;
		L_3 = UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 18469));
		int32_t L_4 = ___1_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 18470));
		void* L_5;
		L_5 = UnsafeUtility_Malloc_mD7BD28D5AE7E4901B225B7DFFE2B568EE7BDC0C9(L_2, L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 18470));
		V_0 = (Il2CppFullySharedGenericStruct*)L_5;
		goto IL_0017;
	}

IL_0017:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/GPUDriven/Utilities/MemoryUtilities.cs:15>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 18471));
		Il2CppFullySharedGenericStruct* L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 36512
// Method Definition Index: 36512
// Method Definition Index: 36512
// Method Definition Index: 36512
// Method Definition Index: 36512
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* Mesh_GetAllocArrayFromChannel_TisIl2CppFullySharedGenericStruct_mA46A9E5C271B680F6D8F8B01083CE08E8A0A4A9F_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_channel));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5713));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5714));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:55>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5715));
		int32_t L_0 = ___0_channel;
		int32_t L_1 = ___0_channel;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5716));
		int32_t L_2;
		L_2 = Mesh_DefaultDimensionForChannel_mCE2BFE4516CB37EA677E8671997D986FF654C130(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5716));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5717));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_3;
		L_3 = Mesh_GetAllocArrayFromChannel_TisIl2CppFullySharedGenericStruct_m98848E1CD7EAD8C1064AA1920EE38BC3E825AF85(__this, L_0, 0, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5717));
		return L_3;
	}
}
// Method Definition Index: 36511
// Method Definition Index: 36511
// Method Definition Index: 36511
// Method Definition Index: 36511
// Method Definition Index: 36511
// Method Definition Index: 36511
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Mesh_GetAllocArrayFromChannel_TisIl2CppFullySharedGenericAny_m8B7685BD0F7A25A9C8D727A229B5E14195FF0832_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_channel), (&___1_format), (&___2_dim));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5701));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5702));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:41>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5703));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5704));
		bool L_0;
		L_0 = Mesh_get_canAccess_m97F255BBB8C009D643920E2D095B6DB8868E3572(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5704));
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:43>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5705));
		int32_t L_1 = ___0_channel;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5706));
		bool L_2;
		L_2 = Mesh_HasVertexAttribute_m6FA9574E4DEE19158535F93281791AD6FB550595(__this, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5706));
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:44>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5707));
		int32_t L_3 = ___0_channel;
		int32_t L_4 = ___1_format;
		int32_t L_5 = ___2_dim;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5708));
		RuntimeArray* L_6;
		L_6 = Mesh_GetAllocArrayFromChannelImpl_m30C7972CA5A67CD01EBBDDE2FD8F48CE2F8F86F6(__this, L_3, L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5708));
		return ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}

IL_0020:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:48>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5709));
		int32_t L_7 = ___0_channel;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5710));
		Mesh_PrintErrorCantAccessChannel_mD80AC1870BC51714BE0C97B15D3E3D4EC42AC85E(__this, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5710));
	}

IL_0027:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:50>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5711));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5712));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8;
		L_8 = Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5712));
		return L_8;
	}
}
// Method Definition Index: 36519
// Method Definition Index: 36519
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetListForChannel_TisIl2CppFullySharedGenericStruct_mC8A03EDDAAE470040D392DFC47AD8587DAD50A09_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___0_buffer, int32_t ___1_capacity, int32_t ___2_channel, int32_t ___3_dim, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_buffer), (&___1_capacity), (&___2_channel), (&___3_dim));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5800));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5801));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:120>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5802));
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_0 = ___0_buffer;
		int32_t L_1 = ___1_capacity;
		int32_t L_2 = ___2_channel;
		int32_t L_3 = ___3_dim;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5803));
		Mesh_GetListForChannel_TisIl2CppFullySharedGenericStruct_mCA1D8340E0742A8BD36777E680B6D6FF0459659C(__this, L_0, L_1, L_2, L_3, 0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5803));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:121>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5804));
		return;
	}
}
// Method Definition Index: 36520
// Method Definition Index: 36520
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetListForChannel_TisIl2CppFullySharedGenericStruct_mCA1D8340E0742A8BD36777E680B6D6FF0459659C_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___0_buffer, int32_t ___1_capacity, int32_t ___2_channel, int32_t ___3_dim, int32_t ___4_channelType, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_buffer), (&___1_capacity), (&___2_channel), (&___3_dim), (&___4_channelType));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5805));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5806));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:125>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5807));
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_0 = ___0_buffer;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5808));
		NullCheck(L_0);
		List_1_Clear_mAB38E4DFB42AEB226BCF52B9D8A9A0E0CBAA7653_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5808));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:127>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5809));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5810));
		bool L_1;
		L_1 = Mesh_get_canAccess_m97F255BBB8C009D643920E2D095B6DB8868E3572(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5810));
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:129>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5811));
		int32_t L_2 = ___2_channel;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5812));
		Mesh_PrintErrorCantAccessChannel_mD80AC1870BC51714BE0C97B15D3E3D4EC42AC85E(__this, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5812));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:130>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5813));
		return;
	}

IL_0016:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:133>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5814));
		int32_t L_3 = ___2_channel;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5815));
		bool L_4;
		L_4 = Mesh_HasVertexAttribute_m6FA9574E4DEE19158535F93281791AD6FB550595(__this, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5815));
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:134>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5816));
		return;
	}

IL_0020:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:136>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5817));
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_5 = ___0_buffer;
		int32_t L_6 = ___1_capacity;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5818));
		NoAllocHelpers_EnsureListElemCount_TisIl2CppFullySharedGenericStruct_mF42FFF3FE359CB02D1DA68605F8DB48B6FA0C3DE(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5818));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:137>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5819));
		int32_t L_7 = ___2_channel;
		int32_t L_8 = ___4_channelType;
		int32_t L_9 = ___3_dim;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_10 = ___0_buffer;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5820));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_11;
		L_11 = UnsafeUtility_GetByteSpanFromList_TisIl2CppFullySharedGenericStruct_m7644779593338EF0C449D6761DD2578F7DAEB46E_inline(L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5820));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5821));
		Mesh_GetArrayFromChannelImpl_m667A8AB1DECA99476216E1A4AA392E7202067AB3(__this, L_7, L_8, L_9, L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5821));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:138>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5822));
		return;
	}
}
// Method Definition Index: 36570
// Method Definition Index: 36570
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetUVsImpl_TisIl2CppFullySharedGenericStruct_m575D3CF359344A682A986677B59466B1E9C61552_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_uvIndex, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___1_uvs, int32_t ___2_dim, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_uvIndex), (&___1_uvs), (&___2_dim));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6113));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6114));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:633>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6115));
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_0 = ___1_uvs;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:634>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6116));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6117));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB76C1A87204BBFDC1EB8755ECBEA3E6B651710A2)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7ECFB57A0D1B5CE741045B6B75AB6521BC5B5C0F)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6117));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:635>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6118));
		int32_t L_2 = ___0_uvIndex;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_3 = ___0_uvIndex;
		if ((((int32_t)L_3) <= ((int32_t)7)))
		{
			goto IL_0026;
		}
	}

IL_001b:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:636>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6119));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6120));
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_4 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6120));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0026:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:638>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6121));
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_5 = ___1_uvs;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6122));
		int32_t L_6;
		L_6 = Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6122));
		int32_t L_7 = ___0_uvIndex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6123));
		int32_t L_8;
		L_8 = Mesh_GetUVChannel_m52936A342F9C96EB7F0214A2F310018E1A25A689(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6123));
		int32_t L_9 = ___2_dim;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6124));
		Mesh_GetListForChannel_TisIl2CppFullySharedGenericStruct_mC8A03EDDAAE470040D392DFC47AD8587DAD50A09(__this, L_5, L_6, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6124));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:639>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6125));
		return;
	}
}
// Method Definition Index: 36516
// Method Definition Index: 36516
// Method Definition Index: 36516
// Method Definition Index: 36516
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetArrayForChannel_TisIl2CppFullySharedGenericStruct_m9084B9D014B6F90E6C1EB8D3E480CCD52479EE06_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___1_values, int32_t ___2_flags, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_channel), (&___1_values), (&___2_flags));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5775));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5776));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:104>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5777));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_0 = ___1_values;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5778));
		int32_t L_1;
		L_1 = NoAllocHelpers_SafeLength_mB1F1CBA3C310ABE49EFFD290BF33527B14657DEF((RuntimeArray*)L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5778));
		V_0 = L_1;
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:105>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5779));
		int32_t L_2 = ___0_channel;
		int32_t L_3 = ___0_channel;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5780));
		int32_t L_4;
		L_4 = Mesh_DefaultDimensionForChannel_mCE2BFE4516CB37EA677E8671997D986FF654C130(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5780));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_5 = ___1_values;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5781));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_6;
		L_6 = MemoryExtensions_AsSpan_TisIl2CppFullySharedGenericStruct_mF8415BE462F218CF45D5AAA3183883F406EFD7BB_inline(L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5781));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5782));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7;
		L_7 = MemoryMarshal_AsBytes_TisIl2CppFullySharedGenericStruct_mF17987979FA677881AF5A25ECF5A4A8FECDC7FC5_inline(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5782));
		int32_t L_8 = V_0;
		int32_t L_9 = V_0;
		int32_t L_10 = ___2_flags;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5783));
		Mesh_SetSizedArrayForChannel_mF84A744E887E2207A45909F9FAB6D2D016CF48BF(__this, L_2, 0, L_4, L_7, L_8, 0, L_9, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5783));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:106>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5784));
		return;
	}
}
// Method Definition Index: 36515
// Method Definition Index: 36515
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetArrayForChannel_TisIl2CppFullySharedGenericStruct_mB83A49C428146293A7478FF9DB4D8F85C65A84F5_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___3_values, int32_t ___4_flags, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_channel), (&___1_format), (&___2_dim), (&___3_values), (&___4_flags));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5766));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5767));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:98>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5768));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_0 = ___3_values;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5769));
		int32_t L_1;
		L_1 = NoAllocHelpers_SafeLength_mB1F1CBA3C310ABE49EFFD290BF33527B14657DEF((RuntimeArray*)L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5769));
		V_0 = L_1;
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:99>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5770));
		int32_t L_2 = ___0_channel;
		int32_t L_3 = ___1_format;
		int32_t L_4 = ___2_dim;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_5 = ___3_values;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5771));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_6;
		L_6 = MemoryExtensions_AsSpan_TisIl2CppFullySharedGenericStruct_mF8415BE462F218CF45D5AAA3183883F406EFD7BB_inline(L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5771));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5772));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7;
		L_7 = MemoryMarshal_AsBytes_TisIl2CppFullySharedGenericStruct_mF17987979FA677881AF5A25ECF5A4A8FECDC7FC5_inline(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5772));
		int32_t L_8 = V_0;
		int32_t L_9 = V_0;
		int32_t L_10 = ___4_flags;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5773));
		Mesh_SetSizedArrayForChannel_mF84A744E887E2207A45909F9FAB6D2D016CF48BF(__this, L_2, L_3, L_4, L_7, L_8, 0, L_9, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5773));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:100>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5774));
		return;
	}
}
// Method Definition Index: 36590
// Method Definition Index: 36590
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetIndexBufferData_TisIl2CppFullySharedGenericStruct_mE50C914428B4FF93F2BBC47803F21106B8E44CB2_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_data, int32_t ___1_dataStart, int32_t ___2_meshBufferStart, int32_t ___3_count, int32_t ___4_flags, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_data), (&___1_dataStart), (&___2_meshBufferStart), (&___3_count), (&___4_flags));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6287));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6288));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:1064>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6289));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6290));
		bool L_0;
		L_0 = Mesh_get_canAccess_m97F255BBB8C009D643920E2D095B6DB8868E3572(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6290));
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:1066>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6291));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6292));
		Mesh_PrintErrorCantAccessIndices_mC2A8F7BBED09D4D6ABC265AFCC2979795C1ABF0C(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6292));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:1067>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6293));
		return;
	}

IL_000f:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:1069>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6294));
		int32_t L_1 = ___1_dataStart;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_2 = ___2_meshBufferStart;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3 = ___3_count;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_4 = ___1_dataStart;
		int32_t L_5 = ___3_count;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6295));
		int32_t L_6;
		L_6 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___0_data), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6295));
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) <= ((int32_t)L_6)))
		{
			goto IL_004c;
		}
	}

IL_0029:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:1070>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6296));
		int32_t L_7 = ___1_dataStart;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		int32_t L_10 = ___2_meshBufferStart;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		int32_t L_13 = ___3_count;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6297));
		String_t* L_16;
		L_16 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3262873DA2491E1CC4FF127E6A3921EE483D61CB)), L_9, L_12, L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6297));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6298));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_17 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_17, L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6298));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_004c:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:1071>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6299));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_18 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6300));
		void* L_19;
		L_19 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_inline(L_18, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6300));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6301));
		intptr_t L_20;
		L_20 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_19, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6301));
		int32_t L_21 = ___1_dataStart;
		int32_t L_22 = ___2_meshBufferStart;
		int32_t L_23 = ___3_count;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6302));
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6302));
		int32_t L_25 = ___4_flags;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6303));
		Mesh_InternalSetIndexBufferData_m1CC300AEF876DF894E192CD7EA84A14E69159028(__this, L_20, L_21, L_22, L_23, L_24, L_25, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6303));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:1072>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6304));
		return;
	}
}
// Method Definition Index: 36606
// Method Definition Index: 36606
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetIndices_TisIl2CppFullySharedGenericStruct_m5867CF4EF8F51E18904698DFDE661C29791E23F6_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_indices, int32_t ___1_topology, int32_t ___2_submesh, bool ___3_calculateBounds, int32_t ___4_baseVertex, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_indices), (&___1_topology), (&___2_submesh), (&___3_calculateBounds), (&___4_baseVertex));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6418));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6419));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:1341>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6420));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_indices;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6421));
		int32_t L_1;
		L_1 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___0_indices), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6421));
		int32_t L_2 = ___1_topology;
		int32_t L_3 = ___2_submesh;
		bool L_4 = ___3_calculateBounds;
		int32_t L_5 = ___4_baseVertex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6422));
		Mesh_SetIndices_TisIl2CppFullySharedGenericStruct_m807463610A6EB5B42B1E72682832EBF24C6D7518(__this, L_0, 0, L_1, L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6422));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:1342>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6423));
		return;
	}
}
// Method Definition Index: 36607
// Method Definition Index: 36607
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetIndices_TisIl2CppFullySharedGenericStruct_m807463610A6EB5B42B1E72682832EBF24C6D7518_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_indices, int32_t ___1_indicesStart, int32_t ___2_indicesLength, int32_t ___3_topology, int32_t ___4_submesh, bool ___5_calculateBounds, int32_t ___6_baseVertex, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_indices), (&___1_indicesStart), (&___2_indicesLength), (&___3_topology), (&___4_submesh), (&___5_calculateBounds), (&___6_baseVertex));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6424));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6425));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:1351>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6426));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_indices;
		int32_t L_1 = ___1_indicesStart;
		int32_t L_2 = ___2_indicesLength;
		int32_t L_3 = ___3_topology;
		int32_t L_4 = ___4_submesh;
		bool L_5 = ___5_calculateBounds;
		int32_t L_6 = ___6_baseVertex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6427));
		Mesh_SetIndices_TisIl2CppFullySharedGenericStruct_m92D7D70FDE424B019A8F127C8288668FC92BEA50(__this, L_0, L_1, L_2, L_3, L_4, 0, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6427));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:1352>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6428));
		return;
	}
}
// Method Definition Index: 36608
// Method Definition Index: 36608
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetIndices_TisIl2CppFullySharedGenericStruct_m92D7D70FDE424B019A8F127C8288668FC92BEA50_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_indices, int32_t ___1_indicesStart, int32_t ___2_indicesLength, int32_t ___3_topology, int32_t ___4_submesh, int32_t ___5_meshLod, bool ___6_calculateBounds, int32_t ___7_baseVertex, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_indices), (&___1_indicesStart), (&___2_indicesLength), (&___3_topology), (&___4_submesh), (&___5_meshLod), (&___6_calculateBounds), (&___7_baseVertex));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6429));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6430));
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B6_2 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B5_2 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	int32_t G_B7_2 = 0;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* G_B7_3 = NULL;
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:1356>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6431));
		int32_t L_0 = ___4_submesh;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6432));
		bool L_1;
		L_1 = Mesh_CheckCanAccessSubmeshIndices_mB6659E6FDE4EFDECB233C194E4AC066F5FF60533(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6432));
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:1358>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6433));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6434));
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6434));
		V_0 = L_2;
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:1359>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6435));
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_0023;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:1360>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6436));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6437));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral99114D2718EFDC1BFFB41866DC4BFC8066C1B7D2)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6437));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0023:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:1362>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6438));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6439));
		int32_t L_6;
		L_6 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___0_indices), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6439));
		int32_t L_7 = ___1_indicesStart;
		int32_t L_8 = ___2_indicesLength;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6440));
		Mesh_CheckIndicesArrayRange_m0B8030BE6248E1E411D92E3255777E6E530527F4(__this, L_6, L_7, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6440));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:1363>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6441));
		int32_t L_9 = ___4_submesh;
		int32_t L_10 = ___3_topology;
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)2)))
		{
			G_B6_0 = L_10;
			G_B6_1 = L_9;
			G_B6_2 = __this;
			goto IL_003e;
		}
		G_B5_0 = L_10;
		G_B5_1 = L_9;
		G_B5_2 = __this;
	}
	{
		G_B7_0 = 1;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		goto IL_003f;
	}

IL_003e:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
	}

IL_003f:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_12 = ___0_indices;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6442));
		void* L_13;
		L_13 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_inline(L_12, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6442));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6443));
		intptr_t L_14;
		L_14 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6443));
		int32_t L_15 = ___1_indicesStart;
		int32_t L_16 = ___2_indicesLength;
		bool L_17 = ___6_calculateBounds;
		int32_t L_18 = ___7_baseVertex;
		int32_t L_19 = ___5_meshLod;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6444));
		NullCheck(G_B7_3);
		Mesh_SetIndicesNativeArrayImpl_m43DA64A7435E339FAB453A95FA43F53641E28C0F(G_B7_3, G_B7_2, G_B7_1, G_B7_0, L_14, L_15, L_16, L_17, L_18, L_19, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6444));
	}

IL_0057:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:1365>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6445));
		return;
	}
}
// Method Definition Index: 36518
// Method Definition Index: 36518
// Method Definition Index: 36518
// Method Definition Index: 36518
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetListForChannel_TisIl2CppFullySharedGenericStruct_m0A5233C5A57BB8D5A98B0AF0D4B33250AB2249DA_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___1_values, int32_t ___2_start, int32_t ___3_length, int32_t ___4_flags, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_channel), (&___1_values), (&___2_start), (&___3_length), (&___4_flags));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5792));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5793));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:115>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5794));
		int32_t L_0 = ___0_channel;
		int32_t L_1 = ___0_channel;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5795));
		int32_t L_2;
		L_2 = Mesh_DefaultDimensionForChannel_mCE2BFE4516CB37EA677E8671997D986FF654C130(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5795));
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_3 = ___1_values;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5796));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = UnsafeUtility_GetByteSpanFromList_TisIl2CppFullySharedGenericStruct_m7644779593338EF0C449D6761DD2578F7DAEB46E_inline(L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5796));
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_5 = ___1_values;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5797));
		int32_t L_6;
		L_6 = NoAllocHelpers_SafeLength_TisIl2CppFullySharedGenericStruct_mC49B006E63419EFD2FA5B792E9ED7427A1D9135F(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5797));
		int32_t L_7 = ___2_start;
		int32_t L_8 = ___3_length;
		int32_t L_9 = ___4_flags;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5798));
		Mesh_SetSizedArrayForChannel_mF84A744E887E2207A45909F9FAB6D2D016CF48BF(__this, L_0, 0, L_2, L_4, L_6, L_7, L_8, L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5798));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:116>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5799));
		return;
	}
}
// Method Definition Index: 36517
// Method Definition Index: 36517
// Method Definition Index: 36517
// Method Definition Index: 36517
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetListForChannel_TisIl2CppFullySharedGenericStruct_m65E9F2E903D3B8FC06F6F3FE946EC9A0F74F4264_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, int32_t ___1_format, int32_t ___2_dim, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___3_values, int32_t ___4_start, int32_t ___5_length, int32_t ___6_flags, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_channel), (&___1_format), (&___2_dim), (&___3_values), (&___4_start), (&___5_length), (&___6_flags));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5785));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5786));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:110>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5787));
		int32_t L_0 = ___0_channel;
		int32_t L_1 = ___1_format;
		int32_t L_2 = ___2_dim;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_3 = ___3_values;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5788));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = UnsafeUtility_GetByteSpanFromList_TisIl2CppFullySharedGenericStruct_m7644779593338EF0C449D6761DD2578F7DAEB46E_inline(L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5788));
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_5 = ___3_values;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5789));
		int32_t L_6;
		L_6 = NoAllocHelpers_SafeLength_TisIl2CppFullySharedGenericStruct_mC49B006E63419EFD2FA5B792E9ED7427A1D9135F(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5789));
		int32_t L_7 = ___4_start;
		int32_t L_8 = ___5_length;
		int32_t L_9 = ___6_flags;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5790));
		Mesh_SetSizedArrayForChannel_mF84A744E887E2207A45909F9FAB6D2D016CF48BF(__this, L_0, L_1, L_2, L_4, L_6, L_7, L_8, L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5790));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:111>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5791));
		return;
	}
}
// Method Definition Index: 36544
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetNormals_TisIl2CppFullySharedGenericStruct_m3B51E96F8995FDE95893F4B3CF8C627EB510F86A_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_inNormals, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_inNormals));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5940));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5941));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:334>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5942));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_inNormals;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5943));
		int32_t L_1;
		L_1 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___0_inNormals), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5943));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5944));
		Mesh_SetNormals_TisIl2CppFullySharedGenericStruct_mFA4C735A5DB5E829E0868A1EE1E270BD23F566C4(__this, L_0, 0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5944));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:335>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5945));
		return;
	}
}
// Method Definition Index: 36544
// Method Definition Index: 36545
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetNormals_TisIl2CppFullySharedGenericStruct_mFA4C735A5DB5E829E0868A1EE1E270BD23F566C4_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_inNormals, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_inNormals), (&___1_start), (&___2_length));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5946));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5947));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:339>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5948));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_inNormals;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5949));
		Mesh_SetNormals_TisIl2CppFullySharedGenericStruct_mBD8ABDB8D35978C8BEED68B7F31196622A24686F(__this, L_0, L_1, L_2, 0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5949));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:340>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5950));
		return;
	}
}
// Method Definition Index: 36545
// Method Definition Index: 36546
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetNormals_TisIl2CppFullySharedGenericStruct_mBD8ABDB8D35978C8BEED68B7F31196622A24686F_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_inNormals, int32_t ___1_start, int32_t ___2_length, int32_t ___3_flags, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_inNormals), (&___1_start), (&___2_length), (&___3_flags));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5951));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5952));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:344>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5953));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5954));
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5954));
		if ((((int32_t)L_0) == ((int32_t)((int32_t)12))))
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:345>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5955));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5956));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD4DA1775B4A90CAFED0EA239A445EE64DFCB92CE)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5956));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:346>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5957));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = ___0_inNormals;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5958));
		void* L_3;
		L_3 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_inline(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5958));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5959));
		intptr_t L_4;
		L_4 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5959));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5960));
		int32_t L_5;
		L_5 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___0_inNormals), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5960));
		int32_t L_6 = ___1_start;
		int32_t L_7 = ___2_length;
		int32_t L_8 = ___3_flags;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5961));
		Mesh_SetSizedNativeArrayForChannel_m6571CA632A3B7D9F2D110B5F76D47652A8B81372(__this, 1, 0, 3, L_4, L_5, L_6, L_7, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5961));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:347>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5962));
		return;
	}
}
// Method Definition Index: 36546
// Method Definition Index: 36593
// Method Definition Index: 36593
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetTrianglesImpl_TisIl2CppFullySharedGenericStruct_m0DDE01E3F522B831916D302D11F17E4DB1823860_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_submesh, int32_t ___1_indicesFormat, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___2_triangles, int32_t ___3_trianglesArrayLength, int32_t ___4_start, int32_t ___5_length, bool ___6_calculateBounds, int32_t ___7_baseVertex, int32_t ___8_meshLod, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_submesh), (&___1_indicesFormat), (&___2_triangles), (&___3_trianglesArrayLength), (&___4_start), (&___5_length), (&___6_calculateBounds), (&___7_baseVertex), (&___8_meshLod));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6328));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6329));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:1163>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6330));
		int32_t L_0 = ___3_trianglesArrayLength;
		int32_t L_1 = ___4_start;
		int32_t L_2 = ___5_length;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6331));
		Mesh_CheckIndicesArrayRange_m0B8030BE6248E1E411D92E3255777E6E530527F4(__this, L_0, L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6331));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:1164>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6332));
		int32_t L_3 = ___0_submesh;
		int32_t L_4 = ___1_indicesFormat;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_5 = ___2_triangles;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6333));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_6;
		L_6 = MemoryExtensions_AsSpan_TisIl2CppFullySharedGenericStruct_mF8415BE462F218CF45D5AAA3183883F406EFD7BB_inline(L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6333));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6334));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7;
		L_7 = MemoryMarshal_AsBytes_TisIl2CppFullySharedGenericStruct_mF17987979FA677881AF5A25ECF5A4A8FECDC7FC5_inline(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6334));
		int32_t L_8 = ___4_start;
		int32_t L_9 = ___5_length;
		bool L_10 = ___6_calculateBounds;
		int32_t L_11 = ___7_baseVertex;
		int32_t L_12 = ___8_meshLod;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6335));
		Mesh_SetIndicesImpl_m0938B1C006C16E9E1DA63028D3F7C1DA2B8BC167(__this, L_3, 0, L_4, L_7, L_8, L_9, L_10, L_11, L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6335));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:1165>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6336));
		return;
	}
}
// Method Definition Index: 36567
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_TisIl2CppFullySharedGenericStruct_m84E5999134F1E178720A2271D70B18399C020724_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_uvs, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_channel), (&___1_uvs));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6081));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6082));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:609>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6083));
		int32_t L_0 = ___0_channel;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = ___1_uvs;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6084));
		int32_t L_2;
		L_2 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___1_uvs), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6084));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6085));
		Mesh_SetUVs_TisIl2CppFullySharedGenericStruct_m8EBE44A00E06C6C07C66622BEA4449D580E775DF(__this, L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6085));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:610>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6086));
		return;
	}
}
// Method Definition Index: 36567
// Method Definition Index: 36568
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_TisIl2CppFullySharedGenericStruct_m8EBE44A00E06C6C07C66622BEA4449D580E775DF_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_uvs, int32_t ___2_start, int32_t ___3_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_channel), (&___1_uvs), (&___2_start), (&___3_length));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6087));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6088));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:614>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6089));
		int32_t L_0 = ___0_channel;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = ___1_uvs;
		int32_t L_2 = ___2_start;
		int32_t L_3 = ___3_length;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6090));
		Mesh_SetUVs_TisIl2CppFullySharedGenericStruct_m4B2A5AA1A7EA0714BA77859333749EB8BF88C2E2(__this, L_0, L_1, L_2, L_3, 0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6090));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:615>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6091));
		return;
	}
}
// Method Definition Index: 36568
// Method Definition Index: 36569
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_TisIl2CppFullySharedGenericStruct_m4B2A5AA1A7EA0714BA77859333749EB8BF88C2E2_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_channel, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_uvs, int32_t ___2_start, int32_t ___3_length, int32_t ___4_flags, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_channel), (&___1_uvs), (&___2_start), (&___3_length), (&___4_flags));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6092));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6093));
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:619>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6094));
		int32_t L_0 = ___0_channel;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___0_channel;
		if ((((int32_t)L_1) <= ((int32_t)7)))
		{
			goto IL_001e;
		}
	}

IL_0008:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:620>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6095));
		int32_t L_2 = ___0_channel;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6096));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral44F1E7DB2E8AAD233857868896DFEFE5A63EECEF)), L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6096));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_001e:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:622>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6097));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6098));
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6098));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:623>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6099));
		int32_t L_7 = L_6;
		if (!((int32_t)(L_7&3)))
		{
			G_B5_0 = L_7;
			goto IL_0033;
		}
		G_B4_0 = L_7;
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:624>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6100));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6101));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4E3BEC05C920F32F86740D8CDDA5F47847F01CBF)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6101));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0033:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:625>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6102));
		V_0 = ((int32_t)(G_B5_0/4));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:626>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6103));
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) < ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) <= ((int32_t)4)))
		{
			goto IL_0049;
		}
	}

IL_003e:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:627>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6104));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6105));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6B84C223C597EA5D24F707973167E04ECF07D7DE)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6105));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0049:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:628>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6106));
		int32_t L_12 = ___0_channel;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6107));
		int32_t L_13;
		L_13 = Mesh_GetUVChannel_m52936A342F9C96EB7F0214A2F310018E1A25A689(L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6107));
		int32_t L_14 = V_0;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_15 = ___1_uvs;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6108));
		void* L_16;
		L_16 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_inline(L_15, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6108));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6109));
		intptr_t L_17;
		L_17 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6109));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6110));
		int32_t L_18;
		L_18 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___1_uvs), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6110));
		int32_t L_19 = ___2_start;
		int32_t L_20 = ___3_length;
		int32_t L_21 = ___4_flags;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6111));
		Mesh_SetSizedNativeArrayForChannel_m6571CA632A3B7D9F2D110B5F76D47652A8B81372(__this, L_13, 0, L_14, L_17, L_18, L_19, L_20, L_21, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6111));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:629>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6112));
		return;
	}
}
// Method Definition Index: 36569
// Method Definition Index: 36556
// Method Definition Index: 36556
// Method Definition Index: 36563
// Method Definition Index: 36556
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUvsImpl_TisIl2CppFullySharedGenericStruct_mAD144DD43DBB5E58EE668539E92F54E8C13FC1AD_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_uvIndex, int32_t ___1_dim, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___2_uvs, int32_t ___3_start, int32_t ___4_length, int32_t ___5_flags, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_uvIndex), (&___1_dim), (&___2_uvs), (&___3_start), (&___4_length), (&___5_flags));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6011));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6012));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:502>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6013));
		int32_t L_0 = ___0_uvIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___0_uvIndex;
		if ((((int32_t)L_1) <= ((int32_t)7)))
		{
			goto IL_0013;
		}
	}

IL_0008:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:504>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6014));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6015));
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6015));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:505>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6016));
		return;
	}

IL_0013:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:507>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6017));
		int32_t L_2 = ___0_uvIndex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6018));
		int32_t L_3;
		L_3 = Mesh_GetUVChannel_m52936A342F9C96EB7F0214A2F310018E1A25A689(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6018));
		int32_t L_4 = ___1_dim;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_5 = ___2_uvs;
		int32_t L_6 = ___3_start;
		int32_t L_7 = ___4_length;
		int32_t L_8 = ___5_flags;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6019));
		Mesh_SetListForChannel_TisIl2CppFullySharedGenericStruct_m65E9F2E903D3B8FC06F6F3FE946EC9A0F74F4264(__this, L_3, 0, L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6019));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:508>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6020));
		return;
	}
}
// Method Definition Index: 36563
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUvsImpl_TisIl2CppFullySharedGenericStruct_m2FFC3C0452B4CE8E93F0AA45FBF68CFC3B52D3F5_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___0_uvIndex, int32_t ___1_dim, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___2_uvs, int32_t ___3_arrayStart, int32_t ___4_arraySize, int32_t ___5_flags, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_uvIndex), (&___1_dim), (&___2_uvs), (&___3_arrayStart), (&___4_arraySize), (&___5_flags));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6053));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6054));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:557>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6055));
		int32_t L_0 = ___0_uvIndex;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___0_uvIndex;
		if ((((int32_t)L_1) <= ((int32_t)7)))
		{
			goto IL_001e;
		}
	}

IL_0008:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:558>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6056));
		int32_t L_2 = ___0_uvIndex;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6057));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA2253D0D64C3CE2F70001AEF414A71355CC152DD)), L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3C5D219B15338D87684A3DB22B945597AD4BD46)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6057));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_001e:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:559>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6058));
		int32_t L_6 = ___0_uvIndex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6059));
		int32_t L_7;
		L_7 = Mesh_GetUVChannel_m52936A342F9C96EB7F0214A2F310018E1A25A689(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6059));
		int32_t L_8 = ___1_dim;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_9 = ___2_uvs;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6060));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_10;
		L_10 = MemoryExtensions_AsSpan_TisIl2CppFullySharedGenericStruct_mF8415BE462F218CF45D5AAA3183883F406EFD7BB_inline(L_9, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6060));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6061));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_11;
		L_11 = MemoryMarshal_AsBytes_TisIl2CppFullySharedGenericStruct_mF17987979FA677881AF5A25ECF5A4A8FECDC7FC5_inline(L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6061));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_12 = ___2_uvs;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6062));
		int32_t L_13;
		L_13 = NoAllocHelpers_SafeLength_mB1F1CBA3C310ABE49EFFD290BF33527B14657DEF((RuntimeArray*)L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6062));
		int32_t L_14 = ___3_arrayStart;
		int32_t L_15 = ___4_arraySize;
		int32_t L_16 = ___5_flags;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6063));
		Mesh_SetSizedArrayForChannel_mF84A744E887E2207A45909F9FAB6D2D016CF48BF(__this, L_7, 0, L_8, L_11, L_13, L_14, L_15, L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6063));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:560>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6064));
		return;
	}
}
// Method Definition Index: 36573
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetVertexBufferData_TisIl2CppFullySharedGenericStruct_mEEF01A2266B57B0BAA0703E3A7D397A69203A864_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_data, int32_t ___1_dataStart, int32_t ___2_meshBufferStart, int32_t ___3_count, int32_t ___4_stream, int32_t ___5_flags, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_data), (&___1_dataStart), (&___2_meshBufferStart), (&___3_count), (&___4_stream), (&___5_flags));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6136));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6137));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:690>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6138));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6139));
		bool L_0;
		L_0 = Mesh_get_canAccess_m97F255BBB8C009D643920E2D095B6DB8868E3572(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6139));
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:691>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6140));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6141));
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6141));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6142));
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA7AEF839C310E50649FABCB16048EC805ED1DCF)), L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2AAF6C7A90E58D7205596DC636D6A02BDB914696)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6142));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6143));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6143));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0023:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:692>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6144));
		int32_t L_4 = ___1_dataStart;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = ___2_meshBufferStart;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_6 = ___3_count;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_7 = ___1_dataStart;
		int32_t L_8 = ___3_count;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6145));
		int32_t L_9;
		L_9 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___0_data), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6145));
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_7, L_8))) <= ((int32_t)L_9)))
		{
			goto IL_0060;
		}
	}

IL_003d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:693>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6146));
		int32_t L_10 = ___1_dataStart;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		int32_t L_13 = ___2_meshBufferStart;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		int32_t L_16 = ___3_count;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6147));
		String_t* L_19;
		L_19 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3262873DA2491E1CC4FF127E6A3921EE483D61CB)), L_12, L_15, L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6147));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6148));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_20 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_20, L_19, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6148));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_0060:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:694>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6149));
		int32_t L_21 = ___4_stream;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_22 = ___0_data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6150));
		void* L_23;
		L_23 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_inline(L_22, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6150));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6151));
		intptr_t L_24;
		L_24 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_23, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6151));
		int32_t L_25 = ___1_dataStart;
		int32_t L_26 = ___2_meshBufferStart;
		int32_t L_27 = ___3_count;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6152));
		int32_t L_28;
		L_28 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6152));
		int32_t L_29 = ___5_flags;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6153));
		Mesh_InternalSetVertexBufferData_m3B8AC41D45EC66E17500B19B7E93AE01B28AA0F9(__this, L_21, L_24, L_25, L_26, L_27, L_28, L_29, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6153));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:695>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6154));
		return;
	}
}
// Method Definition Index: 36573
// Method Definition Index: 36573
// Method Definition Index: 36538
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetVertices_TisIl2CppFullySharedGenericStruct_m6798BBCE8406E7413FFE181CDCE2AFE9DDEF5956_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_inVertices, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_inVertices));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5901));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5902));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:279>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5903));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_inVertices;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5904));
		int32_t L_1;
		L_1 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___0_inVertices), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5904));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5905));
		Mesh_SetVertices_TisIl2CppFullySharedGenericStruct_m8A18C2DD85A9F6D2D61F2643CDF0E79307A5CEA1(__this, L_0, 0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5905));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:280>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5906));
		return;
	}
}
// Method Definition Index: 36538
// Method Definition Index: 36539
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetVertices_TisIl2CppFullySharedGenericStruct_m8A18C2DD85A9F6D2D61F2643CDF0E79307A5CEA1_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_inVertices, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_inVertices), (&___1_start), (&___2_length));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5907));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5908));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:284>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5909));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_inVertices;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5910));
		Mesh_SetVertices_TisIl2CppFullySharedGenericStruct_m019B9059D7AF28E367D078D856E4FD61153A347B(__this, L_0, L_1, L_2, 0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5910));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:285>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5911));
		return;
	}
}
// Method Definition Index: 36539
// Method Definition Index: 36540
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetVertices_TisIl2CppFullySharedGenericStruct_m019B9059D7AF28E367D078D856E4FD61153A347B_fshared (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_inVertices, int32_t ___1_start, int32_t ___2_length, int32_t ___3_flags, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_inVertices), (&___1_start), (&___2_length), (&___3_flags));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5912));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5913));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:289>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5914));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5915));
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5915));
		if ((((int32_t)L_0) == ((int32_t)((int32_t)12))))
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:290>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5916));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5917));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B55E99D2378945F711DB994B7430E820BA05B5D)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5917));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:291>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5918));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = ___0_inVertices;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5919));
		void* L_3;
		L_3 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_inline(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5919));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5920));
		intptr_t L_4;
		L_4 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5920));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5921));
		int32_t L_5;
		L_5 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___0_inVertices), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5921));
		int32_t L_6 = ___1_start;
		int32_t L_7 = ___2_length;
		int32_t L_8 = ___3_flags;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5922));
		Mesh_SetSizedNativeArrayForChannel_m6571CA632A3B7D9F2D110B5F76D47652A8B81372(__this, 0, 0, 3, L_4, L_5, L_6, L_7, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5922));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Graphics/Mesh.cs:292>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 5923));
		return;
	}
}
// Method Definition Index: 36540
// Method Definition Index: 61228
// Method Definition Index: 61228
// Method Definition Index: 61228
// Method Definition Index: 61228
// Method Definition Index: 61228
// Method Definition Index: 61228
// Method Definition Index: 61228
// Method Definition Index: 61228
// Method Definition Index: 61228
// Method Definition Index: 61228
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshRendererUpdateBatch_ValidateEmptyOrSameLayout_TisIl2CppFullySharedGenericStruct_mB098FF87437F302F672EAA5AC206DD62509A096B_fshared (MeshRendererUpdateBatch_t386C6151480A8A39F3A9703B56B8A87AAD5EEED2* __this, int32_t ___0_component, JaggedSpan_1_t5475961F6CB0A4DA335CC6353957B44A21E82D9A ___1_components, JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 ___2_instanceIDs, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshRendererComponentMask_t9A6A143E8B9C3374C4996ACD2C09D03FA0ABA156_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85AC6F85B2CAE2372D2D9B9574AF54BF6A3AB1FB);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_component), (&___1_components), (&___2_instanceIDs));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16139));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16140));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16141));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/GPUDriven/SceneProcessors/MeshRendererUpdateBatch.cs:688>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16142));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16143));
		bool L_0;
		L_0 = JaggedSpan_1_get_isEmpty_mBABC4514687000C51E69CE21E4E99093E05B72A2((&___1_components), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16143));
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16144));
		bool L_1;
		L_1 = JaggedSpan_1_HasSameLayout_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mE8AB473AD93B0702DB9E67D9B3161EDC812C9A88((&___1_components), (&___2_instanceIDs), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16144));
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16145));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16146));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/GPUDriven/SceneProcessors/MeshRendererUpdateBatch.cs:690>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16147));
		int32_t L_3 = ___0_component;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(MeshRendererComponentMask_t9A6A143E8B9C3374C4996ACD2C09D03FA0ABA156_il2cpp_TypeInfo_var, &L_4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16148));
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral85AC6F85B2CAE2372D2D9B9574AF54BF6A3AB1FB, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16148));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16149));
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16149));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/GPUDriven/SceneProcessors/MeshRendererUpdateBatch.cs:691>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16150));
		V_1 = (bool)0;
		goto IL_003c;
	}

IL_0038:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/GPUDriven/SceneProcessors/MeshRendererUpdateBatch.cs:694>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16151));
		V_1 = (bool)1;
		goto IL_003c;
	}

IL_003c:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/GPUDriven/SceneProcessors/MeshRendererUpdateBatch.cs:695>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16152));
		bool L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 61228
// Method Definition Index: 61229
// Method Definition Index: 61229
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshRendererUpdateBatch_ValidateEmptyOrSameSectionCount_TisIl2CppFullySharedGenericStruct_m7A43C50CBEB7B45F27BD4C016061620C91EEEAFA_fshared (MeshRendererUpdateBatch_t386C6151480A8A39F3A9703B56B8A87AAD5EEED2* __this, int32_t ___0_component, JaggedSpan_1_t5475961F6CB0A4DA335CC6353957B44A21E82D9A ___1_components, JaggedSpan_1_tACDB14720FBAD8F1CA16EB5DF282E5F80B7EB9D0 ___2_instanceIDs, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JaggedSpan_1_get_sectionCount_m30E23BC0F8F4D2365568C2848BFE50786E8B30DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshRendererComponentMask_t9A6A143E8B9C3374C4996ACD2C09D03FA0ABA156_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF095D21C8682C856795D9759E2617E87C893F1E);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_component), (&___1_components), (&___2_instanceIDs));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16153));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16154));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16155));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/GPUDriven/SceneProcessors/MeshRendererUpdateBatch.cs:699>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16156));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16157));
		bool L_0;
		L_0 = JaggedSpan_1_get_isEmpty_mBABC4514687000C51E69CE21E4E99093E05B72A2((&___1_components), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16157));
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16158));
		int32_t L_1;
		L_1 = JaggedSpan_1_get_sectionCount_mEC9E28B1D5098F3265B8BAB73C807482317D320C((&___1_components), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16158));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16159));
		int32_t L_2;
		L_2 = JaggedSpan_1_get_sectionCount_m30E23BC0F8F4D2365568C2848BFE50786E8B30DC((&___2_instanceIDs), JaggedSpan_1_get_sectionCount_m30E23BC0F8F4D2365568C2848BFE50786E8B30DC_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16159));
		G_B3_0 = ((((int32_t)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16160));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0057;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16161));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/GPUDriven/SceneProcessors/MeshRendererUpdateBatch.cs:701>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16162));
		int32_t L_4 = ___0_component;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(MeshRendererComponentMask_t9A6A143E8B9C3374C4996ACD2C09D03FA0ABA156_il2cpp_TypeInfo_var, &L_5);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16163));
		int32_t L_7;
		L_7 = JaggedSpan_1_get_sectionCount_mEC9E28B1D5098F3265B8BAB73C807482317D320C((&___1_components), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16163));
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16164));
		int32_t L_10;
		L_10 = JaggedSpan_1_get_sectionCount_m30E23BC0F8F4D2365568C2848BFE50786E8B30DC((&___2_instanceIDs), JaggedSpan_1_get_sectionCount_m30E23BC0F8F4D2365568C2848BFE50786E8B30DC_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16164));
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16165));
		String_t* L_13;
		L_13 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralCF095D21C8682C856795D9759E2617E87C893F1E, L_6, L_9, L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16165));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16166));
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16166));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/GPUDriven/SceneProcessors/MeshRendererUpdateBatch.cs:702>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16167));
		V_1 = (bool)0;
		goto IL_005b;
	}

IL_0057:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/GPUDriven/SceneProcessors/MeshRendererUpdateBatch.cs:705>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16168));
		V_1 = (bool)1;
		goto IL_005b;
	}

IL_005b:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.core@2d66c71e606e/Runtime/GPUDriven/SceneProcessors/MeshRendererUpdateBatch.cs:706>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_GPUDriven_Runtime + 16169));
		bool L_14 = V_1;
		return L_14;
	}
}
// Method Definition Index: 71879
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler_getData_TisIl2CppFullySharedGenericAny_m3C7681691F028E8CACF2B96FBB68D53EBD233931_fshared (MessageHandler_tEE37C4AFC092979F884A7E7B830F004FDE7D3187* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tEFC8830F1FE6E05437F90CF7FEE659B3D392EC0D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tEFC8830F1FE6E05437F90CF7FEE659B3D392EC0D);
	const Il2CppFullySharedGenericAny L_2 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tEFC8830F1FE6E05437F90CF7FEE659B3D392EC0D);
	memset(V_0, 0, SizeOf_T_tEFC8830F1FE6E05437F90CF7FEE659B3D392EC0D);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 2926));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 2927));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 2928));
		//<source_info:C:/Users/PC/Glassy1/frontend/unity/Glassy2/Assets/FlutterUnityIntegration/UnityMessageManager.cs:31>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 2929));
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_0 = __this->___data;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 2930));
		Extensions_Value_TisIl2CppFullySharedGenericAny_m821CCC36F1FA50BC93426381634588C42D5E3216(L_0, (Il2CppFullySharedGenericAny*)L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 2930));
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T_tEFC8830F1FE6E05437F90CF7FEE659B3D392EC0D);
		goto IL_000f;
	}

IL_000f:
	{
		//<source_info:C:/Users/PC/Glassy1/frontend/unity/Glassy2/Assets/FlutterUnityIntegration/UnityMessageManager.cs:32>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 2931));
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T_tEFC8830F1FE6E05437F90CF7FEE659B3D392EC0D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_tEFC8830F1FE6E05437F90CF7FEE659B3D392EC0D);
		return;
	}
}
// Method Definition Index: 34466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MiscHelpers_EveryNth_TisIl2CppFullySharedGenericAny_m8A94063CA65F3F1DAD929805A376C017069FEB91_fshared (RuntimeObject* ___0_enumerable, int32_t ___1_n, int32_t ___2_start, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* L_0 = (U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		U3CEveryNthU3Ed__1_1__ctor_m83020BDE380BDECEB8C81B76F3D73D86F107758F(L_0, ((int32_t)-2), il2cpp_rgctx_method(method->rgctx_data, 1));
		U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* L_1 = L_0;
		RuntimeObject* L_2 = ___0_enumerable;
		NullCheck(L_1);
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),4), il2cpp_rgctx_offset(method->rgctx_data, 2), L_2);
		U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* L_3 = L_1;
		int32_t L_4 = ___1_n;
		NullCheck(L_3);
		il2cpp_codegen_write_field_data<int32_t, false>(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),6), il2cpp_rgctx_offset(method->rgctx_data, 3), L_4);
		U3CEveryNthU3Ed__1_1_t475A9D0830CD56A20ECDD6DC646CA1575D325518* L_5 = L_3;
		int32_t L_6 = ___2_start;
		NullCheck(L_5);
		il2cpp_codegen_write_field_data<int32_t, false>(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),8), il2cpp_rgctx_offset(method->rgctx_data, 4), L_6);
		return (RuntimeObject*)L_5;
	}
}
// Method Definition Index: 34465
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiscHelpers_GetValueOrDefault_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m6BE3E44CE3A2AA941C0ABF7D92BF398D26D64F55_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, Il2CppFullySharedGenericAny ___1_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t501FE7136F46C50DBDB5DECB446CD45DCABFE936 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const uint32_t SizeOf_TKey_t768FE04A213050B7F8A6265B87EC7BEF8BAE7EC8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t768FE04A213050B7F8A6265B87EC7BEF8BAE7EC8);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_t501FE7136F46C50DBDB5DECB446CD45DCABFE936);
	const Il2CppFullySharedGenericAny L_4 = L_3;
	const Il2CppFullySharedGenericAny L_5 = L_3;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t501FE7136F46C50DBDB5DECB446CD45DCABFE936);
	memset(V_0, 0, SizeOf_TValue_t501FE7136F46C50DBDB5DECB446CD45DCABFE936);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_t501FE7136F46C50DBDB5DECB446CD45DCABFE936);
	memset(V_1, 0, SizeOf_TValue_t501FE7136F46C50DBDB5DECB446CD45DCABFE936);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TValue_t501FE7136F46C50DBDB5DECB446CD45DCABFE936);
	memset(V_2, 0, SizeOf_TValue_t501FE7136F46C50DBDB5DECB446CD45DCABFE936);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dictionary), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_key : &___1_key));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80155));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80156));
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_TValue_t501FE7136F46C50DBDB5DECB446CD45DCABFE936);
	memset(G_B3_0, 0, SizeOf_TValue_t501FE7136F46C50DBDB5DECB446CD45DCABFE936);
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80157));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/MiscHelpers.cs:8>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80158));
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = ___0_dictionary;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_key : &___1_key), SizeOf_TKey_t768FE04A213050B7F8A6265B87EC7BEF8BAE7EC8);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80159));
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_1: *(void**)L_1), (Il2CppFullySharedGenericAny*)V_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80159));
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_TValue_t501FE7136F46C50DBDB5DECB446CD45DCABFE936);
		il2cpp_codegen_memcpy(L_3, V_1, SizeOf_TValue_t501FE7136F46C50DBDB5DECB446CD45DCABFE936);
		il2cpp_codegen_memcpy(G_B3_0, L_3, SizeOf_TValue_t501FE7136F46C50DBDB5DECB446CD45DCABFE936);
		goto IL_0018;
	}

IL_0017:
	{
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_TValue_t501FE7136F46C50DBDB5DECB446CD45DCABFE936);
		il2cpp_codegen_memcpy(G_B3_0, L_4, SizeOf_TValue_t501FE7136F46C50DBDB5DECB446CD45DCABFE936);
	}

IL_0018:
	{
		il2cpp_codegen_memcpy(V_2, G_B3_0, SizeOf_TValue_t501FE7136F46C50DBDB5DECB446CD45DCABFE936);
		goto IL_001b;
	}

IL_001b:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/MiscHelpers.cs:9>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80160));
		il2cpp_codegen_memcpy(L_5, V_2, SizeOf_TValue_t501FE7136F46C50DBDB5DECB446CD45DCABFE936);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_TValue_t501FE7136F46C50DBDB5DECB446CD45DCABFE936);
		return;
	}
}
// Method Definition Index: 34467
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MiscHelpers_IndexOf_TisIl2CppFullySharedGenericAny_m480747D935107A874AB582EC208AA23A36324ADA_fshared (RuntimeObject* ___0_enumerable, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TValue_t33870EF8C5DDB186ACE042631E643DF5617F00E4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_t33870EF8C5DDB186ACE042631E643DF5617F00E4);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t33870EF8C5DDB186ACE042631E643DF5617F00E4);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TValue_t33870EF8C5DDB186ACE042631E643DF5617F00E4);
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TValue_t33870EF8C5DDB186ACE042631E643DF5617F00E4);
	memset(V_2, 0, SizeOf_TValue_t33870EF8C5DDB186ACE042631E643DF5617F00E4);
	bool V_3 = false;
	int32_t V_4 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_enumerable), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? ___1_value : &___1_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), V_2);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80161));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80162));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80163));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/MiscHelpers.cs:30>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80164));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80165));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/MiscHelpers.cs:31>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80166));
		RuntimeObject* L_0 = ___0_enumerable;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80167));
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80167));
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0037:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80179));
					RuntimeObject* L_2 = V_1;
					if (!L_2)
					{
						goto IL_0041;
					}
				}
				{
					RuntimeObject* L_3 = V_1;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80180));
					NullCheck((RuntimeObject*)L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80180));
				}

IL_0041:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80181));
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80168));
				goto IL_002d_1;
			}

IL_000d_1:
			{
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/MiscHelpers.cs:31>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80169));
				RuntimeObject* L_4 = V_1;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80170));
				NullCheck(L_4);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 2), L_4, (Il2CppFullySharedGenericAny*)L_5);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80170));
				il2cpp_codegen_memcpy(V_2, L_5, SizeOf_TValue_t33870EF8C5DDB186ACE042631E643DF5617F00E4);
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/MiscHelpers.cs:32>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80171));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80172));
				EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_6;
				L_6 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->rgctx_data, 5));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80172));
				il2cpp_codegen_memcpy(L_7, V_2, SizeOf_TValue_t33870EF8C5DDB186ACE042631E643DF5617F00E4);
				il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? ___1_value : &___1_value), SizeOf_TValue_t33870EF8C5DDB186ACE042631E643DF5617F00E4);
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80173));
				NullCheck(L_6);
				bool L_9;
				L_9 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? L_8: *(void**)L_8));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80173));
				V_3 = L_9;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80174));
				bool L_10 = V_3;
				if (!L_10)
				{
					goto IL_0029_1;
				}
			}
			{
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/MiscHelpers.cs:33>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80175));
				int32_t L_11 = V_0;
				V_4 = L_11;
				goto IL_0047;
			}

IL_0029_1:
			{
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/MiscHelpers.cs:35>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80176));
				int32_t L_12 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
			}

IL_002d_1:
			{
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/MiscHelpers.cs:31>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80177));
				RuntimeObject* L_13 = V_1;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80178));
				NullCheck((RuntimeObject*)L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80178));
				if (L_14)
				{
					goto IL_000d_1;
				}
			}
			{
				goto IL_0042;
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

IL_0042:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/MiscHelpers.cs:36>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80182));
		V_4 = (-1);
		goto IL_0047;
	}

IL_0047:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/MiscHelpers.cs:37>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80183));
		int32_t L_15 = V_4;
		return L_15;
	}
}
// Method Definition Index: 70948
// Method Definition Index: 70948
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_Copy_TisIl2CppFullySharedGenericStruct_m515F8E41C3B91F05F6FA52FB0F173AAE072219AE_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_dst, int32_t ___2_length, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t2F8BE4233858E78501EF0B4D650CECD9A6D5D9F4_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(ModuleHandle_t2F8BE4233858E78501EF0B4D650CECD9A6D5D9F4_StaticInit);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_src), (&___1_dst), (&___2_length));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3425));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3426));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3427));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:303>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3428));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_src;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = ___1_dst;
		int32_t L_2 = ___2_length;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3429));
		CHECKED_LOCAL_INIT(ModuleHandle_t2F8BE4233858E78501EF0B4D650CECD9A6D5D9F4_StaticInit,(ModuleHandle_t2F8BE4233858E78501EF0B4D650CECD9A6D5D9F4_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ModuleHandle_Copy_TisIl2CppFullySharedGenericStruct_m0371F16C5C917BEFC98EE2543E82DB386E4E117A(L_0, 0, L_1, 0, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3429));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:304>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3430));
		return;
	}
}
// Method Definition Index: 70948
// Method Definition Index: 70948
// Method Definition Index: 70948
// Method Definition Index: 70947
// Method Definition Index: 70947
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_Copy_TisIl2CppFullySharedGenericStruct_m0371F16C5C917BEFC98EE2543E82DB386E4E117A_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, int32_t ___1_srcIndex, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___2_dst, int32_t ___3_dstIndex, int32_t ___4_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_src), (&___1_srcIndex), (&___2_dst), (&___3_dstIndex), (&___4_length));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3419));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3420));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3421));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:297>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3422));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_src;
		int32_t L_1 = ___1_srcIndex;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = ___2_dst;
		int32_t L_3 = ___3_dstIndex;
		int32_t L_4 = ___4_length;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3423));
		NativeArray_1_Copy_m8831A4576613C49F9A635455804441337A122D59(L_0, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3423));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:298>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3424));
		return;
	}
}
// Method Definition Index: 70947
// Method Definition Index: 70947
// Method Definition Index: 70947
// Method Definition Index: 70953
// Method Definition Index: 70952
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleHandle_GetEqual_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mE0B5479E1566E740847AFB1A5ECD77DEDF474984_fshared (Array_1_t6B7799491F8633D7A2A3353B59A01AAC47D82A01 ___0_values, int32_t ___1_count, Il2CppFullySharedGenericStruct ___2_check, Il2CppFullySharedGenericAny ___3_condition, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_U_tD25FB345044D3C134155EC690DA7DC459925EF3A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_tA5C02707C38A3FC7AFFEEE02D5AD9B6C21FA4692 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_tA5C02707C38A3FC7AFFEEE02D5AD9B6C21FA4692);
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_U_tD25FB345044D3C134155EC690DA7DC459925EF3A);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
	memset(V_4, 0, SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_values), (&___1_count), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_check : &___2_check), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3512));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3513));
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
	memset(G_B3_0, 0, SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
	memset(G_B2_0, 0, SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3514));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:376>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3515));
		V_0 = 0;
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:377>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3516));
		int32_t L_0 = ___1_count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3517));
		goto IL_007d;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3518));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:380>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3519));
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_1, L_2))>>1));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:381>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3520));
		V_3 = (0.0f);
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:382>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3521));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
		il2cpp_codegen_memcpy(L_3, V_4, SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_3);
		if (L_4)
		{
			il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
			goto IL_0032;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
	}
	{
		il2cpp_codegen_memcpy(L_5, G_B2_0, SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
		il2cpp_codegen_memcpy(V_4, L_5, SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
	}

IL_0032:
	{
		int32_t L_6 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3522));
		Array_1_get_Item_m41E3596F9E8D0B496073753DBB17AEFC4E770582((&___0_values), L_6, (Il2CppFullySharedGenericStruct*)L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3522));
		il2cpp_codegen_memcpy(L_8, ___2_check, SizeOf_U_tD25FB345044D3C134155EC690DA7DC459925EF3A);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3523));
		Il2CppConstrainedCallData L_10;
		Il2CppMethodPointer L_11 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B3_0, &L_10, L_9);
		InvokerFuncInvoker3< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, float* >::Invoke(L_11, L_10.method,L_10.thisPtr, L_7, L_8, (&V_3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3523));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:383>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3524));
		float L_12 = V_3;
		V_5 = (bool)((((float)L_12) == ((float)(0.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3525));
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_005d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3526));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:385>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3527));
		int32_t L_14 = V_2;
		V_6 = L_14;
		goto IL_0092;
	}

IL_005d:
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:387>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3528));
		float L_15 = V_3;
		V_7 = (bool)((((int32_t)((!(((float)L_15) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3529));
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_0076;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3530));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:389>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3531));
		int32_t L_17 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3532));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3533));
		goto IL_007c;
	}

IL_0076:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3534));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:393>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3535));
		int32_t L_18 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3536));
	}

IL_007c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3537));
	}

IL_007d:
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:378>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3538));
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		V_8 = (bool)((((int32_t)((((int32_t)L_19) > ((int32_t)L_20))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3539));
		bool L_21 = V_8;
		if (L_21)
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:396>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3540));
		V_6 = (-1);
		goto IL_0092;
	}

IL_0092:
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:397>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3541));
		int32_t L_22 = V_6;
		return L_22;
	}
}
// Method Definition Index: 70953
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleHandle_GetEqual_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mFAFD6E5C4C5239EECB66D76E8A0D0BBC50941EF2_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_values, int32_t ___1_count, Il2CppFullySharedGenericStruct ___2_check, Il2CppFullySharedGenericAny ___3_condition, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_U_t5367D96CCB13B6D8932AE1D78DE77609AD13984B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t8F71DFFB681815CAF23766214B6C948493D46548 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t8F71DFFB681815CAF23766214B6C948493D46548);
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_U_t5367D96CCB13B6D8932AE1D78DE77609AD13984B);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
	memset(V_4, 0, SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_values), (&___1_count), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_check : &___2_check), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3542));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3543));
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
	memset(G_B3_0, 0, SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
	memset(G_B2_0, 0, SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3544));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:403>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3545));
		V_0 = 0;
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:404>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3546));
		int32_t L_0 = ___1_count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3547));
		goto IL_007d;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3548));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:407>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3549));
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_1, L_2))>>1));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:408>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3550));
		V_3 = (0.0f);
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:409>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3551));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
		il2cpp_codegen_memcpy(L_3, V_4, SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_3);
		if (L_4)
		{
			il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
			goto IL_0032;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
	}
	{
		il2cpp_codegen_memcpy(L_5, G_B2_0, SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
		il2cpp_codegen_memcpy(V_4, L_5, SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
	}

IL_0032:
	{
		int32_t L_6 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3552));
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___0_values), L_6, (Il2CppFullySharedGenericStruct*)L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3552));
		il2cpp_codegen_memcpy(L_8, ___2_check, SizeOf_U_t5367D96CCB13B6D8932AE1D78DE77609AD13984B);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3553));
		Il2CppConstrainedCallData L_10;
		Il2CppMethodPointer L_11 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B3_0, &L_10, L_9);
		InvokerFuncInvoker3< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, float* >::Invoke(L_11, L_10.method,L_10.thisPtr, L_7, L_8, (&V_3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3553));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:410>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3554));
		float L_12 = V_3;
		V_5 = (bool)((((float)L_12) == ((float)(0.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3555));
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_005d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3556));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:412>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3557));
		int32_t L_14 = V_2;
		V_6 = L_14;
		goto IL_0092;
	}

IL_005d:
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:414>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3558));
		float L_15 = V_3;
		V_7 = (bool)((((int32_t)((!(((float)L_15) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3559));
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_0076;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3560));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:416>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3561));
		int32_t L_17 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3562));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3563));
		goto IL_007c;
	}

IL_0076:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3564));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:420>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3565));
		int32_t L_18 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3566));
	}

IL_007c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3567));
	}

IL_007d:
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:405>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3568));
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		V_8 = (bool)((((int32_t)((((int32_t)L_19) > ((int32_t)L_20))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3569));
		bool L_21 = V_8;
		if (L_21)
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:423>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3570));
		V_6 = (-1);
		goto IL_0092;
	}

IL_0092:
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:424>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3571));
		int32_t L_22 = V_6;
		return L_22;
	}
}
// Method Definition Index: 70953
// Method Definition Index: 70952
// Method Definition Index: 70950
// Method Definition Index: 70950
// Method Definition Index: 70950
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleHandle_GetLower_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m801F695F16052D534842AE901C48AD507EA5744A_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_values, int32_t ___1_count, Il2CppFullySharedGenericStruct ___2_check, Il2CppFullySharedGenericAny ___3_condition, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_U_t597FE175164EAA1E1243E65C38A3DFE6CA054D50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t3ADF1E2B4330C3669F6188A92B74D663E2CC24AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t3ADF1E2B4330C3669F6188A92B74D663E2CC24AE);
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_U_t597FE175164EAA1E1243E65C38A3DFE6CA054D50);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
	const Il2CppFullySharedGenericAny L_6 = L_4;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	bool V_5 = false;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
	memset(V_6, 0, SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
	bool V_7 = false;
	int32_t V_8 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_values), (&___1_count), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_check : &___2_check), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3458));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3459));
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
	memset(G_B3_0, 0, SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
	memset(G_B2_0, 0, SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3460));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:328>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3461));
		V_0 = 0;
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:329>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3462));
		int32_t L_0 = ___1_count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:330>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3463));
		int32_t L_1 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3464));
		goto IL_0064;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3465));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:333>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3466));
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_2, L_3))>>1));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:334>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3467));
		V_4 = (0.0f);
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:335>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3468));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
		il2cpp_codegen_memcpy(L_4, V_6, SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
		bool L_5 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_4);
		if (L_5)
		{
			il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
			goto IL_0037;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
	}
	{
		il2cpp_codegen_memcpy(L_6, G_B2_0, SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
		il2cpp_codegen_memcpy(V_6, L_6, SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_6, SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
	}

IL_0037:
	{
		int32_t L_7 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3469));
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___0_values), L_7, (Il2CppFullySharedGenericStruct*)L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3469));
		il2cpp_codegen_memcpy(L_9, ___2_check, SizeOf_U_t597FE175164EAA1E1243E65C38A3DFE6CA054D50);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3470));
		Il2CppConstrainedCallData L_11;
		Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B3_0, &L_11, L_10);
		bool L_13 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, float* >::Invoke(L_12, L_11.method,L_11.thisPtr, L_8, L_9, (&V_4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3470));
		V_5 = L_13;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3471));
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_005d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3472));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:337>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3473));
		int32_t L_15 = V_3;
		V_2 = L_15;
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:338>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3474));
		int32_t L_16 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3475));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3476));
		goto IL_0063;
	}

IL_005d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3477));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:342>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3478));
		int32_t L_17 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3479));
	}

IL_0063:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3480));
	}

IL_0064:
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:331>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3481));
		int32_t L_18 = V_0;
		int32_t L_19 = V_1;
		V_7 = (bool)((((int32_t)((((int32_t)L_18) > ((int32_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3482));
		bool L_20 = V_7;
		if (L_20)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:345>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3483));
		int32_t L_21 = V_2;
		V_8 = L_21;
		goto IL_0076;
	}

IL_0076:
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:346>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3484));
		int32_t L_22 = V_8;
		return L_22;
	}
}
// Method Definition Index: 70951
// Method Definition Index: 70951
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleHandle_GetUpper_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m126533B957C561D9061C0C11D91F3E1133BE0134_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_values, int32_t ___1_count, Il2CppFullySharedGenericStruct ___2_check, Il2CppFullySharedGenericAny ___3_condition, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_U_tBFD60B805E7DE212EFBB8FBDB8422D06BEA6B9CC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_tB42A37CEC8DFB947E2F6757BA1E0D9E1F317352E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_tB42A37CEC8DFB947E2F6757BA1E0D9E1F317352E);
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_U_tBFD60B805E7DE212EFBB8FBDB8422D06BEA6B9CC);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
	const Il2CppFullySharedGenericAny L_6 = L_4;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	bool V_5 = false;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
	memset(V_6, 0, SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
	bool V_7 = false;
	int32_t V_8 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_values), (&___1_count), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_check : &___2_check), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3485));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3486));
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
	memset(G_B3_0, 0, SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
	memset(G_B2_0, 0, SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3487));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:352>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3488));
		V_0 = 0;
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:353>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3489));
		int32_t L_0 = ___1_count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:354>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3490));
		int32_t L_1 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3491));
		goto IL_0064;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3492));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:357>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3493));
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_2, L_3))>>1));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:358>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3494));
		V_4 = (0.0f);
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:359>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3495));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
		il2cpp_codegen_memcpy(L_4, V_6, SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
		bool L_5 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_4);
		if (L_5)
		{
			il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
			goto IL_0037;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
	}
	{
		il2cpp_codegen_memcpy(L_6, G_B2_0, SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
		il2cpp_codegen_memcpy(V_6, L_6, SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_6, SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
	}

IL_0037:
	{
		int32_t L_7 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3496));
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___0_values), L_7, (Il2CppFullySharedGenericStruct*)L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3496));
		il2cpp_codegen_memcpy(L_9, ___2_check, SizeOf_U_tBFD60B805E7DE212EFBB8FBDB8422D06BEA6B9CC);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3497));
		Il2CppConstrainedCallData L_11;
		Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B3_0, &L_11, L_10);
		bool L_13 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, float* >::Invoke(L_12, L_11.method,L_11.thisPtr, L_8, L_9, (&V_4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3497));
		V_5 = L_13;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3498));
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_005d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3499));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:361>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3500));
		int32_t L_15 = V_3;
		V_2 = L_15;
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:362>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3501));
		int32_t L_16 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3502));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3503));
		goto IL_0063;
	}

IL_005d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3504));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:366>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3505));
		int32_t L_17 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3506));
	}

IL_0063:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3507));
	}

IL_0064:
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:355>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3508));
		int32_t L_18 = V_0;
		int32_t L_19 = V_1;
		V_7 = (bool)((((int32_t)((((int32_t)L_18) > ((int32_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3509));
		bool L_20 = V_7;
		if (L_20)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:369>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3510));
		int32_t L_21 = V_2;
		V_8 = L_21;
		goto IL_0076;
	}

IL_0076:
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:370>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3511));
		int32_t L_22 = V_8;
		return L_22;
	}
}
// Method Definition Index: 70949
// Method Definition Index: 70949
// Method Definition Index: 70949
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_InsertionSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m5F9C41F661EFDE4520658576B627EF7645AFAC2B_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tBF87611215034719F22E4011A6C7698E03198A33 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_21 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_tBF87611215034719F22E4011A6C7698E03198A33);
	const Il2CppFullySharedGenericStruct L_9 = L_4;
	const Il2CppFullySharedGenericStruct L_17 = L_4;
	const Il2CppFullySharedGenericStruct L_28 = L_4;
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_tBF87611215034719F22E4011A6C7698E03198A33);
	const Il2CppFullySharedGenericStruct L_20 = L_10;
	const Il2CppFullySharedGenericStruct L_29 = L_10;
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
	const Il2CppFullySharedGenericAny L_16 = L_14;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_tBF87611215034719F22E4011A6C7698E03198A33);
	memset(V_2, 0, SizeOf_T_tBF87611215034719F22E4011A6C7698E03198A33);
	bool V_3 = false;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
	memset(V_4, 0, SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
	bool V_5 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_lo), (&___2_hi), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), V_2);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3431));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3432));
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
	memset(G_B6_0, 0, SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
	Il2CppFullySharedGenericAny G_B5_0 = alloca(SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
	memset(G_B5_0, 0, SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
	int32_t G_B8_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3433));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:311>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3434));
		int32_t L_0 = ___1_lo;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3435));
		goto IL_0078;
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3436));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:313>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3437));
		int32_t L_1 = V_0;
		V_1 = L_1;
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:314>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3438));
		void* L_2 = ___0_array;
		int32_t L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3439));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), (Il2CppFullySharedGenericStruct*)L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3439));
		il2cpp_codegen_memcpy(V_2, L_4, SizeOf_T_tBF87611215034719F22E4011A6C7698E03198A33);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3440));
		goto IL_002b;
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3441));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:317>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3442));
		void* L_5 = ___0_array;
		int32_t L_6 = V_1;
		void* L_7 = ___0_array;
		int32_t L_8 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3443));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_7, L_8, (Il2CppFullySharedGenericStruct*)L_9, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3443));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3444));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), il2cpp_codegen_memcpy(L_10, L_9, SizeOf_T_tBF87611215034719F22E4011A6C7698E03198A33), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3444));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:318>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3445));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3446));
	}

IL_002b:
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:315>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3447));
		int32_t L_12 = V_1;
		int32_t L_13 = ___1_lo;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0063;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
		il2cpp_codegen_memcpy(L_14, V_4, SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
		bool L_15 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 3), L_14);
		if (L_15)
		{
			il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
			goto IL_004b;
		}
		il2cpp_codegen_memcpy(G_B5_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
	}
	{
		il2cpp_codegen_memcpy(L_16, G_B5_0, SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
		il2cpp_codegen_memcpy(V_4, L_16, SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
	}

IL_004b:
	{
		il2cpp_codegen_memcpy(L_17, V_2, SizeOf_T_tBF87611215034719F22E4011A6C7698E03198A33);
		void* L_18 = ___0_array;
		int32_t L_19 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3448));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_18, L_19, (Il2CppFullySharedGenericStruct*)L_20, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3448));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3449));
		Il2CppConstrainedCallData L_22;
		Il2CppMethodPointer L_23 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B6_0, &L_22, L_21);
		int32_t L_24 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_23, L_22.method,L_22.thisPtr, L_17, L_20);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3449));
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
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3450));
		bool L_25 = V_3;
		if (L_25)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:320>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3451));
		void* L_26 = ___0_array;
		int32_t L_27 = V_1;
		il2cpp_codegen_memcpy(L_28, V_2, SizeOf_T_tBF87611215034719F22E4011A6C7698E03198A33);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3452));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_26, ((int32_t)il2cpp_codegen_add(L_27, 1)), il2cpp_codegen_memcpy(L_29, L_28, SizeOf_T_tBF87611215034719F22E4011A6C7698E03198A33), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3452));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3453));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:311>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3454));
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0078:
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:311>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3455));
		int32_t L_31 = V_0;
		int32_t L_32 = ___2_hi;
		V_5 = (bool)((((int32_t)L_31) < ((int32_t)L_32))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3456));
		bool L_33 = V_5;
		if (L_33)
		{
			goto IL_0005;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UTess2D/UTess.cs:322>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 3457));
		return;
	}
}
// Method Definition Index: 70949
// Method Definition Index: 70949
// Method Definition Index: 70949
// Method Definition Index: 70949
// Method Definition Index: 70949
// Method Definition Index: 70949
// Method Definition Index: 71998
// Method Definition Index: 71998
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_Copy_TisIl2CppFullySharedGenericStruct_m9E989F4E34D29B0E8846A7C48DD9E4D0B034C89F_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_dst, int32_t ___2_length, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t5D0F96F84469E2969C2509C1965812B79964CC83_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(ModuleHandle_t5D0F96F84469E2969C2509C1965812B79964CC83_StaticInit);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_src), (&___1_dst), (&___2_length));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2133));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2134));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:304>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2135));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_src;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = ___1_dst;
		int32_t L_2 = ___2_length;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2136));
		CHECKED_LOCAL_INIT(ModuleHandle_t5D0F96F84469E2969C2509C1965812B79964CC83_StaticInit,(ModuleHandle_t5D0F96F84469E2969C2509C1965812B79964CC83_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ModuleHandle_Copy_TisIl2CppFullySharedGenericStruct_m7A047D0293849EC8C78740E2DE5E8574136F188B(L_0, 0, L_1, 0, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2136));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:305>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2137));
		return;
	}
}
// Method Definition Index: 71998
// Method Definition Index: 71998
// Method Definition Index: 71998
// Method Definition Index: 71997
// Method Definition Index: 71997
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_Copy_TisIl2CppFullySharedGenericStruct_m7A047D0293849EC8C78740E2DE5E8574136F188B_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, int32_t ___1_srcIndex, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___2_dst, int32_t ___3_dstIndex, int32_t ___4_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_src), (&___1_srcIndex), (&___2_dst), (&___3_dstIndex), (&___4_length));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2128));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2129));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:298>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2130));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_src;
		int32_t L_1 = ___1_srcIndex;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = ___2_dst;
		int32_t L_3 = ___3_dstIndex;
		int32_t L_4 = ___4_length;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2131));
		NativeArray_1_Copy_m8831A4576613C49F9A635455804441337A122D59(L_0, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2131));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:299>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2132));
		return;
	}
}
// Method Definition Index: 71997
// Method Definition Index: 71997
// Method Definition Index: 71997
// Method Definition Index: 72003
// Method Definition Index: 72002
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleHandle_GetEqual_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m0AFCD1C3DFDA88644B0A24A4F84CE80148149329_fshared (Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D ___0_values, int32_t ___1_count, Il2CppFullySharedGenericStruct ___2_check, Il2CppFullySharedGenericAny ___3_condition, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_U_t532A183ABA8882294AB78BADBE53CDC90E6C7692 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t3D5BC06BCE142C9A3188EE5FF8CCD28645281C9B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t3D5BC06BCE142C9A3188EE5FF8CCD28645281C9B);
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_U_t532A183ABA8882294AB78BADBE53CDC90E6C7692);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
	memset(V_4, 0, SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_values), (&___1_count), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_check : &___2_check), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2192));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2193));
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
	memset(G_B3_0, 0, SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
	memset(G_B2_0, 0, SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:377>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2194));
		V_0 = 0;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:378>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2195));
		int32_t L_0 = ___1_count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2196));
		goto IL_0063;
	}

IL_0008:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:381>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2197));
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_1, L_2))>>1));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:382>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2198));
		V_3 = (0.0f);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:383>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2199));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
		il2cpp_codegen_memcpy(L_3, V_4, SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_3);
		if (L_4)
		{
			il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
			goto IL_0030;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
	}
	{
		il2cpp_codegen_memcpy(L_5, G_B2_0, SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
		il2cpp_codegen_memcpy(V_4, L_5, SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
	}

IL_0030:
	{
		int32_t L_6 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2200));
		Array_1_get_Item_m4B6EECC3E6603139E5A91FED7AA091CD329A6029((&___0_values), L_6, (Il2CppFullySharedGenericStruct*)L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2200));
		il2cpp_codegen_memcpy(L_8, ___2_check, SizeOf_U_t532A183ABA8882294AB78BADBE53CDC90E6C7692);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2201));
		Il2CppConstrainedCallData L_10;
		Il2CppMethodPointer L_11 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B3_0, &L_10, L_9);
		InvokerFuncInvoker3< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, float* >::Invoke(L_11, L_10.method,L_10.thisPtr, L_7, L_8, (&V_3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2201));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:384>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2202));
		float L_12 = V_3;
		if ((!(((float)L_12) == ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:386>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2203));
		int32_t L_13 = V_2;
		return L_13;
	}

IL_0051:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:388>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2204));
		float L_14 = V_3;
		if ((!(((float)L_14) <= ((float)(0.0f)))))
		{
			goto IL_005f;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:390>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2205));
		int32_t L_15 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2206));
		goto IL_0063;
	}

IL_005f:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:394>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2207));
		int32_t L_16 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0063:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:379>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2208));
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_0008;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:397>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2209));
		return (-1);
	}
}
// Method Definition Index: 72003
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleHandle_GetEqual_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m4D731F3BEC15E6AFC3BBFD4C0C6DF8BDB7028508_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_values, int32_t ___1_count, Il2CppFullySharedGenericStruct ___2_check, Il2CppFullySharedGenericAny ___3_condition, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_U_t1F35F38E09D75A9446575DAAC6E31B9BFF068721 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_tBB4469EA5E65B2097D4A0EB6C78D4E2C6F0D7C11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_tBB4469EA5E65B2097D4A0EB6C78D4E2C6F0D7C11);
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_U_t1F35F38E09D75A9446575DAAC6E31B9BFF068721);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
	memset(V_4, 0, SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_values), (&___1_count), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_check : &___2_check), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2210));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2211));
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
	memset(G_B3_0, 0, SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
	memset(G_B2_0, 0, SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:404>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2212));
		V_0 = 0;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:405>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2213));
		int32_t L_0 = ___1_count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2214));
		goto IL_0063;
	}

IL_0008:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:408>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2215));
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_1, L_2))>>1));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:409>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2216));
		V_3 = (0.0f);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:410>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2217));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
		il2cpp_codegen_memcpy(L_3, V_4, SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_3);
		if (L_4)
		{
			il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
			goto IL_0030;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
	}
	{
		il2cpp_codegen_memcpy(L_5, G_B2_0, SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
		il2cpp_codegen_memcpy(V_4, L_5, SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
	}

IL_0030:
	{
		int32_t L_6 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2218));
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___0_values), L_6, (Il2CppFullySharedGenericStruct*)L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2218));
		il2cpp_codegen_memcpy(L_8, ___2_check, SizeOf_U_t1F35F38E09D75A9446575DAAC6E31B9BFF068721);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2219));
		Il2CppConstrainedCallData L_10;
		Il2CppMethodPointer L_11 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B3_0, &L_10, L_9);
		InvokerFuncInvoker3< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, float* >::Invoke(L_11, L_10.method,L_10.thisPtr, L_7, L_8, (&V_3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2219));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:411>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2220));
		float L_12 = V_3;
		if ((!(((float)L_12) == ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:413>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2221));
		int32_t L_13 = V_2;
		return L_13;
	}

IL_0051:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:415>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2222));
		float L_14 = V_3;
		if ((!(((float)L_14) <= ((float)(0.0f)))))
		{
			goto IL_005f;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:417>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2223));
		int32_t L_15 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2224));
		goto IL_0063;
	}

IL_005f:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:421>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2225));
		int32_t L_16 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0063:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:406>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2226));
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_0008;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:424>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2227));
		return (-1);
	}
}
// Method Definition Index: 72003
// Method Definition Index: 72002
// Method Definition Index: 72000
// Method Definition Index: 72000
// Method Definition Index: 72000
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleHandle_GetLower_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m888CD6BDE4F22B079187EA057E0A886397072D33_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_values, int32_t ___1_count, Il2CppFullySharedGenericStruct ___2_check, Il2CppFullySharedGenericAny ___3_condition, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_U_tC7C9CA0C31E3482DE5CC2B4BE7DF5F35C2F771DA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_tA24D4282F485463CDC3E4135AB2EEA53FF45A028 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_tA24D4282F485463CDC3E4135AB2EEA53FF45A028);
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_U_tC7C9CA0C31E3482DE5CC2B4BE7DF5F35C2F771DA);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
	const Il2CppFullySharedGenericAny L_6 = L_4;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
	memset(V_5, 0, SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_values), (&___1_count), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_check : &___2_check), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2158));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2159));
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
	memset(G_B3_0, 0, SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
	memset(G_B2_0, 0, SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:329>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2160));
		V_0 = 0;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:330>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2161));
		int32_t L_0 = ___1_count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:331>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2162));
		int32_t L_1 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2163));
		goto IL_0059;
	}

IL_000c:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:334>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2164));
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_2, L_3))>>1));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:335>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2165));
		V_4 = (0.0f);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:336>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2166));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
		il2cpp_codegen_memcpy(L_4, V_5, SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
		bool L_5 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_4);
		if (L_5)
		{
			il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
			goto IL_0035;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
	}
	{
		il2cpp_codegen_memcpy(L_6, G_B2_0, SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
		il2cpp_codegen_memcpy(V_5, L_6, SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_5, SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
	}

IL_0035:
	{
		int32_t L_7 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2167));
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___0_values), L_7, (Il2CppFullySharedGenericStruct*)L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2167));
		il2cpp_codegen_memcpy(L_9, ___2_check, SizeOf_U_tC7C9CA0C31E3482DE5CC2B4BE7DF5F35C2F771DA);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2168));
		Il2CppConstrainedCallData L_11;
		Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B3_0, &L_11, L_10);
		bool L_13 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, float* >::Invoke(L_12, L_11.method,L_11.thisPtr, L_8, L_9, (&V_4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2168));
		if (!L_13)
		{
			goto IL_0055;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:338>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2169));
		int32_t L_14 = V_3;
		V_2 = L_14;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:339>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2170));
		int32_t L_15 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2171));
		goto IL_0059;
	}

IL_0055:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:343>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2172));
		int32_t L_16 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0059:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:332>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2173));
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_000c;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:346>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2174));
		int32_t L_19 = V_2;
		return L_19;
	}
}
// Method Definition Index: 72001
// Method Definition Index: 72001
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleHandle_GetUpper_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mEB7827D3F7EDD61E36F1BF914052C25D053A2FFD_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_values, int32_t ___1_count, Il2CppFullySharedGenericStruct ___2_check, Il2CppFullySharedGenericAny ___3_condition, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_U_tD8AB7169C3CE8B9DA2FA2B0EA582ED38F377277E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t3B7C711A489F15F1EE3770D3DF9E18239D2E81CA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t3B7C711A489F15F1EE3770D3DF9E18239D2E81CA);
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_U_tD8AB7169C3CE8B9DA2FA2B0EA582ED38F377277E);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
	const Il2CppFullySharedGenericAny L_6 = L_4;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
	memset(V_5, 0, SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_values), (&___1_count), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_check : &___2_check), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2175));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2176));
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
	memset(G_B3_0, 0, SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
	memset(G_B2_0, 0, SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:353>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2177));
		V_0 = 0;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:354>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2178));
		int32_t L_0 = ___1_count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:355>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2179));
		int32_t L_1 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2180));
		goto IL_0059;
	}

IL_000c:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:358>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2181));
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_2, L_3))>>1));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:359>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2182));
		V_4 = (0.0f);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:360>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2183));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
		il2cpp_codegen_memcpy(L_4, V_5, SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
		bool L_5 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_4);
		if (L_5)
		{
			il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
			goto IL_0035;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
	}
	{
		il2cpp_codegen_memcpy(L_6, G_B2_0, SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
		il2cpp_codegen_memcpy(V_5, L_6, SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_5, SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
	}

IL_0035:
	{
		int32_t L_7 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2184));
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___0_values), L_7, (Il2CppFullySharedGenericStruct*)L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2184));
		il2cpp_codegen_memcpy(L_9, ___2_check, SizeOf_U_tD8AB7169C3CE8B9DA2FA2B0EA582ED38F377277E);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2185));
		Il2CppConstrainedCallData L_11;
		Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B3_0, &L_11, L_10);
		bool L_13 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, float* >::Invoke(L_12, L_11.method,L_11.thisPtr, L_8, L_9, (&V_4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2185));
		if (!L_13)
		{
			goto IL_0055;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:362>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2186));
		int32_t L_14 = V_3;
		V_2 = L_14;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:363>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2187));
		int32_t L_15 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2188));
		goto IL_0059;
	}

IL_0055:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:367>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2189));
		int32_t L_16 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0059:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:356>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2190));
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_000c;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:370>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2191));
		int32_t L_19 = V_2;
		return L_19;
	}
}
// Method Definition Index: 71999
// Method Definition Index: 71999
// Method Definition Index: 71999
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_InsertionSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mCF05B110F997C8F946588A53E7CAC56D6777802A_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tB57DF0CEA7A14B4FC7885617AAF5C7A1E252AC69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_21 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_tB57DF0CEA7A14B4FC7885617AAF5C7A1E252AC69);
	const Il2CppFullySharedGenericStruct L_9 = L_4;
	const Il2CppFullySharedGenericStruct L_17 = L_4;
	const Il2CppFullySharedGenericStruct L_27 = L_4;
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_tB57DF0CEA7A14B4FC7885617AAF5C7A1E252AC69);
	const Il2CppFullySharedGenericStruct L_20 = L_10;
	const Il2CppFullySharedGenericStruct L_28 = L_10;
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
	const Il2CppFullySharedGenericAny L_16 = L_14;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_tB57DF0CEA7A14B4FC7885617AAF5C7A1E252AC69);
	memset(V_2, 0, SizeOf_T_tB57DF0CEA7A14B4FC7885617AAF5C7A1E252AC69);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
	memset(V_3, 0, SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_lo), (&___2_hi), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), V_2);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2138));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2139));
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
	memset(G_B6_0, 0, SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
	Il2CppFullySharedGenericAny G_B5_0 = alloca(SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
	memset(G_B5_0, 0, SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:312>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2140));
		int32_t L_0 = ___1_lo;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2141));
		goto IL_0068;
	}

IL_0004:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:314>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2142));
		int32_t L_1 = V_0;
		V_1 = L_1;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:315>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2143));
		void* L_2 = ___0_array;
		int32_t L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2144));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), (Il2CppFullySharedGenericStruct*)L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2144));
		il2cpp_codegen_memcpy(V_2, L_4, SizeOf_T_tB57DF0CEA7A14B4FC7885617AAF5C7A1E252AC69);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2145));
		goto IL_0026;
	}

IL_0012:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:318>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2146));
		void* L_5 = ___0_array;
		int32_t L_6 = V_1;
		void* L_7 = ___0_array;
		int32_t L_8 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2147));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_7, L_8, (Il2CppFullySharedGenericStruct*)L_9, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2147));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2148));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), il2cpp_codegen_memcpy(L_10, L_9, SizeOf_T_tB57DF0CEA7A14B4FC7885617AAF5C7A1E252AC69), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2148));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:319>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2149));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_0026:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:316>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2150));
		int32_t L_12 = V_1;
		int32_t L_13 = ___1_lo;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
		il2cpp_codegen_memcpy(L_14, V_3, SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
		bool L_15 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 3), L_14);
		if (L_15)
		{
			il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
			goto IL_0044;
		}
		il2cpp_codegen_memcpy(G_B5_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
	}
	{
		il2cpp_codegen_memcpy(L_16, G_B5_0, SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
		il2cpp_codegen_memcpy(V_3, L_16, SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
	}

IL_0044:
	{
		il2cpp_codegen_memcpy(L_17, V_2, SizeOf_T_tB57DF0CEA7A14B4FC7885617AAF5C7A1E252AC69);
		void* L_18 = ___0_array;
		int32_t L_19 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2151));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_18, L_19, (Il2CppFullySharedGenericStruct*)L_20, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2151));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2152));
		Il2CppConstrainedCallData L_22;
		Il2CppMethodPointer L_23 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B6_0, &L_22, L_21);
		int32_t L_24 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_23, L_22.method,L_22.thisPtr, L_17, L_20);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2152));
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}

IL_005a:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:321>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2153));
		void* L_25 = ___0_array;
		int32_t L_26 = V_1;
		il2cpp_codegen_memcpy(L_27, V_2, SizeOf_T_tB57DF0CEA7A14B4FC7885617AAF5C7A1E252AC69);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2154));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_25, ((int32_t)il2cpp_codegen_add(L_26, 1)), il2cpp_codegen_memcpy(L_28, L_27, SizeOf_T_tB57DF0CEA7A14B4FC7885617AAF5C7A1E252AC69), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2154));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:312>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2155));
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0068:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:312>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2156));
		int32_t L_30 = V_0;
		int32_t L_31 = ___2_hi;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0004;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/U2DRuntime/Managed/UTess2D/UTess.cs:323>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_U2DRuntimeModule + 2157));
		return;
	}
}
// Method Definition Index: 71999
// Method Definition Index: 71999
// Method Definition Index: 71999
// Method Definition Index: 71999
// Method Definition Index: 71999
// Method Definition Index: 12108
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* MonoLinqHelper_ToArray_TisIl2CppFullySharedGenericAny_m330ED1D4140E8C458BB4BB6BD9411C6B71911D0F_fshared (RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_source;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = EnumerableHelpers_ToArray_TisIl2CppFullySharedGenericAny_mC640FA20C2979C79E0D09F20367FD4A27166D3A5(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// Method Definition Index: 14906
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventsHelper_SendEnterLeave_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m2C2CEF83ACD49E9733858D32A2E85683C5179C38_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_previousTopElementUnderMouse, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___1_currentTopElementUnderMouse, RuntimeObject* ___2_triggerEvent, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_mousePosition, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_StaticInit);
	int32_t V_0 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_1 = NULL;
	int32_t V_2 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_3 = NULL;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* V_4 = NULL;
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Il2CppSharedGenericObject* V_6 = NULL;
	Il2CppSharedGenericObject* V_7 = NULL;
	int32_t V_8 = 0;
	Il2CppSharedGenericObject* V_9 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_previousTopElementUnderMouse), (&___1_currentTopElementUnderMouse), (&___2_triggerEvent), (&___3_mousePosition));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_6), (&V_7), (&V_8), (&V_9));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27211));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27212));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:10>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27213));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_previousTopElementUnderMouse;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___0_previousTopElementUnderMouse;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27214));
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27214));
		if (L_2)
		{
			goto IL_000e;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:14>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27215));
		___0_previousTopElementUnderMouse = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)NULL;
	}

IL_000e:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:21>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27216));
		V_0 = 0;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:22>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27217));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_3 = ___0_previousTopElementUnderMouse;
		V_1 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27218));
		goto IL_0028;
	}

IL_0014:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:25>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27219));
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:26>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27220));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_5 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27221));
		NullCheck(L_5);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_6;
		L_6 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27221));
		V_5 = L_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27222));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7;
		L_7 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_5), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27222));
		V_1 = L_7;
	}

IL_0028:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:23>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27223));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8 = V_1;
		if (L_8)
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:29>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27224));
		V_2 = 0;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:30>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27225));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_9 = ___1_currentTopElementUnderMouse;
		V_3 = L_9;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27226));
		goto IL_0045;
	}

IL_0031:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:33>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27227));
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:34>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27228));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_11 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27229));
		NullCheck(L_11);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_12;
		L_12 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27229));
		V_5 = L_12;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27230));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13;
		L_13 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_5), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27230));
		V_3 = L_13;
	}

IL_0045:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:31>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27231));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_14 = V_3;
		if (L_14)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:37>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27232));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = ___0_previousTopElementUnderMouse;
		V_1 = L_15;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:38>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27233));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_16 = ___1_currentTopElementUnderMouse;
		V_3 = L_16;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27234));
		goto IL_009d;
	}

IL_004e:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:42>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27235));
		RuntimeObject* L_17 = ___2_triggerEvent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___3_mousePosition;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27236));
		Il2CppSharedGenericObject* L_19;
		L_19 = MouseEventBase_1_GetPooled_m84A60BC498C8DF00411A02A28D9547715B2E87C1(L_17, L_18, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27236));
		V_6 = L_19;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0073:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27242));
					Il2CppSharedGenericObject* L_20 = V_6;
					if (!L_20)
					{
						goto IL_0088;
					}
				}
				{
					Il2CppSharedGenericObject* L_21 = V_6;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27243));
					NullCheck((RuntimeObject*)L_21);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_21);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27243));
				}

IL_0088:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27244));
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:44>
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27237));
			Il2CppSharedGenericObject* L_22 = V_6;
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_23 = V_1;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27238));
			NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_22);
			EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_22, L_23, NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27238));
			//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:45>
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27239));
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_24 = V_1;
			Il2CppSharedGenericObject* L_25 = V_6;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27240));
			NullCheck(L_24);
			VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(5, L_24, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_25);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27240));
			//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:46>
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27241));
			goto IL_0089;
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

IL_0089:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:48>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27245));
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:49>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27246));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_27 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27247));
		NullCheck(L_27);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_28;
		L_28 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_27, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27247));
		V_5 = L_28;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27248));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_29;
		L_29 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_5), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27248));
		V_1 = L_29;
	}

IL_009d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:40>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27249));
		int32_t L_30 = V_0;
		int32_t L_31 = V_2;
		if ((((int32_t)L_30) > ((int32_t)L_31)))
		{
			goto IL_004e;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:54>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27250));
		int32_t L_32 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27251));
		CHECKED_LOCAL_INIT(VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_StaticInit,(VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_33;
		L_33 = VisualElementListPool_Get_m99F3D55FC85A740A48A062146D40D59F50107CC2(L_32, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27251));
		V_4 = L_33;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27252));
		goto IL_00c7;
	}

IL_00ab:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:58>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27253));
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_34 = V_4;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_35 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27254));
		NullCheck(L_34);
		List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_inline(L_34, L_35, List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27254));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:60>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27255));
		int32_t L_36 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:61>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27256));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_37 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27257));
		NullCheck(L_37);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_38;
		L_38 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_37, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27257));
		V_5 = L_38;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27258));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_39;
		L_39 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_5), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27258));
		V_3 = L_39;
	}

IL_00c7:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:56>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27259));
		int32_t L_40 = V_2;
		int32_t L_41 = V_0;
		if ((((int32_t)L_40) > ((int32_t)L_41)))
		{
			goto IL_00ab;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27260));
		goto IL_0130;
	}

IL_00cd:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:67>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27261));
		RuntimeObject* L_42 = ___2_triggerEvent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = ___3_mousePosition;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27262));
		Il2CppSharedGenericObject* L_44;
		L_44 = MouseEventBase_1_GetPooled_m84A60BC498C8DF00411A02A28D9547715B2E87C1(L_42, L_43, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27262));
		V_7 = L_44;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f2:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27268));
					Il2CppSharedGenericObject* L_45 = V_7;
					if (!L_45)
					{
						goto IL_0107;
					}
				}
				{
					Il2CppSharedGenericObject* L_46 = V_7;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27269));
					NullCheck((RuntimeObject*)L_46);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27269));
				}

IL_0107:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27270));
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 1);
			//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:69>
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27263));
			Il2CppSharedGenericObject* L_47 = V_7;
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_48 = V_1;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27264));
			NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_47);
			EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_47, L_48, NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27264));
			//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:70>
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27265));
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_49 = V_1;
			Il2CppSharedGenericObject* L_50 = V_7;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27266));
			NullCheck(L_49);
			VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(5, L_49, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_50);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27266));
			//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:71>
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27267));
			goto IL_0108;
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

IL_0108:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:73>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27271));
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_51 = V_4;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_52 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27272));
		NullCheck(L_51);
		List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_inline(L_51, L_52, List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27272));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:75>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27273));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_53 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27274));
		NullCheck(L_53);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_54;
		L_54 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_53, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27274));
		V_5 = L_54;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27275));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_55;
		L_55 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_5), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27275));
		V_1 = L_55;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:76>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27276));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_56 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27277));
		NullCheck(L_56);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_57;
		L_57 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_56, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27277));
		V_5 = L_57;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27278));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_58;
		L_58 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_5), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27278));
		V_3 = L_58;
	}

IL_0130:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:65>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27279));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_59 = V_1;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_60 = V_3;
		if ((!(((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_59) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_60))))
		{
			goto IL_00cd;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:79>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27280));
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_61 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27281));
		NullCheck(L_61);
		int32_t L_62;
		L_62 = List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_inline(L_61, List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27281));
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_62, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27282));
		goto IL_0192;
	}

IL_0141:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:81>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27283));
		RuntimeObject* L_63 = ___2_triggerEvent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64 = ___3_mousePosition;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27284));
		Il2CppSharedGenericObject* L_65;
		L_65 = MouseEventBase_1_GetPooled_m84A60BC498C8DF00411A02A28D9547715B2E87C1(L_63, L_64, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27284));
		V_9 = L_65;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0176:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27292));
					Il2CppSharedGenericObject* L_66 = V_9;
					if (!L_66)
					{
						goto IL_018b;
					}
				}
				{
					Il2CppSharedGenericObject* L_67 = V_9;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27293));
					NullCheck((RuntimeObject*)L_67);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_67);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27293));
				}

IL_018b:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27294));
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 2);
			//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:83>
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27285));
			Il2CppSharedGenericObject* L_68 = V_9;
			List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_69 = V_4;
			int32_t L_70 = V_8;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27286));
			NullCheck(L_69);
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_71;
			L_71 = List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092(L_69, L_70, List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27286));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27287));
			NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_68);
			EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_68, L_71, NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27287));
			//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:84>
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27288));
			List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_72 = V_4;
			int32_t L_73 = V_8;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27289));
			NullCheck(L_72);
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_74;
			L_74 = List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092(L_72, L_73, List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27289));
			Il2CppSharedGenericObject* L_75 = V_9;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27290));
			NullCheck(L_74);
			VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(5, L_74, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_75);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27290));
			//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:85>
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27291));
			goto IL_018c;
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

IL_018c:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:79>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27295));
		int32_t L_76 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_76, 1));
	}

IL_0192:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:79>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27296));
		int32_t L_77 = V_8;
		if ((((int32_t)L_77) >= ((int32_t)0)))
		{
			goto IL_0141;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:88>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27297));
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_78 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27298));
		CHECKED_LOCAL_INIT(VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_StaticInit,(VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		VisualElementListPool_Release_mAF4ED38CC4F9A6E58B06F4B0BD13611F7DECBCFA(L_78, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27298));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEventsHelper.cs:89>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 27299));
		return;
	}
}
// Method Definition Index: 34510
// Method Definition Index: 34510
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamedValue_ApplyAllToObject_TisIl2CppFullySharedGenericAny_m914DC22F3FE10B6CD98724326D297ED5157900D2_fshared (RuntimeObject* ___0_instance, Il2CppFullySharedGenericAny ___1_parameters, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t74105E6C32CA7AC4F4202BB870BF99B1C95BA2DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_0 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	RuntimeObject* V_0 = NULL;
	NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_instance), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_parameters : &___1_parameters));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80633));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80634));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80635));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80636));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/NamedValue.cs:188>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80637));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80638));
		Il2CppConstrainedCallData L_1;
		Il2CppMethodPointer L_2 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 1), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_parameters : &___1_parameters), &L_1, L_0);
		typedef RuntimeObject* ( *func_L_3)(void*,const RuntimeMethod*);
		RuntimeObject* L_4 = ((func_L_3)L_2)(L_1.thisPtr,L_1.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80638));
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80646));
					RuntimeObject* L_5 = V_0;
					if (!L_5)
					{
						goto IL_0036;
					}
				}
				{
					RuntimeObject* L_6 = V_0;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80647));
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80647));
				}

IL_0036:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80648));
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80639));
				goto IL_0022_1;
			}

IL_0012_1:
			{
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/NamedValue.cs:188>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80640));
				RuntimeObject* L_7 = V_0;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80641));
				NullCheck(L_7);
				NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_8;
				L_8 = InterfaceFuncInvoker0< NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED >::Invoke(0, IEnumerator_1_t74105E6C32CA7AC4F4202BB870BF99B1C95BA2DE_il2cpp_TypeInfo_var, L_7);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80641));
				V_1 = L_8;
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/NamedValue.cs:189>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80642));
				RuntimeObject* L_9 = ___0_instance;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80643));
				NamedValue_ApplyToObject_m9B5513EAC952611D46852EA28EEA151A1D870DBD((&V_1), L_9, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80643));
			}

IL_0022_1:
			{
				//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/NamedValue.cs:188>
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80644));
				RuntimeObject* L_10 = V_0;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80645));
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80645));
				if (L_11)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_0037;
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

IL_0037:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/NamedValue.cs:190>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80649));
		return;
	}
}
// Method Definition Index: 34499
// Method Definition Index: 34499
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED NamedValue_From_TisIl2CppFullySharedGenericStruct_mB29A08C1F2567409A0811DC97F0A6A33F6460304_fshared (String_t* ___0_name, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tBEE87988D9673B884AFC946F497229F4532538EB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TValue_tBEE87988D9673B884AFC946F497229F4532538EB);
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TValue_tBEE87988D9673B884AFC946F497229F4532538EB);
	NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED V_0;
	memset((&V_0), 0, sizeof(V_0));
	NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_name), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80432));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80433));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80434));
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/NamedValue.cs:38>
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/NamedValue.cs:39>
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/NamedValue.cs:40>
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/NamedValue.cs:41>
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/NamedValue.cs:42>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80435));
		il2cpp_codegen_initobj((&V_0), sizeof(NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED));
		String_t* L_0 = ___0_name;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80436));
		NamedValue_set_name_mCF3BCACF7F87CF0C64AB3E4547BA5876ADF1940C_inline((&V_0), L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80436));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_TValue_tBEE87988D9673B884AFC946F497229F4532538EB);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80437));
		PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 L_3;
		L_3 = PrimitiveValue_From_TisIl2CppFullySharedGenericStruct_m6846A493CC72CBD82D945883B6E21C3D2A6A18F2(il2cpp_codegen_memcpy(L_2, L_1, SizeOf_TValue_tBEE87988D9673B884AFC946F497229F4532538EB), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80437));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80438));
		NamedValue_set_value_mD96CEA0EB28C32139F47AEF613FE40B6DD7A5D7D_inline((&V_0), L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80438));
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_4 = V_0;
		V_1 = L_4;
		goto IL_0024;
	}

IL_0024:
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/NamedValue.cs:43>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80439));
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_5 = V_1;
		return L_5;
	}
}
// Method Definition Index: 52085
// Method Definition Index: 52085
// Method Definition Index: 52085
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArrayExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mC9DA32D7B8A7546B13A25AFD683E3E3564DA34F7_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t969436C60450219420A552B14EE1958F1D70A2D4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t969436C60450219420A552B14EE1958F1D70A2D4);
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_T_t969436C60450219420A552B14EE1958F1D70A2D4);
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	Il2CppFullySharedGenericStruct V_4 = alloca(SizeOf_T_t969436C60450219420A552B14EE1958F1D70A2D4);
	memset(V_4, 0, SizeOf_T_t969436C60450219420A552B14EE1958F1D70A2D4);
	bool V_5 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (&___1_other));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21149));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21150));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21151));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:246>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21152));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21153));
		int32_t L_0;
		L_0 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21153));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21154));
		int32_t L_1;
		L_1 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___1_other), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21154));
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21155));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:247>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21156));
		V_1 = (bool)0;
		goto IL_0067;
	}

IL_001c:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:249>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21157));
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21158));
		goto IL_0050;
	}

IL_0020:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21159));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:251>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21160));
		int32_t L_3 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21161));
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___0_container), L_3, (Il2CppFullySharedGenericStruct*)L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21161));
		il2cpp_codegen_memcpy(V_4, L_4, SizeOf_T_t969436C60450219420A552B14EE1958F1D70A2D4);
		int32_t L_5 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21162));
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___1_other), L_5, (Il2CppFullySharedGenericStruct*)L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21162));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21163));
		Il2CppConstrainedCallData L_8;
		Il2CppMethodPointer L_9 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)(Il2CppFullySharedGenericStruct*)V_4, &L_8, L_7);
		bool L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(L_9, L_8.method,L_8.thisPtr, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21163));
		V_3 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21164));
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:252>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21165));
		V_1 = (bool)0;
		goto IL_0067;
	}

IL_004b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21166));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:249>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21167));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0050:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:249>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21168));
		int32_t L_13 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21169));
		int32_t L_14;
		L_14 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21169));
		V_5 = (bool)((((int32_t)((((int32_t)L_13) == ((int32_t)L_14))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21170));
		bool L_15 = V_5;
		if (L_15)
		{
			goto IL_0020;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21171));
		V_1 = (bool)1;
		goto IL_0067;
	}

IL_0067:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:256>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21172));
		bool L_16 = V_1;
		return L_16;
	}
}
// Method Definition Index: 52086
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_CheckReinterpretSize_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m50C0BEE706F48B51459AE4BD6807CB060DE2D39F_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tB3746242A2B9EF9B8F11FE2AB4770E1A7FB0CC1B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	CHECKED_LOCAL(Type_t_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	bool V_4 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21173));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21174));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21175));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:263>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21176));
		uint32_t L_0 = SizeOf_T_tB3746242A2B9EF9B8F11FE2AB4770E1A7FB0CC1B;
		V_0 = (int32_t)L_0;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:264>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21177));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21178));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21178));
		V_1 = L_1;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:266>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21179));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_2 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21180));
		int32_t L_3;
		L_3 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline(L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21180));
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5 = V_0;
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_4, L_6));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:267>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21181));
		int64_t L_7 = V_2;
		int32_t L_8 = V_1;
		int64_t L_9 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_8,NULL));
		V_3 = ((int64_t)(L_7/L_9));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:269>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21182));
		int64_t L_10 = V_3;
		int32_t L_11 = V_1;
		int64_t L_12 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_11,NULL));
		int64_t L_13 = V_2;
		V_4 = (bool)((((int32_t)((((int64_t)((int64_t)il2cpp_codegen_multiply(L_10, L_12))) == ((int64_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21183));
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_005e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21184));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:271>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21185));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21186));
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21186));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_17 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21187));
		int32_t L_18;
		L_18 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline(L_17, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21187));
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 4)) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21188));
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21188));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21189));
		String_t* L_23;
		L_23 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE518C71E95CD77DE3B5BAA3682242D4FFE4F9D1E)), L_16, L_20, L_22, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21189));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21190));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_24 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_24, L_23, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21190));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, method);
	}

IL_005e:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:273>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21191));
		return;
	}
}
// Method Definition Index: 52071
// Method Definition Index: 52075
// Method Definition Index: 52075
// Method Definition Index: 52071
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArrayExtensions_Contains_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC2E8C94D40FD6192D93109A09A15F14BBDD009B8_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t75A0416E42937E71F2FEE1112F48C5C217F2DEC8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t75A0416E42937E71F2FEE1112F48C5C217F2DEC8);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t75A0416E42937E71F2FEE1112F48C5C217F2DEC8);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21030));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21031));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:34>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21032));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21033));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = NativeArray_1_AsReadOnlySpan_mEDF5E795C5FC628766F2016DFB498E87E36BA3A0((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21033));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_U_t75A0416E42937E71F2FEE1112F48C5C217F2DEC8);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21034));
		int32_t L_3;
		L_3 = NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t75A0416E42937E71F2FEE1112F48C5C217F2DEC8): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21034));
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 52075
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArrayExtensions_Contains_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA3B95B043A72542A90C9D7C39D8F157A7C7CD28D_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t5B12AF9B60BB3F3B8D19A7C0F70BA1E5C7C0B821 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t5B12AF9B60BB3F3B8D19A7C0F70BA1E5C7C0B821);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t5B12AF9B60BB3F3B8D19A7C0F70BA1E5C7C0B821);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21050));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21051));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:78>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21052));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21053));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = NativeList_1_AsReadOnlySpan_m9B73FBB50388B80F5882E4C29601D1A20DE81C43((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21053));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_U_t5B12AF9B60BB3F3B8D19A7C0F70BA1E5C7C0B821);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21054));
		int32_t L_3;
		L_3 = NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t5B12AF9B60BB3F3B8D19A7C0F70BA1E5C7C0B821): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21054));
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 52073
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArrayExtensions_Contains_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC53230B9B8FEB87DECEB368F8A0907CDB6D830C9_fshared (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t1EB786C4636BE4B7ECEADEA257D7AAE058101D0A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t1EB786C4636BE4B7ECEADEA257D7AAE058101D0A);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t1EB786C4636BE4B7ECEADEA257D7AAE058101D0A);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21040));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21041));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:56>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21042));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21043));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = ReadOnly_AsReadOnlySpan_m64C20F2CC8054C58682D3CB09F2D1B7109C17950((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21043));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_U_t1EB786C4636BE4B7ECEADEA257D7AAE058101D0A);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21044));
		int32_t L_3;
		L_3 = NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t1EB786C4636BE4B7ECEADEA257D7AAE058101D0A): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21044));
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 52080
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArrayExtensions_Contains_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m9AD9A0BBACE55E3E9CCA20B6AF502228934074DB_fshared (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_roSpan, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t5784EA59C6BB21C14119190AF2ABB63F0D0C40A2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t5784EA59C6BB21C14119190AF2ABB63F0D0C40A2);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t5784EA59C6BB21C14119190AF2ABB63F0D0C40A2);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_roSpan), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21097));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21098));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:152>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21099));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0 = ___0_roSpan;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_U_t5784EA59C6BB21C14119190AF2ABB63F0D0C40A2);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21100));
		int32_t L_3;
		L_3 = NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t5784EA59C6BB21C14119190AF2ABB63F0D0C40A2): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21100));
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 52077
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArrayExtensions_Contains_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1CDBB868415B018EE5BB52C90E6D6B98F16717E1_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_tB0388579871C38A08CBE50C5D1098D485DE6AF76 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_tB0388579871C38A08CBE50C5D1098D485DE6AF76);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_U_tB0388579871C38A08CBE50C5D1098D485DE6AF76);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr), (&___1_length), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_value : &___2_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21060));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21061));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:101>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21062));
		Il2CppFullySharedGenericStruct* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_value : &___2_value), SizeOf_U_tB0388579871C38A08CBE50C5D1098D485DE6AF76);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21063));
		int32_t L_4;
		L_4 = NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m91DB739957BD36F24D30A1D26BE5B9B8E4F5C072(L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_3, L_2, SizeOf_U_tB0388579871C38A08CBE50C5D1098D485DE6AF76): *(void**)L_2), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21063));
		return (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 52081
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_CopyFrom_TisIl2CppFullySharedGenericStruct_m6F262AF1700ED20A86112698D5904FA0B28E14A4_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_container, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (&___1_other));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21101));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21102));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21103));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:165>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21104));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21105));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1;
		L_1 = NativeList_1_AsArray_m1E9616CC42457555561B1165B47ED6E2EEADAC98((&___1_other), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21105));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21106));
		NativeArray_1_CopyFrom_m910E1EF42DE5ACF6E07014ADC35D83E87A3C43A8(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21106));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:166>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21107));
		return;
	}
}
// Method Definition Index: 52082
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_CopyFrom_TisIl2CppFullySharedGenericStruct_m8AA7EF20CE6A1C36AF67DFF780AC165B9CC8D766_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_container, NativeHashSet_1_t4A3FF5E5E7880324EBA79057A83F747452D87D7B* ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeHashSet_1_t4A3FF5E5E7880324EBA79057A83F747452D87D7B V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (&___1_other));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21108));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21109));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21110));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:179>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21111));
		NativeHashSet_1_t4A3FF5E5E7880324EBA79057A83F747452D87D7B* L_0 = ___1_other;
		NativeHashSet_1_t4A3FF5E5E7880324EBA79057A83F747452D87D7B L_1 = (*(NativeHashSet_1_t4A3FF5E5E7880324EBA79057A83F747452D87D7B*)L_0);
		V_1 = L_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21112));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2;
		L_2 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21112));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21113));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3;
		L_3 = NativeHashSet_1_ToNativeArray_m1F983BA2036D1FB556C421017F8E06EFA51F6E49((&V_1), L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21113));
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0022:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21118));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21119));
				NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80((&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21119));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21114));
			//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:181>
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21115));
			NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_4 = ___0_container;
			NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5 = V_0;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21116));
			NativeArray_1_CopyFrom_m910E1EF42DE5ACF6E07014ADC35D83E87A3C43A8(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21116));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21117));
			goto IL_0031;
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

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:183>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21120));
		return;
	}
}
// Method Definition Index: 52083
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_CopyFrom_TisIl2CppFullySharedGenericStruct_m6BC0D087C101274A0A7AD271554BFF4730E5BBF7_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_container, UnsafeHashSet_1_tDA0EA0F3984CE39895311C7838A2EC512B3F07A4* ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	UnsafeHashSet_1_tDA0EA0F3984CE39895311C7838A2EC512B3F07A4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (&___1_other));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21121));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21122));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21123));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:196>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21124));
		UnsafeHashSet_1_tDA0EA0F3984CE39895311C7838A2EC512B3F07A4* L_0 = ___1_other;
		UnsafeHashSet_1_tDA0EA0F3984CE39895311C7838A2EC512B3F07A4 L_1 = (*(UnsafeHashSet_1_tDA0EA0F3984CE39895311C7838A2EC512B3F07A4*)L_0);
		V_1 = L_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21125));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2;
		L_2 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21125));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21126));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3;
		L_3 = UnsafeHashSet_1_ToNativeArray_m8AEAC3278128DBD9AC2E8BEAB88D2DF0FE66DA1B((&V_1), L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21126));
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0022:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21131));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21132));
				NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80((&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21132));
				return;
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21127));
			//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:198>
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21128));
			NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_4 = ___0_container;
			NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5 = V_0;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21129));
			NativeArray_1_CopyFrom_m910E1EF42DE5ACF6E07014ADC35D83E87A3C43A8(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21129));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21130));
			goto IL_0031;
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

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:200>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21133));
		return;
	}
}
// Method Definition Index: 52089
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_DisposeCheckAllocator_TisIl2CppFullySharedGenericStruct_mA178ECEF3FBD52BC30927A2691039240F899582A_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21227));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21228));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21229));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:333>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21230));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_array;
		void* L_1 = L_0->___m_Buffer;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_0 = (bool)((((intptr_t)L_1) == ((intptr_t)L_2))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21231));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21232));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:335>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21233));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21234));
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_4 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3557380BE9E7E98862A3A71F25DC349E0384F4E2)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21234));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_001b:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:338>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21235));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_5 = ___0_array;
		int32_t L_6 = L_5->___m_AllocatorLabel;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21236));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21236));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21237));
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_8;
		L_8 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21237));
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21238));
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_003d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21239));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:340>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21240));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_10 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21241));
		NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80(L_10, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21241));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21242));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21243));
		goto IL_0065;
	}

IL_003d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21244));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:347>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21245));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_11 = ___0_array;
		int32_t L_12 = L_11->___m_AllocatorLabel;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21246));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_13;
		L_13 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21246));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_14 = ___0_array;
		void* L_15 = L_14->___m_Buffer;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21247));
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		AllocatorManager_Free_mB8AE9C4CB989A9121F4E3F2E6C7781076DFB3025(L_13, L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21247));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:348>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21248));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_16 = ___0_array;
		L_16->___m_AllocatorLabel = 0;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:350>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21249));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_17 = ___0_array;
		uintptr_t L_18 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		L_17->___m_Buffer = (void*)L_18;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21250));
	}

IL_0065:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:352>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21251));
		return;
	}
}
// Method Definition Index: 52079
// Method Definition Index: 52079
// Method Definition Index: 52079
// Method Definition Index: 52072
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m0578EC0AFEDCA5277BA3F1FF80521F94A942DF75_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t18B6D761FF6CA184341D940BB49C18E011AA4DBF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t18B6D761FF6CA184341D940BB49C18E011AA4DBF);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t18B6D761FF6CA184341D940BB49C18E011AA4DBF);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21035));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21036));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:45>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21037));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21038));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = NativeArray_1_AsReadOnlySpan_mEDF5E795C5FC628766F2016DFB498E87E36BA3A0((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21038));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_U_t18B6D761FF6CA184341D940BB49C18E011AA4DBF);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21039));
		int32_t L_3;
		L_3 = NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t18B6D761FF6CA184341D940BB49C18E011AA4DBF): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21039));
		return L_3;
	}
}
// Method Definition Index: 52076
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m25291B3EF3BE12AE0E4A7D679C037DC1010C208F_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t6EAD6496BD94F27E87A2E7A37B6F85200A6A2811 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t6EAD6496BD94F27E87A2E7A37B6F85200A6A2811);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t6EAD6496BD94F27E87A2E7A37B6F85200A6A2811);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21055));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21056));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:89>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21057));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21058));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = NativeList_1_AsReadOnlySpan_m9B73FBB50388B80F5882E4C29601D1A20DE81C43((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21058));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_U_t6EAD6496BD94F27E87A2E7A37B6F85200A6A2811);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21059));
		int32_t L_3;
		L_3 = NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t6EAD6496BD94F27E87A2E7A37B6F85200A6A2811): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21059));
		return L_3;
	}
}
// Method Definition Index: 52074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mB27BFF868BA2D984A1B1E75496B6F84A39C18806_fshared (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t7A32D64825A433E31632957B7AABE9A0E3C90B48 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t7A32D64825A433E31632957B7AABE9A0E3C90B48);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t7A32D64825A433E31632957B7AABE9A0E3C90B48);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21045));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21046));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:67>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21047));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21048));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = ReadOnly_AsReadOnlySpan_m64C20F2CC8054C58682D3CB09F2D1B7109C17950((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21048));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_U_t7A32D64825A433E31632957B7AABE9A0E3C90B48);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21049));
		int32_t L_3;
		L_3 = NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t7A32D64825A433E31632957B7AABE9A0E3C90B48): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21049));
		return L_3;
	}
}
// Method Definition Index: 52079
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96_fshared (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_roSpan, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t1EC06640DF68A09675813BAA543901B996FD2D04 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const uint32_t SizeOf_U_tDE90D1F87F726C5A6F1838DBB08E9B8155C3EF26 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t1EC06640DF68A09675813BAA543901B996FD2D04);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_U_tDE90D1F87F726C5A6F1838DBB08E9B8155C3EF26);
	int32_t V_0 = 0;
	bool V_1 = false;
	Il2CppFullySharedGenericStruct* V_2 = NULL;
	Il2CppFullySharedGenericStruct* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	Il2CppFullySharedGenericStruct V_6 = alloca(SizeOf_T_t1EC06640DF68A09675813BAA543901B996FD2D04);
	memset(V_6, 0, SizeOf_T_t1EC06640DF68A09675813BAA543901B996FD2D04);
	int32_t V_7 = 0;
	bool V_8 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_roSpan), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? ___1_value : &___1_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21069));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21070));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21071));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:127>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21072));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21073));
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m3CC53FCCDE299F21DEF7AB63EF3D378DAB954005_inline((&___0_roSpan), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21073));
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:128>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21074));
		int32_t L_1 = V_0;
		V_1 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21075));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0063;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21076));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21077));
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = ReadOnlySpan_1_get_Item_mAFFA21964234394982172838F35555A4D5681233_inline((&___0_roSpan), 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21077));
		V_3 = L_3;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:130>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21078));
		Il2CppFullySharedGenericStruct* L_4 = V_3;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_4,NULL));
		V_2 = (Il2CppFullySharedGenericStruct*)L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21079));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:132>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21080));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21081));
		goto IL_0050;
	}

IL_0024:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21082));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:134>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21083));
		Il2CppFullySharedGenericStruct* L_6 = V_2;
		int32_t L_7 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21084));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline((void*)L_6, L_7, (Il2CppFullySharedGenericStruct*)L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21084));
		il2cpp_codegen_memcpy(V_6, L_8, SizeOf_T_t1EC06640DF68A09675813BAA543901B996FD2D04);
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? ___1_value : &___1_value), SizeOf_U_tDE90D1F87F726C5A6F1838DBB08E9B8155C3EF26);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21085));
		Il2CppConstrainedCallData L_11;
		Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)(Il2CppFullySharedGenericStruct*)V_6, &L_11, L_10);
		bool L_13 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_12, L_11.method,L_11.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? L_9: *(void**)L_9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21085));
		V_5 = L_13;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21086));
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0049;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:135>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21087));
		int32_t L_15 = V_4;
		V_7 = L_15;
		goto IL_0068;
	}

IL_0049:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21088));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:132>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21089));
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0050:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:132>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21090));
		int32_t L_17 = V_4;
		int32_t L_18 = V_0;
		V_8 = (bool)((((int32_t)((((int32_t)L_17) == ((int32_t)L_18))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21091));
		bool L_19 = V_8;
		if (L_19)
		{
			goto IL_0024;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21092));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21093));
		uintptr_t L_20 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_3 = (Il2CppFullySharedGenericStruct*)L_20;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21094));
	}

IL_0063:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:140>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21095));
		V_7 = (-1);
		goto IL_0068;
	}

IL_0068:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:141>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21096));
		int32_t L_21 = V_7;
		return L_21;
	}
}
// Method Definition Index: 52078
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m91DB739957BD36F24D30A1D26BE5B9B8E4F5C072_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_tD34D5C0EDB4F66056F90091997CF0398079DC5E9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_U_tD34D5C0EDB4F66056F90091997CF0398079DC5E9);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_tD34D5C0EDB4F66056F90091997CF0398079DC5E9);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr), (&___1_length), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_value : &___2_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21064));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21065));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:113>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21066));
		Il2CppFullySharedGenericStruct* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21067));
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_2;
		memset((&L_2), 0, sizeof(L_2));
		ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline((&L_2), (void*)L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21067));
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_value : &___2_value), SizeOf_U_tD34D5C0EDB4F66056F90091997CF0398079DC5E9);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21068));
		int32_t L_5;
		L_5 = NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_4, L_3, SizeOf_U_tD34D5C0EDB4F66056F90091997CF0398079DC5E9): *(void**)L_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21068));
		return L_5;
	}
}
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisIl2CppFullySharedGenericStruct_m10ABF0E8955AE4504761E521587E2D89638A1972_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t68DD3E290C5045D5C9C9EAB6CF8F7F4B7CCEAEF5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t68DD3E290C5045D5C9C9EAB6CF8F7F4B7CCEAEF5);
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t68DD3E290C5045D5C9C9EAB6CF8F7F4B7CCEAEF5);
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_t68DD3E290C5045D5C9C9EAB6CF8F7F4B7CCEAEF5);
	memset(V_1, 0, SizeOf_T_t68DD3E290C5045D5C9C9EAB6CF8F7F4B7CCEAEF5);
	bool V_2 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_length), (&___2_allocator), (&___3_options));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21192));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21193));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* G_B2_0 = NULL;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* G_B3_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21194));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:282>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21195));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:283>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21196));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:284>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21197));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_2 = ___0_array;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_1, SizeOf_T_t68DD3E290C5045D5C9C9EAB6CF8F7F4B7CCEAEF5);
		il2cpp_codegen_memcpy(L_3, V_1, SizeOf_T_t68DD3E290C5045D5C9C9EAB6CF8F7F4B7CCEAEF5);
		int32_t L_4 = ___1_length;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21198));
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		void* L_6;
		L_6 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisIl2CppFullySharedGenericStruct_m89858AB1D0D222803F186CBFDE201D8104D72F9F((&V_0), il2cpp_codegen_memcpy(L_5, L_3, SizeOf_T_t68DD3E290C5045D5C9C9EAB6CF8F7F4B7CCEAEF5), L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21198));
		L_2->___m_Buffer = L_6;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:285>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21199));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_7 = ___0_array;
		int32_t L_8 = ___1_length;
		L_7->___m_Length = L_8;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:286>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21200));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_9 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21201));
		bool L_10;
		L_10 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21201));
		if (L_10)
		{
			G_B2_0 = L_9;
			goto IL_003b;
		}
		G_B1_0 = L_9;
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21202));
		int32_t L_11;
		L_11 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21202));
		G_B3_0 = ((int32_t)(L_11));
		G_B3_1 = G_B1_0;
		goto IL_003c;
	}

IL_003b:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003c:
	{
		G_B3_1->___m_AllocatorLabel = G_B3_0;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:287>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21203));
		int32_t L_12 = ___3_options;
		V_2 = (bool)((((int32_t)L_12) == ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21204));
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0066;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21205));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:289>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21206));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_14 = ___0_array;
		void* L_15 = L_14->___m_Buffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_16 = ___0_array;
		int32_t L_17 = L_16->___m_Length;
		int64_t L_18 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_17,NULL));
		uint32_t L_19 = SizeOf_T_t68DD3E290C5045D5C9C9EAB6CF8F7F4B7CCEAEF5;
		int64_t L_20 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_19,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21207));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_15, ((int64_t)il2cpp_codegen_multiply(L_18, L_20)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21207));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21208));
	}

IL_0066:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:300>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21209));
		return;
	}
}
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52087
// Method Definition Index: 52088
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m8CE87D920E01F7DDBF409D77486D923A85F54A46_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericStruct* ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4);
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4);
	memset(V_0, 0, SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4);
	bool V_1 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_length), (&___2_allocator), (&___3_options));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21210));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21211));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* G_B2_0 = NULL;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* G_B3_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21212));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:310>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21213));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_array;
		il2cpp_codegen_initobj(L_0, sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:311>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21214));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_array;
		Il2CppFullySharedGenericStruct* L_2 = ___2_allocator;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4);
		int32_t L_4 = ___1_length;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21215));
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		void* L_6;
		L_6 = AllocatorManager_AllocateStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m24FC981A18EAB95A996CFC6337FAB957062F81E1(L_2, il2cpp_codegen_memcpy(L_5, L_3, SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4), L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21215));
		L_1->___m_Buffer = L_6;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:312>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21216));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_7 = ___0_array;
		int32_t L_8 = ___1_length;
		L_7->___m_Length = L_8;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:313>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21217));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_9 = ___0_array;
		Il2CppFullySharedGenericStruct* L_10 = ___2_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21218));
		Il2CppConstrainedCallData L_12;
		Il2CppMethodPointer L_13 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)L_10, &L_12, L_11);
		typedef bool ( *func_L_14)(void*,const RuntimeMethod*);
		bool L_15 = ((func_L_14)L_13)(L_12.thisPtr,L_12.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21218));
		if (L_15)
		{
			G_B2_0 = L_9;
			goto IL_0042;
		}
		G_B1_0 = L_9;
	}
	{
		Il2CppFullySharedGenericStruct* L_16 = ___2_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21219));
		Il2CppConstrainedCallData L_18;
		Il2CppMethodPointer L_19 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)L_16, &L_18, L_17);
		typedef int32_t ( *func_L_20)(void*,const RuntimeMethod*);
		int32_t L_21 = ((func_L_20)L_19)(L_18.thisPtr,L_18.method);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21219));
		G_B3_0 = ((int32_t)(L_21));
		G_B3_1 = G_B1_0;
		goto IL_0043;
	}

IL_0042:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0043:
	{
		G_B3_1->___m_AllocatorLabel = G_B3_0;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:314>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21220));
		int32_t L_22 = ___3_options;
		V_1 = (bool)((((int32_t)L_22) == ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21221));
		bool L_23 = V_1;
		if (!L_23)
		{
			goto IL_006d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21222));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:316>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21223));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_24 = ___0_array;
		void* L_25 = L_24->___m_Buffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_26 = ___0_array;
		int32_t L_27 = L_26->___m_Length;
		int64_t L_28 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_27,NULL));
		uint32_t L_29 = SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4;
		int64_t L_30 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_29,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21224));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_25, ((int64_t)il2cpp_codegen_multiply(L_28, L_30)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21224));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21225));
	}

IL_006d:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:327>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21226));
		return;
	}
}
// Method Definition Index: 52084
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayExtensions_Reinterpret_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mA330D618BD7C45E856E6DA4F12CA02BE46428C2B_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t0548762ACE3F99CD59157CCF3E7926B6E1E0C81F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	void* V_4 = NULL;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_5;
	memset((&V_5), 0, sizeof(V_5));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_6;
	memset((&V_6), 0, sizeof(V_6));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21134));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21135));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21136));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:216>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21137));
		uint32_t L_0 = SizeOf_T_t0548762ACE3F99CD59157CCF3E7926B6E1E0C81F;
		V_0 = (int32_t)L_0;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:217>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21138));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21139));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21139));
		V_1 = L_1;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:219>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21140));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21141));
		int32_t L_2;
		L_2 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___0_array), il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21141));
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_2,NULL));
		int32_t L_4 = V_0;
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_3, L_5));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:220>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21142));
		int64_t L_6 = V_2;
		int32_t L_7 = V_1;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		V_3 = ((int64_t)(L_6/L_8));
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:224>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21143));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_9 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21144));
		void* L_10;
		L_10 = NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisIl2CppFullySharedGenericStruct_m0BC1578CE50C348FF9B616BD602021A69F647803_inline(L_9, il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21144));
		V_4 = L_10;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:225>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21145));
		void* L_11 = V_4;
		int64_t L_12 = V_3;
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(L_12,NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21146));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_14;
		L_14 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52(L_11, L_13, 1, il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21146));
		V_5 = L_14;
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:232>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21147));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_15 = V_5;
		V_6 = L_15;
		goto IL_0039;
	}

IL_0039:
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:233>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21148));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_16 = V_6;
		return L_16;
	}
}
// Method Definition Index: 43342
// Method Definition Index: 43342
// Method Definition Index: 43342
// Method Definition Index: 43342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeArrayExtensions_UnsafeElementAt_TisIl2CppFullySharedGenericStruct_mD5A55E88E7EFCC4A84DC649BF433F56B5C426745_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_index));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 34840));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 34841));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 34842));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@8457e85b8184/Runtime/UniversalRenderPipelineCore.cs:21>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 34843));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 34844));
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 34844));
		int32_t L_2 = ___1_index;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 34845));
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = UnsafeUtility_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m9BD1C4AD2221B8E77691F613764AAF6D9DA66233_inline(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 34845));
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@8457e85b8184/Runtime/UniversalRenderPipelineCore.cs:22>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 34846));
		Il2CppFullySharedGenericStruct* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 43343
// Method Definition Index: 43343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeArrayExtensions_UnsafeElementAtMutable_TisIl2CppFullySharedGenericStruct_m9C116426CA92D692BE5B19D3207BABE599300FFD_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array), (&___1_index));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 34847));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 34848));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 34849));
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@8457e85b8184/Runtime/UniversalRenderPipelineCore.cs:26>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 34850));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 34851));
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 34851));
		int32_t L_2 = ___1_index;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 34852));
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = UnsafeUtility_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m9BD1C4AD2221B8E77691F613764AAF6D9DA66233_inline(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 34852));
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		//<source_info:./Library/PackageCache/com.unity.render-pipelines.universal@8457e85b8184/Runtime/UniversalRenderPipelineCore.cs:27>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Universal_Runtime + 34853));
		Il2CppFullySharedGenericStruct* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 43343
// Method Definition Index: 67825
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayHelpers_CopyFromNativeSlice_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mEDA599B53DB377A69259BBF5A057F154737BE588_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, int32_t ___1_dstStartIndex, int32_t ___2_dstEndIndex, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___3_slice, int32_t ___4_srcStartIndex, int32_t ___5_srcEndIndex, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	bool V_4 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_nativeArray), (&___1_dstStartIndex), (&___2_dstEndIndex), (&___3_slice), (&___4_srcStartIndex), (&___5_srcEndIndex));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3122));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3123));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3124));
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:45>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3125));
		int32_t L_0 = ___2_dstEndIndex;
		int32_t L_1 = ___1_dstStartIndex;
		int32_t L_2 = ___5_srcEndIndex;
		int32_t L_3 = ___4_srcStartIndex;
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract(L_0, L_1))) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3126));
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:46>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3127));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3128));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3D3D9CC7DBA60B04E5E5DF1904398CBAA8E8C8BB)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECD68B5596F20DCD97A00D59FC408D26A9E78960)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3128));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0024:
	{
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:48>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3129));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3130));
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3130));
		V_0 = L_6;
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:49>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3131));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3132));
		int32_t L_7;
		L_7 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3132));
		V_1 = L_7;
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:51>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3133));
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_8 = ___3_slice;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3134));
		void* L_9;
		L_9 = NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_inline(L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3134));
		V_2 = (uint8_t*)L_9;
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:52>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3135));
		uint8_t* L_10 = V_2;
		int32_t L_11 = ___4_srcStartIndex;
		int32_t L_12 = V_1;
		V_2 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_10, ((int32_t)il2cpp_codegen_multiply(L_11, L_12))));
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:53>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3136));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_13 = ___0_nativeArray;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3137));
		void* L_14;
		L_14 = NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_inline(L_13, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3137));
		V_3 = (uint8_t*)L_14;
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:54>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3138));
		uint8_t* L_15 = V_3;
		int32_t L_16 = ___1_dstStartIndex;
		int32_t L_17 = V_0;
		V_3 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, ((int32_t)il2cpp_codegen_multiply(L_16, L_17))));
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:55>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3139));
		uint8_t* L_18 = V_3;
		int32_t L_19 = V_1;
		uint8_t* L_20 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3140));
		int32_t L_21;
		L_21 = NativeSlice_1_get_Stride_m3F2ACE95526BFFDE7967887D3C6188F286C6A12D_inline((&___3_slice), il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3140));
		int32_t L_22 = V_0;
		int32_t L_23 = ___5_srcEndIndex;
		int32_t L_24 = ___4_srcStartIndex;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3141));
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90((void*)L_18, L_19, (void*)L_20, L_21, L_22, ((int32_t)il2cpp_codegen_subtract(L_23, L_24)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3141));
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:56>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3142));
		return;
	}
}
// Method Definition Index: 67824
// Method Definition Index: 67824
// Method Definition Index: 67824
// Method Definition Index: 67824
// Method Definition Index: 67824
// Method Definition Index: 67824
// Method Definition Index: 67824
// Method Definition Index: 67824
// Method Definition Index: 67824
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayHelpers_DisposeIfCreated_TisIl2CppFullySharedGenericStruct_mB83E3B249B31F1166C1C18244C25C86F34A7E3FE_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_nativeArray, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_nativeArray));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3112));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3113));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3114));
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:38>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3115));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_nativeArray;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_0);
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3116));
		bool L_3;
		L_3 = NativeArray_1_op_Inequality_m473523B85EC3F582AF2F86773108D5AF3E6B9D0C(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3116));
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_4 = ___0_nativeArray;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3117));
		bool L_5;
		L_5 = NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3117));
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3118));
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:39>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3119));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_7 = ___0_nativeArray;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3120));
		NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80(L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3120));
	}

IL_002b:
	{
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:40>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3121));
		return;
	}
}
// Method Definition Index: 67824
// Method Definition Index: 67824
// Method Definition Index: 67823
// Method Definition Index: 67823
// Method Definition Index: 67823
// Method Definition Index: 67823
// Method Definition Index: 67823
// Method Definition Index: 67823
// Method Definition Index: 67823
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayHelpers_ResizeAndCopyIfNeeded_TisIl2CppFullySharedGenericStruct_m93CCCCD9A29F27365DE60D831C5689EDEE53F95D_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_nativeArray, int32_t ___1_size, int32_t ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_nativeArray), (&___1_size), (&___2_allocator), (&___3_options));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3089));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3090));
	int32_t G_B3_0 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 G_B8_1;
	memset((&G_B8_1), 0, sizeof(G_B8_1));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 G_B7_1;
	memset((&G_B7_1), 0, sizeof(G_B7_1));
	int32_t G_B9_0 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 G_B9_1;
	memset((&G_B9_1), 0, sizeof(G_B9_1));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 G_B9_2;
	memset((&G_B9_2), 0, sizeof(G_B9_2));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3091));
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:23>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3092));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_nativeArray;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3093));
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3093));
		V_0 = L_1;
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:24>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3094));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_3 = ___0_nativeArray;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3095));
		int32_t L_4;
		L_4 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3095));
		int32_t L_5 = ___1_size;
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_2 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3096));
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_001d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:25>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3097));
		goto IL_005b;
	}

IL_001d:
	{
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:27>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3098));
		int32_t L_7 = ___1_size;
		int32_t L_8 = ___2_allocator;
		int32_t L_9 = ___3_options;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3099));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&V_1), L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3099));
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:28>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3100));
		bool L_10 = V_0;
		V_3 = L_10;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3101));
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3102));
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:30>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3103));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_12 = ___0_nativeArray;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_13 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_12);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_14 = V_1;
		int32_t L_15 = ___1_size;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_16 = ___0_nativeArray;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3104));
		int32_t L_17;
		L_17 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline(L_16, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3104));
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			G_B8_0 = L_14;
			G_B8_1 = L_13;
			goto IL_0045;
		}
		G_B7_0 = L_14;
		G_B7_1 = L_13;
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_18 = ___0_nativeArray;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3105));
		int32_t L_19;
		L_19 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline(L_18, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3105));
		G_B9_0 = L_19;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_0046;
	}

IL_0045:
	{
		int32_t L_20 = ___1_size;
		G_B9_0 = L_20;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_0046:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3106));
		NativeArray_1_Copy_m917794C9B80242C4B43D3C7F4A4CE0D5875AD3F6(G_B9_2, G_B9_1, G_B9_0, il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3106));
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:31>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3107));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_21 = ___0_nativeArray;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3108));
		NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3108));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3109));
	}

IL_0054:
	{
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:33>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3110));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_22 = ___0_nativeArray;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_23 = V_1;
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_22 = L_23;
	}

IL_005b:
	{
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:34>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3111));
		return;
	}
}
// Method Definition Index: 67822
// Method Definition Index: 67822
// Method Definition Index: 67822
// Method Definition Index: 67822
// Method Definition Index: 67822
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayHelpers_ResizeIfNeeded_TisIl2CppFullySharedGenericStruct_mCB901C6B5173F2BAEFE1A6C88160E4BB878B6FDC_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_nativeArray, int32_t ___1_size, int32_t ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_nativeArray), (&___1_size), (&___2_allocator), (&___3_options));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3071));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3072));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3073));
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:10>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3074));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_nativeArray;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3075));
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3075));
		V_0 = L_1;
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:11>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3076));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_3 = ___0_nativeArray;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3077));
		int32_t L_4;
		L_4 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3077));
		int32_t L_5 = ___1_size;
		G_B3_0 = ((((int32_t)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_1 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3078));
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3079));
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:13>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3080));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_7 = ___0_nativeArray;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3081));
		NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80(L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3081));
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:14>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3082));
		V_0 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3083));
	}

IL_0029:
	{
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:17>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3084));
		bool L_8 = V_0;
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3085));
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:18>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3086));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_10 = ___0_nativeArray;
		int32_t L_11 = ___1_size;
		int32_t L_12 = ___2_allocator;
		int32_t L_13 = ___3_options;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3087));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_14), L_11, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3087));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_10 = L_14;
	}

IL_003f:
	{
		//<source_info:./Library/PackageCache/com.unity.2d.animation@147f6a6d9e7f/Runtime/NativeArrayHelper.cs:19>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Animation_Runtime + 3088));
		return;
	}
}
// Method Definition Index: 67822
// Method Definition Index: 67822
// Method Definition Index: 35185
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m3175E398B4F65381AF77AE7030D0D66B7C3D73C0_fshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_data, int32_t ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_data), (&___1_allocator));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1693));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1694));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1181>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1695));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1696));
		Il2CppFullySharedGenericStruct* L_0;
		L_0 = Span_1_GetPinnableReference_m5624821135CF41406465DA067B72E364926DB271((&___0_data), il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1696));
		V_1 = L_0;
		Il2CppFullySharedGenericStruct* L_1 = V_1;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_1,NULL));
		V_0 = (Il2CppFullySharedGenericStruct*)L_2;
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1183>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1697));
		il2cpp_codegen_initobj((&V_2), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		Il2CppFullySharedGenericStruct* L_3 = V_0;
		(&V_2)->___m_Buffer = (void*)L_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1698));
		int32_t L_4;
		L_4 = Span_1_get_Length_m1AADCDF6D1BB9B4B07BB14C7E31273E22A096E74_inline((&___0_data), il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1698));
		(&V_2)->___m_Length = L_4;
		int32_t L_5 = ___1_allocator;
		(&V_2)->___m_AllocatorLabel = L_5;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6 = V_2;
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1195>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1699));
		return L_6;
	}
}
// Method Definition Index: 35185
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
// Method Definition Index: 73878
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* BindingsAllocator_GetNativeOwnedDataPointer_m3668639A4B328ECC1DBB756D0217BEAFE136F25A_inline (void* ___0_ptr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BindingsAllocator_GetNativeOwnedDataPointer_m3668639A4B328ECC1DBB756D0217BEAFE136F25A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BindingsAllocator_GetNativeOwnedDataPointer_m3668639A4B328ECC1DBB756D0217BEAFE136F25A_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 463));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 464));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/Marshalling/BindingsHelpers.bindings.cs:83>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 465));
		void* L_0 = ___0_ptr;
		NullCheck(L_0);
		void* L_1 = ((NativeOwnedMemory_t78EF0D467F14059891C564355B0AEFDE81175B2B*)L_0)->___data;
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
// Method Definition Index: 14348
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 22478));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 22479));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/VisualElementHierarchy.cs:21>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 22480));
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_0 = __this->___U3ChierarchyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 13867
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18572));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18573));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/EventBase.cs:228>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18574));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_value;
		__this->___U3CelementTargetU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CelementTargetU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 34494
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NamedValue_set_name_mCF3BCACF7F87CF0C64AB3E4547BA5876ADF1940C_inline (NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NamedValue_set_name_mCF3BCACF7F87CF0C64AB3E4547BA5876ADF1940C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NamedValue_set_name_mCF3BCACF7F87CF0C64AB3E4547BA5876ADF1940C_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80408));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80409));
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/NamedValue.cs:17>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80410));
		String_t* L_0 = ___0_value;
		__this->___U3CnameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 34496
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NamedValue_set_value_mD96CEA0EB28C32139F47AEF613FE40B6DD7A5D7D_inline (NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED* __this, PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NamedValue_set_value_mD96CEA0EB28C32139F47AEF613FE40B6DD7A5D7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, NamedValue_set_value_mD96CEA0EB28C32139F47AEF613FE40B6DD7A5D7D_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80414));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80415));
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@7a4e1a2a8194/InputSystem/Runtime/Utilities/NamedValue.cs:22>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_InputSystem + 80416));
		PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 L_0 = ___0_value;
		__this->___U3CvalueU3Ek__BackingField = L_0;
		return;
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
// Method Definition Index: 2440
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	memset(V_0, 0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_1);
		if (L_2)
		{
			goto IL_0037;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		NullCheck((RuntimeObject*)L_3);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type((RuntimeObject*)L_3);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0037:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		Il2CppFullySharedGenericAny* L_10;
		L_10 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_9);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_11;
		memset((&L_11), 0, sizeof(L_11));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_11), L_10);
		__this->____pointer = L_11;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		__this->____length = L_13;
		return;
	}
}
// Method Definition Index: 2443
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
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
// Method Definition Index: 2344
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m6514A6564F9827564455D5BA04850C10B42CAEFA_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC));
		return;
	}

IL_000b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		NullCheck((RuntimeArray*)L_1);
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		Il2CppFullySharedGenericAny* L_3;
		L_3 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_2);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer = L_4;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		__this->____length = L_6;
		return;
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
// Method Definition Index: 2131
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MemoryExtensions_IsTypeComparableAsBytes_TisIl2CppFullySharedGenericAny_m222C2D308418E5EF828B7DB3393EF84053FBA614_fshared_inline (uint64_t* ___0_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 1));
		if (L_0)
		{
			goto IL_0036;
		}
	}
	{
		bool L_1 = (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_003c;
		}
	}

IL_0036:
	{
		uint64_t* L_2 = ___0_size;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		il2cpp_codegen_stind<int64_t>((int64_t*)L_2, (int64_t)L_3);
		return (bool)1;
	}

IL_003c:
	{
		bool L_4 = (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 1));
		if (L_4)
		{
			goto IL_008d;
		}
	}
	{
		bool L_5 = (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 1));
		if (L_5)
		{
			goto IL_008d;
		}
	}
	{
		bool L_6 = (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 1));
		if (!L_6)
		{
			goto IL_0093;
		}
	}

IL_008d:
	{
		uint64_t* L_7 = ___0_size;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		il2cpp_codegen_stind<int64_t>((int64_t*)L_7, (int64_t)L_8);
		return (bool)1;
	}

IL_0093:
	{
		bool L_9 = (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 1));
		if (L_9)
		{
			goto IL_00c9;
		}
	}
	{
		bool L_10 = (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 1));
		if (!L_10)
		{
			goto IL_00cf;
		}
	}

IL_00c9:
	{
		uint64_t* L_11 = ___0_size;
		int64_t L_12 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		il2cpp_codegen_stind<int64_t>((int64_t*)L_11, (int64_t)L_12);
		return (bool)1;
	}

IL_00cf:
	{
		bool L_13 = (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 1));
		if (L_13)
		{
			goto IL_0105;
		}
	}
	{
		bool L_14 = (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 1));
		if (!L_14)
		{
			goto IL_010b;
		}
	}

IL_0105:
	{
		uint64_t* L_15 = ___0_size;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(8,NULL));
		il2cpp_codegen_stind<int64_t>((int64_t*)L_15, (int64_t)L_16);
		return (bool)1;
	}

IL_010b:
	{
		uint64_t* L_17 = ___0_size;
		int64_t L_18 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		il2cpp_codegen_stind<int64_t>((int64_t*)L_17, (int64_t)L_18);
		return (bool)0;
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
// Method Definition Index: 2347
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFA6EE52BCF39100AE30C79E73F0F972182D0CA2A_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2343
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyMemory_1_GetObjectStartLength_m76D2DB58E89EF8DAAB0BEEC5E80CC99E7C3CB752_fshared_inline (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, int32_t* ___0_start, int32_t* ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t* L_0 = ___0_start;
		int32_t L_1 = __this->____index;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_0, (int32_t)L_1);
		int32_t* L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_2, (int32_t)L_3);
		RuntimeObject* L_4 = __this->____object;
		return L_4;
	}
}
// Method Definition Index: 949
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArraySegment_1_get_Array_mE4A35DFD81ABF447350B9A05C0F4BF0248A3CFF2_fshared_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____array;
		return L_0;
	}
}
// Method Definition Index: 950
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m4FAFF061AB36BF278BA8DC37B6D13718A06301E6_fshared_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____offset;
		return L_0;
	}
}
// Method Definition Index: 946
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 ArraySegment_1_get_Empty_m90EEE776AECD3AE35BB8634281B140DA015FFD49_fshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArraySegment_1_tDF702BC4F4D913C2458A537AF94037D8D53A79DE_StaticInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		CHECKED_LOCAL_INIT(ArraySegment_1_tDF702BC4F4D913C2458A537AF94037D8D53A79DE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 L_0 = ((ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CEmptyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 35234
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_fshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1879));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1880));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatchedForwarder.cs:61>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1881));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1882));
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1882));
		return L_0;
	}
}
// Method Definition Index: 35235
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_fshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1883));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1884));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatchedForwarder.cs:69>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1885));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1886));
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisIl2CppFullySharedGenericStruct_m530059660A1E31984686E17CC9E1E8EC5BADDADF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1886));
		return L_0;
	}
}
// Method Definition Index: 3257
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_fshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
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
// Method Definition Index: 35226
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 UnsafeUtility_GetByteSpanFromList_TisIl2CppFullySharedGenericStruct_m7644779593338EF0C449D6761DD2578F7DAEB46E_fshared_inline (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_list));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1841));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1842));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtility.cs:135>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1843));
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_0 = ___0_list;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1844));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_1;
		L_1 = NoAllocHelpers_ExtractArrayFromList_TisIl2CppFullySharedGenericStruct_m873C6691215D9DD53FE9D82092C0220C03C702DE_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1844));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1845));
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_2;
		L_2 = MemoryExtensions_AsSpan_TisIl2CppFullySharedGenericStruct_mF8415BE462F218CF45D5AAA3183883F406EFD7BB_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1845));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1846));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = MemoryMarshal_AsBytes_TisIl2CppFullySharedGenericStruct_mF17987979FA677881AF5A25ECF5A4A8FECDC7FC5_inline(L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1846));
		return L_3;
	}
}
// Method Definition Index: 2128
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 MemoryExtensions_AsSpan_TisIl2CppFullySharedGenericAny_m788D06C7A78ACE9317501CAAB3ACB95E63B8B3BD_fshared_inline (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_inline((&L_1), L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// Method Definition Index: 8036
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryMarshal_AsBytes_TisIl2CppFullySharedGenericStruct_mF17987979FA677881AF5A25ECF5A4A8FECDC7FC5_fshared_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_3 = ___0_span;
		Il2CppFullySharedGenericStruct* L_4;
		L_4 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericStruct_mE6EF4F8FFA4C5C6F3BA18346118C88E7F3E65F9D(L_3, il2cpp_rgctx_method(method->rgctx_data, 3));
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		int32_t L_6;
		L_6 = Span_1_get_Length_m1AADCDF6D1BB9B4B07BB14C7E31273E22A096E74_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_7;
		L_7 = Unsafe_SizeOf_TisIl2CppFullySharedGenericStruct_m5B40ADA085C40138AB7DFD671EED6795DE06E8CB(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (((int64_t)L_6 * (int64_t)L_7 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_6 * (int64_t)L_7 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_multiply(L_6, L_7)), Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_RuntimeMethod_var);
		return L_8;
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
// Method Definition Index: 35187
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
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
// Method Definition Index: 35188
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisIl2CppFullySharedGenericStruct_m0BC1578CE50C348FF9B616BD602021A69F647803_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
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
// Method Definition Index: 35239
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtility_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m9BD1C4AD2221B8E77691F613764AAF6D9DA66233_fshared_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr), (&___1_index));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1899));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1900));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Unsafe/UnsafeUtilityPatchedForwarder.cs:102>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1901));
		void* L_0 = ___0_ptr;
		int32_t L_1 = ___1_index;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1902));
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = UnsafeUtilityInternal_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m15B3F40D2AAAD385E615370BDEEAF11C94C43831_inline(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1902));
		return L_2;
	}
}
// Method Definition Index: 35186
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
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
// Method Definition Index: 35152
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Stride_m3F2ACE95526BFFDE7967887D3C6188F286C6A12D_fshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1580));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1581));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeSlice.cs:295>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1582));
		int32_t L_0 = __this->___m_Stride;
		return L_0;
	}
}
// Method Definition Index: 35069
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1073));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1074));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:241>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1075));
		void* L_0 = __this->___m_Buffer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 73794
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_fshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t8EBE725B2740B3ECE9C2D5E9EBEB0B97172D5E18 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 36));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 37));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/Unsafe/UnsafeUtilityPatched.cs:89>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 38));
		uint32_t L_0 = SizeOf_T_t8EBE725B2740B3ECE9C2D5E9EBEB0B97172D5E18;
		return (int32_t)L_0;
	}
}
// Method Definition Index: 73795
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisIl2CppFullySharedGenericStruct_m530059660A1E31984686E17CC9E1E8EC5BADDADF_fshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 39));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 40));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/Unsafe/UnsafeUtilityPatched.cs:104>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 41));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 42));
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tA18DF2C95F416AEB06D5F0702F37CBD85E8A7FB8_m934B08DAF1EA7B249CA769E8DCA4EBAC6AEB1885_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 42));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 43));
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 43));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// Method Definition Index: 73820
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* NoAllocHelpers_ExtractArrayFromList_TisIl2CppFullySharedGenericAny_m939A9FD04DDB2C021F8F2A09A8A13816556D8F2A_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) 
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
// Method Definition Index: 73799
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtilityInternal_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m15B3F40D2AAAD385E615370BDEEAF11C94C43831_fshared_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t6008FADC86896702BBF0B0D1C9FBB34D7C0BDB09 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr), (&___1_index));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 53));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 54));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/Scripting/Scripting/Unsafe/UnsafeUtilityPatched.cs:146>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_ScriptingModule + 55));
		void* L_0 = ___0_ptr;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = SizeOf_T_t6008FADC86896702BBF0B0D1C9FBB34D7C0BDB09;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		return (Il2CppFullySharedGenericStruct*)(((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
	}
}
