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

struct Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53;
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
struct Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6;
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
struct Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81;
struct DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5;
struct Dictionary_2_t6B4B40DA71BA0031F5736DF4459253299D8AF5F2;
struct Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
struct Dictionary_2_tA0F0759ACFE489A515318F7FEC7C252100C65E0E;
struct Dictionary_2_t29C8BF28A8478B079C61631B473BB09AF77C7D01;
struct Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA;
struct EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F;
struct Func_1_tA8142C82F6807E3ECF316299D5B91FFE4FEA7343;
struct Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct Lazy_1_t564A33A7F423595D3F62B04F731E53A42FB37575;
struct List_1_t86CEEDD235E596954775CA0742BC77B3779A0347;
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
struct List_1_tB1D3AE6638063900DFF2ED463335EF8912FBBF7B;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47;
struct LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9;
struct LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0;
struct ManagedObjectStore_1_tEE26F86DCDAA8777D74E172B69D8B59A9A1E96A9;
struct MatrixMxNDebugView_1_t54DB71F55826C54683CEB4D2B2ECCAF248A88B13;
struct MemoryDebugView_1_tE58388022143D55B8020F917C382224DE98A8F88;
struct MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487;
struct MethodCall_2_t6F0B468D208A254B1132895278B24899F2A0AB91;
struct MouseCaptureEventBase_1_t22B283B27FCD61274E7CEDD317FC2E9F4BD61350;
struct MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B;
struct NativeArrayDebugView_1_t822A40A26B069D94A4D21875C23D557566F1CBB1;
struct NativeArrayReadOnlyDebugView_1_t9602DD9F52F478794DD161C2E2EF8153A126CB09;
struct ObjectPool_1_t9CFCA41CD780F7424037FA2A3EE846F2FBFEE4D0;
struct PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744;
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E;
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41;
struct EntryU5BU5D_t61FA3D706E7DE26AEDF070945C2A103BABDD1FDD;
struct EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52;
struct __Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B;
struct DataBindingManager_tE7B33E64EBBDCAB0A89B6A8421529F9BA0D066E1;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904;
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
struct HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct ICursorManager_t78B026DED2559C62810B21C54C5F882457073A8B;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IEventHandler_tB1627CA1B7729F3E714572E69A79C91A1578C9A3;
struct IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E;
struct IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5;
struct IPanelRenderer_tEB4A39BEC71B3B49302393D8DAFF7599E7F9ED9E;
struct IPinnable_tA3989EA495C0118966BAAF8848C0009947BB49C0;
struct IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7;
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct PathRef_t76F7677792A14AF9D6A6EAB7F08C1A3DC2B27A55;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2;
struct ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
struct TimeFunction_tF79523F25DE24287C8CF4D87F09E8CA51568EC9F;
struct TimerEventScheduler_tAF33EE8B1C54425235E4893B0C5088629FBE7862;
struct Type_t;
struct UIElementsBridge_tC28FCEDF493CD746D1973AB27BA2CBA393EB4BA8;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualElementSelectorData_t4C4043092A19A653CE8637C7659E36E0D3CC23A0;
struct VisualElementTransformData_t3DD575B5990B68FF956673EFF036171C86A38DF3;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct TypeData_t9C5DC5F5DD8F0C04131F359229ED4738117BA396;
struct Record_tD4D528E1BFF948E92C590DCE7A010BA356D50049;
struct EqualityComparer_tF8FCE99C5DBB2F35D74728CB65346435381CFD5B;
struct Data_t6BD087CC0FA9794D342D260035A70E365224C66E;
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_ScriptingModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UIElementsModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_2D_Common_Runtime[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Collections[];
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPointerEventInternal_tF0950F230320BC22B077741EA08AC538EE878833_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerDeviceState_tD94EF3C9710026DE8B7E83B6C842524C7C6EBA8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElementExtensions_t5F9CD76F92E7BD4E3F3B6FEF246057D6FEAF9A61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09B8A6EA35B75288D90AC15479A1E9A5D9A18113;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral47E8CCB1C331C9476E88F8A6179C1466CBA62167;
IL2CPP_EXTERN_C String_t* _stringLiteralACAE3DE011E4C429609CA3219C3F13E876D2AF69;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C const RuntimeMethod* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBase_get_currentTarget_m6F265B85FF86C35F62CFDF144B80B383DA9C503B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBase_get_elementTarget_mF6CFD6372FB247718797DB8927654F781821B94D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventBase_set_propagation_m1F5D2A6582B8A4D64F84F0B71F90790FA2BF7E8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ManagedObjectStore_1_t9DAE7A373B9F884EA2D98897CCA9D4EA76BF716F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MatrixMxNDebugView_1_tFF6AB1C38EEED148FE4B24517522759F02BF57C8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MatrixMxN_1_t72712EA8DE0B29DF48954751452934EE04A4132B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MouseEventBase_1_t66FBDFE5C4C6814D0BCAB7D93BF0F902DEB2E22D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeArrayAllocator_tC56FDB52B7742CFDBAFDF1B03DF9E9746A668DFF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeArrayDebugView_1_tE87495FA18D5F8A71C5C739CC4D4E219FDE6A7BF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeArrayReadOnlyDebugView_1_t0C571856AC525866709B940F559CB3B41248BA27_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NativeArray_1_t6E2931CC2E1AA6B9F666FF4270BD177E2114779B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReadOnly_t1B08AA4D86F690C0C3566681B43FE4727DD112AB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5  : public RuntimeObject
{
};
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80  : public RuntimeObject
{
};
struct Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA : public RuntimeObject {};
struct List_1_t86CEEDD235E596954775CA0742BC77B3779A0347  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* ____items;
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
struct LowLevelDictionary_2_t39FD470E201F39ECE87AC1192F2878362EEEE6CD  : public RuntimeObject
{
	EntryU5BU5D_t61FA3D706E7DE26AEDF070945C2A103BABDD1FDD* ____buckets;
	int32_t ____numEntries;
	int32_t ____version;
	RuntimeObject* ____comparer;
};
struct LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47  : public RuntimeObject
{
	EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* ____buckets;
	int32_t ____numEntries;
	int32_t ____version;
	RuntimeObject* ____comparer;
};
struct LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ManagedObjectStore_1_tEE26F86DCDAA8777D74E172B69D8B59A9A1E96A9  : public RuntimeObject
{
	int32_t ___m_ChunkSize;
	int32_t ___m_Length;
	List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* ___m_Chunks;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ___m_Free;
};
struct MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E  : public RuntimeObject
{
};
struct MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487  : public RuntimeObject
{
};
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	bool ___isIMGUIContainer;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C  : public RuntimeObject
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
typedef Il2CppFullySharedGenericStruct Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0;
struct LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9  : public LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0
{
};
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
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
struct NativeArrayStaticId_1_t50C709E712A83F94158359DA374799781680B83C 
{
	union
	{
		struct
		{
		};
		uint8_t NativeArrayStaticId_1_t4D99ED470E60088BA55990F9274D24F2AEEC3F9B__padding[1];
	};
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
struct SharedStatic_1_tEC5F09652230C531A3C62C83CB579D41179BD182 
{
	void* ____buffer;
};
struct SharedStatic_1_t992C7AC6924726715BD75765E85C2A7923405408 
{
	void* ____buffer;
};
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
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
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
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
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
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct MemoryDebugView_1_tE58388022143D55B8020F917C382224DE98A8F88  : public RuntimeObject
{
	ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 ____memory;
};
struct MemoryPressure_t12C53FDB3D069AAE9DB8F6D9FDDD6D8C733E1A4E 
{
	int32_t ___value__;
};
struct MemoryPressure_t211225B7C4B31AFD064E1D7ABDD38BD64F5C97C2 
{
	int32_t ___value__;
};
struct MemoryPressure_tF20E59A2FCD73572EF954182450F33E0A686455A 
{
	int32_t ___value__;
};
struct MemoryPressure_tDDA5D8E48826B4CBA5699D6EE80C85F2F0F4B717 
{
	int32_t ___value__;
};
struct MemoryPressure_t842F850D315484F407FE5A0D42F82BC882AD9402 
{
	int32_t ___value__;
};
struct MemoryPressure_t7AAFC0465C6ACE5222645A59D867C7FD22F28381 
{
	int32_t ___value__;
};
struct NativeArrayReadOnlyDebugView_1_t9602DD9F52F478794DD161C2E2EF8153A126CB09  : public RuntimeObject
{
	ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 ___m_Array;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct ContextType_t50FAC10DB1D4E29B37E532DED9CAA804FC4E59A0 
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
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct EventCategory_tCFC347F164A2525B4C39DA6A9B7A9B5A541E3FFA 
{
	int32_t ___value__;
};
struct EventModifiers_tB9DEEF73F8FC4C312B8E0C34336C7D9C3023B270 
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
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct GCHandleType_t4CD45A3495E593D093AB0CE36EF9EC1A1572F82A 
{
	int32_t ___value__;
};
struct LanguageDirection_t30A3B6BBCEE6A6F57641E4E008E0DCC40603558C 
{
	int32_t ___value__;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 
{
	bool ___clearDepthStencil;
	bool ___clearColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_pinvoke
{
	int32_t ___clearDepthStencil;
	int32_t ___clearColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_com
{
	int32_t ___clearDepthStencil;
	int32_t ___clearColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
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
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction;
};
struct RenderHints_t4032FC4AB3FD946FD2A484865B8861730D9035E7 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
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
struct NativeArray_1_tE06046CB21C61D0B22B1DF474FEA5E94B0A6C3E0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2676CC36FBC01E84CA50D54E04780F7663DAA064 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE7AC447D25C22B568AC26D291E5E43F9555B3CBE 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7E24449A769238DB3FFDBE995E0CD2C5757BEF6E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t822F8C531C2AE3409AA85C86B630570D3373B1B4 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t79E8144C5D612D579D7297B75D2348BF3851077C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t40B4B48A939C78F4FD7805D2538FE82F644C2D3B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t15482D9F7CC02501EED5F540239814F47FD7ABF0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6694BC38601A462CA76467EB90EA224EF7401145 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB097AD697C2218DBF91ED5E8E794F28943E00873 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3AB07395A7813795BFC8C5BC3F3274FFF9E11A24 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0EA3DD5F94EE5F393880E3B7306B477CA1DC865A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8394F32A45D6210564991F74B2B400420947A0A1 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tCD61B156B272A2CB9405908E77677883614E2D4D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t872DED90CA516833A6272C7B5ED78F6B432B46D5 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t21DEB3AF62112832ADCD63BB9C0C86E51D771525 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
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
struct Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 
{
	bool ___hasValue;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___value;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
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
struct MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD 
{
	void* ____pointer;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____handle;
	RuntimeObject* ____pinnable;
};
struct MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshaled_pinvoke
{
	void* ____pointer;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____handle;
	RuntimeObject* ____pinnable;
};
struct MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshaled_com
{
	void* ____pointer;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____handle;
	RuntimeObject* ____pinnable;
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
struct EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	int32_t ___m_RefCount;
};
struct MatrixMxN_1_tCE7536060A541DF76F19476411BF01462801071D 
{
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___m_Array;
	int32_t ___m_Width;
	int32_t ___m_Height;
	int32_t ___m_AllocLabel;
	int32_t ___m_Options;
};
struct MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___m_Array;
	int32_t ___m_Width;
	int32_t ___m_Height;
	int32_t ___m_AllocLabel;
	int32_t ___m_Options;
};
struct MethodCall_2_t6F0B468D208A254B1132895278B24899F2A0AB91  : public MulticastDelegate_t
{
};
struct NativeArrayAllocator_tE6217471D7181329E80EFC3CEBFECFC6221EFC11 
{
	int32_t ___m_Allocator;
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
};
struct NativeArrayAllocator_t26840BC165D783F0FB52061DC70D297E3AF7D28E 
{
	int32_t ___m_Allocator;
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
};
struct NativeArrayAllocator_t3708FF11DA1D8F1E666473BCA311E72E2A39250A 
{
	int32_t ___m_Allocator;
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
};
struct NativeArrayAllocator_t7D098BCF0B0C50F493B510D50B8986211C63F492 
{
	int32_t ___m_Allocator;
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
};
struct NativeArrayAllocator_t60748B6A3A7FB52B1E41A4D6F12C18F2D6FD7798 
{
	int32_t ___m_Allocator;
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
};
struct NativeArrayDebugView_1_t822A40A26B069D94A4D21875C23D557566F1CBB1  : public RuntimeObject
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___m_Array;
};
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
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
struct MatrixMxNDebugView_1_t54DB71F55826C54683CEB4D2B2ECCAF248A88B13  : public RuntimeObject
{
	MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E ___array;
};
struct MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B  : public EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F
{
	int32_t ___U3CmodifiersU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CmousePositionU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ClocalMousePositionU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CmouseDeltaU3Ek__BackingField;
	int32_t ___U3CclickCountU3Ek__BackingField;
	int32_t ___U3CbuttonU3Ek__BackingField;
	int32_t ___U3CpressedButtonsU3Ek__BackingField;
	RuntimeObject* ___U3CsourcePointerEventU3Ek__BackingField;
	bool ___U3CrecomputeTopElementUnderMouseU3Ek__BackingField;
	Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 ___U3CpanelRayU3Ek__BackingField;
};
struct PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744  : public EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F
{
	RuntimeObject* ___U3CrelatedTargetU3Ek__BackingField;
	int32_t ___U3CpointerIdU3Ek__BackingField;
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
struct MouseCaptureEventBase_1_t22B283B27FCD61274E7CEDD317FC2E9F4BD61350  : public PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744
{
};
struct LayoutConfig_tD448909812F1AA8DE14EAC340688D6FF41B52C87 
{
	LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA ___m_Access;
	UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1 ___m_Handle;
};
struct LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE 
{
	LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA ___m_Access;
	UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1 ___m_Handle;
};
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303  : public RuntimeObject
{
	Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53* ___panelDisposed;
	Dictionary_2_t29C8BF28A8478B079C61631B473BB09AF77C7D01* ___MemberElementsByHandle;
	UIElementsBridge_tC28FCEDF493CD746D1973AB27BA2CBA393EB4BA8* ___m_UIElementsBridge;
	float ___m_Scale;
	int32_t ___m_BackdropFilterElementCount;
	LayoutConfig_tD448909812F1AA8DE14EAC340688D6FF41B52C87 ___layoutConfig;
	float ___m_PixelsPerPoint;
	float ___U3CreferenceSpritePixelsPerUnitU3Ek__BackingField;
	PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 ___U3CclearSettingsU3Ek__BackingField;
	RuntimeObject* ___panelRenderer;
	RuntimeObject* ___U3CcursorManagerU3Ek__BackingField;
	ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B* ___U3CcontextualMenuManagerU3Ek__BackingField;
	DataBindingManager_tE7B33E64EBBDCAB0A89B6A8421529F9BA0D066E1* ___U3CdataBindingManagerU3Ek__BackingField;
	TimerEventScheduler_tAF33EE8B1C54425235E4893B0C5088629FBE7862* ___m_Scheduler;
	TimeFunction_tF79523F25DE24287C8CF4D87F09E8CA51568EC9F* ___m_TimeSinceStartupFunc;
	bool ___U3CdisposedU3Ek__BackingField;
	ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904* ___m_TopElementUnderPointers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___isFlatChanged;
	bool ___m_DrawsInCameras;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___atlasChanged;
	HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705* ___hierarchyChanged;
	Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6* ___beforeUpdate;
	Lazy_1_t564A33A7F423595D3F62B04F731E53A42FB37575* ___textElementRegistry;
	Func_1_tA8142C82F6807E3ECF316299D5B91FFE4FEA7343* ___CreateMenuFunctor;
	Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* ___IMEGetCompositionString;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___IMESetIsEnteringText;
	Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* ___IMESetCursorPos;
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
struct List_1_t86CEEDD235E596954775CA0742BC77B3779A0347_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticFields
{
	int32_t ___maxPointers;
	int32_t ___invalidPointerId;
	int32_t ___mousePointerId;
	int32_t ___touchPointerIdBase;
	int32_t ___touchPointerCount;
	int32_t ___penPointerIdBase;
	int32_t ___penPointerCount;
	int32_t ___trackedPointerIdBase;
	int32_t ___trackedPointerCount;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___screenHoveringPointers;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178_StaticFields
{
	ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 ___U3CEmptyU3Ek__BackingField;
};
struct NativeArrayStaticId_1_t50C709E712A83F94158359DA374799781680B83C_StaticFields
{
	SharedStatic_1_tEC5F09652230C531A3C62C83CB579D41179BD182 ___s_staticSafetyId;
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
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields
{
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___s_Current;
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___s_MasterEvent;
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
struct EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F_StaticFields
{
	int64_t ___s_TypeId;
	ObjectPool_1_t9CFCA41CD780F7424037FA2A3EE846F2FBFEE4D0* ___s_Pool;
	int32_t ___EventCategory;
	TypeData_t9C5DC5F5DD8F0C04131F359229ED4738117BA396* ___k_TypeData;
};
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_StaticFields
{
	Dictionary_2_tA0F0759ACFE489A515318F7FEC7C252100C65E0E* ___PanelsByHandle;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___s_OutsidePanelCoordinates;
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
struct EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* m_Items[1];

	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultComparer_1__ctor_m3125A41749298C596BE7DAE59E0801F21BDE1482_fshared (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_m2976D36B6439669E09FF4616F9EB6AAB8DDDB62A_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_Clear_m8EC37682AC495C0E5B8EB7CA373B7D9FE89616D3_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* LowLevelDictionary_2_Find_m179CAB1400AF502A22F57DE2B32B403D4BE04671_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* LowLevelDictionary_2_UncheckedAdd_mFD09849DDF8DDA1917BFE11E1C65CE60CDDA2D6F_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, int32_t ___1_numBuckets, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entry__ctor_m50DA99B3EE92A0B3C7CBF76172DCF3DDDFCB2C93_fshared (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_ExpandBuckets_m187E4F5B88425903219951B37753A533F3AED6FB_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mD3CD763C70C97727954E6E8A5A8E140EF55EDE9F_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mCDEF1A5F77BCA815F0CDF2C6EB9E91D3909BC5BB_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775_fshared (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_EnsureCapacity_mE56EA3BECD245513463EE874D0025C6A20FBC309_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Capacity_m72ED35E6CF83B329A983773E2DBE542A235CA53E_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_InsertRange_m10381E430332334B43213A556876E789C677A9B0_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_IndexOf_mF86770392070839AB16F994F40A7B380FAD741CB_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisIl2CppFullySharedGenericAny_mA7F15146F50A93EE31005CC7C2C28B7DB0CE5708_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Insert_mECC1247C269DC9FD2DE1250FE6418D768BA1CD16_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_RemoveAt_mA9B8AB65576735830A4A79EFF4FCDD16A3E0BC2F_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_fshared (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m657BFA58DFD6AB5B1B4B69AA6E963CD569637EAD_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m9159DC6A9BC5528A3444329C408F4101004CF652_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mE6103188ACDEC07F90F2D2986554730D18029750_fshared_inline (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Dequeue_m80C152387A53656EC4AEF450BCBA9087DC51EEE3_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MatrixMxN_1_get_Length_mBC3776550911BA05734890369C64FEBEED87957E_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixMxN_1_CopyTo_mAA9DDC54A871349C3441EEF6611139614B4A8F68_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixMxN_1_Dispose_m13DFF7EC0FB4F5CE59972F37B2178F083A7B788A_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_CopyTo_m6072353F8BA28E08B24828767C0A5AA713F0B307_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 Memory_1_op_Implicit_m7216145178505C2CB2BA0E21CB95773BE1E6A7AF_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_memory, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ReadOnlyMemory_1_ToArray_m44807420910F7442D09F80751674CF30711B0764_fshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m3743D2A1BDE7D9720706FF7CFE3C270432C4D381_fshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArraySegment_1_get_Array_mE4A35DFD81ABF447350B9A05C0F4BF0248A3CFF2_fshared_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m4FAFF061AB36BF278BA8DC37B6D13718A06301E6_fshared_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mEF96248898C14F3687A5C72B920F841701E4E13C_fshared_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m5ABFBF1303AB4B2B8AD03A4586CC52B6098DCBE9_fshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Memory_1_get_Span_m86E7A7A0C72430FDB1B2A2BCEEAAEEF7E7F83596_fshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m51B73F86825C26B44AF2E5C9152D807780EB84ED_fshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Memory_1_ToString_m8587562831B505E363617A254DE467726D4C6351_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m5F9E06AAB95D8F8AF62C3AD68DEC2F6716CDEE05_fshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, RuntimeObject* ___0_obj, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m87850B36DC83BF310EC6136E6D14DC5634F96F05_fshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m464C81DB101113B73DCD3F43C757D672CD893B37_fshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_Add_TisIl2CppFullySharedGenericAny_m25356A475C0867B15741BD80812E4EBA4394F3C5_fshared (void* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Span_1_ToArray_mBB0A9E11BBAA9FDE1D0C045FBA14F4CD3E84773E_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyMemory_1_Equals_mF7DA75997B4FFDFB2D6F953E8DC580EC3C941A61_fshared (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Memory_1_Equals_m2F882A89DBD535FFE48B39EBAF2626BA2AD36DA0_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Memory_1_Equals_m03AA1FCD0E395B27BD53551C06FDC8ED34F10A9A_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_CombineHashCodes_mAF5A2B57827992A931D66D37B330E11439075F2B_fshared (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_GetHashCode_m7A4C30D97D133B153A50D638A7D596CDA1BD11B5_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_CombineHashCodes_mEB42331AAFED3F227F0E7520FA03E6804637F84F_fshared (int32_t ___0_left, int32_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerCaptureEventBase_1__ctor_m6504E51BF3B701E614E30F22DD97E3E2E68EB5CD_gshared (PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_get_modifiers_mAD508E12A77C609CD1733864D36295A5FA8045EC_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 MouseEventBase_1_get_panelRay_m15BF165696F29D7A1F371DEC030C1E57CFA7E682_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_1_Init_m810FE185606F5EB505285FEDEDB759E3DDB0E934_gshared (EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_LocalInit_m85C31C18C63B13944050FE4C8F328E12465C8132_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_modifiers_m65A8AF799BAE5B62060B24F27A2FE897F503CF2B_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_clickCount_mB1575DBF43CE6DC0546CC215CF0CFEDB3C1D648E_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_button_mBD212144434B278C49CFA531AD588260FC8CB868_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_pressedButtons_m9E6A63DB8A91D2C35470777AC0958915E3DBB476_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_sourcePointerEvent_m65A5978FE221A03B997358CE3158649369FE87ED_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_recomputeTopElementUnderMouse_m5D34798DE02C9783D4F623F4F5BFAD3C254B51E5_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_panelRay_m2F11C8441C8E2382C3FC31A56453E221AE212536_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MouseEventBase_1_get_recomputeTopElementUnderMouse_m014A5DC3028338BDB21CA9F1BAF1FEAC334220F7_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* MouseEventBase_1_GetPooled_m13C3E655268E03D8CDA8E82FBC4C2B8B0C910511_gshared (RuntimeObject* ___0_triggerEvent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* EventBase_1_GetPooled_mB805F9CE6D32D281426319C902A567F5AB35005C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* EventBase_1_GetPooled_m567E588C708778F6F41E2D69650776EBF437F74C_gshared (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_e, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_1__ctor_mACA9307C9EF30E9F5D55E8FA6AE6E58A99BA40CD_gshared (EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m01C0164611F0F10354E4ABA539FA854E3A97F76A_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___1_label, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReadOnly_get_IsCreated_mADD8624D940450CB4F64C20BCFEFAC0065E485A2_fshared_inline (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ReadOnly_ToArray_mFD80D7B7BE13A74B4BE53E54CE3BCB5300F46D27_fshared (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SharedStatic_1_t992C7AC6924726715BD75765E85C2A7923405408 SharedStatic_1_GetOrCreate_TisIl2CppFullySharedGenericAny_m9CA632091AD248050A66593B9E90C291765FD691_fshared (uint32_t ___0_alignment, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_fshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_fshared_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIl2CppFullySharedGenericAny_m7051201F0F2C986AB0084FB4A24BEE4D4733C5EB_fshared (Il2CppFullySharedGenericAny* ___0_destination, Il2CppFullySharedGenericAny* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_fshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_fshared_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) ;

inline void DefaultComparer_1__ctor_m3125A41749298C596BE7DAE59E0801F21BDE1482 (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5*, const RuntimeMethod*))DefaultComparer_1__ctor_m3125A41749298C596BE7DAE59E0801F21BDE1482_fshared)(__this, method);
}
inline void LowLevelDictionary_2__ctor_m2976D36B6439669E09FF4616F9EB6AAB8DDDB62A (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, int32_t, RuntimeObject*, const RuntimeMethod*))LowLevelDictionary_2__ctor_m2976D36B6439669E09FF4616F9EB6AAB8DDDB62A_fshared)(__this, ___0_capacity, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void LowLevelDictionary_2_Clear_m8EC37682AC495C0E5B8EB7CA373B7D9FE89616D3 (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, int32_t, const RuntimeMethod*))LowLevelDictionary_2_Clear_m8EC37682AC495C0E5B8EB7CA373B7D9FE89616D3_fshared)(__this, ___0_capacity, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* LowLevelDictionary_2_Find_m179CAB1400AF502A22F57DE2B32B403D4BE04671 (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method)
{
	return ((  Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, Il2CppFullySharedGenericAny, const RuntimeMethod*))LowLevelDictionary_2_Find_m179CAB1400AF502A22F57DE2B32B403D4BE04671_fshared)((LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*)__this, ___0_key, method);
}
inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* LowLevelDictionary_2_UncheckedAdd_mFD09849DDF8DDA1917BFE11E1C65CE60CDDA2D6F (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	return ((  Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))LowLevelDictionary_2_UncheckedAdd_mFD09849DDF8DDA1917BFE11E1C65CE60CDDA2D6F_fshared)((LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*)__this, ___0_key, ___1_value, method);
}
inline int32_t LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04 (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, int32_t ___1_numBuckets, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, Il2CppFullySharedGenericAny, int32_t, const RuntimeMethod*))LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04_fshared)((LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*)__this, ___0_key, ___1_numBuckets, method);
}
inline void Entry__ctor_m50DA99B3EE92A0B3C7CBF76172DCF3DDDFCB2C93 (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* __this, const RuntimeMethod* method)
{
	((  void (*) (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, const RuntimeMethod*))Entry__ctor_m50DA99B3EE92A0B3C7CBF76172DCF3DDDFCB2C93_fshared)(__this, method);
}
inline void LowLevelDictionary_2_ExpandBuckets_m187E4F5B88425903219951B37753A533F3AED6FB (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, const RuntimeMethod* method)
{
	((  void (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, const RuntimeMethod*))LowLevelDictionary_2_ExpandBuckets_m187E4F5B88425903219951B37753A533F3AED6FB_fshared)(__this, method);
}
inline void LowLevelList_1__ctor_mD3CD763C70C97727954E6E8A5A8E140EF55EDE9F (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, const RuntimeMethod*))LowLevelList_1__ctor_mD3CD763C70C97727954E6E8A5A8E140EF55EDE9F_fshared)(__this, method);
}
inline void LowLevelList_1__ctor_mCDEF1A5F77BCA815F0CDF2C6EB9E91D3909BC5BB (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))LowLevelList_1__ctor_mCDEF1A5F77BCA815F0CDF2C6EB9E91D3909BC5BB_fshared)(__this, ___0_capacity, method);
}
inline void Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775 (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*, LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9*, const RuntimeMethod*))Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775_fshared)(__this, ___0_list, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
inline void LowLevelList_1_EnsureCapacity_mE56EA3BECD245513463EE874D0025C6A20FBC309 (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))LowLevelList_1_EnsureCapacity_mE56EA3BECD245513463EE874D0025C6A20FBC309_fshared)(__this, ___0_min, method);
}
inline void LowLevelList_1_set_Capacity_m72ED35E6CF83B329A983773E2DBE542A235CA53E (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))LowLevelList_1_set_Capacity_m72ED35E6CF83B329A983773E2DBE542A235CA53E_fshared)(__this, ___0_value, method);
}
inline void LowLevelList_1_InsertRange_m10381E430332334B43213A556876E789C677A9B0 (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, RuntimeObject*, const RuntimeMethod*))LowLevelList_1_InsertRange_m10381E430332334B43213A556876E789C677A9B0_fshared)(__this, ___0_index, ___1_collection, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline int32_t LowLevelList_1_IndexOf_mF86770392070839AB16F994F40A7B380FAD741CB (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, Il2CppFullySharedGenericAny, const RuntimeMethod*))LowLevelList_1_IndexOf_mF86770392070839AB16F994F40A7B380FAD741CB_fshared)((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this, ___0_item, method);
}
inline int32_t Array_IndexOf_TisIl2CppFullySharedGenericAny_mA7F15146F50A93EE31005CC7C2C28B7DB0CE5708 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisIl2CppFullySharedGenericAny_mA7F15146F50A93EE31005CC7C2C28B7DB0CE5708_fshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void LowLevelList_1_Insert_mECC1247C269DC9FD2DE1250FE6418D768BA1CD16 (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))LowLevelList_1_Insert_mECC1247C269DC9FD2DE1250FE6418D768BA1CD16_fshared)((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this, ___0_index, ___1_item, method);
}
inline void LowLevelList_1_RemoveAt_mA9B8AB65576735830A4A79EFF4FCDD16A3E0BC2F (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))LowLevelList_1_RemoveAt_mA9B8AB65576735830A4A79EFF4FCDD16A3E0BC2F_fshared)(__this, ___0_index, method);
}
inline bool Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1 (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_fshared)((Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*)__this, ___0_obj, method);
}
inline void List_1__ctor_mE47F2A05D047C5831E195F8F2577C836892F8A76 (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_fshared)(__this, method);
}
inline void List_1_Add_mFD92FC4DF9C51E76D74F6584FB6C713C6A955AB7_inline (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_fshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline void Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1__ctor_m657BFA58DFD6AB5B1B4B69AA6E963CD569637EAD_fshared)(__this, method);
}
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* List_1_get_Item_m24182315BE1ED5609F0ACF39331685141AA53443 (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_fshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline void Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Queue_1_Enqueue_m9159DC6A9BC5528A3444329C408F4101004CF652_fshared)((Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this, (Il2CppFullySharedGenericAny)&___0_item, method);
}
inline int32_t Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_inline (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1_get_Count_mE6103188ACDEC07F90F2D2986554730D18029750_fshared_inline)(__this, method);
}
inline int32_t Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Queue_1_Dequeue_m80C152387A53656EC4AEF450BCBA9087DC51EEE3_fshared)((Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline int32_t List_1_get_Count_m5F28C6E82FCE45373CD5786E08E8BA6799F70422_inline (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
inline int32_t MatrixMxN_1_get_Length_mBC3776550911BA05734890369C64FEBEED87957E (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E*, const RuntimeMethod*))MatrixMxN_1_get_Length_mBC3776550911BA05734890369C64FEBEED87957E_fshared)(__this, method);
}
inline void MatrixMxN_1_CopyTo_mAA9DDC54A871349C3441EEF6611139614B4A8F68 (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E*, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*, const RuntimeMethod*))MatrixMxN_1_CopyTo_mAA9DDC54A871349C3441EEF6611139614B4A8F68_fshared)(__this, ___0_array, method);
}
inline void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_fshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_fshared_inline)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, ___0_index, il2cppRetVal, method);
}
inline void NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, Il2CppFullySharedGenericStruct, const RuntimeMethod*))NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_fshared_inline)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, ___0_index, ___1_value, method);
}
inline bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline)(__this, method);
}
inline void NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80_fshared)(__this, method);
}
inline void MatrixMxN_1_Dispose_m13DFF7EC0FB4F5CE59972F37B2178F083A7B788A (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, const RuntimeMethod* method)
{
	((  void (*) (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E*, const RuntimeMethod*))MatrixMxN_1_Dispose_m13DFF7EC0FB4F5CE59972F37B2178F083A7B788A_fshared)(__this, method);
}
inline void NativeArray_1_CopyTo_m6072353F8BA28E08B24828767C0A5AA713F0B307 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*, const RuntimeMethod*))NativeArray_1_CopyTo_m6072353F8BA28E08B24828767C0A5AA713F0B307_fshared)(__this, ___0_array, method);
}
inline ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 Memory_1_op_Implicit_m7216145178505C2CB2BA0E21CB95773BE1E6A7AF (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_memory, const RuntimeMethod* method)
{
	return ((  ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA, const RuntimeMethod*))Memory_1_op_Implicit_m7216145178505C2CB2BA0E21CB95773BE1E6A7AF_fshared)(___0_memory, method);
}
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ReadOnlyMemory_1_ToArray_m44807420910F7442D09F80751674CF30711B0764 (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*, const RuntimeMethod*))ReadOnlyMemory_1_ToArray_m44807420910F7442D09F80751674CF30711B0764_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
inline void Memory_1__ctor_m3743D2A1BDE7D9720706FF7CFE3C270432C4D381_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))Memory_1__ctor_m3743D2A1BDE7D9720706FF7CFE3C270432C4D381_fshared_inline)(__this, ___0_array, method);
}
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArraySegment_1_get_Array_mE4A35DFD81ABF447350B9A05C0F4BF0248A3CFF2_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))ArraySegment_1_get_Array_mE4A35DFD81ABF447350B9A05C0F4BF0248A3CFF2_fshared_inline)(__this, method);
}
inline int32_t ArraySegment_1_get_Offset_m4FAFF061AB36BF278BA8DC37B6D13718A06301E6_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))ArraySegment_1_get_Offset_m4FAFF061AB36BF278BA8DC37B6D13718A06301E6_fshared_inline)(__this, method);
}
inline int32_t ArraySegment_1_get_Count_mEF96248898C14F3687A5C72B920F841701E4E13C_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))ArraySegment_1_get_Count_mEF96248898C14F3687A5C72B920F841701E4E13C_fshared_inline)(__this, method);
}
inline void Memory_1__ctor_m5ABFBF1303AB4B2B8AD03A4586CC52B6098DCBE9_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))Memory_1__ctor_m5ABFBF1303AB4B2B8AD03A4586CC52B6098DCBE9_fshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Memory_1_get_Span_m86E7A7A0C72430FDB1B2A2BCEEAAEEF7E7F83596_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method)
{
	return ((  Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, const RuntimeMethod*))Memory_1_get_Span_m86E7A7A0C72430FDB1B2A2BCEEAAEEF7E7F83596_fshared_inline)(__this, method);
}
inline String_t* Span_1_ToString_m51B73F86825C26B44AF2E5C9152D807780EB84ED (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))Span_1_ToString_m51B73F86825C26B44AF2E5C9152D807780EB84ED_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
inline String_t* Memory_1_ToString_m8587562831B505E363617A254DE467726D4C6351 (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, const RuntimeMethod*))Memory_1_ToString_m8587562831B505E363617A254DE467726D4C6351_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
inline void Memory_1__ctor_m5F9E06AAB95D8F8AF62C3AD68DEC2F6716CDEE05_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, RuntimeObject* ___0_obj, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))Memory_1__ctor_m5F9E06AAB95D8F8AF62C3AD68DEC2F6716CDEE05_fshared_inline)(__this, ___0_obj, ___1_start, ___2_length, method);
}
inline Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, int32_t, int32_t, const RuntimeMethod*))Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_fshared_inline)(__this, ___0_start, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
inline void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_fshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void Span_1_CopyTo_m87850B36DC83BF310EC6136E6D14DC5634F96F05 (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, const RuntimeMethod*))Span_1_CopyTo_m87850B36DC83BF310EC6136E6D14DC5634F96F05_fshared)(__this, ___0_destination, method);
}
inline bool Span_1_TryCopyTo_m464C81DB101113B73DCD3F43C757D672CD893B37 (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, const RuntimeMethod*))Span_1_TryCopyTo_m464C81DB101113B73DCD3F43C757D672CD893B37_fshared)(__this, ___0_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC (RuntimeObject* ___0_value, int32_t ___1_type, const RuntimeMethod* method) ;
inline void* Unsafe_Add_TisIl2CppFullySharedGenericAny_m25356A475C0867B15741BD80812E4EBA4394F3C5 (void* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method)
{
	return ((  void* (*) (void*, int32_t, const RuntimeMethod*))Unsafe_Add_TisIl2CppFullySharedGenericAny_m25356A475C0867B15741BD80812E4EBA4394F3C5_fshared)(___0_source, ___1_elementOffset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryHandle__ctor_mBC4C2B7E7F10F5F93EFCF6A3A24D41CE79916C91 (MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD* __this, void* ___0_pointer, GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___1_handle, RuntimeObject* ___2_pinnable, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Span_1_ToArray_mBB0A9E11BBAA9FDE1D0C045FBA14F4CD3E84773E_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))Span_1_ToArray_mBB0A9E11BBAA9FDE1D0C045FBA14F4CD3E84773E_fshared_inline)(__this, method);
}
inline bool ReadOnlyMemory_1_Equals_mF7DA75997B4FFDFB2D6F953E8DC580EC3C941A61 (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* __this, ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*, ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4, const RuntimeMethod*))ReadOnlyMemory_1_Equals_mF7DA75997B4FFDFB2D6F953E8DC580EC3C941A61_fshared)(__this, ___0_other, method);
}
inline bool Memory_1_Equals_m2F882A89DBD535FFE48B39EBAF2626BA2AD36DA0 (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA, const RuntimeMethod*))Memory_1_Equals_m2F882A89DBD535FFE48B39EBAF2626BA2AD36DA0_fshared)(__this, ___0_other, method);
}
inline bool Memory_1_Equals_m03AA1FCD0E395B27BD53551C06FDC8ED34F10A9A (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, RuntimeObject*, const RuntimeMethod*))Memory_1_Equals_m03AA1FCD0E395B27BD53551C06FDC8ED34F10A9A_fshared)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
inline int32_t Memory_1_CombineHashCodes_mAF5A2B57827992A931D66D37B330E11439075F2B (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t, const RuntimeMethod*))Memory_1_CombineHashCodes_mAF5A2B57827992A931D66D37B330E11439075F2B_fshared)(___0_h1, ___1_h2, ___2_h3, method);
}
inline int32_t Memory_1_GetHashCode_m7A4C30D97D133B153A50D638A7D596CDA1BD11B5 (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*, const RuntimeMethod*))Memory_1_GetHashCode_m7A4C30D97D133B153A50D638A7D596CDA1BD11B5_fshared)(__this, method);
}
inline int32_t Memory_1_CombineHashCodes_mEB42331AAFED3F227F0E7520FA03E6804637F84F (int32_t ___0_left, int32_t ___1_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, const RuntimeMethod*))Memory_1_CombineHashCodes_mEB42331AAFED3F227F0E7520FA03E6804637F84F_fshared)(___0_left, ___1_right, method);
}
inline void PointerCaptureEventBase_1__ctor_m6504E51BF3B701E614E30F22DD97E3E2E68EB5CD (PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744* __this, const RuntimeMethod* method)
{
	((  void (*) (PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744*, const RuntimeMethod*))PointerCaptureEventBase_1__ctor_m6504E51BF3B701E614E30F22DD97E3E2E68EB5CD_gshared)(__this, method);
}
inline int32_t MouseEventBase_1_get_modifiers_mAD508E12A77C609CD1733864D36295A5FA8045EC_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, const RuntimeMethod*))MouseEventBase_1_get_modifiers_mAD508E12A77C609CD1733864D36295A5FA8045EC_gshared_inline)(__this, method);
}
inline RuntimeObject* MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, const RuntimeMethod*))MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_gshared_inline)(__this, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, const RuntimeMethod*))MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
inline Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 MouseEventBase_1_get_panelRay_m15BF165696F29D7A1F371DEC030C1E57CFA7E682_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, const RuntimeMethod*))MouseEventBase_1_get_panelRay_m15BF165696F29D7A1F371DEC030C1E57CFA7E682_gshared_inline)(__this, method);
}
inline void EventBase_1_Init_m810FE185606F5EB505285FEDEDB759E3DDB0E934 (EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F* __this, const RuntimeMethod* method)
{
	((  void (*) (EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F*, const RuntimeMethod*))EventBase_1_Init_m810FE185606F5EB505285FEDEDB759E3DDB0E934_gshared)(__this, method);
}
inline void MouseEventBase_1_LocalInit_m85C31C18C63B13944050FE4C8F328E12465C8132 (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, const RuntimeMethod*))MouseEventBase_1_LocalInit_m85C31C18C63B13944050FE4C8F328E12465C8132_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBase_set_propagation_m1F5D2A6582B8A4D64F84F0B71F90790FA2BF7E8C_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline void MouseEventBase_1_set_modifiers_m65A8AF799BAE5B62060B24F27A2FE897F503CF2B_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, int32_t, const RuntimeMethod*))MouseEventBase_1_set_modifiers_m65A8AF799BAE5B62060B24F27A2FE897F503CF2B_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
inline void MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_gshared_inline)(__this, ___0_value, method);
}
inline void MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_gshared_inline)(__this, ___0_value, method);
}
inline void MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_gshared_inline)(__this, ___0_value, method);
}
inline void MouseEventBase_1_set_clickCount_mB1575DBF43CE6DC0546CC215CF0CFEDB3C1D648E_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, int32_t, const RuntimeMethod*))MouseEventBase_1_set_clickCount_mB1575DBF43CE6DC0546CC215CF0CFEDB3C1D648E_gshared_inline)(__this, ___0_value, method);
}
inline void MouseEventBase_1_set_button_mBD212144434B278C49CFA531AD588260FC8CB868_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, int32_t, const RuntimeMethod*))MouseEventBase_1_set_button_mBD212144434B278C49CFA531AD588260FC8CB868_gshared_inline)(__this, ___0_value, method);
}
inline void MouseEventBase_1_set_pressedButtons_m9E6A63DB8A91D2C35470777AC0958915E3DBB476_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, int32_t, const RuntimeMethod*))MouseEventBase_1_set_pressedButtons_m9E6A63DB8A91D2C35470777AC0958915E3DBB476_gshared_inline)(__this, ___0_value, method);
}
inline void MouseEventBase_1_set_sourcePointerEvent_m65A5978FE221A03B997358CE3158649369FE87ED_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, RuntimeObject*, const RuntimeMethod*))MouseEventBase_1_set_sourcePointerEvent_m65A5978FE221A03B997358CE3158649369FE87ED_gshared_inline)(__this, ___0_value, method);
}
inline void MouseEventBase_1_set_recomputeTopElementUnderMouse_m5D34798DE02C9783D4F623F4F5BFAD3C254B51E5_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, bool ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, bool, const RuntimeMethod*))MouseEventBase_1_set_recomputeTopElementUnderMouse_m5D34798DE02C9783D4F623F4F5BFAD3C254B51E5_gshared_inline)(__this, ___0_value, method);
}
inline void MouseEventBase_1_set_panelRay_m2F11C8441C8E2382C3FC31A56453E221AE212536_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768, const RuntimeMethod*))MouseEventBase_1_set_panelRay_m2F11C8441C8E2382C3FC31A56453E221AE212536_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EventBase_get_currentTarget_m6F265B85FF86C35F62CFDF144B80B383DA9C503B_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_currentTarget_m778A667A791A9A67D61010F9B6A2A69D961C4C14 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VisualElementExtensions_WorldToLocal3D_m19BBC65BE9BCA191894DB2B26EE1E083C4D349F3 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ele, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_p, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_PreDispatch_mD788394C54A5400B25B423AF5DC41AA318A33DC4 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, RuntimeObject* ___0_panel, const RuntimeMethod* method) ;
inline bool MouseEventBase_1_get_recomputeTopElementUnderMouse_m014A5DC3028338BDB21CA9F1BAF1FEAC334220F7_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, const RuntimeMethod*))MouseEventBase_1_get_recomputeTopElementUnderMouse_m014A5DC3028338BDB21CA9F1BAF1FEAC334220F7_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerDeviceState_SavePointerPosition_mFF277BDE588CF09F2301872E64A5F32159ECB9EB (int32_t ___0_pointerId, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, RuntimeObject* ___2_panel, int32_t ___3_contextType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* BaseVisualElementPanel_RecomputeTopElementUnderPointer_mF3D6110A28FCCF72408FE62A21A4F57E4AC717AF (BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* __this, int32_t ___0_pointerId, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_pointerPos, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___2_triggerEvent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseVisualElementPanel_SetTopElementUnderPointer_m09591A0A171CEB0CAA023C6834B075D8E76ED5D9 (BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* __this, int32_t ___0_pointerId, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___1_element, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventBase_get_processed_mC99F191F8FCB064BEAC4500D80EBDDC400A461B7 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_mA460392021AC0A8210C9081E3C1C9652DBF32BF6 (bool ___0_condition, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventBase_get_isPropagationStopped_m36E1E4831DC04452D18B5339E2CAD8979B6BD6B3 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_StopPropagation_mEFC7E5AB7164157065FF19064A6ADCBB0D8AF6FB (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventBase_get_isImmediatePropagationStopped_m23F718E5FA5FB49FE12BA560B8362B95E0C7F5D3 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_StopImmediatePropagation_m2D6646624DDC02AE96657F5EAD5BC0361380A8DA (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventBase_get_processedByFocusController_mB2BCAFE58D45919AC9F5AC0AAEF059D8A640AE53 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_processedByFocusController_mEC214B328484B60572EEE867ACB5527396436155 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseVisualElementPanel_CommitElementUnderPointers_m41A1D0D2884A1C35218D330EE29DF393F75E7892 (BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_PostDispatch_mC830955EA32723BF0C10CCB37E01197CBADC07B3 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, RuntimeObject* ___0_panel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventDispatchUtilities_DispatchToCapturingElementOrElementUnderPointer_m1DB1C303971CD300023CEE6011018230F9047D4B (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_evt, BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___1_panel, int32_t ___2_pointerId, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_position, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* MouseEventBase_1_GetPooled_m13C3E655268E03D8CDA8E82FBC4C2B8B0C910511 (RuntimeObject* ___0_triggerEvent, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (RuntimeObject*, const RuntimeMethod*))MouseEventBase_1_GetPooled_m13C3E655268E03D8CDA8E82FBC4C2B8B0C910511_gshared)(___0_triggerEvent, method);
}
inline Il2CppSharedGenericObject* EventBase_1_GetPooled_mB805F9CE6D32D281426319C902A567F5AB35005C (const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (const RuntimeMethod*))EventBase_1_GetPooled_mB805F9CE6D32D281426319C902A567F5AB35005C_gshared)(method);
}
inline Il2CppSharedGenericObject* EventBase_1_GetPooled_m567E588C708778F6F41E2D69650776EBF437F74C (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_e, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*, const RuntimeMethod*))EventBase_1_GetPooled_m567E588C708778F6F41E2D69650776EBF437F74C_gshared)(___0_e, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* EventBase_get_elementTarget_mF6CFD6372FB247718797DB8927654F781821B94D_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* EventBase_get_imguiEvent_m45ABCDC6423D27EF44F7E29661B249D238765DB0 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_imguiEvent_m72FEAD8F7611927C077B45BAA719C15D39E9F4F4 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___0_value, const RuntimeMethod* method) ;
inline void EventBase_1__ctor_mACA9307C9EF30E9F5D55E8FA6AE6E58A99BA40CD (EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F* __this, const RuntimeMethod* method)
{
	((  void (*) (EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F*, const RuntimeMethod*))EventBase_1__ctor_mACA9307C9EF30E9F5D55E8FA6AE6E58A99BA40CD_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryLabel_SupportsAllocator_m2FBEAFCA15699420E8C5E42BA823DEE2999B6E6D (int32_t ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryLabel__ctor_m9EBEB7071302DF5EC12EB34EB2949E01617C5191 (MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2* __this, String_t* ___0_areaName, String_t* ___1_objectName, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryLabel_get_IsCreated_m8B3D6AC21CEADC1D4C4EF4A3D2B168EBFADC26BA (MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2* __this, const RuntimeMethod* method) ;
inline void NativeArray_1__ctor_m01C0164611F0F10354E4ABA539FA854E3A97F76A (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___1_label, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m01C0164611F0F10354E4ABA539FA854E3A97F76A_fshared)(__this, ___0_length, ___1_label, ___2_options, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_fshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
inline bool ReadOnly_get_IsCreated_mADD8624D940450CB4F64C20BCFEFAC0065E485A2_inline (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8*, const RuntimeMethod*))ReadOnly_get_IsCreated_mADD8624D940450CB4F64C20BCFEFAC0065E485A2_fshared_inline)(__this, method);
}
inline __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ReadOnly_ToArray_mFD80D7B7BE13A74B4BE53E54CE3BCB5300F46D27 (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8* __this, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* (*) (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8*, const RuntimeMethod*))ReadOnly_ToArray_mFD80D7B7BE13A74B4BE53E54CE3BCB5300F46D27_fshared)(__this, method);
}
inline SharedStatic_1_tEC5F09652230C531A3C62C83CB579D41179BD182 SharedStatic_1_GetOrCreate_TisNativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18_m8F25A13283F3A46D6CD00E87F323C3C901EE3CD2 (uint32_t ___0_alignment, const RuntimeMethod* method)
{
	return ((  SharedStatic_1_tEC5F09652230C531A3C62C83CB579D41179BD182 (*) (uint32_t, const RuntimeMethod*))SharedStatic_1_GetOrCreate_TisIl2CppFullySharedGenericAny_m9CA632091AD248050A66593B9E90C291765FD691_fshared)(___0_alignment, method);
}
inline void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_fshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_item, method);
}
inline void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_fshared_inline)(___0_source, ___1_index, il2cppRetVal, method);
}
inline void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericStruct ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_fshared_inline)(___0_destination, ___1_index, (Il2CppFullySharedGenericAny)___2_value, method);
}
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_inline (const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_fshared_inline)(method);
}
inline void Buffer_Memmove_TisIl2CppFullySharedGenericAny_m7051201F0F2C986AB0084FB4A24BEE4D4733C5EB (Il2CppFullySharedGenericAny* ___0_destination, Il2CppFullySharedGenericAny* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisIl2CppFullySharedGenericAny_m7051201F0F2C986AB0084FB4A24BEE4D4733C5EB_fshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline int32_t UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_fshared_inline)(method);
}
inline void UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_fshared_inline)(___0_source, ___1_index, il2cppRetVal, method);
}
inline void UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_fshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11210
// Method Definition Index: 11211
// Method Definition Index: 11212
// Method Definition Index: 11213
// Method Definition Index: 11214
// Method Definition Index: 11215
// Method Definition Index: 11216
// Method Definition Index: 11217
// Method Definition Index: 11218
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11210
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_m6893497702070CC68AC3BAB751834E9FF68C4528_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* L_0 = (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		DefaultComparer_1__ctor_m3125A41749298C596BE7DAE59E0801F21BDE1482(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		LowLevelDictionary_2__ctor_m2976D36B6439669E09FF4616F9EB6AAB8DDDB62A(__this, ((int32_t)17), (RuntimeObject*)L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
// Method Definition Index: 11211
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_m2976D36B6439669E09FF4616F9EB6AAB8DDDB62A_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___1_comparer;
		__this->____comparer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_0);
		int32_t L_1 = ___0_capacity;
		LowLevelDictionary_2_Clear_m8EC37682AC495C0E5B8EB7CA373B7D9FE89616D3(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
// Method Definition Index: 11212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_set_Item_mCA9C09B6AFCF6CC5CE6A0C40EA78FC75689EF04D_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const uint32_t SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_4 = L_0;
	const Il2CppFullySharedGenericAny L_10 = L_0;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_12 = L_5;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
	const Il2CppFullySharedGenericAny L_11 = L_9;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
	//<source_info:<no-source>:1>
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		int32_t L_3 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_6;
		L_6 = LowLevelDictionary_2_Find_m179CAB1400AF502A22F57DE2B32B403D4BE04671(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? il2cpp_codegen_memcpy(L_5, L_4, SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9): *(void**)L_4), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		V_0 = L_6;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_8 = V_0;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? ___1_value : &___1_value), SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		NullCheck(L_8);
		il2cpp_codegen_write_field_data<true>(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9), L_9, SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? ___1_value : &___1_value), SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_14;
		L_14 = LowLevelDictionary_2_UncheckedAdd_mFD09849DDF8DDA1917BFE11E1C65CE60CDDA2D6F(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? il2cpp_codegen_memcpy(L_12, L_10, SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? il2cpp_codegen_memcpy(L_13, L_11, SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900): *(void**)L_11), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return;
	}
}
// Method Definition Index: 11213
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_Clear_m8EC37682AC495C0E5B8EB7CA373B7D9FE89616D3_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = ___0_capacity;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_2 = (EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)(EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_1);
		__this->____buckets = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_2);
		__this->____numEntries = 0;
		return;
	}
}
// Method Definition Index: 11214
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelDictionary_2_Remove_m70E88A5B684A3A944B6569781B7B3918196A98E6_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_3 = L_0;
	const Il2CppFullySharedGenericAny L_11 = L_0;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_13 = L_4;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_1 = NULL;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		int32_t L_5;
		L_5 = LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? il2cpp_codegen_memcpy(L_4, L_3, SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9): *(void**)L_3), 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		V_0 = L_5;
		V_1 = (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)NULL;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_6 = __this->____buckets;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		goto IL_0083;
	}

IL_0029:
	{
		CHECK_PAUSE_POINT;
		RuntimeObject* L_10 = __this->____comparer;
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_12 = V_2;
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14)), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		NullCheck(L_10);
		bool L_14;
		L_14 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_13: *(void**)L_13));
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_15 = V_1;
		if (L_15)
		{
			goto IL_0050;
		}
	}
	{
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_16 = __this->____buckets;
		int32_t L_17 = V_0;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_18 = V_2;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_19 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_field_data_pointer(L_18, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 16));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)L_19);
		goto IL_005c;
	}

IL_0050:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_20 = V_1;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_21 = V_2;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_22 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_field_data_pointer(L_21, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 16));
		NullCheck(L_20);
		il2cpp_codegen_write_field_data<Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, true>(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 16), L_22);
	}

IL_005c:
	{
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		int32_t L_24 = __this->____numEntries;
		__this->____numEntries = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
		return (bool)1;
	}

IL_007a:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_25 = V_2;
		V_1 = L_25;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_26 = V_2;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_27 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_field_data_pointer(L_26, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 16));
		V_2 = L_27;
	}

IL_0083:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_28 = V_2;
		if (L_28)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}
}
// Method Definition Index: 11215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* LowLevelDictionary_2_Find_m179CAB1400AF502A22F57DE2B32B403D4BE04671_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_8 = L_0;
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_10 = L_1;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		int32_t L_2;
		L_2 = LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9): *(void**)L_0), 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		V_0 = L_2;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_3 = __this->____buckets;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		goto IL_0031;
	}

IL_0014:
	{
		CHECK_PAUSE_POINT;
		RuntimeObject* L_7 = __this->____comparer;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_9 = V_1;
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_field_data_pointer(L_9, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14)), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		NullCheck(L_7);
		bool L_11;
		L_11 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_8: *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_10: *(void**)L_10));
		if (!L_11)
		{
			goto IL_002a;
		}
	}
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_12 = V_1;
		return L_12;
	}

IL_002a:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_13 = V_1;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_14 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_field_data_pointer(L_13, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 16));
		V_1 = L_14;
	}

IL_0031:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_15 = V_1;
		if (L_15)
		{
			goto IL_0014;
		}
	}
	{
		return (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)NULL;
	}
}
// Method Definition Index: 11216
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* LowLevelDictionary_2_UncheckedAdd_mFD09849DDF8DDA1917BFE11E1C65CE60CDDA2D6F_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const uint32_t SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
	//<source_info:<no-source>:1>
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_0 = NULL;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_0 = (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8));
		Entry__ctor_m50DA99B3EE92A0B3C7CBF76172DCF3DDDFCB2C93(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		V_0 = L_0;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_1 = V_0;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		NullCheck(L_1);
		il2cpp_codegen_write_field_data<true>(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14), L_2, SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_3 = V_0;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? ___1_value : &___1_value), SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		NullCheck(L_3);
		il2cpp_codegen_write_field_data<true>(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9), L_4, SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		int32_t L_7;
		L_7 = LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? il2cpp_codegen_memcpy(L_6, L_5, SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9): *(void**)L_5), 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		V_1 = L_7;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_8 = V_0;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		il2cpp_codegen_write_field_data<Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, true>(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 16), L_12);
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_13 = __this->____buckets;
		int32_t L_14 = V_1;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_15 = V_0;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)L_15);
		int32_t L_16 = __this->____numEntries;
		__this->____numEntries = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____numEntries;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_18 = __this->____buckets;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		if ((((int32_t)L_17) <= ((int32_t)((int32_t)il2cpp_codegen_multiply(L_19, 2)))))
		{
			goto IL_005a;
		}
	}
	{
		LowLevelDictionary_2_ExpandBuckets_m187E4F5B88425903219951B37753A533F3AED6FB(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
	}

IL_005a:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_20 = V_0;
		return L_20;
	}
}
// Method Definition Index: 11217
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_ExpandBuckets_m187E4F5B88425903219951B37753A533F3AED6FB_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* V_1 = NULL;
	int32_t V_2 = 0;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_3 = NULL;
	int32_t V_4 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_0 = __this->____buckets;
			NullCheck(L_0);
			int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
			V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, 2)), 1));
			int32_t L_2 = V_0;
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_3 = (EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)(EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (uint32_t)L_2);
			V_1 = L_3;
			V_2 = 0;
			goto IL_004f_1;
		}

IL_0018_1:
		{
			CHECK_PAUSE_POINT;
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_4 = __this->____buckets;
			int32_t L_5 = V_2;
			NullCheck(L_4);
			int32_t L_6 = L_5;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
			V_3 = L_7;
			goto IL_0048_1;
		}

IL_0023_1:
		{
			CHECK_PAUSE_POINT;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_8 = V_3;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_9 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_field_data_pointer(L_8, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 16));
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_10 = V_3;
			il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(L_10, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14)), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
			int32_t L_12 = V_0;
			int32_t L_14;
			L_14 = LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? il2cpp_codegen_memcpy(L_13, L_11, SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9): *(void**)L_11), L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
			V_4 = L_14;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_15 = V_3;
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_16 = V_1;
			int32_t L_17 = V_4;
			NullCheck(L_16);
			int32_t L_18 = L_17;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
			NullCheck(L_15);
			il2cpp_codegen_write_field_data<Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, true>(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 16), L_19);
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_20 = V_1;
			int32_t L_21 = V_4;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_22 = V_3;
			NullCheck(L_20);
			(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)L_22);
			V_3 = L_9;
		}

IL_0048_1:
		{
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_23 = V_3;
			if (L_23)
			{
				goto IL_0023_1;
			}
		}
		{
			int32_t L_24 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		}

IL_004f_1:
		{
			int32_t L_25 = V_2;
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_26 = __this->____buckets;
			NullCheck(L_26);
			int32_t L_27 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_26)->max_length),NULL));
			if ((((int32_t)L_25) < ((int32_t)L_27)))
			{
				goto IL_0018_1;
			}
		}
		{
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_28 = V_1;
			__this->____buckets = L_28;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_28);
			goto IL_0066;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0063;
		}
		throw e;
	}

CATCH_0063:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_29 = ((OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)IL2CPP_GET_ACTIVE_EXCEPTION(OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0066;
	}

IL_0066:
	{
		return;
	}
}
// Method Definition Index: 11218
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, int32_t ___1_numBuckets, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		RuntimeObject* L_0 = __this->____comparer;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_1: *(void**)L_1));
		int32_t L_3 = ___1_numBuckets;
		if (!L_3)
		{
			G_B2_0 = ((int32_t)(L_2&((int32_t)2147483647LL)));
			goto IL_0018;
		}
		G_B1_0 = ((int32_t)(L_2&((int32_t)2147483647LL)));
	}
	{
		int32_t L_4 = ___1_numBuckets;
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_0020;
	}

IL_0018:
	{
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_0020:
	{
		return ((int32_t)(G_B3_1%G_B3_0));
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
// Method Definition Index: 11301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelListWithIList_1__ctor_m7AB0E8E5B20FFDC048A5EF35FE2D5BFC411168BE_fshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tED7CDE753F0907DE09A3A0E3D98369E9AAC368D0_StaticInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		CHECKED_LOCAL_INIT(LowLevelList_1_tED7CDE753F0907DE09A3A0E3D98369E9AAC368D0_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		LowLevelList_1__ctor_mD3CD763C70C97727954E6E8A5A8E140EF55EDE9F((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelListWithIList_1__ctor_m4B122A24C900A82393070E3BC47A5195E41D0166_fshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tED7CDE753F0907DE09A3A0E3D98369E9AAC368D0_StaticInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(LowLevelList_1_tED7CDE753F0907DE09A3A0E3D98369E9AAC368D0_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		LowLevelList_1__ctor_mCDEF1A5F77BCA815F0CDF2C6EB9E91D3909BC5BB((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
// Method Definition Index: 11303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelListWithIList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4370070FFE2C281C957687075D458D7367685370_fshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)0;
	}
}
// Method Definition Index: 11304
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LowLevelListWithIList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2192B77A7D1721166B77434FAE475580AEABF35A_fshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0 L_0 = alloca(SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		memset(L_0, 0, SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
		Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775((Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*)L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), L_0);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 11305
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LowLevelListWithIList_1_System_Collections_IEnumerable_GetEnumerator_mC47144515E8A260A0737260ED6A11C0D5C3B74DE_fshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0 L_0 = alloca(SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		memset(L_0, 0, SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
		Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775((Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*)L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), L_0);
		return (RuntimeObject*)L_1;
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
// Method Definition Index: 11281
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mD3CD763C70C97727954E6E8A5A8E140EF55EDE9F_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECKED_LOCAL_INIT(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11282
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mCDEF1A5F77BCA815F0CDF2C6EB9E91D3909BC5BB_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0015:
	{
		int32_t L_2 = ___0_capacity;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		CHECKED_LOCAL_INIT(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_3);
		return;
	}

IL_0024:
	{
		int32_t L_4 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_4);
		__this->____items = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_5);
		return;
	}
}
// Method Definition Index: 11283
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_get_Capacity_mE34B1F6427145BD1BC7EC9E5F2290027CB634FAC_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		return L_1;
	}
}
// Method Definition Index: 11284
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Capacity_m72ED35E6CF83B329A983773E2DBE542A235CA53E_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit);
	//<source_info:<no-source>:1>
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = ___0_value;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_7 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		V_0 = L_8;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_0046:
	{
		CHECKED_LOCAL_INIT(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0051:
	{
		return;
	}
}
// Method Definition Index: 11285
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_get_Count_m606E086DB7EE87F6497FC018F90AE7988456C6A4_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 11286
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_get_Item_mE1B6F0331605C882D5552283F3E039DAB1CFE249_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		return;
	}
}
// Method Definition Index: 11287
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Item_m43802D3D871A9B9E33879921E12CC84BADF9D917_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? ___1_value : &___1_value), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_3);
		il2cpp_codegen_memcpy((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), L_5, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), (void**)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), (void*)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// Method Definition Index: 11288
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Add_mA79D24F8FC36DBAE441CD350B69E58E559F3A77A_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = __this->____size;
		LowLevelList_1_EnsureCapacity_mE56EA3BECD245513463EE874D0025C6A20FBC309(__this, ((int32_t)il2cpp_codegen_add(L_3, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_001e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		int32_t L_5 = __this->____size;
		V_0 = L_5;
		int32_t L_6 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_0;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
// Method Definition Index: 11289
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_EnsureCapacity_mE56EA3BECD245513463EE874D0025C6A20FBC309_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B4_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002f;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		NullCheck(L_3);
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		int32_t L_7 = ___0_min;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_8 = ___0_min;
		V_0 = L_8;
	}

IL_0028:
	{
		int32_t L_9 = V_0;
		LowLevelList_1_set_Capacity_m72ED35E6CF83B329A983773E2DBE542A235CA53E(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
	}

IL_002f:
	{
		return;
	}
}
// Method Definition Index: 11290
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_AddRange_mBE88210260B339F084E453A719D44DBD91025233_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		LowLevelList_1_InsertRange_m10381E430332334B43213A556876E789C677A9B0(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		return;
	}
}
// Method Definition Index: 11291
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Clear_mE1C2D67C7C00C6323E9825A0ED4946C0C0EAD499_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____size;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		int32_t L_2 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		__this->____size = 0;
	}

IL_0022:
	{
		int32_t L_3 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
// Method Definition Index: 11292
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelList_1_Contains_mF7E0C9FBFE03FCE5AB7A8A5F2372A6398AC0F027_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_10 = L_0;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), L_0);
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		V_0 = 0;
		goto IL_0025;
	}

IL_000c:
	{
		CHECK_PAUSE_POINT;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		il2cpp_codegen_memcpy(L_5, (L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		bool L_6 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), L_5);
		if (L_6)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0025:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = __this->____size;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_0030:
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		int32_t L_12;
		L_12 = LowLevelList_1_IndexOf_mF86770392070839AB16F994F40A7B380FAD741CB(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? il2cpp_codegen_memcpy(L_11, L_10, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159): *(void**)L_10), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		return (bool)1;
	}

IL_003c:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11293
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_CopyTo_mF495B6C8191B5C8929B60BC9F7502FE518DC81DE_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
// Method Definition Index: 11294
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_IndexOf_mF86770392070839AB16F994F40A7B380FAD741CB_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		int32_t L_2 = __this->____size;
		int32_t L_4;
		L_4 = Array_IndexOf_TisIl2CppFullySharedGenericAny_mA7F15146F50A93EE31005CC7C2C28B7DB0CE5708(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159): *(void**)L_1), 0, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return L_4;
	}
}
// Method Definition Index: 11295
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Insert_mECC1247C269DC9FD2DE1250FE6418D768BA1CD16_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_6 = __this->____size;
		LowLevelList_1_EnsureCapacity_mE56EA3BECD245513463EE874D0025C6A20FBC309(__this, ((int32_t)il2cpp_codegen_add(L_6, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_0032:
	{
		int32_t L_7 = ___0_index;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0058;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = __this->____size;
		int32_t L_14 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
	}

IL_0058:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = __this->____items;
		int32_t L_16 = ___0_index;
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? ___1_item : &___1_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_15);
		il2cpp_codegen_memcpy((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)), L_17, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), (void**)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)), (void*)L_17);
		int32_t L_18 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return;
	}
}
// Method Definition Index: 11296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_InsertRange_m10381E430332334B43213A556876E789C677A9B0_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Il2CppFullySharedGenericAny L_50 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	const Il2CppFullySharedGenericAny L_51 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->____size;
		if ((!(((uint32_t)L_2) > ((uint32_t)L_3))))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)));
		RuntimeObject* L_6 = V_0;
		if (!L_6)
		{
			goto IL_00d8;
		}
	}
	{
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 10), L_7);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_10 = __this->____size;
		int32_t L_11 = V_1;
		LowLevelList_1_EnsureCapacity_mE56EA3BECD245513463EE874D0025C6A20FBC309(__this, ((int32_t)il2cpp_codegen_add(L_10, L_11)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		int32_t L_12 = ___0_index;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_0071;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = __this->____items;
		int32_t L_17 = ___0_index;
		int32_t L_18 = V_1;
		int32_t L_19 = __this->____size;
		int32_t L_20 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, L_15, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_add(L_17, L_18)), ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), NULL);
	}

IL_0071:
	{
		RuntimeObject* L_21 = V_0;
		if ((!(((RuntimeObject*)(LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this) == ((RuntimeObject*)(RuntimeObject*)L_21))))
		{
			goto IL_00aa;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = __this->____items;
		int32_t L_24 = ___0_index;
		int32_t L_25 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_22, 0, (RuntimeArray*)L_23, L_24, L_25, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26 = __this->____items;
		int32_t L_27 = ___0_index;
		int32_t L_28 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_29 = __this->____items;
		int32_t L_30 = ___0_index;
		int32_t L_31 = __this->____size;
		int32_t L_32 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_26, ((int32_t)il2cpp_codegen_add(L_27, L_28)), (RuntimeArray*)L_29, ((int32_t)il2cpp_codegen_multiply(L_30, 2)), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), NULL);
		goto IL_00c8;
	}

IL_00aa:
	{
		int32_t L_33 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_34 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_33);
		V_2 = L_34;
		RuntimeObject* L_35 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_36 = V_2;
		NullCheck(L_35);
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 10), L_35, L_36, 0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_37 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_38 = __this->____items;
		int32_t L_39 = ___0_index;
		int32_t L_40 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, (RuntimeArray*)L_38, L_39, L_40, NULL);
	}

IL_00c8:
	{
		int32_t L_41 = __this->____size;
		int32_t L_42 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_41, L_42));
		goto IL_0107;
	}

IL_00d8:
	{
		RuntimeObject* L_43 = ___1_collection;
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_43);
		V_3 = L_44;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fd:
			{
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					RuntimeObject* L_45 = V_3;
					if (!L_45)
					{
						goto IL_0106;
					}
				}
				{
					RuntimeObject* L_46 = V_3;
					NullCheck((RuntimeObject*)L_46);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				}

IL_0106:
				{
					return;
				}
			}
		});
		try
		{
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				goto IL_00f3_1;
			}

IL_00e1_1:
			{
				CHECK_PAUSE_POINT;
				int32_t L_47 = ___0_index;
				int32_t L_48 = L_47;
				___0_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
				RuntimeObject* L_49 = V_3;
				NullCheck(L_49);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), L_49, (Il2CppFullySharedGenericAny*)L_50);
				LowLevelList_1_Insert_mECC1247C269DC9FD2DE1250FE6418D768BA1CD16(__this, L_48, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? il2cpp_codegen_memcpy(L_51, L_50, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159): *(void**)L_50), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
			}

IL_00f3_1:
			{
				RuntimeObject* L_52 = V_3;
				NullCheck((RuntimeObject*)L_52);
				bool L_53;
				L_53 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_52);
				if (L_53)
				{
					goto IL_00e1_1;
				}
			}
			{
				goto IL_0107;
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

IL_0107:
	{
		int32_t L_54 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_54, 1));
		return;
	}
}
// Method Definition Index: 11297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelList_1_Remove_m9CA49DFEEE8490053D50ACB37A61A63ECFDF6164_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		int32_t L_2;
		L_2 = LowLevelList_1_IndexOf_mF86770392070839AB16F994F40A7B380FAD741CB(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159): *(void**)L_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_4 = V_0;
		LowLevelList_1_RemoveAt_mA9B8AB65576735830A4A79EFF4FCDD16A3E0BC2F(__this, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_RemoveAll_m7EA2BB7ADDD12BF71851BEF2E164FD40AD97757E_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	const Il2CppFullySharedGenericAny L_21 = L_9;
	const Il2CppFullySharedGenericAny L_32 = L_9;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0016;
	}

IL_0012:
	{
		CHECK_PAUSE_POINT;
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_5 = ___0_match;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____items;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_5);
		bool L_10;
		L_10 = Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? L_9: *(void**)L_9), NULL);
		if (!L_10)
		{
			goto IL_0012;
		}
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->____size;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_003e;
		}
	}
	{
		return 0;
	}

IL_003e:
	{
		int32_t L_13 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		goto IL_008e;
	}

IL_0044:
	{
		CHECK_PAUSE_POINT;
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0048:
	{
		CHECK_PAUSE_POINT;
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____size;
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_0065;
		}
	}
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_17 = ___0_match;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = __this->____items;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		il2cpp_codegen_memcpy(L_21, (L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_17);
		bool L_22;
		L_22 = Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? L_21: *(void**)L_21), NULL);
		if (L_22)
		{
			goto IL_0044;
		}
	}

IL_0065:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = __this->____size;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_008e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = __this->____items;
		int32_t L_26 = V_0;
		int32_t L_27 = L_26;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_28 = __this->____items;
		int32_t L_29 = V_1;
		int32_t L_30 = L_29;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		NullCheck(L_28);
		int32_t L_31 = L_30;
		il2cpp_codegen_memcpy(L_32, (L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_25);
		il2cpp_codegen_memcpy((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)), L_32, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), (void**)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)), (void*)L_32);
	}

IL_008e:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = __this->____size;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0048;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_35 = __this->____items;
		int32_t L_36 = V_0;
		int32_t L_37 = __this->____size;
		int32_t L_38 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_35, L_36, ((int32_t)il2cpp_codegen_subtract(L_37, L_38)), NULL);
		int32_t L_39 = __this->____size;
		int32_t L_40 = V_0;
		int32_t L_41 = V_0;
		__this->____size = L_41;
		int32_t L_42 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_42, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_39, L_40));
	}
}
// Method Definition Index: 11299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_RemoveAt_mA9B8AB65576735830A4A79EFF4FCDD16A3E0BC2F_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	memset(V_0, 0, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->____size;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0048;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		int32_t L_11 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), (RuntimeArray*)L_8, L_9, ((int32_t)il2cpp_codegen_subtract(L_10, L_11)), NULL);
	}

IL_0048:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____items;
		int32_t L_13 = __this->____size;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		il2cpp_codegen_memcpy(L_14, V_0, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_12);
		il2cpp_codegen_memcpy((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), L_14, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), (void**)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_14);
		int32_t L_15 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_15, 1));
		return;
	}
}
// Method Definition Index: 11300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__cctor_m663DD9A631105882B519C495A2D1077501A0FF6E_fshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
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
// Method Definition Index: 22895
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectStore_1__ctor_m40B48A3F93602CA3B11082174419F92C87991ED4_fshared (ManagedObjectStore_1_tEE26F86DCDAA8777D74E172B69D8B59A9A1E96A9* __this, int32_t ___0_chunkSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_chunkSize));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96906));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96907));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:54>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96908));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96909));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96909));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:56>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96910));
		int32_t L_0 = ___0_chunkSize;
		__this->___m_ChunkSize = L_0;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:57>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96911));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96912));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_1 = (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		List_1__ctor_mE47F2A05D047C5831E195F8F2577C836892F8A76(L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96912));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_2 = L_1;
		int32_t L_3 = __this->___m_ChunkSize;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (uint32_t)L_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96913));
		NullCheck(L_2);
		List_1_Add_mFD92FC4DF9C51E76D74F6584FB6C713C6A955AB7_inline(L_2, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96913));
		__this->___m_Chunks = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Chunks), (void*)L_2);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:62>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96914));
		__this->___m_Length = 1;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:64>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96915));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96916));
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_5 = (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*)il2cpp_codegen_object_new(Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
		Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D(L_5, Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96916));
		__this->___m_Free = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Free), (void*)L_5);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:65>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96917));
		return;
	}
}
// Method Definition Index: 22896
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectStore_1_GetValue_mE2FBA0F28BC33EEC4E02CE2979EA177A50E7F634_fshared (ManagedObjectStore_1_tEE26F86DCDAA8777D74E172B69D8B59A9A1E96A9* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	const Il2CppFullySharedGenericAny L_11 = L_1;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	memset(V_2, 0, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96918));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96919));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:69>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96920));
		int32_t L_0 = ___0_index;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:70>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96921));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		il2cpp_codegen_memcpy(L_1, V_2, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		return;
	}

IL_000d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:72>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96922));
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->___m_ChunkSize;
		V_0 = ((int32_t)(L_2/L_3));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:73>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96923));
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___m_ChunkSize;
		V_1 = ((int32_t)(L_4%L_5));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:75>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96924));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_6 = __this->___m_Chunks;
		int32_t L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96925));
		NullCheck(L_6);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8;
		L_8 = List_1_get_Item_m24182315BE1ED5609F0ACF39331685141AA53443(L_6, L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96925));
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		il2cpp_codegen_memcpy(il2cppRetVal, L_11, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		return;
	}
}
// Method Definition Index: 22897
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectStore_1_UpdateValue_mA68231A6328DCD1A80E8B50EAB8B031C382F071E_fshared (ManagedObjectStore_1_tEE26F86DCDAA8777D74E172B69D8B59A9A1E96A9* __this, int32_t* ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	const Il2CppFullySharedGenericAny L_14 = L_2;
	const Il2CppFullySharedGenericAny L_28 = L_2;
	const Il2CppFullySharedGenericAny L_30 = L_2;
	const Il2CppFullySharedGenericAny L_47 = L_2;
	const Il2CppFullySharedGenericAny L_70 = L_2;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	memset(V_4, 0, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___1_value : &___1_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_5), (&V_6), (&V_7), (&V_8));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96926));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96927));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:80>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96928));
		int32_t* L_0 = ___0_index;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		if (!L_1)
		{
			goto IL_0075;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:82>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96929));
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___1_value : &___1_value), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_2);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:84>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96930));
		int32_t* L_4 = ___0_index;
		int32_t L_5 = il2cpp_codegen_ldind<int32_t, int32_t>(L_4);
		int32_t L_6 = __this->___m_ChunkSize;
		V_0 = ((int32_t)(L_5/L_6));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:85>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96931));
		int32_t* L_7 = ___0_index;
		int32_t L_8 = il2cpp_codegen_ldind<int32_t, int32_t>(L_7);
		int32_t L_9 = __this->___m_ChunkSize;
		V_1 = ((int32_t)(L_8%L_9));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:88>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96932));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_10 = __this->___m_Chunks;
		int32_t L_11 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96933));
		NullCheck(L_10);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12;
		L_12 = List_1_get_Item_m24182315BE1ED5609F0ACF39331685141AA53443(L_10, L_11, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96933));
		int32_t L_13 = V_1;
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___1_value : &___1_value), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		NullCheck(L_12);
		il2cpp_codegen_memcpy((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), L_14, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), (void**)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_14);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96934));
		return;
	}

IL_0034:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:93>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96935));
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_15 = __this->___m_Free;
		int32_t* L_16 = ___0_index;
		int32_t L_17 = il2cpp_codegen_ldind<int32_t, int32_t>(L_16);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96936));
		NullCheck(L_15);
		Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A(L_15, L_17, Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96936));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:95>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96937));
		int32_t* L_18 = ___0_index;
		int32_t L_19 = il2cpp_codegen_ldind<int32_t, int32_t>(L_18);
		int32_t L_20 = __this->___m_ChunkSize;
		V_2 = ((int32_t)(L_19/L_20));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:96>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96938));
		int32_t* L_21 = ___0_index;
		int32_t L_22 = il2cpp_codegen_ldind<int32_t, int32_t>(L_21);
		int32_t L_23 = __this->___m_ChunkSize;
		V_3 = ((int32_t)(L_22%L_23));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:98>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96939));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_24 = __this->___m_Chunks;
		int32_t L_25 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96940));
		NullCheck(L_24);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26;
		L_26 = List_1_get_Item_m24182315BE1ED5609F0ACF39331685141AA53443(L_24, L_25, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96940));
		int32_t L_27 = V_3;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		il2cpp_codegen_memcpy(L_28, V_4, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		NullCheck(L_26);
		il2cpp_codegen_memcpy((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)), L_28, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), (void**)(L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)), (void*)L_28);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:100>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96941));
		int32_t* L_29 = ___0_index;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_29, (int32_t)0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96942));
		return;
	}

IL_0075:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:103>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96943));
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___1_value : &___1_value), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		bool L_31 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_30);
		if (!L_31)
		{
			goto IL_0134;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:106>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96944));
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_32 = __this->___m_Free;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96945));
		NullCheck(L_32);
		int32_t L_33;
		L_33 = Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_inline(L_32, Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96945));
		if ((((int32_t)L_33) <= ((int32_t)0)))
		{
			goto IL_00c7;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:109>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96946));
		int32_t* L_34 = ___0_index;
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_35 = __this->___m_Free;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96947));
		NullCheck(L_35);
		int32_t L_36;
		L_36 = Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650(L_35, Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96947));
		il2cpp_codegen_stind<int32_t>((int32_t*)L_34, (int32_t)L_36);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:111>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96948));
		int32_t* L_37 = ___0_index;
		int32_t L_38 = il2cpp_codegen_ldind<int32_t, int32_t>(L_37);
		int32_t L_39 = __this->___m_ChunkSize;
		V_5 = ((int32_t)(L_38/L_39));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:112>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96949));
		int32_t* L_40 = ___0_index;
		int32_t L_41 = il2cpp_codegen_ldind<int32_t, int32_t>(L_40);
		int32_t L_42 = __this->___m_ChunkSize;
		V_6 = ((int32_t)(L_41%L_42));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:114>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96950));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_43 = __this->___m_Chunks;
		int32_t L_44 = V_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96951));
		NullCheck(L_43);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_45;
		L_45 = List_1_get_Item_m24182315BE1ED5609F0ACF39331685141AA53443(L_43, L_44, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96951));
		int32_t L_46 = V_6;
		il2cpp_codegen_memcpy(L_47, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___1_value : &___1_value), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		NullCheck(L_45);
		il2cpp_codegen_memcpy((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)), L_47, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), (void**)(L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)), (void*)L_47);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96952));
		return;
	}

IL_00c7:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:119>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96953));
		int32_t* L_48 = ___0_index;
		int32_t L_49 = __this->___m_Length;
		V_9 = L_49;
		int32_t L_50 = V_9;
		__this->___m_Length = ((int32_t)il2cpp_codegen_add(L_50, 1));
		int32_t L_51 = V_9;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_48, (int32_t)L_51);
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:121>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96954));
		int32_t* L_52 = ___0_index;
		int32_t L_53 = il2cpp_codegen_ldind<int32_t, int32_t>(L_52);
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_54 = __this->___m_Chunks;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96955));
		NullCheck(L_54);
		int32_t L_55;
		L_55 = List_1_get_Count_m5F28C6E82FCE45373CD5786E08E8BA6799F70422_inline(L_54, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96955));
		int32_t L_56 = __this->___m_ChunkSize;
		if ((((int32_t)L_53) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_55, L_56)))))
		{
			goto IL_0109;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:122>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96956));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_57 = __this->___m_Chunks;
		int32_t L_58 = __this->___m_ChunkSize;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_59 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (uint32_t)L_58);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96957));
		NullCheck(L_57);
		List_1_Add_mFD92FC4DF9C51E76D74F6584FB6C713C6A955AB7_inline(L_57, L_59, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96957));
	}

IL_0109:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:124>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96958));
		int32_t* L_60 = ___0_index;
		int32_t L_61 = il2cpp_codegen_ldind<int32_t, int32_t>(L_60);
		int32_t L_62 = __this->___m_ChunkSize;
		V_7 = ((int32_t)(L_61/L_62));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:125>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96959));
		int32_t* L_63 = ___0_index;
		int32_t L_64 = il2cpp_codegen_ldind<int32_t, int32_t>(L_63);
		int32_t L_65 = __this->___m_ChunkSize;
		V_8 = ((int32_t)(L_64%L_65));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:127>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96960));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_66 = __this->___m_Chunks;
		int32_t L_67 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96961));
		NullCheck(L_66);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_68;
		L_68 = List_1_get_Item_m24182315BE1ED5609F0ACF39331685141AA53443(L_66, L_67, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96961));
		int32_t L_69 = V_8;
		il2cpp_codegen_memcpy(L_70, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___1_value : &___1_value), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		NullCheck(L_68);
		il2cpp_codegen_memcpy((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)), L_70, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), (void**)(L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)), (void*)L_70);
	}

IL_0134:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Layout/LayoutManager.cs:130>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 96962));
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
// Method Definition Index: 71013
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixMxNDebugView_1__ctor_m612DBE768DD5AEC78CC6BFA61C0F75B9635C5EAC_fshared (MatrixMxNDebugView_1_t54DB71F55826C54683CEB4D2B2ECCAF248A88B13* __this, MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E ___0_array, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5065));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5066));
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:92>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5067));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5068));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5068));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5069));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:94>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5070));
		MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E L_0 = ___0_array;
		__this->___array = L_0;
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:95>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5071));
		return;
	}
}
// Method Definition Index: 71014
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* MatrixMxNDebugView_1_get_Items_m7B33D95C2C7B4B06248F825614948E7BF49BE97B_fshared (MatrixMxNDebugView_1_t54DB71F55826C54683CEB4D2B2ECCAF248A88B13* __this, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_0 = NULL;
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5072));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5073));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5074));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:101>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5075));
		MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* L_0 = (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E*)(&__this->___array);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5076));
		int32_t L_1;
		L_1 = MatrixMxN_1_get_Length_mBC3776550911BA05734890369C64FEBEED87957E(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5076));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_2 = (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)(__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (uint32_t)L_1);
		V_0 = L_2;
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:102>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5077));
		MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* L_3 = (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E*)(&__this->___array);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_4 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5078));
		MatrixMxN_1_CopyTo_mAA9DDC54A871349C3441EEF6611139614B4A8F68(L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5078));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:103>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5079));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_5 = V_0;
		V_1 = L_5;
		goto IL_0023;
	}

IL_0023:
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:104>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5080));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_6 = V_1;
		return L_6;
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
// Method Definition Index: 71001
// Method Definition Index: 71002
// Method Definition Index: 71003
// Method Definition Index: 71004
// Method Definition Index: 71005
// Method Definition Index: 71006
// Method Definition Index: 71007
// Method Definition Index: 71008
// Method Definition Index: 71009
// Method Definition Index: 71010
// Method Definition Index: 71011
// Method Definition Index: 71012
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 71001
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixMxN_1__ctor_mD7C1B5E5DB3EC632CE6E6B29DC4782EE4E10E669_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_allocMode, int32_t ___3_options, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_width), (&___1_height), (&___2_allocMode), (&___3_options));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 4999));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5000));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5001));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:29>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5002));
		int32_t L_0 = ___0_width;
		__this->___m_Width = L_0;
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:30>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5003));
		int32_t L_1 = ___1_height;
		__this->___m_Height = L_1;
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:31>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5004));
		int32_t L_2 = __this->___m_Width;
		int32_t L_3 = __this->___m_Height;
		int32_t L_4 = ___2_allocMode;
		int32_t L_5 = ___3_options;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5005));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6;
		memset((&L_6), 0, sizeof(L_6));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_6), ((int32_t)il2cpp_codegen_multiply(L_2, L_3)), L_4, L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5005));
		__this->___m_Array = L_6;
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:32>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5006));
		int32_t L_7 = ___2_allocMode;
		__this->___m_AllocLabel = L_7;
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:33>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5007));
		int32_t L_8 = ___3_options;
		__this->___m_Options = L_8;
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:34>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5008));
		return;
	}
}
// Method Definition Index: 71002
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixMxN_1_get_Item_mCB286376FAE8DB6E7DDD529ECAFA52529512BA23_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
	const Il2CppFullySharedGenericStruct L_3 = L_2;
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
	memset(V_0, 0, SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5009));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5010));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5011));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:40>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5012));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		int32_t L_1 = ___0_index;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5013));
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline(L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5013));
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
		goto IL_0010;
	}

IL_0010:
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:41>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5014));
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
		return;
	}
}
// Method Definition Index: 71003
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixMxN_1_set_Item_mBB1FDF0BBCA714FBA22962F6125A255144B7D398_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_index), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)) ? ___1_value : &___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5015));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5016));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5017));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:44>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5018));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		int32_t L_1 = ___0_index;
		il2cpp_codegen_memcpy(L_2, ___1_value, SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5019));
		NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline(L_0, L_1, il2cpp_codegen_memcpy(L_3, L_2, SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5019));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:45>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5020));
		return;
	}
}
// Method Definition Index: 71004
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 MatrixMxN_1_GetArray_m9F72434935311256F9277D1C5FCBFD8888DB2159_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5021));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5022));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5023));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:50>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5024));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = __this->___m_Array;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:51>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5025));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = V_0;
		return L_1;
	}
}
// Method Definition Index: 71005
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixMxN_1_Get_m8F3575B885A95FFD46EB712A7CCEB33EE78ABD46_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, int32_t ___0_x, int32_t ___1_y, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
	const Il2CppFullySharedGenericStruct L_5 = L_4;
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
	memset(V_0, 0, SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_x), (&___1_y));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5026));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5027));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5028));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:55>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5029));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		int32_t L_1 = ___0_x;
		int32_t L_2 = __this->___m_Height;
		int32_t L_3 = ___1_y;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5030));
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline(L_0, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, L_2)), L_3)), (Il2CppFullySharedGenericStruct*)L_4, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5030));
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
		goto IL_0019;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:56>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5031));
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
		return;
	}
}
// Method Definition Index: 71006
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixMxN_1_Set_mD0A72616217EA0C9BF1A7D7246D4D3DD366257E1_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, int32_t ___0_x, int32_t ___1_y, Il2CppFullySharedGenericStruct ___2_v, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_x), (&___1_y), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)) ? ___2_v : &___2_v));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5032));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5033));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5034));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:60>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5035));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		int32_t L_1 = ___0_x;
		int32_t L_2 = __this->___m_Height;
		int32_t L_3 = ___1_y;
		il2cpp_codegen_memcpy(L_4, ___2_v, SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5036));
		NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline(L_0, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, L_2)), L_3)), il2cpp_codegen_memcpy(L_5, L_4, SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5036));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:61>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5037));
		return;
	}
}
// Method Definition Index: 71007
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MatrixMxN_1_get_IsCreated_m139C6B102F48E632ED103BEF00641884CF621E16_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5038));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5039));
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:63>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5040));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5041));
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5041));
		return L_1;
	}
}
// Method Definition Index: 71008
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MatrixMxN_1_get_Length_mBC3776550911BA05734890369C64FEBEED87957E_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5042));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5043));
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:65>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5044));
		int32_t L_0 = __this->___m_Width;
		int32_t L_1 = __this->___m_Height;
		return ((int32_t)il2cpp_codegen_multiply(L_0, L_1));
	}
}
// Method Definition Index: 71009
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MatrixMxN_1_get_DimensionX_m2FD49E5253BB5F83A0F73FF4CA6BDC4C435DD3F8_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5045));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5046));
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:67>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5047));
		int32_t L_0 = __this->___m_Width;
		return L_0;
	}
}
// Method Definition Index: 71010
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MatrixMxN_1_get_DimensionY_m2C91E339A741646CF3302B3741EC45AD41C242E6_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5048));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5049));
	{
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:69>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5050));
		int32_t L_0 = __this->___m_Height;
		return L_0;
	}
}
// Method Definition Index: 71011
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixMxN_1_Dispose_m13DFF7EC0FB4F5CE59972F37B2178F083A7B788A_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5051));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5052));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5053));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:73>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5054));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5055));
		NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5055));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:74>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5056));
		__this->___m_Width = 0;
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:75>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5057));
		__this->___m_Height = 0;
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:76>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5058));
		return;
	}
}
IL2CPP_EXTERN_C  void MatrixMxN_1_Dispose_m13DFF7EC0FB4F5CE59972F37B2178F083A7B788A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E>(__this);
	MatrixMxN_1_Dispose_m13DFF7EC0FB4F5CE59972F37B2178F083A7B788A(_thisAdjusted, method);
}
// Method Definition Index: 71012
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixMxN_1_CopyTo_mAA9DDC54A871349C3441EEF6611139614B4A8F68_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_array, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5059));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5060));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5061));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:81>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5062));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_1 = ___0_array;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5063));
		NativeArray_1_CopyTo_m6072353F8BA28E08B24828767C0A5AA713F0B307(L_0, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5063));
		//<source_info:./Library/PackageCache/com.unity.2d.common@b779c433ed47/Runtime/UAi2D/MatrixMxN.cs:82>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_2D_Common_Runtime + 5064));
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
// Method Definition Index: 2107
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryDebugView_1__ctor_m140E2EB6E4E0C3F7C7E2F183F485EF890BEE51B5_fshared (MemoryDebugView_1_tE58388022143D55B8020F917C382224DE98A8F88* __this, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_memory, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_0 = ___0_memory;
		ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 L_1;
		L_1 = Memory_1_op_Implicit_m7216145178505C2CB2BA0E21CB95773BE1E6A7AF(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____memory = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____memory))->____object), (void*)NULL);
		return;
	}
}
// Method Definition Index: 2108
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryDebugView_1__ctor_mCA152F7E3380441D5E7938A6AC3868CCA73270EA_fshared (MemoryDebugView_1_tE58388022143D55B8020F917C382224DE98A8F88* __this, ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 ___0_memory, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 L_0 = ___0_memory;
		__this->____memory = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____memory))->____object), (void*)NULL);
		return;
	}
}
// Method Definition Index: 2109
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* MemoryDebugView_1_get_Items_m14462BA003B9133B5990F6FD7D3E381904F52247_fshared (MemoryDebugView_1_tE58388022143D55B8020F917C382224DE98A8F88* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* L_0 = (ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*)(&__this->____memory);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = ReadOnlyMemory_1_ToArray_m44807420910F7442D09F80751674CF30711B0764(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return L_1;
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
// Method Definition Index: 11440
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11440
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryManager_1_TryGetArray_mD5E21D825D64F54D13E8D64297A71424E0CA60C9_fshared (MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487* __this, ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* ___0_segment, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* L_0 = ___0_segment;
		il2cpp_codegen_initobj(L_0, sizeof(ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178));
		return (bool)0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2082
// Method Definition Index: 2083
// Method Definition Index: 2084
// Method Definition Index: 2085
// Method Definition Index: 2086
// Method Definition Index: 2087
// Method Definition Index: 2088
// Method Definition Index: 2089
// Method Definition Index: 2090
// Method Definition Index: 2091
// Method Definition Index: 2092
// Method Definition Index: 2093
// Method Definition Index: 2094
// Method Definition Index: 2095
// Method Definition Index: 2096
// Method Definition Index: 2097
// Method Definition Index: 2098
// Method Definition Index: 2099
// Method Definition Index: 2100
// Method Definition Index: 2101
// Method Definition Index: 2102
// Method Definition Index: 2103
// Method Definition Index: 2104
// Method Definition Index: 2105
// Method Definition Index: 2106
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2082
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Memory_1__ctor_m3743D2A1BDE7D9720706FF7CFE3C270432C4D381_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	memset(V_0, 0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
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
		il2cpp_codegen_initobj(__this, sizeof(Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
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
		__this->____object = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)(RuntimeObject*)L_8);
		__this->____index = 0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = ___0_array;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		__this->____length = L_10;
		return;
	}
}
// Method Definition Index: 2083
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Memory_1__ctor_m39F9C3933A6F0AD9E9CE3A5B597A770C54F6FECF_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	memset(V_0, 0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0013;
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
		il2cpp_codegen_initobj(__this, sizeof(Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA));
		return;
	}

IL_0013:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_2);
		if (L_3)
		{
			goto IL_003f;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = il2cpp_codegen_object_get_type((RuntimeObject*)L_4);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_003f;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_003f:
	{
		int32_t L_9 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((!(((uint32_t)L_9) > ((uint32_t)L_11))))
		{
			goto IL_004a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_004a:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_array;
		__this->____object = (RuntimeObject*)L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)(RuntimeObject*)L_12);
		int32_t L_13 = ___1_start;
		__this->____index = L_13;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = ___0_array;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		int32_t L_16 = ___1_start;
		__this->____length = ((int32_t)il2cpp_codegen_subtract(L_15, L_16));
		return;
	}
}
// Method Definition Index: 2084
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Memory_1__ctor_m5ABFBF1303AB4B2B8AD03A4586CC52B6098DCBE9_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	memset(V_0, 0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
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
		il2cpp_codegen_initobj(__this, sizeof(Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
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
		__this->____object = (RuntimeObject*)L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)(RuntimeObject*)L_17);
		int32_t L_18 = ___1_start;
		__this->____index = L_18;
		int32_t L_19 = ___2_length;
		__this->____length = L_19;
		return;
	}
}
// Method Definition Index: 2085
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Memory_1__ctor_m7EA183117D6958FFAC919F291510339F7792C7CD_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487* ___0_manager, int32_t ___1_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0009:
	{
		MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487* L_1 = ___0_manager;
		__this->____object = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)(RuntimeObject*)L_1);
		__this->____index = ((int32_t)-2147483648LL);
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2086
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Memory_1__ctor_m58BECFC48979D14A69D6AC373301B755043ACA9B_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487* ___0_manager, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___2_length;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}

IL_0008:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000d:
	{
		MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487* L_2 = ___0_manager;
		__this->____object = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)(RuntimeObject*)L_2);
		int32_t L_3 = ___1_start;
		__this->____index = ((int32_t)(L_3|((int32_t)-2147483648LL)));
		int32_t L_4 = ___2_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2087
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Memory_1__ctor_m5F9E06AAB95D8F8AF62C3AD68DEC2F6716CDEE05_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, RuntimeObject* ___0_obj, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_obj;
		__this->____object = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)L_0);
		int32_t L_1 = ___1_start;
		__this->____index = L_1;
		int32_t L_2 = ___2_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2088
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA Memory_1_op_Implicit_mFD3FBCC47F7B2A4351BE34A9200917FFA907A50A_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_1;
		memset((&L_1), 0, sizeof(L_1));
		Memory_1__ctor_m3743D2A1BDE7D9720706FF7CFE3C270432C4D381_inline((&L_1), L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_1;
	}
}
// Method Definition Index: 2089
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA Memory_1_op_Implicit_mB6CDF2865486C74752AB253AC61A6966DBEE807D_fshared (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 ___0_segment, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArraySegment_1_t80E2119D530C97839AB301A66DF0C1A3549289BF_StaticInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		CHECKED_LOCAL_INIT(ArraySegment_1_t80E2119D530C97839AB301A66DF0C1A3549289BF_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)),il2cpp_codegen_runtime_class_init_inline);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0;
		L_0 = ArraySegment_1_get_Array_mE4A35DFD81ABF447350B9A05C0F4BF0248A3CFF2_inline((&___0_segment), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		int32_t L_1;
		L_1 = ArraySegment_1_get_Offset_m4FAFF061AB36BF278BA8DC37B6D13718A06301E6_inline((&___0_segment), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		int32_t L_2;
		L_2 = ArraySegment_1_get_Count_mEF96248898C14F3687A5C72B920F841701E4E13C_inline((&___0_segment), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_3;
		memset((&L_3), 0, sizeof(L_3));
		Memory_1__ctor_m5ABFBF1303AB4B2B8AD03A4586CC52B6098DCBE9_inline((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		return L_3;
	}
}
// Method Definition Index: 2090
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 Memory_1_op_Implicit_m7216145178505C2CB2BA0E21CB95773BE1E6A7AF_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_memory, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4* L_0;
		L_0 = il2cpp_unsafe_as_ref<ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4>((&___0_memory));
		ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 L_1 = (*(ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*)L_0);
		return L_1;
	}
}
// Method Definition Index: 2091
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA Memory_1_get_Empty_m67500127B35304DF2A50784BCC61BD5754EAF3F5_fshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA));
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 2092
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_get_Length_m0D3942C435EEDB938ADDA2CE7C625761CEAB520E_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____length;
		return ((int32_t)(L_0&((int32_t)2147483647LL)));
	}
}
// Method Definition Index: 2093
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Memory_1_get_IsEmpty_mFE27DC49FE38E33AD226323A42DB57922F00B0C8_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____length;
		return (bool)((((int32_t)((int32_t)(L_0&((int32_t)2147483647LL)))) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 2094
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Memory_1_ToString_m8587562831B505E363617A254DE467726D4C6351_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACAE3DE011E4C429609CA3219C3F13E876D2AF69);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	String_t* V_0 = NULL;
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		if (!L_0)
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_1 = __this->____object;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var));
		String_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_3;
		L_3 = Memory_1_get_Span_m86E7A7A0C72430FDB1B2A2BCEEAAEEF7E7F83596_inline(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		V_1 = L_3;
		String_t* L_4;
		L_4 = Span_1_ToString_m51B73F86825C26B44AF2E5C9152D807780EB84ED((&V_1), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		return L_4;
	}

IL_003f:
	{
		String_t* L_5 = V_0;
		int32_t L_6 = __this->____index;
		int32_t L_7 = __this->____length;
		NullCheck(L_5);
		String_t* L_8;
		L_8 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_5, L_6, ((int32_t)(L_7&((int32_t)2147483647LL))), NULL);
		return L_8;
	}

IL_0058:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_10);
		int32_t L_12 = __this->____length;
		int32_t L_13 = ((int32_t)(L_12&((int32_t)2147483647LL)));
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralACAE3DE011E4C429609CA3219C3F13E876D2AF69, L_11, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C  String_t* Memory_1_ToString_m8587562831B505E363617A254DE467726D4C6351_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	String_t* _returnValue;
	_returnValue = Memory_1_ToString_m8587562831B505E363617A254DE467726D4C6351(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 2095
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA Memory_1_Slice_mB1A59814638EB046790D5DB854A8D42BA2CB686F_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____length;
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)(L_1&((int32_t)2147483647LL)));
		int32_t L_2 = ___0_start;
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_2) > ((uint32_t)L_3))))
		{
			goto IL_001a;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)24), NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____object;
		int32_t L_5 = __this->____index;
		int32_t L_6 = ___0_start;
		int32_t L_7 = V_0;
		int32_t L_8 = ___0_start;
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_9;
		memset((&L_9), 0, sizeof(L_9));
		Memory_1__ctor_m5F9E06AAB95D8F8AF62C3AD68DEC2F6716CDEE05_inline((&L_9), L_4, ((int32_t)il2cpp_codegen_add(L_5, L_6)), ((int32_t)il2cpp_codegen_subtract(L_7, L_8)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		return L_9;
	}
}
// Method Definition Index: 2096
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA Memory_1_Slice_m6D92DFA60814F303301792ABF267BA35242FACA4_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____length;
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)(L_1&((int32_t)2147483647LL)));
		int32_t L_2 = ___0_start;
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_2) <= ((uint32_t)L_3))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = ___1_length;
		int32_t L_5 = V_1;
		int32_t L_6 = ___0_start;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))))))
		{
			goto IL_001e;
		}
	}

IL_0019:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001e:
	{
		RuntimeObject* L_7 = __this->____object;
		int32_t L_8 = __this->____index;
		int32_t L_9 = ___0_start;
		int32_t L_10 = ___1_length;
		int32_t L_11 = V_0;
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_12;
		memset((&L_12), 0, sizeof(L_12));
		Memory_1__ctor_m5F9E06AAB95D8F8AF62C3AD68DEC2F6716CDEE05_inline((&L_12), L_7, ((int32_t)il2cpp_codegen_add(L_8, L_9)), ((int32_t)(L_10|((int32_t)(L_11&((int32_t)-2147483648LL))))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		return L_12;
	}
}
// Method Definition Index: 2097
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Memory_1_get_Span_m86E7A7A0C72430FDB1B2A2BCEEAAEEF7E7F83596_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_1 = __this->____object;
		NullCheck(((MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2;
		L_2 = VirtualFuncInvoker0< Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 >::Invoke(4, ((MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))));
		V_0 = L_2;
		int32_t L_3 = __this->____index;
		int32_t L_4 = __this->____length;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_5;
		L_5 = Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_inline((&V_0), ((int32_t)(L_3&((int32_t)2147483647LL))), L_4, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17));
		return L_5;
	}

IL_0034:
	{
		bool L_6 = (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		if (!L_6)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_7 = __this->____object;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var));
		String_t* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_9 = V_1;
		NullCheck(L_9);
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		Il2CppFullySharedGenericAny* L_11;
		L_11 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_10);
		String_t* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_inline((&L_14), L_11, L_13, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18));
		V_0 = L_14;
		int32_t L_15 = __this->____index;
		int32_t L_16 = __this->____length;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_17;
		L_17 = Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_inline((&V_0), L_15, L_16, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17));
		return L_17;
	}

IL_0089:
	{
		RuntimeObject* L_18 = __this->____object;
		if (!L_18)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_19 = __this->____object;
		int32_t L_20 = __this->____index;
		int32_t L_21 = __this->____length;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_inline((&L_22), ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2))), L_20, ((int32_t)(L_21&((int32_t)2147483647LL))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
		return L_22;
	}

IL_00b4:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_23 = V_0;
		return L_23;
	}
}
// Method Definition Index: 2098
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Memory_1_CopyTo_mDB8DD4693F007CBBDC70454425C368FD0614D3FC_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_destination, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_0;
		L_0 = Memory_1_get_Span_m86E7A7A0C72430FDB1B2A2BCEEAAEEF7E7F83596_inline(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		V_0 = L_0;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_1;
		L_1 = Memory_1_get_Span_m86E7A7A0C72430FDB1B2A2BCEEAAEEF7E7F83596_inline((&___0_destination), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		Span_1_CopyTo_m87850B36DC83BF310EC6136E6D14DC5634F96F05((&V_0), L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20));
		return;
	}
}
// Method Definition Index: 2099
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Memory_1_TryCopyTo_mA894E1A58E1FB0ACB1FEDECD7DDA18A8ABFD4CD3_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_destination, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_0;
		L_0 = Memory_1_get_Span_m86E7A7A0C72430FDB1B2A2BCEEAAEEF7E7F83596_inline(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		V_0 = L_0;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_1;
		L_1 = Memory_1_get_Span_m86E7A7A0C72430FDB1B2A2BCEEAAEEF7E7F83596_inline((&___0_destination), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		bool L_2;
		L_2 = Span_1_TryCopyTo_m464C81DB101113B73DCD3F43C757D672CD893B37((&V_0), L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21));
		return L_2;
	}
}
// Method Definition Index: 2100
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD Memory_1_Pin_m9EEBCD8E7B6269C02BFBD57F2E67854920DFB85B_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	String_t* V_0 = NULL;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_3;
	memset((&V_3), 0, sizeof(V_3));
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_4;
	memset((&V_4), 0, sizeof(V_4));
	MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD V_5;
	memset((&V_5), 0, sizeof(V_5));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_1 = __this->____object;
		int32_t L_2 = __this->____index;
		NullCheck(((MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))));
		MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD L_3;
		L_3 = VirtualFuncInvoker1< MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD, int32_t >::Invoke(5, ((MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))), ((int32_t)(L_2&((int32_t)2147483647LL))));
		return L_3;
	}

IL_0026:
	{
		bool L_4 = (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		if (!L_4)
		{
			goto IL_0076;
		}
	}
	{
		RuntimeObject* L_5 = __this->____object;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
		String_t* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0076;
		}
	}
	{
		String_t* L_7 = V_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_8;
		L_8 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(L_7, 3, NULL);
		V_1 = L_8;
		String_t* L_9 = V_0;
		NullCheck(L_9);
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		void* L_11;
		L_11 = il2cpp_unsafe_as_pointer(L_10);
		int32_t L_12 = __this->____index;
		void* L_13;
		L_13 = Unsafe_Add_TisIl2CppFullySharedGenericAny_m25356A475C0867B15741BD80812E4EBA4394F3C5(L_11, L_12, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 22));
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_14 = V_1;
		MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD L_15;
		memset((&L_15), 0, sizeof(L_15));
		MemoryHandle__ctor_mBC4C2B7E7F10F5F93EFCF6A3A24D41CE79916C91((&L_15), L_13, L_14, (RuntimeObject*)NULL, NULL);
		return L_15;
	}

IL_0076:
	{
		RuntimeObject* L_16 = __this->____object;
		V_2 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)IsInst((RuntimeObject*)L_16, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = V_2;
		if (!L_17)
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_18 = __this->____length;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = V_2;
		NullCheck((RuntimeArray*)L_19);
		uint8_t* L_20;
		L_20 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_19, NULL);
		void* L_21;
		L_21 = il2cpp_unsafe_as_pointer(L_20);
		int32_t L_22 = __this->____index;
		void* L_23;
		L_23 = Unsafe_Add_TisIl2CppFullySharedGenericAny_m25356A475C0867B15741BD80812E4EBA4394F3C5(L_21, L_22, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 22));
		il2cpp_codegen_initobj((&V_3), sizeof(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC));
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_24 = V_3;
		MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD L_25;
		memset((&L_25), 0, sizeof(L_25));
		MemoryHandle__ctor_mBC4C2B7E7F10F5F93EFCF6A3A24D41CE79916C91((&L_25), L_23, L_24, (RuntimeObject*)NULL, NULL);
		return L_25;
	}

IL_00b4:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26 = V_2;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_27;
		L_27 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC((RuntimeObject*)L_26, 3, NULL);
		V_4 = L_27;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_28 = V_2;
		NullCheck((RuntimeArray*)L_28);
		uint8_t* L_29;
		L_29 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_28, NULL);
		void* L_30;
		L_30 = il2cpp_unsafe_as_pointer(L_29);
		int32_t L_31 = __this->____index;
		void* L_32;
		L_32 = Unsafe_Add_TisIl2CppFullySharedGenericAny_m25356A475C0867B15741BD80812E4EBA4394F3C5(L_30, L_31, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 22));
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_33 = V_4;
		MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD L_34;
		memset((&L_34), 0, sizeof(L_34));
		MemoryHandle__ctor_mBC4C2B7E7F10F5F93EFCF6A3A24D41CE79916C91((&L_34), L_32, L_33, (RuntimeObject*)NULL, NULL);
		return L_34;
	}

IL_00dc:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD));
		MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD L_35 = V_5;
		return L_35;
	}
}
// Method Definition Index: 2101
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Memory_1_ToArray_mF5FFD4A0E8AC951FDA34807539E9631310B6D757_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_0;
		L_0 = Memory_1_get_Span_m86E7A7A0C72430FDB1B2A2BCEEAAEEF7E7F83596_inline(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		V_0 = L_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = Span_1_ToArray_mBB0A9E11BBAA9FDE1D0C045FBA14F4CD3E84773E_inline((&V_0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 23));
		return L_1;
	}
}
// Method Definition Index: 2102
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Memory_1_Equals_m03AA1FCD0E395B27BD53551C06FDC8ED34F10A9A_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 24))))
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 24))));
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_2 = (*(Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*)__this);
		ReadOnlyMemory_1_t192441E248CAB66088AAEDBD64DFEE110ADBEED4 L_3;
		L_3 = Memory_1_op_Implicit_m7216145178505C2CB2BA0E21CB95773BE1E6A7AF(L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 25));
		bool L_4;
		L_4 = ReadOnlyMemory_1_Equals_mF7DA75997B4FFDFB2D6F953E8DC580EC3C941A61((&V_0), L_3, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 26));
		return L_4;
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_5, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11))))
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_6 = ___0_obj;
		V_1 = ((*(Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA*)UnBox(L_6, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11))));
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_7 = V_1;
		bool L_8;
		L_8 = Memory_1_Equals_m2F882A89DBD535FFE48B39EBAF2626BA2AD36DA0(__this, L_7, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 27));
		return L_8;
	}

IL_0039:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Memory_1_Equals_m03AA1FCD0E395B27BD53551C06FDC8ED34F10A9A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	bool _returnValue;
	_returnValue = Memory_1_Equals_m03AA1FCD0E395B27BD53551C06FDC8ED34F10A9A(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// Method Definition Index: 2103
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Memory_1_Equals_m2F882A89DBD535FFE48B39EBAF2626BA2AD36DA0_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____object;
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_1 = ___0_other;
		RuntimeObject* L_2 = L_1.____object;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_2))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3 = __this->____index;
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_4 = ___0_other;
		int32_t L_5 = L_4.____index;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_6 = __this->____length;
		Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA L_7 = ___0_other;
		int32_t L_8 = L_7.____length;
		return (bool)((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Memory_1_Equals_m2F882A89DBD535FFE48B39EBAF2626BA2AD36DA0_AdjustorThunk (RuntimeObject* __this, Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA ___0_other, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	bool _returnValue;
	_returnValue = Memory_1_Equals_m2F882A89DBD535FFE48B39EBAF2626BA2AD36DA0(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// Method Definition Index: 2104
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_GetHashCode_m7A4C30D97D133B153A50D638A7D596CDA1BD11B5_fshared (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->____object;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____object;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_1);
		int32_t* L_3 = (int32_t*)(&__this->____index);
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_3, NULL);
		int32_t* L_5 = (int32_t*)(&__this->____length);
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_5, NULL);
		int32_t L_7;
		L_7 = Memory_1_CombineHashCodes_mAF5A2B57827992A931D66D37B330E11439075F2B(L_2, L_4, L_6, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 29));
		return L_7;
	}
}
IL2CPP_EXTERN_C  int32_t Memory_1_GetHashCode_m7A4C30D97D133B153A50D638A7D596CDA1BD11B5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA>(__this);
	int32_t _returnValue;
	_returnValue = Memory_1_GetHashCode_m7A4C30D97D133B153A50D638A7D596CDA1BD11B5(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 2105
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_CombineHashCodes_mEB42331AAFED3F227F0E7520FA03E6804637F84F_fshared (int32_t ___0_left, int32_t ___1_right, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_left;
		int32_t L_1 = ___0_left;
		int32_t L_2 = ___1_right;
		return ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(L_0<<5)), L_1))^L_2));
	}
}
// Method Definition Index: 2106
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_CombineHashCodes_mAF5A2B57827992A931D66D37B330E11439075F2B_fshared (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_h1;
		int32_t L_1 = ___1_h2;
		int32_t L_2;
		L_2 = Memory_1_CombineHashCodes_mEB42331AAFED3F227F0E7520FA03E6804637F84F(L_0, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 30));
		int32_t L_3 = ___2_h3;
		int32_t L_4;
		L_4 = Memory_1_CombineHashCodes_mEB42331AAFED3F227F0E7520FA03E6804637F84F(L_2, L_3, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 30));
		return L_4;
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
// Method Definition Index: 57950
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodCall_2__ctor_m919571D49200E1FEC7040CB004FB9BEBFFCA5F65_fshared (MethodCall_2_t6F0B468D208A254B1132895278B24899F2A0AB91* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_direct_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)((RuntimeMethod*)(__this->___method))->invoker_method;
		}
		else
		{
			__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)il2cpp_codegen_delegate_invoke_closed_static;
		}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)il2cpp_codegen_delegate_invoke_open_generic_interface;
					else
						__this->___invoke_impl = (intptr_t)il2cpp_codegen_delegate_invoke_open_generic_virtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)il2cpp_codegen_delegate_invoke_open_interface;
					else
						__this->___invoke_impl = (intptr_t)il2cpp_codegen_delegate_invoke_open_virtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)il2cpp_codegen_delegate_invoke_open_inst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			if (il2cpp_codegen_class_is_value_type(il2cpp_codegen_object_get_class(__this->___m_target)))
				__this->___method_code = (intptr_t)il2cpp_codegen_get_raw_data<void*>(__this->___m_target);
			else
				__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)((RuntimeMethod*)(__this->___method))->invoker_method;
		}
	}
	__this->___extra_arg = (intptr_t)il2cpp_codegen_delegate_invoke_multicast;
}
// Method Definition Index: 57951
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodCall_2_Invoke_mBE44341CFE5BC8BE628105C1EFBD456D0F2DF9CB_fshared (MethodCall_2_t6F0B468D208A254B1132895278B24899F2A0AB91* __this, Il2CppFullySharedGenericAny ___0_target, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	void* args[3];
	args[1] = ___0_target;
	args[2] = ___1_args;
	((InvokerMethod)(__this->___invoke_impl))((Il2CppMethodPointer)__this->___method_ptr, (const MethodInfo*)__this->___method, (RuntimeObject*)__this->___method_code, args+1, il2cppRetVal);
}
// Method Definition Index: 57952
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodCall_2_BeginInvoke_m9365ED4FAC423FB5BD9FB9E9C51B7FA333F2D3F3_fshared (MethodCall_2_t6F0B468D208A254B1132895278B24899F2A0AB91* __this, Il2CppFullySharedGenericAny ___0_target, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	void *__d_args[3] = {0};
	RuntimeClass* ___0_target_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 0));
	__d_args[0] = (il2cpp_codegen_class_is_value_type(___0_target_klass) ? Box(___0_target_klass, ___0_target) : (void*)___0_target);
	__d_args[1] = ___1_args;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 57953
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodCall_2_EndInvoke_m93BA4C67065B85DBF8A0D41ACAD53B0343C2BC4D_fshared (MethodCall_2_t6F0B468D208A254B1132895278B24899F2A0AB91* __this, RuntimeObject* ___0_result, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	RuntimeClass* returnType = il2cpp_codegen_class_from_type(il2cpp_codegen_method_return_type((MethodInfo*)__this->___method));
	uint32_t returnTypeSize = il2cpp_codegen_sizeof(returnType);
	void* unboxStorage = alloca(returnTypeSize);
	void* unboxed = UnBox_Any((RuntimeObject*)__result, returnType, unboxStorage);
	il2cpp_codegen_memcpy(il2cppRetVal, unboxed, returnTypeSize);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 13790
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseCaptureEventBase_1__ctor_m180840500B370E7F56003DC24D94D9EBD5D924B4_gshared (MouseCaptureEventBase_1_t22B283B27FCD61274E7CEDD317FC2E9F4BD61350* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		PointerCaptureEventBase_1__ctor_m6504E51BF3B701E614E30F22DD97E3E2E68EB5CD((PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
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
// Method Definition Index: 14769
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_get_modifiers_mAD508E12A77C609CD1733864D36295A5FA8045EC_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26415));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26416));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:118>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26417));
		int32_t L_0 = __this->___U3CmodifiersU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 14770
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_modifiers_m65A8AF799BAE5B62060B24F27A2FE897F503CF2B_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26418));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26419));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:118>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26420));
		int32_t L_0 = ___0_value;
		__this->___U3CmodifiersU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 14771
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26421));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26422));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:122>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26423));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CmousePositionU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 14772
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26424));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26425));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:122>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26426));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CmousePositionU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 14773
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MouseEventBase_1_get_localMousePosition_m131A18730A4BE067934A9F1F720FA8B8DAEFF5AB_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26427));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26428));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:130>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26429));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3ClocalMousePositionU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 14774
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26430));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26431));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:130>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26432));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3ClocalMousePositionU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 14775
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MouseEventBase_1_get_mouseDelta_mA9B00E7C5EAD63AE805FF883D81C73B88F781F3C_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26433));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26434));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:138>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26435));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CmouseDeltaU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 14776
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26436));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26437));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:138>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26438));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CmouseDeltaU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 14777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_get_clickCount_m17BC12D6D3330C64A5ECF4CD9D7ECB8C10F7AF87_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26439));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26440));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:143>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26441));
		int32_t L_0 = __this->___U3CclickCountU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 14778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_clickCount_mB1575DBF43CE6DC0546CC215CF0CFEDB3C1D648E_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26442));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26443));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:143>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26444));
		int32_t L_0 = ___0_value;
		__this->___U3CclickCountU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 14779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_get_button_mE41C6A5049A4C911CE2ED43C6C391A350B728C22_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26445));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26446));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:149>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26447));
		int32_t L_0 = __this->___U3CbuttonU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 14780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_button_mBD212144434B278C49CFA531AD588260FC8CB868_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26448));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26449));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:149>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26450));
		int32_t L_0 = ___0_value;
		__this->___U3CbuttonU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 14781
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_get_pressedButtons_m4F57AA0AAB4D8B66B85F6BA7B303753583258895_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26451));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26452));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:156>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26453));
		int32_t L_0 = __this->___U3CpressedButtonsU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 14782
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_pressedButtons_m9E6A63DB8A91D2C35470777AC0958915E3DBB476_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26454));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26455));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:156>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26456));
		int32_t L_0 = ___0_value;
		__this->___U3CpressedButtonsU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 14783
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseEventBase_1_get_ctrlKey_m96AD34ADFBB5A39300F76AA72AF966C4216AB287_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26457));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26458));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:177>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26459));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26460));
		int32_t L_0;
		L_0 = MouseEventBase_1_get_modifiers_mAD508E12A77C609CD1733864D36295A5FA8045EC_inline(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26460));
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// Method Definition Index: 14784
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseEventBase_1_get_commandKey_m55FF4BF6C66063A081ADDD1EA8E0E654E2186243_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26461));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26462));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:188>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26463));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26464));
		int32_t L_0;
		L_0 = MouseEventBase_1_get_modifiers_mAD508E12A77C609CD1733864D36295A5FA8045EC_inline(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26464));
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&8))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// Method Definition Index: 14785
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26465));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26466));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:223>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26467));
		RuntimeObject* L_0 = __this->___U3CsourcePointerEventU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 14786
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_sourcePointerEvent_m65A5978FE221A03B997358CE3158649369FE87ED_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26468));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26469));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:223>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26470));
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CsourcePointerEventU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsourcePointerEventU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 14787
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseEventBase_1_get_recomputeTopElementUnderMouse_m014A5DC3028338BDB21CA9F1BAF1FEAC334220F7_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26471));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26472));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:224>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26473));
		bool L_0 = __this->___U3CrecomputeTopElementUnderMouseU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 14788
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_recomputeTopElementUnderMouse_m5D34798DE02C9783D4F623F4F5BFAD3C254B51E5_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26474));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26475));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:224>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26476));
		bool L_0 = ___0_value;
		__this->___U3CrecomputeTopElementUnderMouseU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 14789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 MouseEventBase_1_get_panelRay_m15BF165696F29D7A1F371DEC030C1E57CFA7E682_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26477));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26478));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:225>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26479));
		Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 L_0 = __this->___U3CpanelRayU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 14790
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_panelRay_m2F11C8441C8E2382C3FC31A56453E221AE212536_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26480));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26481));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:225>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26482));
		Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 L_0 = ___0_value;
		__this->___U3CpanelRayU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 14791
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MouseEventBase_1_UnityEngine_UIElements_IMouseEventInternal_get_sourcePointerEvent_m48E19EBBB2A61F35D911AC9DB23F476C188984DE_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26483));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26484));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:227>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26485));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26486));
		RuntimeObject* L_0;
		L_0 = MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_inline(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26486));
		return L_0;
	}
}
// Method Definition Index: 14792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MouseEventBase_1_UnityEngine_UIElements_IPointerOrMouseEvent_get_position_m02DAC2E7F1E97CA41728B1076F87DA873F44D9A3_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26487));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26488));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:231>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26489));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26490));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_inline(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26490));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26491));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26491));
		return L_1;
	}
}
// Method Definition Index: 14793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 MouseEventBase_1_UnityEngine_UIElements_IPointerOrMouseEvent_get_panelRay_m3B60484F182F8AD227F01718B0E72818B9A31505_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26492));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26493));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:233>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26494));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26495));
		Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 L_0;
		L_0 = MouseEventBase_1_get_panelRay_m15BF165696F29D7A1F371DEC030C1E57CFA7E682_inline(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26495));
		return L_0;
	}
}
// Method Definition Index: 14794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_Init_mCD0FC8AA5CB7457CCB1F7381A77C822087590DA5_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26496));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26497));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:240>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26498));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26499));
		NullCheck((EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F*)__this);
		EventBase_1_Init_m810FE185606F5EB505285FEDEDB759E3DDB0E934((EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26499));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:241>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26500));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26501));
		MouseEventBase_1_LocalInit_m85C31C18C63B13944050FE4C8F328E12465C8132(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26501));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:242>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26502));
		return;
	}
}
// Method Definition Index: 14795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_LocalInit_m85C31C18C63B13944050FE4C8F328E12465C8132_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26503));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26504));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:246>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26505));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26506));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		EventBase_set_propagation_m1F5D2A6582B8A4D64F84F0B71F90790FA2BF7E8C_inline((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, 3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26506));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:247>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26507));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26508));
		MouseEventBase_1_set_modifiers_m65A8AF799BAE5B62060B24F27A2FE897F503CF2B_inline(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26508));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:248>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26509));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26510));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26510));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26511));
		MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_inline(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26511));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:249>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26512));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26513));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26513));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26514));
		MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_inline(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26514));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:250>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26515));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26516));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26516));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26517));
		MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_inline(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26517));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:251>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26518));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26519));
		MouseEventBase_1_set_clickCount_mB1575DBF43CE6DC0546CC215CF0CFEDB3C1D648E_inline(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26519));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:252>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26520));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26521));
		MouseEventBase_1_set_button_mBD212144434B278C49CFA531AD588260FC8CB868_inline(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26521));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:253>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26522));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26523));
		MouseEventBase_1_set_pressedButtons_m9E6A63DB8A91D2C35470777AC0958915E3DBB476_inline(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26523));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:254>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26524));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26525));
		MouseEventBase_1_set_sourcePointerEvent_m65A5978FE221A03B997358CE3158649369FE87ED_inline(__this, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26525));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:255>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26526));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26527));
		MouseEventBase_1_set_recomputeTopElementUnderMouse_m5D34798DE02C9783D4F623F4F5BFAD3C254B51E5_inline(__this, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26527));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:256>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26528));
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768));
		Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26529));
		MouseEventBase_1_set_panelRay_m2F11C8441C8E2382C3FC31A56453E221AE212536_inline(__this, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26529));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:257>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26530));
		return;
	}
}
// Method Definition Index: 14796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MouseEventBase_1_get_currentTarget_mC792EFDB3E1086082EF5095FF5829C4DD851222B_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26531));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26532));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:264>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26533));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26534));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		RuntimeObject* L_0;
		L_0 = EventBase_get_currentTarget_m6F265B85FF86C35F62CFDF144B80B383DA9C503B_inline((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26534));
		return L_0;
	}
}
// Method Definition Index: 14797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_currentTarget_m28180A3FB11BB5D148D0958DCB229BFA53FCBFF6_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementExtensions_t5F9CD76F92E7BD4E3F3B6FEF246057D6FEAF9A61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(VisualElementExtensions_t5F9CD76F92E7BD4E3F3B6FEF246057D6FEAF9A61_StaticInit);
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26535));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26536));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:267>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26537));
		RuntimeObject* L_0 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26538));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		EventBase_set_currentTarget_m778A667A791A9A67D61010F9B6A2A69D961C4C14((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26538));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:269>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26539));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26540));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(11, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26540));
		V_0 = ((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)IsInstClass((RuntimeObject*)L_1, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:270>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26541));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:272>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26542));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26543));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_inline(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26543));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26544));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26544));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26545));
		CHECKED_LOCAL_INIT(VisualElementExtensions_t5F9CD76F92E7BD4E3F3B6FEF246057D6FEAF9A61_StaticInit,(VisualElementExtensions_t5F9CD76F92E7BD4E3F3B6FEF246057D6FEAF9A61_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = VisualElementExtensions_WorldToLocal3D_m19BBC65BE9BCA191894DB2B26EE1E083C4D349F3(L_3, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26545));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26546));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26546));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26547));
		MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_inline(__this, L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26547));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26548));
		return;
	}

IL_0033:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:276>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26549));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26550));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_inline(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26550));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26551));
		MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_inline(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26551));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:278>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26552));
		return;
	}
}
// Method Definition Index: 14798
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_PreDispatch_m84EB1457CE2562941FC6245BC26544A401FF9957_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, RuntimeObject* ___0_panel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerDeviceState_tD94EF3C9710026DE8B7E83B6C842524C7C6EBA8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticInit);
	CHECKED_LOCAL(PointerDeviceState_tD94EF3C9710026DE8B7E83B6C842524C7C6EBA8C_StaticInit);
	CHECKED_LOCAL(BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_StaticInit);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_panel));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26553));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26554));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:283>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26555));
		RuntimeObject* L_0 = ___0_panel;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26556));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		EventBase_PreDispatch_mD788394C54A5400B25B423AF5DC41AA318A33DC4((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26556));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:285>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26557));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26558));
		bool L_1;
		L_1 = MouseEventBase_1_get_recomputeTopElementUnderMouse_m014A5DC3028338BDB21CA9F1BAF1FEAC334220F7_inline(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26558));
		if (!L_1)
		{
			goto IL_008d;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:288>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26559));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26560));
		RuntimeObject* L_2;
		L_2 = MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_inline(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26560));
		if (L_2)
		{
			goto IL_004c;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:290>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26561));
		CHECKED_LOCAL_INIT(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticInit,(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_3 = ((PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var))->___mousePointerId;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26562));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_inline(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26562));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26563));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26563));
		RuntimeObject* L_6 = ___0_panel;
		RuntimeObject* L_7 = ___0_panel;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26564));
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(2, IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var, L_7);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26564));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26565));
		CHECKED_LOCAL_INIT(PointerDeviceState_tD94EF3C9710026DE8B7E83B6C842524C7C6EBA8C_StaticInit,(PointerDeviceState_tD94EF3C9710026DE8B7E83B6C842524C7C6EBA8C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		PointerDeviceState_SavePointerPosition_mFF277BDE588CF09F2301872E64A5F32159ECB9EB(L_3, L_5, L_6, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26565));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:291>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26566));
		RuntimeObject* L_9 = ___0_panel;
		int32_t L_10 = ((PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var))->___mousePointerId;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26567));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_inline(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26567));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26568));
		NullCheck(((BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303*)CastclassClass((RuntimeObject*)L_9, BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var)));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_12;
		L_12 = BaseVisualElementPanel_RecomputeTopElementUnderPointer_mF3D6110A28FCCF72408FE62A21A4F57E4AC717AF(((BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303*)CastclassClass((RuntimeObject*)L_9, BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var)), L_10, L_11, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26568));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26569));
		return;
	}

IL_004c:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:294>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26570));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26571));
		RuntimeObject* L_13;
		L_13 = MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_inline(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26571));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26572));
		NullCheck(L_13);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_13);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26572));
		CHECKED_LOCAL_INIT(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticInit,(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_15 = ((PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var))->___mousePointerId;
		if ((((int32_t)L_14) == ((int32_t)L_15)))
		{
			goto IL_008d;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:296>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26573));
		CHECKED_LOCAL_INIT(BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_StaticInit,(BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ((BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_StaticFields*)il2cpp_codegen_static_fields_for(BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var))->___s_OutsidePanelCoordinates;
		V_0 = L_16;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:297>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26574));
		CHECKED_LOCAL_INIT(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticInit,(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_17 = ((PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var))->___mousePointerId;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26575));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26575));
		RuntimeObject* L_20 = ___0_panel;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26576));
		NullCheck(L_20);
		int32_t L_21;
		L_21 = InterfaceFuncInvoker0< int32_t >::Invoke(2, IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var, L_20);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26576));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26577));
		CHECKED_LOCAL_INIT(PointerDeviceState_tD94EF3C9710026DE8B7E83B6C842524C7C6EBA8C_StaticInit,(PointerDeviceState_tD94EF3C9710026DE8B7E83B6C842524C7C6EBA8C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		PointerDeviceState_SavePointerPosition_mFF277BDE588CF09F2301872E64A5F32159ECB9EB(L_17, L_19, (RuntimeObject*)NULL, L_21, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26577));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:298>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26578));
		RuntimeObject* L_22 = ___0_panel;
		int32_t L_23 = ((PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var))->___mousePointerId;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26579));
		NullCheck(((BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303*)CastclassClass((RuntimeObject*)L_22, BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var)));
		BaseVisualElementPanel_SetTopElementUnderPointer_m09591A0A171CEB0CAA023C6834B075D8E76ED5D9(((BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303*)CastclassClass((RuntimeObject*)L_22, BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var)), L_23, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)NULL, L_24, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26579));
	}

IL_008d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:301>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26580));
		return;
	}
}
// Method Definition Index: 14799
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_PostDispatch_mEEFD7D60FBCD7598D07589A5CBAB34CD03DEDBA4_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, RuntimeObject* ___0_panel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09B8A6EA35B75288D90AC15479A1E9A5D9A18113);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_panel));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26581));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26582));
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* G_B9_0 = NULL;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* G_B8_0 = NULL;
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:309>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26583));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26584));
		RuntimeObject* L_0;
		L_0 = MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_inline(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26584));
		V_0 = ((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)IsInstClass((RuntimeObject*)L_0, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_il2cpp_TypeInfo_var));
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:312>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26585));
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26586));
		NullCheck(L_2);
		bool L_3;
		L_3 = EventBase_get_processed_mC99F191F8FCB064BEAC4500D80EBDDC400A461B7(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26586));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26587));
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_Assert_mA460392021AC0A8210C9081E3C1C9652DBF32BF6((bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), _stringLiteral09B8A6EA35B75288D90AC15479A1E9A5D9A18113, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26587));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:315>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26588));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26589));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		bool L_4;
		L_4 = EventBase_get_isPropagationStopped_m36E1E4831DC04452D18B5339E2CAD8979B6BD6B3((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26589));
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:317>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26590));
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_5 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26591));
		NullCheck(L_5);
		EventBase_StopPropagation_mEFC7E5AB7164157065FF19064A6ADCBB0D8AF6FB(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26591));
	}

IL_0030:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:319>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26592));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26593));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		bool L_6;
		L_6 = EventBase_get_isImmediatePropagationStopped_m23F718E5FA5FB49FE12BA560B8362B95E0C7F5D3((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26593));
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:321>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26594));
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_7 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26595));
		NullCheck(L_7);
		EventBase_StopImmediatePropagation_m2D6646624DDC02AE96657F5EAD5BC0361380A8DA(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26595));
	}

IL_003e:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:323>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26596));
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_8 = V_0;
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_9 = L_8;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26597));
		NullCheck(L_9);
		bool L_10;
		L_10 = EventBase_get_processedByFocusController_mB2BCAFE58D45919AC9F5AC0AAEF059D8A640AE53(L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26597));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26598));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		bool L_11;
		L_11 = EventBase_get_processedByFocusController_mB2BCAFE58D45919AC9F5AC0AAEF059D8A640AE53((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26598));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26599));
		NullCheck(L_9);
		EventBase_set_processedByFocusController_mEC214B328484B60572EEE867ACB5527396436155(L_9, (bool)((int32_t)((int32_t)L_10|(int32_t)L_11)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26599));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26600));
		goto IL_006d;
	}

IL_0053:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:325>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26601));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26602));
		bool L_12;
		L_12 = MouseEventBase_1_get_recomputeTopElementUnderMouse_m014A5DC3028338BDB21CA9F1BAF1FEAC334220F7_inline(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26602));
		if (!L_12)
		{
			goto IL_006d;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:328>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26603));
		RuntimeObject* L_13 = ___0_panel;
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_14 = ((BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303*)IsInstClass((RuntimeObject*)L_13, BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var));
		if (L_14)
		{
			G_B9_0 = L_14;
			goto IL_0067;
		}
		G_B8_0 = L_14;
	}
	{
		goto IL_006d;
	}

IL_0067:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26604));
		NullCheck(G_B9_0);
		bool L_15;
		L_15 = BaseVisualElementPanel_CommitElementUnderPointers_m41A1D0D2884A1C35218D330EE29DF393F75E7892(G_B9_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26604));
	}

IL_006d:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:331>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26605));
		RuntimeObject* L_16 = ___0_panel;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26606));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		EventBase_PostDispatch_mC830955EA32723BF0C10CCB37E01197CBADC07B3((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26606));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:332>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26607));
		return;
	}
}
// Method Definition Index: 14800
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_Dispatch_m3B6CC0CA8CA803593C1A8197DBEF7E1627648774_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___0_panel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticInit);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_panel));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26608));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26609));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:336>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26610));
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_0 = ___0_panel;
		CHECKED_LOCAL_INIT(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticInit,(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1 = ((PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var))->___mousePointerId;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26611));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_inline(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26611));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26612));
		EventDispatchUtilities_DispatchToCapturingElementOrElementUnderPointer_m1DB1C303971CD300023CEE6011018230F9047D4B((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, L_0, L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26612));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:338>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26613));
		return;
	}
}
// Method Definition Index: 14801
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* MouseEventBase_1_GetPooled_m84A60BC498C8DF00411A02A28D9547715B2E87C1_gshared (RuntimeObject* ___0_triggerEvent, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_mousePosition, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(EventBase_1_t2460AA6988D53F2ABE4DCA78195C6D6E516089A9_StaticInit);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_triggerEvent), (&___1_mousePosition));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26614));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26615));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:389>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26616));
		RuntimeObject* L_0 = ___0_triggerEvent;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:391>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26617));
		RuntimeObject* L_1 = ___0_triggerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26618));
		Il2CppSharedGenericObject* L_2;
		L_2 = MouseEventBase_1_GetPooled_m13C3E655268E03D8CDA8E82FBC4C2B8B0C910511(L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26618));
		return L_2;
	}

IL_000a:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:394>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26619));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26620));
		CHECKED_LOCAL_INIT(EventBase_1_t2460AA6988D53F2ABE4DCA78195C6D6E516089A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19)),il2cpp_codegen_runtime_class_init_inline);
		Il2CppSharedGenericObject* L_3;
		L_3 = EventBase_1_GetPooled_mB805F9CE6D32D281426319C902A567F5AB35005C(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26620));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:395>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26621));
		Il2CppSharedGenericObject* L_4 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___1_mousePosition;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26622));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_4);
		MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_4, L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26622));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:396>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26623));
		Il2CppSharedGenericObject* L_6 = L_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___1_mousePosition;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26624));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_6);
		MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_6, L_7, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26624));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:397>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26625));
		return L_6;
	}
}
// Method Definition Index: 14802
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* MouseEventBase_1_GetPooled_m13C3E655268E03D8CDA8E82FBC4C2B8B0C910511_gshared (RuntimeObject* ___0_triggerEvent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(EventBase_1_t2460AA6988D53F2ABE4DCA78195C6D6E516089A9_StaticInit);
	Il2CppSharedGenericObject* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_triggerEvent));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26626));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26627));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:407>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26628));
		RuntimeObject* L_0 = ___0_triggerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26629));
		CHECKED_LOCAL_INIT(EventBase_1_t2460AA6988D53F2ABE4DCA78195C6D6E516089A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19)),il2cpp_codegen_runtime_class_init_inline);
		Il2CppSharedGenericObject* L_1;
		L_1 = EventBase_1_GetPooled_m567E588C708778F6F41E2D69650776EBF437F74C(((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)IsInstClass((RuntimeObject*)L_0, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_il2cpp_TypeInfo_var)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26629));
		V_0 = L_1;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:408>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26630));
		RuntimeObject* L_2 = ___0_triggerEvent;
		if (!L_2)
		{
			goto IL_0086;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:410>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26631));
		Il2CppSharedGenericObject* L_3 = V_0;
		RuntimeObject* L_4 = ___0_triggerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26632));
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var, L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26632));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26633));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_3);
		MouseEventBase_1_set_modifiers_m65A8AF799BAE5B62060B24F27A2FE897F503CF2B_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_3, L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26633));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:411>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26634));
		Il2CppSharedGenericObject* L_6 = V_0;
		RuntimeObject* L_7 = ___0_triggerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26635));
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(1, IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var, L_7);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26635));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26636));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_6);
		MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_6, L_8, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26636));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:412>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26637));
		Il2CppSharedGenericObject* L_9 = V_0;
		RuntimeObject* L_10 = ___0_triggerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26638));
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(1, IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var, L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26638));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26639));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_9);
		MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_9, L_11, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26639));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:413>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26640));
		Il2CppSharedGenericObject* L_12 = V_0;
		RuntimeObject* L_13 = ___0_triggerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26641));
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(3, IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var, L_13);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26641));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26642));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_12);
		MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_12, L_14, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26642));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:414>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26643));
		Il2CppSharedGenericObject* L_15 = V_0;
		RuntimeObject* L_16 = ___0_triggerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26644));
		NullCheck(L_16);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(5, IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var, L_16);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26644));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26645));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_15);
		MouseEventBase_1_set_button_mBD212144434B278C49CFA531AD588260FC8CB868_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_15, L_17, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26645));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:415>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26646));
		Il2CppSharedGenericObject* L_18 = V_0;
		RuntimeObject* L_19 = ___0_triggerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26647));
		NullCheck(L_19);
		int32_t L_20;
		L_20 = InterfaceFuncInvoker0< int32_t >::Invoke(6, IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var, L_19);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26647));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26648));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_18);
		MouseEventBase_1_set_pressedButtons_m9E6A63DB8A91D2C35470777AC0958915E3DBB476_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_18, L_20, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26648));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:416>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26649));
		Il2CppSharedGenericObject* L_21 = V_0;
		RuntimeObject* L_22 = ___0_triggerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26650));
		NullCheck(L_22);
		int32_t L_23;
		L_23 = InterfaceFuncInvoker0< int32_t >::Invoke(4, IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var, L_22);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26650));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26651));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_21);
		MouseEventBase_1_set_clickCount_mB1575DBF43CE6DC0546CC215CF0CFEDB3C1D648E_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_21, L_23, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26651));
	}

IL_0086:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:418>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26652));
		Il2CppSharedGenericObject* L_24 = V_0;
		return L_24;
	}
}
// Method Definition Index: 14803
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* MouseEventBase_1_GetPooled_m6B58A1D4CE6839D06420EC1E7ABFD9E2559E9850_gshared (RuntimeObject* ___0_pointerEvent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointerEventInternal_tF0950F230320BC22B077741EA08AC538EE878833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(EventBase_1_t2460AA6988D53F2ABE4DCA78195C6D6E516089A9_StaticInit);
	Il2CppSharedGenericObject* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_pointerEvent));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26653));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26654));
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	RuntimeObject* G_B9_1 = NULL;
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:430>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26655));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26656));
		CHECKED_LOCAL_INIT(EventBase_1_t2460AA6988D53F2ABE4DCA78195C6D6E516089A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19)),il2cpp_codegen_runtime_class_init_inline);
		Il2CppSharedGenericObject* L_0;
		L_0 = EventBase_1_GetPooled_mB805F9CE6D32D281426319C902A567F5AB35005C(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26656));
		V_0 = L_0;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:432>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26657));
		Il2CppSharedGenericObject* L_1 = V_0;
		RuntimeObject* L_2 = ___0_pointerEvent;
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_3 = ((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)IsInstClass((RuntimeObject*)L_2, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_il2cpp_TypeInfo_var));
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = ((RuntimeObject*)(L_1));
			goto IL_0019;
		}
		G_B1_0 = L_3;
		G_B1_1 = ((RuntimeObject*)(L_1));
	}
	{
		G_B3_0 = ((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_001e;
	}

IL_0019:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26658));
		NullCheck(G_B2_0);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4;
		L_4 = EventBase_get_elementTarget_mF6CFD6372FB247718797DB8927654F781821B94D_inline(G_B2_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26658));
		G_B3_0 = L_4;
		G_B3_1 = G_B2_1;
	}

IL_001e:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26659));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)G_B3_1);
		EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)G_B3_1, G_B3_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26659));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:433>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26660));
		Il2CppSharedGenericObject* L_5 = V_0;
		RuntimeObject* L_6 = ___0_pointerEvent;
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_7 = ((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)IsInstClass((RuntimeObject*)L_6, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_il2cpp_TypeInfo_var));
		if (L_7)
		{
			G_B5_0 = L_7;
			G_B5_1 = ((RuntimeObject*)(L_5));
			goto IL_0036;
		}
		G_B4_0 = L_7;
		G_B4_1 = ((RuntimeObject*)(L_5));
	}
	{
		G_B6_0 = ((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*)(NULL));
		G_B6_1 = G_B4_1;
		goto IL_003b;
	}

IL_0036:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26661));
		NullCheck(G_B5_0);
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_8;
		L_8 = EventBase_get_imguiEvent_m45ABCDC6423D27EF44F7E29661B249D238765DB0(G_B5_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26661));
		G_B6_0 = L_8;
		G_B6_1 = G_B5_1;
	}

IL_003b:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26662));
		NullCheck((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)G_B6_1);
		EventBase_set_imguiEvent_m72FEAD8F7611927C077B45BAA719C15D39E9F4F4((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)G_B6_1, G_B6_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26662));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:435>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26663));
		Il2CppSharedGenericObject* L_9 = V_0;
		RuntimeObject* L_10 = ___0_pointerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26664));
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(19, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26664));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26665));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_9);
		MouseEventBase_1_set_modifiers_m65A8AF799BAE5B62060B24F27A2FE897F503CF2B_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_9, L_11, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26665));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:436>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26666));
		Il2CppSharedGenericObject* L_12 = V_0;
		RuntimeObject* L_13 = ___0_pointerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26667));
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(5, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_13);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26667));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26668));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26668));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26669));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_12);
		MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_12, L_15, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26669));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:437>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26670));
		Il2CppSharedGenericObject* L_16 = V_0;
		RuntimeObject* L_17 = ___0_pointerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26671));
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(5, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_17);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26671));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26672));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26672));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26673));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_16);
		MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_16, L_19, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26673));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:438>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26674));
		Il2CppSharedGenericObject* L_20 = V_0;
		RuntimeObject* L_21 = ___0_pointerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26675));
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(7, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_21);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26675));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26676));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_22, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26676));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26677));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_20);
		MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_20, L_23, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26677));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:439>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26678));
		Il2CppSharedGenericObject* L_24 = V_0;
		RuntimeObject* L_25 = ___0_pointerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26679));
		NullCheck(L_25);
		int32_t L_26;
		L_26 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_25);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26679));
		if ((((int32_t)L_26) == ((int32_t)(-1))))
		{
			G_B8_0 = ((RuntimeObject*)(L_24));
			goto IL_00aa;
		}
		G_B7_0 = ((RuntimeObject*)(L_24));
	}
	{
		RuntimeObject* L_27 = ___0_pointerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26680));
		NullCheck(L_27);
		int32_t L_28;
		L_28 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_27);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26680));
		G_B9_0 = L_28;
		G_B9_1 = G_B7_0;
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_00ab:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26681));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)G_B9_1);
		MouseEventBase_1_set_button_mBD212144434B278C49CFA531AD588260FC8CB868_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)G_B9_1, G_B9_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26681));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:440>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26682));
		Il2CppSharedGenericObject* L_29 = V_0;
		RuntimeObject* L_30 = ___0_pointerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26683));
		NullCheck(L_30);
		int32_t L_31;
		L_31 = InterfaceFuncInvoker0< int32_t >::Invoke(4, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_30);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26683));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26684));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_29);
		MouseEventBase_1_set_pressedButtons_m9E6A63DB8A91D2C35470777AC0958915E3DBB476_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_29, L_31, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26684));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:441>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26685));
		Il2CppSharedGenericObject* L_32 = V_0;
		RuntimeObject* L_33 = ___0_pointerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26686));
		NullCheck(L_33);
		int32_t L_34;
		L_34 = InterfaceFuncInvoker0< int32_t >::Invoke(9, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_33);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26686));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26687));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_32);
		MouseEventBase_1_set_clickCount_mB1575DBF43CE6DC0546CC215CF0CFEDB3C1D648E_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_32, L_34, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26687));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:443>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26688));
		RuntimeObject* L_35 = ___0_pointerEvent;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:444>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26689));
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPointerEventInternal_tF0950F230320BC22B077741EA08AC538EE878833_il2cpp_TypeInfo_var)))
		{
			goto IL_00e6;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:448>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26690));
		Il2CppSharedGenericObject* L_36 = V_0;
		RuntimeObject* L_37 = ___0_pointerEvent;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26691));
		NullCheck((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_36);
		MouseEventBase_1_set_sourcePointerEvent_m65A5978FE221A03B997358CE3158649369FE87ED_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_36, L_37, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26691));
	}

IL_00e6:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:451>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26692));
		Il2CppSharedGenericObject* L_38 = V_0;
		return L_38;
	}
}
// Method Definition Index: 14804
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1__ctor_m116AD74DF8F31AE58BE42C48EF19AE61B7AAFB0E_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(EventBase_1_t2460AA6988D53F2ABE4DCA78195C6D6E516089A9_StaticInit);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26693));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26694));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:454>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26695));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26696));
		CHECKED_LOCAL_INIT(EventBase_1_t2460AA6988D53F2ABE4DCA78195C6D6E516089A9_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19)),il2cpp_codegen_runtime_class_init_inline);
		EventBase_1__ctor_mACA9307C9EF30E9F5D55E8FA6AE6E58A99BA40CD((EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26696));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:456>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26697));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26698));
		MouseEventBase_1_LocalInit_m85C31C18C63B13944050FE4C8F328E12465C8132(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26698));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:457>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26699));
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
// Method Definition Index: 22323
// Method Definition Index: 22324
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 22323
// Method Definition Index: 22324
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 22323
// Method Definition Index: 22324
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 22323
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayAllocator__ctor_m44FA9B3E65248C9541D203A60A05E8067106EF43_fshared (NativeArrayAllocator_t7D098BCF0B0C50F493B510D50B8986211C63F492* __this, String_t* ___0_profilerName, int32_t ___1_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47E8CCB1C331C9476E88F8A6179C1466CBA62167);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_profilerName), (&___1_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 87841));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 87842));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Renderer/UIRNativePagedList.cs:120>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 87843));
		int32_t L_0 = ___1_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 87844));
		bool L_1;
		L_1 = MemoryLabel_SupportsAllocator_m2FBEAFCA15699420E8C5E42BA823DEE2999B6E6D(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 87844));
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Renderer/UIRNativePagedList.cs:122>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 87845));
		__this->___m_Allocator = 0;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Renderer/UIRNativePagedList.cs:123>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 87846));
		String_t* L_2 = ___0_profilerName;
		int32_t L_3 = ___1_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 87847));
		MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		MemoryLabel__ctor_m9EBEB7071302DF5EC12EB34EB2949E01617C5191((&L_4), _stringLiteral47E8CCB1C331C9476E88F8A6179C1466CBA62167, L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 87847));
		__this->___m_MemoryLabel = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 87848));
		return;
	}

IL_0022:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Renderer/UIRNativePagedList.cs:127>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 87849));
		int32_t L_5 = ___1_allocator;
		__this->___m_Allocator = L_5;
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Renderer/UIRNativePagedList.cs:128>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 87850));
		MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2* L_6 = (MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2*)(&__this->___m_MemoryLabel);
		il2cpp_codegen_initobj(L_6, sizeof(MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2));
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Renderer/UIRNativePagedList.cs:130>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 87851));
		return;
	}
}
// Method Definition Index: 22324
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayAllocator_CreateArray_m23A47AB9FCCC96DE09A09E691F423EEE92972DFE_fshared (NativeArrayAllocator_t7D098BCF0B0C50F493B510D50B8986211C63F492* __this, int32_t ___0_length, int32_t ___1_options, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_length), (&___1_options));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 87852));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 87853));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Renderer/UIRNativePagedList.cs:133>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 87854));
		MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2* L_0 = (MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2*)(&__this->___m_MemoryLabel);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 87855));
		bool L_1;
		L_1 = MemoryLabel_get_IsCreated_m8B3D6AC21CEADC1D4C4EF4A3D2B168EBFADC26BA(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 87855));
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Renderer/UIRNativePagedList.cs:134>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 87856));
		int32_t L_2 = ___0_length;
		MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 L_3 = __this->___m_MemoryLabel;
		int32_t L_4 = ___1_options;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 87857));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5;
		memset((&L_5), 0, sizeof(L_5));
		NativeArray_1__ctor_m01C0164611F0F10354E4ABA539FA854E3A97F76A((&L_5), L_2, L_3, L_4, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 87857));
		return L_5;
	}

IL_001b:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Renderer/UIRNativePagedList.cs:136>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 87858));
		int32_t L_6 = ___0_length;
		int32_t L_7 = __this->___m_Allocator;
		int32_t L_8 = ___1_options;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 87859));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_9;
		memset((&L_9), 0, sizeof(L_9));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_9), L_6, L_7, L_8, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 87859));
		return L_9;
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
// Method Definition Index: 22323
// Method Definition Index: 22324
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 35130
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayDebugView_1__ctor_mEF9CE122C17D8726F7D7FF219269C08B7064D40D_fshared (NativeArrayDebugView_1_t822A40A26B069D94A4D21875C23D557566F1CBB1* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1421));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1422));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1070>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1423));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1424));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1424));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1072>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1425));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_array;
		__this->___m_Array = L_0;
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1073>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1426));
		return;
	}
}
// Method Definition Index: 35131
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* NativeArrayDebugView_1_get_Items_m97DCCC2FDE77999001EEF67F9A4F3DE999571331_fshared (NativeArrayDebugView_1_t822A40A26B069D94A4D21875C23D557566F1CBB1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1427));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1428));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1079>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1429));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1430));
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1430));
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1081>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1431));
		return (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)NULL;
	}

IL_000f:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1086>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1432));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_2 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		int32_t L_3 = L_2->___m_Length;
		V_0 = L_3;
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1087>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1433));
		int32_t L_4 = V_0;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_5 = (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)(__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (uint32_t)L_4);
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1089>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1434));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_6 = L_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1435));
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_7;
		L_7 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC((RuntimeObject*)L_6, 3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1435));
		V_1 = L_7;
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1090>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1436));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1437));
		intptr_t L_8;
		L_8 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1437));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1092>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1438));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1439));
		void* L_9;
		L_9 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1439));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_10 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		void* L_11 = L_10->___m_Buffer;
		int32_t L_12 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1440));
		int32_t L_13;
		L_13 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1440));
		int64_t L_14 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_12, L_13)),NULL));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1441));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_9, L_11, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1441));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1094>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1442));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1443));
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1443));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1096>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1444));
		return L_6;
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
// Method Definition Index: 35132
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayReadOnlyDebugView_1__ctor_mC51205271016A025833480BC02D36C1629D3D81E_fshared (NativeArrayReadOnlyDebugView_1_t9602DD9F52F478794DD161C2E2EF8153A126CB09* __this, ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 ___0_array, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1445));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1446));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1108>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1447));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1448));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1448));
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1110>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1449));
		ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 L_0 = ___0_array;
		__this->___m_Array = L_0;
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1111>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1450));
		return;
	}
}
// Method Definition Index: 35133
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* NativeArrayReadOnlyDebugView_1_get_Items_mF17EB47264BC808ED8A5F39E19DCE6886B1CB0E2_fshared (NativeArrayReadOnlyDebugView_1_t9602DD9F52F478794DD161C2E2EF8153A126CB09* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1451));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1452));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1117>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1453));
		ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8* L_0 = (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8*)(&__this->___m_Array);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1454));
		bool L_1;
		L_1 = ReadOnly_get_IsCreated_mADD8624D940450CB4F64C20BCFEFAC0065E485A2_inline(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1454));
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1119>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1455));
		return (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)NULL;
	}

IL_000f:
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:1122>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1456));
		ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8* L_2 = (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8*)(&__this->___m_Array);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1457));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_3;
		L_3 = ReadOnly_ToArray_mFD80D7B7BE13A74B4BE53E54CE3BCB5300F46D27(L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1457));
		return L_3;
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
// Method Definition Index: 52090
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayStaticId_1__cctor_m67213AA7112EE9BCD68829DC44441438CB42950A_fshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21252));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 21253));
	{
		//<source_info:./Library/PackageCache/com.unity.collections@10fff0607388/Unity.Collections/NativeArrayExtensions.cs:22>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21254));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21255));
		SharedStatic_1_tEC5F09652230C531A3C62C83CB579D41179BD182 L_0;
		L_0 = SharedStatic_1_GetOrCreate_TisNativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18_m8F25A13283F3A46D6CD00E87F323C3C901EE3CD2(0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 21255));
		((NativeArrayStaticId_1_t50C709E712A83F94158359DA374799781680B83C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_staticSafetyId = L_0;
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
// Method Definition Index: 35061
// Method Definition Index: 35062
// Method Definition Index: 35063
// Method Definition Index: 35064
// Method Definition Index: 35065
// Method Definition Index: 35066
// Method Definition Index: 35067
// Method Definition Index: 35068
// Method Definition Index: 35069
// Method Definition Index: 35070
// Method Definition Index: 35071
// Method Definition Index: 35072
// Method Definition Index: 35073
// Method Definition Index: 35074
// Method Definition Index: 35075
// Method Definition Index: 35076
// Method Definition Index: 35077
// Method Definition Index: 35078
// Method Definition Index: 35079
// Method Definition Index: 35080
// Method Definition Index: 35081
// Method Definition Index: 35082
// Method Definition Index: 35083
// Method Definition Index: 35084
// Method Definition Index: 35085
// Method Definition Index: 35086
// Method Definition Index: 35087
// Method Definition Index: 35088
// Method Definition Index: 35089
// Method Definition Index: 35090
// Method Definition Index: 35091
// Method Definition Index: 35092
// Method Definition Index: 35093
// Method Definition Index: 35094
// Method Definition Index: 35095
// Method Definition Index: 35096
// Method Definition Index: 35100
// Method Definition Index: 35101
// Method Definition Index: 35102
// Method Definition Index: 35103
// Method Definition Index: 35104
// Method Definition Index: 35105
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 35061
// Method Definition Index: 35062
// Method Definition Index: 35063
// Method Definition Index: 35064
// Method Definition Index: 35065
// Method Definition Index: 35066
// Method Definition Index: 35067
// Method Definition Index: 35068
// Method Definition Index: 35069
// Method Definition Index: 35070
// Method Definition Index: 35071
// Method Definition Index: 35072
// Method Definition Index: 35073
// Method Definition Index: 35074
// Method Definition Index: 35075
// Method Definition Index: 35076
// Method Definition Index: 35077
// Method Definition Index: 35078
// Method Definition Index: 35079
// Method Definition Index: 35080
// Method Definition Index: 35081
// Method Definition Index: 35082
// Method Definition Index: 35083
// Method Definition Index: 35084
// Method Definition Index: 35085
// Method Definition Index: 35086
// Method Definition Index: 35087
// Method Definition Index: 35088
// Method Definition Index: 35089
// Method Definition Index: 35090
// Method Definition Index: 35091
// Method Definition Index: 35092
// Method Definition Index: 35093
// Method Definition Index: 35094
// Method Definition Index: 35095
// Method Definition Index: 35096
// Method Definition Index: 35100
// Method Definition Index: 35101
// Method Definition Index: 35102
// Method Definition Index: 35103
// Method Definition Index: 35104
// Method Definition Index: 35105
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 35061
// Method Definition Index: 35062
// Method Definition Index: 35063
// Method Definition Index: 35064
// Method Definition Index: 35065
// Method Definition Index: 35066
// Method Definition Index: 35067
// Method Definition Index: 35068
// Method Definition Index: 35069
// Method Definition Index: 35070
// Method Definition Index: 35071
// Method Definition Index: 35072
// Method Definition Index: 35073
// Method Definition Index: 35074
// Method Definition Index: 35075
// Method Definition Index: 35076
// Method Definition Index: 35077
// Method Definition Index: 35078
// Method Definition Index: 35079
// Method Definition Index: 35080
// Method Definition Index: 35081
// Method Definition Index: 35082
// Method Definition Index: 35083
// Method Definition Index: 35084
// Method Definition Index: 35085
// Method Definition Index: 35086
// Method Definition Index: 35087
// Method Definition Index: 35088
// Method Definition Index: 35089
// Method Definition Index: 35090
// Method Definition Index: 35091
// Method Definition Index: 35092
// Method Definition Index: 35093
// Method Definition Index: 35094
// Method Definition Index: 35095
// Method Definition Index: 35096
// Method Definition Index: 35100
// Method Definition Index: 35101
// Method Definition Index: 35102
// Method Definition Index: 35103
// Method Definition Index: 35104
// Method Definition Index: 35105
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 35061
// Method Definition Index: 35062
// Method Definition Index: 35063
// Method Definition Index: 35064
// Method Definition Index: 35065
// Method Definition Index: 35066
// Method Definition Index: 35067
// Method Definition Index: 35068
// Method Definition Index: 35069
// Method Definition Index: 35070
// Method Definition Index: 35071
// Method Definition Index: 35072
// Method Definition Index: 35073
// Method Definition Index: 35074
// Method Definition Index: 35075
// Method Definition Index: 35076
// Method Definition Index: 35077
// Method Definition Index: 35078
// Method Definition Index: 35079
// Method Definition Index: 35080
// Method Definition Index: 35081
// Method Definition Index: 35082
// Method Definition Index: 35083
// Method Definition Index: 35084
// Method Definition Index: 35085
// Method Definition Index: 35086
// Method Definition Index: 35087
// Method Definition Index: 35088
// Method Definition Index: 35089
// Method Definition Index: 35090
// Method Definition Index: 35091
// Method Definition Index: 35092
// Method Definition Index: 35093
// Method Definition Index: 35094
// Method Definition Index: 35095
// Method Definition Index: 35096
// Method Definition Index: 35100
// Method Definition Index: 35101
// Method Definition Index: 35102
// Method Definition Index: 35103
// Method Definition Index: 35104
// Method Definition Index: 35105
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 35061
// Method Definition Index: 35062
// Method Definition Index: 35063
// Method Definition Index: 35064
// Method Definition Index: 35065
// Method Definition Index: 35066
// Method Definition Index: 35067
// Method Definition Index: 35068
// Method Definition Index: 35069
// Method Definition Index: 35070
// Method Definition Index: 35071
// Method Definition Index: 35072
// Method Definition Index: 35073
// Method Definition Index: 35074
// Method Definition Index: 35075
// Method Definition Index: 35076
// Method Definition Index: 35077
// Method Definition Index: 35078
// Method Definition Index: 35079
// Method Definition Index: 35080
// Method Definition Index: 35081
// Method Definition Index: 35082
// Method Definition Index: 35083
// Method Definition Index: 35084
// Method Definition Index: 35085
// Method Definition Index: 35086
// Method Definition Index: 35087
// Method Definition Index: 35088
// Method Definition Index: 35089
// Method Definition Index: 35090
// Method Definition Index: 35091
// Method Definition Index: 35092
// Method Definition Index: 35093
// Method Definition Index: 35094
// Method Definition Index: 35095
// Method Definition Index: 35096
// Method Definition Index: 35100
// Method Definition Index: 35101
// Method Definition Index: 35102
// Method Definition Index: 35103
// Method Definition Index: 35104
// Method Definition Index: 35105
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 35061
// Method Definition Index: 35062
// Method Definition Index: 35063
// Method Definition Index: 35064
// Method Definition Index: 35065
// Method Definition Index: 35066
// Method Definition Index: 35067
// Method Definition Index: 35068
// Method Definition Index: 35069
// Method Definition Index: 35070
// Method Definition Index: 35071
// Method Definition Index: 35072
// Method Definition Index: 35073
// Method Definition Index: 35074
// Method Definition Index: 35075
// Method Definition Index: 35076
// Method Definition Index: 35077
// Method Definition Index: 35078
// Method Definition Index: 35079
// Method Definition Index: 35080
// Method Definition Index: 35081
// Method Definition Index: 35082
// Method Definition Index: 35083
// Method Definition Index: 35084
// Method Definition Index: 35085
// Method Definition Index: 35086
// Method Definition Index: 35087
// Method Definition Index: 35088
// Method Definition Index: 35089
// Method Definition Index: 35090
// Method Definition Index: 35091
// Method Definition Index: 35092
// Method Definition Index: 35093
// Method Definition Index: 35094
// Method Definition Index: 35095
// Method Definition Index: 35096
// Method Definition Index: 35100
// Method Definition Index: 35101
// Method Definition Index: 35102
// Method Definition Index: 35103
// Method Definition Index: 35104
// Method Definition Index: 35105
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 35061
// Method Definition Index: 35062
// Method Definition Index: 35063
// Method Definition Index: 35064
// Method Definition Index: 35065
// Method Definition Index: 35066
// Method Definition Index: 35067
// Method Definition Index: 35068
// Method Definition Index: 35069
// Method Definition Index: 35070
// Method Definition Index: 35071
// Method Definition Index: 35072
// Method Definition Index: 35073
// Method Definition Index: 35074
// Method Definition Index: 35075
// Method Definition Index: 35076
// Method Definition Index: 35077
// Method Definition Index: 35078
// Method Definition Index: 35079
// Method Definition Index: 35080
// Method Definition Index: 35081
// Method Definition Index: 35082
// Method Definition Index: 35083
// Method Definition Index: 35084
// Method Definition Index: 35085
// Method Definition Index: 35086
// Method Definition Index: 35087
// Method Definition Index: 35088
// Method Definition Index: 35089
// Method Definition Index: 35090
// Method Definition Index: 35091
// Method Definition Index: 35092
// Method Definition Index: 35093
// Method Definition Index: 35094
// Method Definition Index: 35095
// Method Definition Index: 35096
// Method Definition Index: 35100
// Method Definition Index: 35101
// Method Definition Index: 35102
// Method Definition Index: 35103
// Method Definition Index: 35104
// Method Definition Index: 35105
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 35061
// Method Definition Index: 35062
// Method Definition Index: 35063
// Method Definition Index: 35064
// Method Definition Index: 35065
// Method Definition Index: 35066
// Method Definition Index: 35067
// Method Definition Index: 35068
// Method Definition Index: 35069
// Method Definition Index: 35070
// Method Definition Index: 35071
// Method Definition Index: 35072
// Method Definition Index: 35073
// Method Definition Index: 35074
// Method Definition Index: 35075
// Method Definition Index: 35076
// Method Definition Index: 35077
// Method Definition Index: 35078
// Method Definition Index: 35079
// Method Definition Index: 35080
// Method Definition Index: 35081
// Method Definition Index: 35082
// Method Definition Index: 35083
// Method Definition Index: 35084
// Method Definition Index: 35085
// Method Definition Index: 35086
// Method Definition Index: 35087
// Method Definition Index: 35088
// Method Definition Index: 35089
// Method Definition Index: 35090
// Method Definition Index: 35091
// Method Definition Index: 35092
// Method Definition Index: 35093
// Method Definition Index: 35094
// Method Definition Index: 35095
// Method Definition Index: 35096
// Method Definition Index: 35100
// Method Definition Index: 35101
// Method Definition Index: 35102
// Method Definition Index: 35103
// Method Definition Index: 35104
// Method Definition Index: 35105
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 35061
// Method Definition Index: 35062
// Method Definition Index: 35063
// Method Definition Index: 35064
// Method Definition Index: 35065
// Method Definition Index: 35066
// Method Definition Index: 35067
// Method Definition Index: 35068
// Method Definition Index: 35069
// Method Definition Index: 35070
// Method Definition Index: 35071
// Method Definition Index: 35072
// Method Definition Index: 35073
// Method Definition Index: 35074
// Method Definition Index: 35075
// Method Definition Index: 35076
// Method Definition Index: 35077
// Method Definition Index: 35078
// Method Definition Index: 35079
// Method Definition Index: 35080
// Method Definition Index: 35081
// Method Definition Index: 35082
// Method Definition Index: 35083
// Method Definition Index: 35084
// Method Definition Index: 35085
// Method Definition Index: 35086
// Method Definition Index: 35087
// Method Definition Index: 35088
// Method Definition Index: 35089
// Method Definition Index: 35090
// Method Definition Index: 35091
// Method Definition Index: 35092
// Method Definition Index: 35093
// Method Definition Index: 35094
// Method Definition Index: 35095
// Method Definition Index: 35096
// Method Definition Index: 35100
// Method Definition Index: 35101
// Method Definition Index: 35102
// Method Definition Index: 35103
// Method Definition Index: 35104
// Method Definition Index: 35105
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 35061
// Method Definition Index: 35062
// Method Definition Index: 35063
// Method Definition Index: 35064
// Method Definition Index: 35065
// Method Definition Index: 35066
// Method Definition Index: 35067
// Method Definition Index: 35068
// Method Definition Index: 35069
// Method Definition Index: 35070
// Method Definition Index: 35071
// Method Definition Index: 35072
// Method Definition Index: 35073
// Method Definition Index: 35074
// Method Definition Index: 35075
// Method Definition Index: 35076
// Method Definition Index: 35077
// Method Definition Index: 35078
// Method Definition Index: 35079
// Method Definition Index: 35080
// Method Definition Index: 35081
// Method Definition Index: 35082
// Method Definition Index: 35083
// Method Definition Index: 35084
// Method Definition Index: 35085
// Method Definition Index: 35086
// Method Definition Index: 35087
// Method Definition Index: 35088
// Method Definition Index: 35089
// Method Definition Index: 35090
// Method Definition Index: 35091
// Method Definition Index: 35092
// Method Definition Index: 35093
// Method Definition Index: 35094
// Method Definition Index: 35095
// Method Definition Index: 35096
// Method Definition Index: 35100
// Method Definition Index: 35101
// Method Definition Index: 35102
// Method Definition Index: 35103
// Method Definition Index: 35104
// Method Definition Index: 35105
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 35061
// Method Definition Index: 35062
// Method Definition Index: 35063
// Method Definition Index: 35064
// Method Definition Index: 35065
// Method Definition Index: 35066
// Method Definition Index: 35067
// Method Definition Index: 35068
// Method Definition Index: 35069
// Method Definition Index: 35070
// Method Definition Index: 35071
// Method Definition Index: 35072
// Method Definition Index: 35073
// Method Definition Index: 35074
// Method Definition Index: 35075
// Method Definition Index: 35076
// Method Definition Index: 35077
// Method Definition Index: 35078
// Method Definition Index: 35079
// Method Definition Index: 35080
// Method Definition Index: 35081
// Method Definition Index: 35082
// Method Definition Index: 35083
// Method Definition Index: 35084
// Method Definition Index: 35085
// Method Definition Index: 35086
// Method Definition Index: 35087
// Method Definition Index: 35088
// Method Definition Index: 35089
// Method Definition Index: 35090
// Method Definition Index: 35091
// Method Definition Index: 35092
// Method Definition Index: 35093
// Method Definition Index: 35094
// Method Definition Index: 35095
// Method Definition Index: 35096
// Method Definition Index: 35100
// Method Definition Index: 35101
// Method Definition Index: 35102
// Method Definition Index: 35103
// Method Definition Index: 35104
// Method Definition Index: 35105
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 35061
// Method Definition Index: 35062
// Method Definition Index: 35063
// Method Definition Index: 35064
// Method Definition Index: 35065
// Method Definition Index: 35066
// Method Definition Index: 35067
// Method Definition Index: 35068
// Method Definition Index: 35069
// Method Definition Index: 35070
// Method Definition Index: 35071
// Method Definition Index: 35072
// Method Definition Index: 35073
// Method Definition Index: 35074
// Method Definition Index: 35075
// Method Definition Index: 35076
// Method Definition Index: 35077
// Method Definition Index: 35078
// Method Definition Index: 35079
// Method Definition Index: 35080
// Method Definition Index: 35081
// Method Definition Index: 35082
// Method Definition Index: 35083
// Method Definition Index: 35084
// Method Definition Index: 35085
// Method Definition Index: 35086
// Method Definition Index: 35087
// Method Definition Index: 35088
// Method Definition Index: 35089
// Method Definition Index: 35090
// Method Definition Index: 35091
// Method Definition Index: 35092
// Method Definition Index: 35093
// Method Definition Index: 35094
// Method Definition Index: 35095
// Method Definition Index: 35096
// Method Definition Index: 35100
// Method Definition Index: 35101
// Method Definition Index: 35102
// Method Definition Index: 35103
// Method Definition Index: 35104
// Method Definition Index: 35105
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 35061
// Method Definition Index: 35062
// Method Definition Index: 35063
// Method Definition Index: 35064
// Method Definition Index: 35065
// Method Definition Index: 35066
// Method Definition Index: 35067
// Method Definition Index: 35068
// Method Definition Index: 35069
// Method Definition Index: 35070
// Method Definition Index: 35071
// Method Definition Index: 35072
// Method Definition Index: 35073
// Method Definition Index: 35074
// Method Definition Index: 35075
// Method Definition Index: 35076
// Method Definition Index: 35077
// Method Definition Index: 35078
// Method Definition Index: 35079
// Method Definition Index: 35080
// Method Definition Index: 35081
// Method Definition Index: 35082
// Method Definition Index: 35083
// Method Definition Index: 35084
// Method Definition Index: 35085
// Method Definition Index: 35086
// Method Definition Index: 35087
// Method Definition Index: 35088
// Method Definition Index: 35089
// Method Definition Index: 35090
// Method Definition Index: 35091
// Method Definition Index: 35092
// Method Definition Index: 35093
// Method Definition Index: 35094
// Method Definition Index: 35095
// Method Definition Index: 35096
// Method Definition Index: 35100
// Method Definition Index: 35101
// Method Definition Index: 35102
// Method Definition Index: 35103
// Method Definition Index: 35104
// Method Definition Index: 35105
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 35061
// Method Definition Index: 35062
// Method Definition Index: 35063
// Method Definition Index: 35064
// Method Definition Index: 35065
// Method Definition Index: 35066
// Method Definition Index: 35067
// Method Definition Index: 35068
// Method Definition Index: 35069
// Method Definition Index: 35070
// Method Definition Index: 35071
// Method Definition Index: 35072
// Method Definition Index: 35073
// Method Definition Index: 35074
// Method Definition Index: 35075
// Method Definition Index: 35076
// Method Definition Index: 35077
// Method Definition Index: 35078
// Method Definition Index: 35079
// Method Definition Index: 35080
// Method Definition Index: 35081
// Method Definition Index: 35082
// Method Definition Index: 35083
// Method Definition Index: 35084
// Method Definition Index: 35085
// Method Definition Index: 35086
// Method Definition Index: 35087
// Method Definition Index: 35088
// Method Definition Index: 35089
// Method Definition Index: 35090
// Method Definition Index: 35091
// Method Definition Index: 35092
// Method Definition Index: 35093
// Method Definition Index: 35094
// Method Definition Index: 35095
// Method Definition Index: 35096
// Method Definition Index: 35100
// Method Definition Index: 35101
// Method Definition Index: 35102
// Method Definition Index: 35103
// Method Definition Index: 35104
// Method Definition Index: 35105
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 35061
// Method Definition Index: 35062
// Method Definition Index: 35063
// Method Definition Index: 35064
// Method Definition Index: 35065
// Method Definition Index: 35066
// Method Definition Index: 35067
// Method Definition Index: 35068
// Method Definition Index: 35069
// Method Definition Index: 35070
// Method Definition Index: 35071
// Method Definition Index: 35072
// Method Definition Index: 35073
// Method Definition Index: 35074
// Method Definition Index: 35075
// Method Definition Index: 35076
// Method Definition Index: 35077
// Method Definition Index: 35078
// Method Definition Index: 35079
// Method Definition Index: 35080
// Method Definition Index: 35081
// Method Definition Index: 35082
// Method Definition Index: 35083
// Method Definition Index: 35084
// Method Definition Index: 35085
// Method Definition Index: 35086
// Method Definition Index: 35087
// Method Definition Index: 35088
// Method Definition Index: 35089
// Method Definition Index: 35090
// Method Definition Index: 35091
// Method Definition Index: 35092
// Method Definition Index: 35093
// Method Definition Index: 35094
// Method Definition Index: 35095
// Method Definition Index: 35096
// Method Definition Index: 35100
// Method Definition Index: 35101
// Method Definition Index: 35102
// Method Definition Index: 35103
// Method Definition Index: 35104
// Method Definition Index: 35105
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 35061
// Method Definition Index: 35062
// Method Definition Index: 35063
// Method Definition Index: 35064
// Method Definition Index: 35065
// Method Definition Index: 35066
// Method Definition Index: 35067
// Method Definition Index: 35068
// Method Definition Index: 35069
// Method Definition Index: 35070
// Method Definition Index: 35071
// Method Definition Index: 35072
// Method Definition Index: 35073
// Method Definition Index: 35074
// Method Definition Index: 35075
// Method Definition Index: 35076
// Method Definition Index: 35077
// Method Definition Index: 35078
// Method Definition Index: 35079
// Method Definition Index: 35080
// Method Definition Index: 35081
// Method Definition Index: 35082
// Method Definition Index: 35083
// Method Definition Index: 35084
// Method Definition Index: 35085
// Method Definition Index: 35086
// Method Definition Index: 35087
// Method Definition Index: 35088
// Method Definition Index: 35089
// Method Definition Index: 35090
// Method Definition Index: 35091
// Method Definition Index: 35092
// Method Definition Index: 35093
// Method Definition Index: 35094
// Method Definition Index: 35095
// Method Definition Index: 35096
// Method Definition Index: 35100
// Method Definition Index: 35101
// Method Definition Index: 35102
// Method Definition Index: 35103
// Method Definition Index: 35104
// Method Definition Index: 35105
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 698
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
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
// Method Definition Index: 37465
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_v));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10250));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10251));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Vector2.cs:657>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10252));
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x;
		(&V_0)->___x = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y;
		(&V_0)->___y = L_3;
		(&V_0)->___z = (0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 13851
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBase_set_propagation_m1F5D2A6582B8A4D64F84F0B71F90790FA2BF7E8C_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_set_propagation_m1F5D2A6582B8A4D64F84F0B71F90790FA2BF7E8C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, EventBase_set_propagation_m1F5D2A6582B8A4D64F84F0B71F90790FA2BF7E8C_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18488));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18489));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/EventBase.cs:113>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18490));
		int32_t L_0 = ___0_value;
		__this->___U3CpropagationU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 37466
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10253));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10254));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Vector2.cs:670>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10255));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector;
		return L_0;
	}
}
// Method Definition Index: 13877
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EventBase_get_currentTarget_m6F265B85FF86C35F62CFDF144B80B383DA9C503B_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_get_currentTarget_m6F265B85FF86C35F62CFDF144B80B383DA9C503B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, EventBase_get_currentTarget_m6F265B85FF86C35F62CFDF144B80B383DA9C503B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18628));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18629));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/EventBase.cs:371>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18630));
		RuntimeObject* L_0 = __this->___m_CurrentTarget;
		return L_0;
	}
}
// Method Definition Index: 37464
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_v));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10247));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10248));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/Math/Vector2.cs:653>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 10249));
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x;
		(&V_0)->___x = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y;
		(&V_0)->___y = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 13866
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* EventBase_get_elementTarget_mF6CFD6372FB247718797DB8927654F781821B94D_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_get_elementTarget_mF6CFD6372FB247718797DB8927654F781821B94D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, EventBase_get_elementTarget_mF6CFD6372FB247718797DB8927654F781821B94D_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18569));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18570));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/EventBase.cs:227>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 18571));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = __this->___U3CelementTargetU3Ek__BackingField;
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
// Method Definition Index: 11227
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mE6103188ACDEC07F90F2D2986554730D18029750_fshared_inline (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____size;
		return L_0;
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
// Method Definition Index: 2082
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m3743D2A1BDE7D9720706FF7CFE3C270432C4D381_fshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	memset(V_0, 0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
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
		il2cpp_codegen_initobj(__this, sizeof(Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
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
		__this->____object = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)(RuntimeObject*)L_8);
		__this->____index = 0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = ___0_array;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		__this->____length = L_10;
		return;
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
// Method Definition Index: 951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mEF96248898C14F3687A5C72B920F841701E4E13C_fshared_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
// Method Definition Index: 2084
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m5ABFBF1303AB4B2B8AD03A4586CC52B6098DCBE9_fshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
	memset(V_0, 0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
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
		il2cpp_codegen_initobj(__this, sizeof(Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T_t42B40453344CFE62FC88BC5443107BD0DD551C44);
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
		__this->____object = (RuntimeObject*)L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)(RuntimeObject*)L_17);
		int32_t L_18 = ___1_start;
		__this->____index = L_18;
		int32_t L_19 = ___2_length;
		__this->____length = L_19;
		return;
	}
}
// Method Definition Index: 2097
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Memory_1_get_Span_m86E7A7A0C72430FDB1B2A2BCEEAAEEF7E7F83596_fshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_1 = __this->____object;
		NullCheck(((MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2;
		L_2 = VirtualFuncInvoker0< Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 >::Invoke(4, ((MemoryManager_1_tED55276A18D77758B15A7A09B9C0D4DB79480487*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))));
		V_0 = L_2;
		int32_t L_3 = __this->____index;
		int32_t L_4 = __this->____length;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_5;
		L_5 = Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_inline((&V_0), ((int32_t)(L_3&((int32_t)2147483647LL))), L_4, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17));
		return L_5;
	}

IL_0034:
	{
		bool L_6 = (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		if (!L_6)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_7 = __this->____object;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var));
		String_t* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_9 = V_1;
		NullCheck(L_9);
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		Il2CppFullySharedGenericAny* L_11;
		L_11 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_10);
		String_t* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_inline((&L_14), L_11, L_13, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18));
		V_0 = L_14;
		int32_t L_15 = __this->____index;
		int32_t L_16 = __this->____length;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_17;
		L_17 = Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_inline((&V_0), L_15, L_16, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17));
		return L_17;
	}

IL_0089:
	{
		RuntimeObject* L_18 = __this->____object;
		if (!L_18)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_19 = __this->____object;
		int32_t L_20 = __this->____index;
		int32_t L_21 = __this->____length;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_inline((&L_22), ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2))), L_20, ((int32_t)(L_21&((int32_t)2147483647LL))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
		return L_22;
	}

IL_00b4:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_23 = V_0;
		return L_23;
	}
}
// Method Definition Index: 2087
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Memory_1__ctor_m5F9E06AAB95D8F8AF62C3AD68DEC2F6716CDEE05_fshared_inline (Memory_1_t762D61B435521D1706EEDC25CA8C8EA1AE19AFEA* __this, RuntimeObject* ___0_obj, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_obj;
		__this->____object = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____object), (void*)L_0);
		int32_t L_1 = ___1_start;
		__this->____index = L_1;
		int32_t L_2 = ___2_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2454
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	//<source_info:<no-source>:1>
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Il2CppFullySharedGenericAny* L_8;
		L_8 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_6, L_7, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		int32_t L_9 = ___1_length;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		return L_10;
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
// Method Definition Index: 2455
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Span_1_ToArray_mBB0A9E11BBAA9FDE1D0C045FBA14F4CD3E84773E_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Il2CppFullySharedGenericAny* L_6;
		L_6 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_5);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_7 = __this->____pointer;
		V_0 = L_7;
		Il2CppFullySharedGenericAny* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisIl2CppFullySharedGenericAny_m7051201F0F2C986AB0084FB4A24BEE4D4733C5EB(L_6, L_8, L_10, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_4;
	}
}
// Method Definition Index: 14769
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_get_modifiers_mAD508E12A77C609CD1733864D36295A5FA8045EC_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26415));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26416));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:118>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26417));
		int32_t L_0 = __this->___U3CmodifiersU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 14785
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26465));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26466));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:223>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26467));
		RuntimeObject* L_0 = __this->___U3CsourcePointerEventU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 14771
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26421));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26422));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:122>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26423));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CmousePositionU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 14789
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 MouseEventBase_1_get_panelRay_m15BF165696F29D7A1F371DEC030C1E57CFA7E682_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26477));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26478));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:225>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26479));
		Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 L_0 = __this->___U3CpanelRayU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 14770
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_modifiers_m65A8AF799BAE5B62060B24F27A2FE897F503CF2B_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26418));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26419));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:118>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26420));
		int32_t L_0 = ___0_value;
		__this->___U3CmodifiersU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 14772
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26424));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26425));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:122>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26426));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CmousePositionU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 14774
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26430));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26431));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:130>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26432));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3ClocalMousePositionU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 14776
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26436));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26437));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:138>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26438));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CmouseDeltaU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 14778
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_clickCount_mB1575DBF43CE6DC0546CC215CF0CFEDB3C1D648E_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26442));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26443));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:143>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26444));
		int32_t L_0 = ___0_value;
		__this->___U3CclickCountU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 14780
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_button_mBD212144434B278C49CFA531AD588260FC8CB868_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26448));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26449));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:149>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26450));
		int32_t L_0 = ___0_value;
		__this->___U3CbuttonU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 14782
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_pressedButtons_m9E6A63DB8A91D2C35470777AC0958915E3DBB476_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26454));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26455));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:156>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26456));
		int32_t L_0 = ___0_value;
		__this->___U3CpressedButtonsU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 14786
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_sourcePointerEvent_m65A5978FE221A03B997358CE3158649369FE87ED_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26468));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26469));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:223>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26470));
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CsourcePointerEventU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsourcePointerEventU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 14788
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_recomputeTopElementUnderMouse_m5D34798DE02C9783D4F623F4F5BFAD3C254B51E5_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26474));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26475));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:224>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26476));
		bool L_0 = ___0_value;
		__this->___U3CrecomputeTopElementUnderMouseU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 14790
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_panelRay_m2F11C8441C8E2382C3FC31A56453E221AE212536_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 ___0_value, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26480));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26481));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:225>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26482));
		Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 L_0 = ___0_value;
		__this->___U3CpanelRayU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 14787
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MouseEventBase_1_get_recomputeTopElementUnderMouse_m014A5DC3028338BDB21CA9F1BAF1FEAC334220F7_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26471));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26472));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Events/MouseEvents.cs:224>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 26473));
		bool L_0 = __this->___U3CrecomputeTopElementUnderMouseU3Ek__BackingField;
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
// Method Definition Index: 35116
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReadOnly_get_IsCreated_mADD8624D940450CB4F64C20BCFEFAC0065E485A2_fshared_inline (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1358));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1359));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Runtime/Export/NativeArray/NativeArray.cs:917>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 1360));
		void* L_0 = __this->___m_Buffer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
