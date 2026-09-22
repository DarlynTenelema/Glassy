#include "pch-cpp.hpp"





template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*,T1,T2,T3,T4,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,p2,p3,p4,invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774;
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Dictionary_2_t2E5037179C9A1F1245F111C037CAFB47E3EB45ED;
struct Dictionary_2_tDE8FAF4CAC415F7871ED1DBA452249683C3C7C27;
struct Dictionary_2_tB6CD9568C6E5A890E1075D85E9AB10FB9D2019FB;
struct Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038;
struct Dictionary_2_t22CFE5B50353477B8096C564BF9C409955D93A74;
struct Dictionary_2_tF362BB7E8BD559E70E016F496397CAC2C2820832;
struct Dictionary_2_t72A7E3789499F5D3DAAE7531F444BD6328B4F2F4;
struct Dictionary_2_t3181C2815485FD132CCA531DD1217A9E1D5075B3;
struct Dictionary_2_t67746C862827CF52EE2EE3E263CEFDA7F2DB0752;
struct Dictionary_2_t2A431A3F5F22FF309EB253464A83C663EE112B72;
struct Dictionary_2_tBF9B0A5151E66EC92CA188609E91639BAE6A4BC4;
struct Dictionary_2_tF2DAA4F099EAFB2040EE8995C0FBF67E12ECB607;
struct Dictionary_2_t564C604D61B2AFBD5E5A61499F7739507E24C9FD;
struct Dictionary_2_t4ECB2513151ECC752F95B76121679521EB7FC367;
struct Dictionary_2_t8E76AA10F849EB48DC945DFABFCC4A6EDA4BAAB6;
struct Dictionary_2_tA0F0759ACFE489A515318F7FEC7C252100C65E0E;
struct Dictionary_2_t29C8BF28A8478B079C61631B473BB09AF77C7D01;
struct Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8;
struct Dictionary_2_tC5FB811D06F447F815A6FCFE613E9262DAB781B5;
struct Dictionary_2_t3B57CAC20895EF5638DA97AE91F6FD26BB3FD4A4;
struct Dictionary_2_t25E7580BA3E8A4F13B53094DBF73C15539068508;
struct Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456;
struct Dictionary_2_t873B9D79376C64DD27D1977E8F6391DD3DBDE426;
struct Dictionary_2_t709D7105D5569BDBF0FF382194083253754F55F9;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct Dictionary_2_t851355FBAA1BC3C3387FF464D6EEC368EA177CD3;
struct Dictionary_2_t1FAD8DFAD7E5DB7CA096567CA9E3FDAC6391C496;
struct Dictionary_2_tB39FED3DFC0D7BF1C37A854FB90EFB3AB0A5107B;
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
struct Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC;
struct Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574;
struct Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F;
struct Dictionary_2_tBFEAFC9FF937023051A137D629FBB38AB703E006;
struct Dictionary_2_tF154DCAF19313A7B074F480A22F36F7B53F336D7;
struct Dictionary_2_tC70953CD71221A554EF46EC00CCC93ED22D0675F;
struct Dictionary_2_t844EF3CCC366B1E19EA9FA003823207C2AD35BC2;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IValueTaskSource_1_t24C3D3D2B6FEC31655EDCC0F97F377F05862ADF6;
struct IValueTaskSource_1_t5F54F119A84BD7F3A7E39ED5A9040C19D0EC4782;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3;
struct SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5;
struct SortedList_2_tA18FBD9172637D697F682AF34E557F03BD711F3F;
struct SortedList_2_t9C81D0EB1AE55E2C8EE9A023519853D497059664;
struct SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075;
struct TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3;
struct TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D;
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
struct UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A;
struct ValueProperty_t4D9BB595BCCF981819A498C3E15E14DF3EC7B633;
struct ValueTaskSourceAsTask_t237F990EF6E1CF9ECBF8EE2A9D5AB8804FF2B03D;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UIElementsModule[];
IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
IL2CPP_EXTERN_C const RuntimeMethod* OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ValueProperty_tC99E3169E559F5A22DFE1E0C4F4FEF2ACA4FA535_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec_t480A27B14DEE658FD5CD4792E8FDC35EFA01C8A7  : public RuntimeObject
{
};
struct ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774  : public RuntimeObject
{
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB  : public RuntimeObject
{
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
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct Property_2_t47C8388EE41AF1EDAC8A05EBC46A2F35E533FA05  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t0260C631A257B7F5E29C000CE501E50E01D2C608  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t9058AC806316ECF9782813D5E08A6F972DADF792  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t2B8367E4AFD450369A1C4A948FEF0346C1DD7BC2  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tFA7125D8D7A42B785B94542B1E5502A73E471EDF  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tFCABF76983A1F2F83D5E984504A47D09AC858895  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t6CB8EB3271B7D0EBA1168969AB3FC903ACF7C0EB  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t7D95666C2782D91AF1F40A3784AB8803843C9E4E  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t8D3844A01C8488884742B51674148CCD00B60498  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t05A35F5BA827CDC64B24D4204877F690DEC27122  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tABD4B015CDA9B404753A44AB2EDEAA6F2688D6F0  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t504169948D5C15A8A8563665E2D9DF59C55F9CFF  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t6ABA56748FEE71A79FBAE01510E00027922832EE  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t4419370A2048DE8AC76462D5E519FE85923E0975  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t928287B4443D3165BD6ABAC2F647D24D780B7E96  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t16D3E4C17690E8487249E0D940C37C3015AF4435  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t1A130B3BA8D98EC8F41A6B7EF2EEA8E65FE64A04  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t6D7F427A414B99407E647090DF66F54AA00A5E8E  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tC831322693F79D84BD6BC2E47565C269761A6D96  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tD6E4F1DAE2CCE3A0E7CF533A25BDD766F97FF7D7  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t8C5AC317E753BE254E702E465390BC88ED5EA5EF  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t2BA4BA208F043A4514DFF41129034BAD45C6DFA1  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t249CE4B867F549A0F75FEA235B5B25900516184F  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t312FB8DE9763E066AE3D742386DB40BB3B6B27BD  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t3D00CDB6855AB592E4EBE8412738EFF75451FB62  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tFFB328322627D9FB1B5D79229966EE43135BFFD5  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t0ABEB68257A05E4AB739CC54A46DB2528866414E  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tA59D4C1206151D15B4A2CEF7FFE0FD01E621E57E  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tCAB4943E053F4A966AC56B79F1DB0143B463C8B5  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tF6FB2F4C8BD5E3A35F372F43E9D5033747856D39  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tEE747F0196EEEB10CC95A18372CF3F26961163C7  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t250892AD63EB16A4E4D889AB976DCE82A9AA949F  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tC97B9506A8B0395C089F18C86276683C5E41A2E7  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tFCC4C94487F656CE4FFB98919493AE6DD10F4C40  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tC3E27FEAC55530D8C4898AD6A2EA04019EB1FE90  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t4ED9A30B731146E464F9ED48AED61168AB710960  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tC976A94D21CDBB051DBC4F9D71A8D808F1E22EDC  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t90AB378281B10B6B57910452249B8C69A0E2C8CA  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t9C550DB46A63E7B079B78CA5712B37180BDF4C52  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t94E6BF4F27CA2F665907D2CEC1305FA3C6CC2891  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t3092763DE17475C541BDCFAABAAA574056DB0A10  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t5FD500B39E99040FA6543FB3B012B9704413163A  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t92813F81872EE449E98F481469B8086734248659  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tE42806DDB53ABB380697212F485C40BD0617B059  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t9E77F13D41000A2B84D60B32D019E2F26C8A40F8  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tE478E097FAF5F3B42B0F2FC9613FB498235AFED2  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5 : public RuntimeObject {};
struct SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___keys;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___values;
	int32_t ____size;
	int32_t ___version;
	RuntimeObject* ___comparer;
	KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* ___keyList;
	ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* ___valueList;
	RuntimeObject* ____syncRoot;
};
struct ValueCollection_t8F70C64592235FA1B1D4D29CCECB4C57AC0C78F9  : public RuntimeObject
{
	Dictionary_2_t2E5037179C9A1F1245F111C037CAFB47E3EB45ED* ____dictionary;
};
struct ValueCollection_t018154B24774097E7CC573B84A4370DA87DD222B  : public RuntimeObject
{
	Dictionary_2_tDE8FAF4CAC415F7871ED1DBA452249683C3C7C27* ____dictionary;
};
struct ValueCollection_t1BB30331E7E7B70C5A9390CBF99778E1A8973B8D  : public RuntimeObject
{
	Dictionary_2_tB6CD9568C6E5A890E1075D85E9AB10FB9D2019FB* ____dictionary;
};
struct ValueCollection_t6CE8A9D4B7E902DB319DE2CEF8C211CE6D64AAC8  : public RuntimeObject
{
	Dictionary_2_t4184BC33D1053D17BD3CABFE9D63C5B655A8C038* ____dictionary;
};
struct ValueCollection_tEDA096ADE0D0E12D6392D239B514F2ABDE7EB9B2  : public RuntimeObject
{
	Dictionary_2_t22CFE5B50353477B8096C564BF9C409955D93A74* ____dictionary;
};
struct ValueCollection_t5A3556242C3D575C4E16EB8DD070DF3B3C6E0BD2  : public RuntimeObject
{
	Dictionary_2_tF362BB7E8BD559E70E016F496397CAC2C2820832* ____dictionary;
};
struct ValueCollection_t5E8E71E886FDED3BDAA56D7D25FA1BAF3A3F2053  : public RuntimeObject
{
	Dictionary_2_t72A7E3789499F5D3DAAE7531F444BD6328B4F2F4* ____dictionary;
};
struct ValueCollection_t8783A312F146D3AC8D9DFB7526585CFB2864DF28  : public RuntimeObject
{
	Dictionary_2_t3181C2815485FD132CCA531DD1217A9E1D5075B3* ____dictionary;
};
struct ValueCollection_tFB66ADDF7178D1D2E4F3590197E327062A26C55A  : public RuntimeObject
{
	Dictionary_2_t67746C862827CF52EE2EE3E263CEFDA7F2DB0752* ____dictionary;
};
struct ValueCollection_tFB8B0BDA8A4D94022F382ACE4B5351E548D0159D  : public RuntimeObject
{
	Dictionary_2_t2A431A3F5F22FF309EB253464A83C663EE112B72* ____dictionary;
};
struct ValueCollection_t1DBC0EF54CF576248D16CE12394F41705EE99A90  : public RuntimeObject
{
	Dictionary_2_tBF9B0A5151E66EC92CA188609E91639BAE6A4BC4* ____dictionary;
};
struct ValueCollection_tC4B5EFA79CE7330035D9BEAD398E624F68E1C306  : public RuntimeObject
{
	Dictionary_2_tF2DAA4F099EAFB2040EE8995C0FBF67E12ECB607* ____dictionary;
};
struct ValueCollection_t71B05C43EC89FA846096A6FD1D4325C3EBBE5D62  : public RuntimeObject
{
	Dictionary_2_t564C604D61B2AFBD5E5A61499F7739507E24C9FD* ____dictionary;
};
struct ValueCollection_tB57DE89859B47045E33A0308AA3D8E3554DFEDE3  : public RuntimeObject
{
	Dictionary_2_t4ECB2513151ECC752F95B76121679521EB7FC367* ____dictionary;
};
struct ValueCollection_t8F72227F132CDE68CB5AAEE6F94DD27B8F2C31E8  : public RuntimeObject
{
	Dictionary_2_t8E76AA10F849EB48DC945DFABFCC4A6EDA4BAAB6* ____dictionary;
};
struct ValueCollection_tACA6B8B1E15F4036AF38A8E7F02B1E61CA77CC7E  : public RuntimeObject
{
	Dictionary_2_tA0F0759ACFE489A515318F7FEC7C252100C65E0E* ____dictionary;
};
struct ValueCollection_t86F1197A7B6AEF1A8BDE1E9DE1F00C375921F8A0  : public RuntimeObject
{
	Dictionary_2_t29C8BF28A8478B079C61631B473BB09AF77C7D01* ____dictionary;
};
struct ValueCollection_t271A5045952D1D4ADCA653C7397D27178BF7B871  : public RuntimeObject
{
	Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8* ____dictionary;
};
struct ValueCollection_t049D21D244269142B709D29E6B9DE6AFD6EFA633  : public RuntimeObject
{
	Dictionary_2_tC5FB811D06F447F815A6FCFE613E9262DAB781B5* ____dictionary;
};
struct ValueCollection_t360EF1A3CE408BDA676A04467F863C5B6D6B170D  : public RuntimeObject
{
	Dictionary_2_t3B57CAC20895EF5638DA97AE91F6FD26BB3FD4A4* ____dictionary;
};
struct ValueCollection_tDF8958CDF293431D1071C051FD7C8E2357D702B5  : public RuntimeObject
{
	Dictionary_2_t25E7580BA3E8A4F13B53094DBF73C15539068508* ____dictionary;
};
struct ValueCollection_t1D78E7B22A0D96ECA7E3AC155913DFEA3CDF6FA7  : public RuntimeObject
{
	Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* ____dictionary;
};
struct ValueCollection_tBCDB47EC8418220AE86D165C5F101EE22C27DB75  : public RuntimeObject
{
	Dictionary_2_t873B9D79376C64DD27D1977E8F6391DD3DBDE426* ____dictionary;
};
struct ValueCollection_t09388557A76C67A5826B2502D326ED02B7D9E050  : public RuntimeObject
{
	Dictionary_2_t709D7105D5569BDBF0FF382194083253754F55F9* ____dictionary;
};
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40  : public RuntimeObject
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ____dictionary;
};
struct ValueCollection_t1D1B51320E9D68BCA6A91E216081A78032AB9517  : public RuntimeObject
{
	Dictionary_2_t851355FBAA1BC3C3387FF464D6EEC368EA177CD3* ____dictionary;
};
struct ValueCollection_t139464E9B9BFCB074934B335E811DEB19CE420E8  : public RuntimeObject
{
	Dictionary_2_t1FAD8DFAD7E5DB7CA096567CA9E3FDAC6391C496* ____dictionary;
};
struct ValueCollection_t60890D777294E9EF5D765C6542CF17EE92D5F782  : public RuntimeObject
{
	Dictionary_2_tB39FED3DFC0D7BF1C37A854FB90EFB3AB0A5107B* ____dictionary;
};
struct ValueCollection_t7527D79A0F67C44B360B51B5FEB47DACBC975266  : public RuntimeObject
{
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ____dictionary;
};
struct ValueCollection_t65B544B071475F1D6AA36F54F506E013AC0D137E  : public RuntimeObject
{
	Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* ____dictionary;
};
struct ValueCollection_t68C95977A6405D46453CCCFD51F7CB3B90A6832D  : public RuntimeObject
{
	Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ____dictionary;
};
struct ValueCollection_t6A97FB8D601D8DB0AEB18A1FA9C9B42007CB71FC  : public RuntimeObject
{
	Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* ____dictionary;
};
struct ValueCollection_tAB74EAFCBB4A141703DF78EC2259C15EBFFDC03B  : public RuntimeObject
{
	Dictionary_2_tBFEAFC9FF937023051A137D629FBB38AB703E006* ____dictionary;
};
struct ValueCollection_tA85CF213CC3534B4FED2E78337FFA344928197C1  : public RuntimeObject
{
	Dictionary_2_tF154DCAF19313A7B074F480A22F36F7B53F336D7* ____dictionary;
};
struct ValueCollection_tD8649936ED3B97D01B8447263D14A338476098D7  : public RuntimeObject
{
	Dictionary_2_tC70953CD71221A554EF46EC00CCC93ED22D0675F* ____dictionary;
};
struct ValueCollection_tD4FBF828850B7FB2E6D021DC07570C302296C4D7  : public RuntimeObject
{
	Dictionary_2_t844EF3CCC366B1E19EA9FA003823207C2AD35BC2* ____dictionary;
};
struct ValueList_tC6C75E12271CE9C7D01699BF578EC09A16BC7E6A  : public RuntimeObject
{
	SortedList_2_tA18FBD9172637D697F682AF34E557F03BD711F3F* ____dict;
};
struct ValueList_t7DFFD21832AF344A997D07E4E13129EBB3FAF2D3  : public RuntimeObject
{
	SortedList_2_t9C81D0EB1AE55E2C8EE9A023519853D497059664* ____dict;
};
struct ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A  : public RuntimeObject
{
	SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ____dict;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
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
typedef Il2CppFullySharedGenericStruct Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222;
struct NativeList_1_t9823396F5F6C10E21D3D7F9029C9EB52F74F7F53 
{
	UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* ___m_ListData;
};
struct TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_task;
};
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	int32_t ___m_result;
};
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};
struct ValueProperty_t3C93BDFE837A8612D93BF15487E2F8238161B331  : public Property_2_t47C8388EE41AF1EDAC8A05EBC46A2F35E533FA05
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t3893E9084AC26E0E595E4F6926AD2BF5198A0F5B  : public Property_2_t0260C631A257B7F5E29C000CE501E50E01D2C608
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t23A45D7CEB1F38812B5B8FB465DC173AA5BD5E49  : public Property_2_t9058AC806316ECF9782813D5E08A6F972DADF792
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t4029F89B9F4E0D4E1800CE6341F039292F8675A6  : public Property_2_t2B8367E4AFD450369A1C4A948FEF0346C1DD7BC2
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t101BF3644B90702033749BC438C9B895CC4BF0E9  : public Property_2_tFA7125D8D7A42B785B94542B1E5502A73E471EDF
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tB3817784219F102FD56D7F62E8C06E64E050BDA0  : public Property_2_tFCABF76983A1F2F83D5E984504A47D09AC858895
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t9C801F8994FD3DBF9A81E09AB0EEA0913BCA1BFB  : public Property_2_t6CB8EB3271B7D0EBA1168969AB3FC903ACF7C0EB
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tAAEE7824030790DFA39DA87CD7F0A3328BC2B7AF  : public Property_2_t7D95666C2782D91AF1F40A3784AB8803843C9E4E
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t7BF285F85AFEA9D81D6A3250C71D8FE3A6038BB0  : public Property_2_t8D3844A01C8488884742B51674148CCD00B60498
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t98828157D6FD8DE394389AE94E2464BD67FD786D  : public Property_2_t05A35F5BA827CDC64B24D4204877F690DEC27122
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tA204C76632635A314F6316CDE4501B17F855BCAB  : public Property_2_tABD4B015CDA9B404753A44AB2EDEAA6F2688D6F0
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t4F7C81D3D5508D47E3720FBBC6AFB2A54622175F  : public Property_2_t504169948D5C15A8A8563665E2D9DF59C55F9CFF
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t23770F131BE7AB0C723D9B3F6B4BD6F8906E9CE4  : public Property_2_t6ABA56748FEE71A79FBAE01510E00027922832EE
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t8424DE7C7E219174D6682B8A19A6D934C4021DEF  : public Property_2_t4419370A2048DE8AC76462D5E519FE85923E0975
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t62DAEF6134B03DDBDF7EC0B8E6F8C5DE0D8C3CEE  : public Property_2_t928287B4443D3165BD6ABAC2F647D24D780B7E96
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t0F7092E36AE866F3447D017911DB2718B362AC0D  : public Property_2_t16D3E4C17690E8487249E0D940C37C3015AF4435
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tB3C00292BCFBBE17FAA00CA5893811BA939D21D5  : public Property_2_t1A130B3BA8D98EC8F41A6B7EF2EEA8E65FE64A04
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t287AA1306545B77FAC5D5A82C694FCFC0547D1E6  : public Property_2_t6D7F427A414B99407E647090DF66F54AA00A5E8E
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t1AE8A767ED9A08163579BC72EE841865FD75C36D  : public Property_2_tC831322693F79D84BD6BC2E47565C269761A6D96
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t2BE22B7103A54558C3F177867AB8145B2CC4DCD7  : public Property_2_tD6E4F1DAE2CCE3A0E7CF533A25BDD766F97FF7D7
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t2476D310196A4B338E262DEF19FCAF01929C663B  : public Property_2_t8C5AC317E753BE254E702E465390BC88ED5EA5EF
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t6D51A07900668CB7C1827A91E6C9F7F0BF9C932A  : public Property_2_t2BA4BA208F043A4514DFF41129034BAD45C6DFA1
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t1546638F6F12BC48E53A473AEF042992C9DF9D47  : public Property_2_t249CE4B867F549A0F75FEA235B5B25900516184F
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t8F845DD8932841F0BDE6A18A01573796EF5FAA48  : public Property_2_t312FB8DE9763E066AE3D742386DB40BB3B6B27BD
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tDD840D73E42C5B8113378E5F4BF181FE3AF3613C  : public Property_2_t3D00CDB6855AB592E4EBE8412738EFF75451FB62
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t5BA94E821FE24F23CF0F3A3EC9EE10DADA8A1F63  : public Property_2_tFFB328322627D9FB1B5D79229966EE43135BFFD5
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t50C327352A5D2FDDC4DA7E59FAB5E3DBA78A946F  : public Property_2_t0ABEB68257A05E4AB739CC54A46DB2528866414E
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tC0B262109708BBF97DC66CE016EB1E9703CF0B2A  : public Property_2_tA59D4C1206151D15B4A2CEF7FFE0FD01E621E57E
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tA79CCA5B0F01956B6FCED803248A1CAB08AFBCFD  : public Property_2_tCAB4943E053F4A966AC56B79F1DB0143B463C8B5
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t68BB76008D383549414A408F562BCC65ED9942C0  : public Property_2_tF6FB2F4C8BD5E3A35F372F43E9D5033747856D39
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t7C191925F20B6112BB099E5475ECC2C2A418F926  : public Property_2_tEE747F0196EEEB10CC95A18372CF3F26961163C7
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t37D2A7A3B0ADE3BF553FED1A750B1C5D945C6483  : public Property_2_t250892AD63EB16A4E4D889AB976DCE82A9AA949F
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t6B85D3F714310187443163AEF5A8E1DD054A335A  : public Property_2_tC97B9506A8B0395C089F18C86276683C5E41A2E7
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tF3E7B346CAE0414CFF7F8C807D879F162B21CE57  : public Property_2_tFCC4C94487F656CE4FFB98919493AE6DD10F4C40
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t306CAD1CC921CC9F3FC731AE5D0FBF871C3D680E  : public Property_2_tC3E27FEAC55530D8C4898AD6A2EA04019EB1FE90
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tAB930E85A899CE733D6BC8F942B1FC6077E9CDE1  : public Property_2_t4ED9A30B731146E464F9ED48AED61168AB710960
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tC908155448A59A6CB85B37086B79E6CFF46E183F  : public Property_2_tC976A94D21CDBB051DBC4F9D71A8D808F1E22EDC
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t9A9413AAC45AA7753FAE709736B905E52C0D041D  : public Property_2_t90AB378281B10B6B57910452249B8C69A0E2C8CA
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tBD1F52A8573E665D1D3A454BBD93E7CDF966FE62  : public Property_2_t9C550DB46A63E7B079B78CA5712B37180BDF4C52
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t2C666D5BCD85639B05EBDFB609D3558C83B1EEFF  : public Property_2_t94E6BF4F27CA2F665907D2CEC1305FA3C6CC2891
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tF61841C2BE7AEDCCECBFE85A1E435486B2B5BEB3  : public Property_2_t3092763DE17475C541BDCFAABAAA574056DB0A10
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tD8E210EE89F297426D1F02753F9D89131258A072  : public Property_2_t5FD500B39E99040FA6543FB3B012B9704413163A
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t520073CDB871170A60D55B15B384C72AAF3C7B3A  : public Property_2_t92813F81872EE449E98F481469B8086734248659
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t24BF5A9E664C94581547E684CEFA332E2A02FF28  : public Property_2_tE42806DDB53ABB380697212F485C40BD0617B059
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t29DC76723E4CE039F679D9F5AEE872513FBEFACC  : public Property_2_t9E77F13D41000A2B84D60B32D019E2F26C8A40F8
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tB18264287ACC6E34917574BEFBC0034E44CCE8AB  : public Property_2_tE478E097FAF5F3B42B0F2FC9613FB498235AFED2
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t4D9BB595BCCF981819A498C3E15E14DF3EC7B633  : public Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 
{
	RuntimeObject* ____obj;
	int32_t ____result;
	int16_t ____token;
	bool ____continueOnCapturedContext;
};
typedef Il2CppFullySharedGenericStruct ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7;
typedef Il2CppFullySharedGenericStruct ValueTuple_1_t950E5118B1EDD6EF8B35C11D2C9BE11923F6076E;
struct ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 
{
	bool ___Item1;
};
typedef Il2CppFullySharedGenericStruct ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF;
typedef Il2CppFullySharedGenericStruct ValueTuple_2_tD1D71D8C14C95585BD6BFEDB88935DEFEBE4F5C1;
struct ValueTuple_2_tAC09A94984283F831036E5D9BFBAECBCBACE53AA 
{
	bool ___Item1;
	bool ___Item2;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
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
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task;
};
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task;
};
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task;
};
struct ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F 
{
	RuntimeObject* ____obj;
	int16_t ____token;
	bool ____continueOnCapturedContext;
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
struct ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct ValueTaskAwaiter_1_t1C9A07171B9A06106B5B2C67A0C0ADD0FD79A814 
{
	ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 ____value;
};
typedef Il2CppFullySharedGenericStruct ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C;
struct ValueTaskSourceAsTask_tEED78A91757DD011AB8BD1338A84940910F2B66B  : public Task_1_t4C228DE57804012969575431CFF12D57C875552D
{
	RuntimeObject* ____source;
	int16_t ____token;
};
struct ValueTaskSourceAsTask_t237F990EF6E1CF9ECBF8EE2A9D5AB8804FF2B03D : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};
struct ValueTuple_2_t0E5B97C54B420B9FB99BA3419C70BE06A7E35003 
{
	NativeList_1_t9823396F5F6C10E21D3D7F9029C9EB52F74F7F53 ___Item1;
	NativeList_1_t9823396F5F6C10E21D3D7F9029C9EB52F74F7F53 ___Item2;
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
struct ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A 
{
	ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ____value;
};
struct ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshaled_pinvoke
{
	ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ____value;
};
struct ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshaled_com
{
	ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ____value;
};
struct ValueTaskSourceOnCompletedFlags_t3181838E33741E1E7338B33740CCEAD38C6B8BFF 
{
	int32_t ___value__;
};
struct ValueTaskSourceStatus_t9F496A09D3BF95F42C0C5366D8DEBA49F08C4FD3 
{
	int32_t ___value__;
};
struct NativeArray_1_t2B4471482E751C734C9EED028082AD085BF00F4E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
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
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
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
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};
struct ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961 
{
	Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ____span;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____arrayFromPool;
	int32_t ____pos;
};
struct ValueListBuilder_1_t05C7BEF0D12A72F4844DD484512F333C34580D4B 
{
	Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ____span;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____arrayFromPool;
	int32_t ____pos;
};
struct ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26 
{
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ____span;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____arrayFromPool;
	int32_t ____pos;
};
struct ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13 
{
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ____span;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____arrayFromPool;
	int32_t ____pos;
};
struct ValueTuple_2_t8F90E4260FD13C8B4D6D19ACA23F88540DE8F056 
{
	NativeArray_1_t2B4471482E751C734C9EED028082AD085BF00F4E ___Item1;
	int32_t ___Item2;
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken;
};
struct U3CU3Ec_t480A27B14DEE658FD5CD4792E8FDC35EFA01C8A7_StaticFields
{
	U3CU3Ec_t480A27B14DEE658FD5CD4792E8FDC35EFA01C8A7* ___U3CU3E9;
};
struct ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774_StaticFields
{
	ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* ___U3CSharedU3Ek__BackingField;
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB_StaticFields
{
	Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	int32_t ___s_taskIdCounter;
	RuntimeObject* ___s_taskCompletionSentinel;
	bool ___s_asyncDebuggingEnabled;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback;
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties;
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField;
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate;
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback;
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate;
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks;
	RuntimeObject* ___s_activeTasksLock;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask;
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard;
};
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9_StaticFields
{
	TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D* ___s_defaultFactory;
};
struct ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21_StaticFields
{
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_canceledTask;
};
struct ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7_StaticFields
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___s_canceledTask;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct ValueTaskSourceAsTask_tEED78A91757DD011AB8BD1338A84940910F2B66B_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_completionAction;
};
struct ValueTaskSourceAsTask_t237F990EF6E1CF9ECBF8EE2A9D5AB8804FF2B03D_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_completionAction;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_invokeActionDelegate;
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m53208E6BE0322FB9D8336F1303586341867496CE_fshared (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m6DD06FB7A6641F460E175909EE58B3E7EF585F46_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m07B10CD2540C75750331E4ABF3792B35FAF94F99_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_ContainsValue_mBD30F79C40790E44BBFD3705E1911303FC126DD1_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_fshared_inline (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_GetByIndex_m8F670B827EDAA9EEFB55A297CA13A7AB2CFF88BE_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedListValueEnumerator__ctor_m49729BD3935CBB2BA5644074243E7BFD4FEF92D6_fshared (SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5* __this, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ___0_sortedList, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisIl2CppFullySharedGenericAny_mA7F15146F50A93EE31005CC7C2C28B7DB0CE5708_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Grow_mFCD86126D0C9043BB696B8FF5219C4508DE2BA67_fshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC Span_1_op_Implicit_m704A5B9FD25EEA23756181A8EB40B875387A6C01_fshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* ArrayPool_1_get_Shared_mED246B652823A7EEE39710F52F14E8B0453C2C85_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Span_1_op_Implicit_mEAE085B1C884F71E5CF01E09CD6F285B497BBDE8_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m464C81DB101113B73DCD3F43C757D672CD893B37_fshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Grow_m4786BBA84ADC1CF9A21AF8073F017C958B3292E0_fshared (ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_m1B14349D578BF83C39983D2898529964F8906986_fshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTask_1_get_IsCompleted_m6FC365DA579395B0B09E0A33A77AF97D29DDE383_fshared_inline (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_1_get_Result_m4C8284BCA2ADC4FF77D6594A1056775D523ACC82_fshared_inline (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 Task_1_GetAwaiter_mADB36AF74C602F4C81E4752994696EA21CB0C0B6_fshared (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1_UnsafeOnCompleted_m8B9DC9D7FF95BB8129F4A5D5CF2DF0AE62E081E3_fshared (TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTaskAwaiter_1_UnsafeOnCompleted_m80446D0C780C1396A45604E48D89DBE5BD3DA2AD_fshared (ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mDCE1AA2DD475DA25C27EEB18A9E46958ED5ECE74_fshared (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_fshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTask_1_GetHashCode_m8000CE1DEAB0FA01A6ECB8A08BE19213A970D73E_fshared (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTask_1_Equals_mD5BF0BE72581594DA92F59B348593443F6DF6950_fshared (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTask_1_Equals_mABC4FB221AC4A671D4DFADEF992B569AD2C30A9D_fshared (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* AsyncTaskMethodBuilder_1_GetTaskForResult_m8210EDCCA4F113BD4377A4433475A9E6D39E6CFC_fshared (Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ValueTask_1_GetTaskForValueTaskSource_mEAEF30AE4C3EF71CCAED02D41A6B9D9E88A74915_fshared (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, RuntimeObject* ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromCanceled_TisIl2CppFullySharedGenericAny_m6FA2A9DC4ECF7A21441B961F86A94873F5C015C9_fshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromException_TisIl2CppFullySharedGenericAny_m5424F2AE940D86E928CD58A721AA25BDAF2A7229_fshared (Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTaskSourceAsTask__ctor_m3BE8717538FBF453B0CCD935964EF68F6862FB77_fshared (ValueTaskSourceAsTask_t237F990EF6E1CF9ECBF8EE2A9D5AB8804FF2B03D* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Task_1_get_ResultOnSuccess_m3011E88558BA75C4AFAFF5208B29744561BCECAC_fshared_inline (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTaskAwaiter_1__ctor_m7A5127CE080DF8BE37A788EFDE4C6EBED02FEA93_fshared_inline (ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C* __this, ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTask_1_get_IsCompletedSuccessfully_m951AC7136DB7D58F31DC79344D3C51412D4744DA_fshared_inline (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTask_1_ToString_m4F52C632CA8530BBCAD18F1CE53FAF04011A4436_fshared (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_1_Equals_m744EA4C6D7198DA2A95179DB68116437BBC453E7_fshared (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_1_Equals_mE31990E0876A75374263FD30DDB89A7D8B1E2D91_fshared (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_1_System_Collections_IStructuralEquatable_Equals_m478C9A5F2E5423A54F1B0A1D451BD86F90DD4EEE_fshared (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290_fshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_1_System_IComparable_CompareTo_m27BCDCCC04DBC7C71F96F97D759F4F8BDC3EB7E4_fshared (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_1_CompareTo_mFE3D3F1BBCCB23FF42959D2990AD177231EB7586_fshared (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_1_System_Collections_IStructuralComparable_CompareTo_m2D3994A0A1930ABFBC788A619697E6EDA6507AEE_fshared (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_1_GetHashCode_m0C86BD1C67D66BCAEB44D777CE0885CE0EF76BA6_fshared (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_1_System_Collections_IStructuralEquatable_GetHashCode_mEF47D4B715325E8733A2797A2DC4D80939E18565_fshared (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_1_System_IValueTupleInternal_GetHashCode_m8826B801A5B79BA75CBB3632593EF99E034E61B7_fshared (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_1_ToString_m5D2A8965564621C5442CBAC724FAB374EB61379A_fshared (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_1_System_IValueTupleInternal_ToStringEnd_mC9A89165D4A8F414E8FF4B40B30386AAE4544751_fshared (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_1_System_Runtime_CompilerServices_ITuple_get_Length_mDC15DE3BB4C0C1F78ED4090E77EFD093761C0C49_fshared (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_fshared (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
inline void Enumerator__ctor_m53208E6BE0322FB9D8336F1303586341867496CE (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Enumerator__ctor_m53208E6BE0322FB9D8336F1303586341867496CE_fshared)(__this, ___0_dictionary, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023 (int32_t ___0_resource, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsValue_m6DD06FB7A6641F460E175909EE58B3E7EF585F46 (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsValue_m6DD06FB7A6641F460E175909EE58B3E7EF585F46_fshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
inline void ValueCollection_CopyTo_m07B10CD2540C75750331E4ABF3792B35FAF94F99 (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))ValueCollection_CopyTo_m07B10CD2540C75750331E4ABF3792B35FAF94F99_fshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline bool SortedList_2_ContainsValue_mBD30F79C40790E44BBFD3705E1911303FC126DD1 (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, Il2CppFullySharedGenericAny, const RuntimeMethod*))SortedList_2_ContainsValue_mBD30F79C40790E44BBFD3705E1911303FC126DD1_fshared)((SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*)__this, ___0_value, method);
}
inline int32_t SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_inline (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
inline void SortedList_2_GetByIndex_m8F670B827EDAA9EEFB55A297CA13A7AB2CFF88BE (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))SortedList_2_GetByIndex_m8F670B827EDAA9EEFB55A297CA13A7AB2CFF88BE_fshared)((SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*)__this, ___0_index, il2cppRetVal, method);
}
inline void SortedListValueEnumerator__ctor_m49729BD3935CBB2BA5644074243E7BFD4FEF92D6 (SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5* __this, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ___0_sortedList, const RuntimeMethod* method)
{
	((  void (*) (SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5*, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))SortedListValueEnumerator__ctor_m49729BD3935CBB2BA5644074243E7BFD4FEF92D6_fshared)(__this, ___0_sortedList, method);
}
inline int32_t Array_IndexOf_TisIl2CppFullySharedGenericAny_mA7F15146F50A93EE31005CC7C2C28B7DB0CE5708 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisIl2CppFullySharedGenericAny_mA7F15146F50A93EE31005CC7C2C28B7DB0CE5708_fshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline Il2CppFullySharedGenericAny* Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericAny* (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, int32_t, const RuntimeMethod*))Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_fshared_inline)(__this, ___0_index, method);
}
inline int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
inline void ValueListBuilder_1_Grow_mFCD86126D0C9043BB696B8FF5219C4508DE2BA67 (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, const RuntimeMethod* method)
{
	((  void (*) (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26*, const RuntimeMethod*))ValueListBuilder_1_Grow_mFCD86126D0C9043BB696B8FF5219C4508DE2BA67_fshared)(__this, method);
}
inline Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, int32_t, int32_t, const RuntimeMethod*))Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_fshared_inline)(__this, ___0_start, ___1_length, method);
}
inline ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC Span_1_op_Implicit_m704A5B9FD25EEA23756181A8EB40B875387A6C01 (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, const RuntimeMethod*))Span_1_op_Implicit_m704A5B9FD25EEA23756181A8EB40B875387A6C01_fshared)(___0_span, method);
}
inline ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* ArrayPool_1_get_Shared_mED246B652823A7EEE39710F52F14E8B0453C2C85_inline (const RuntimeMethod* method)
{
	return ((  ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* (*) (const RuntimeMethod*))ArrayPool_1_get_Shared_mED246B652823A7EEE39710F52F14E8B0453C2C85_fshared_inline)(method);
}
inline Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Span_1_op_Implicit_mEAE085B1C884F71E5CF01E09CD6F285B497BBDE8 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method)
{
	return ((  Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))Span_1_op_Implicit_mEAE085B1C884F71E5CF01E09CD6F285B497BBDE8_fshared)(___0_array, method);
}
inline bool Span_1_TryCopyTo_m464C81DB101113B73DCD3F43C757D672CD893B37 (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, const RuntimeMethod*))Span_1_TryCopyTo_m464C81DB101113B73DCD3F43C757D672CD893B37_fshared)(__this, ___0_destination, method);
}
inline void ValueListBuilder_1_Grow_m4786BBA84ADC1CF9A21AF8073F017C958B3292E0 (ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13* __this, const RuntimeMethod* method)
{
	((  void (*) (ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13*, const RuntimeMethod*))ValueListBuilder_1_Grow_m4786BBA84ADC1CF9A21AF8073F017C958B3292E0_fshared)(__this, method);
}
inline void Property_2__ctor_m1B14349D578BF83C39983D2898529964F8906986 (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, const RuntimeMethod* method)
{
	((  void (*) (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, const RuntimeMethod*))Property_2__ctor_m1B14349D578BF83C39983D2898529964F8906986_fshared)(__this, method);
}
inline bool ValueTask_1_get_IsCompleted_m6FC365DA579395B0B09E0A33A77AF97D29DDE383_inline (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7*, const RuntimeMethod*))ValueTask_1_get_IsCompleted_m6FC365DA579395B0B09E0A33A77AF97D29DDE383_fshared_inline)(__this, method);
}
inline void ValueTask_1_get_Result_m4C8284BCA2ADC4FF77D6594A1056775D523ACC82_inline (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))ValueTask_1_get_Result_m4C8284BCA2ADC4FF77D6594A1056775D523ACC82_fshared_inline)((ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7*)__this, il2cppRetVal, method);
}
inline TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 Task_1_GetAwaiter_mADB36AF74C602F4C81E4752994696EA21CB0C0B6 (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 (*) (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, const RuntimeMethod*))Task_1_GetAwaiter_mADB36AF74C602F4C81E4752994696EA21CB0C0B6_fshared)(__this, method);
}
inline void TaskAwaiter_1_UnsafeOnCompleted_m8B9DC9D7FF95BB8129F4A5D5CF2DF0AE62E081E3 (TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	((  void (*) (TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))TaskAwaiter_1_UnsafeOnCompleted_m8B9DC9D7FF95BB8129F4A5D5CF2DF0AE62E081E3_fshared)(__this, ___0_continuation, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ValueTask_get_CompletedTask_m420F6BE3426808DE6345091B4A871BFABD0354DD (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_UnsafeOnCompleted_mF1081A8F37EBEA02847BAE72365A1F65DAA932D7 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
inline void ValueTaskAwaiter_1_UnsafeOnCompleted_m80446D0C780C1396A45604E48D89DBE5BD3DA2AD (ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	((  void (*) (ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))ValueTaskAwaiter_1_UnsafeOnCompleted_m80446D0C780C1396A45604E48D89DBE5BD3DA2AD_fshared)(__this, ___0_continuation, method);
}
inline void Task_1__ctor_mDCE1AA2DD475DA25C27EEB18A9E46958ED5ECE74 (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, const RuntimeMethod*))Task_1__ctor_mDCE1AA2DD475DA25C27EEB18A9E46958ED5ECE74_fshared)(__this, method);
}
inline void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_fshared)(__this, ___0_object, ___1_method, method);
}
inline int32_t ValueTask_1_GetHashCode_m8000CE1DEAB0FA01A6ECB8A08BE19213A970D73E (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7*, const RuntimeMethod*))ValueTask_1_GetHashCode_m8000CE1DEAB0FA01A6ECB8A08BE19213A970D73E_fshared)(__this, method);
}
inline bool ValueTask_1_Equals_mD5BF0BE72581594DA92F59B348593443F6DF6950 (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7*, ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7, const RuntimeMethod*))ValueTask_1_Equals_mD5BF0BE72581594DA92F59B348593443F6DF6950_fshared)((ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7*)__this, ___0_other, method);
}
inline bool ValueTask_1_Equals_mABC4FB221AC4A671D4DFADEF992B569AD2C30A9D (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7*, RuntimeObject*, const RuntimeMethod*))ValueTask_1_Equals_mABC4FB221AC4A671D4DFADEF992B569AD2C30A9D_fshared)(__this, ___0_obj, method);
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_fshared_inline)(method);
}
inline Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* AsyncTaskMethodBuilder_1_GetTaskForResult_m8210EDCCA4F113BD4377A4433475A9E6D39E6CFC (Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (Il2CppFullySharedGenericAny, const RuntimeMethod*))AsyncTaskMethodBuilder_1_GetTaskForResult_m8210EDCCA4F113BD4377A4433475A9E6D39E6CFC_fshared)(___0_result, method);
}
inline Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ValueTask_1_GetTaskForValueTaskSource_mEAEF30AE4C3EF71CCAED02D41A6B9D9E88A74915 (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, RuntimeObject* ___0_t, const RuntimeMethod* method)
{
	return ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7*, RuntimeObject*, const RuntimeMethod*))ValueTask_1_GetTaskForValueTaskSource_mEAEF30AE4C3EF71CCAED02D41A6B9D9E88A74915_fshared)(__this, ___0_t, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_tokenToRecord, RuntimeObject* ___1_cancellationException, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationToken__ctor_m5DAD339D4A9DEF9962B7EF1E30564BADC78E9BD6 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, bool ___0_canceled, const RuntimeMethod* method) ;
inline Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromCanceled_TisIl2CppFullySharedGenericAny_m6FA2A9DC4ECF7A21441B961F86A94873F5C015C9 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method)
{
	return ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))Task_FromCanceled_TisIl2CppFullySharedGenericAny_m6FA2A9DC4ECF7A21441B961F86A94873F5C015C9_fshared)(___0_cancellationToken, method);
}
inline Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromException_TisIl2CppFullySharedGenericAny_m5424F2AE940D86E928CD58A721AA25BDAF2A7229 (Exception_t* ___0_exception, const RuntimeMethod* method)
{
	return ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (Exception_t*, const RuntimeMethod*))Task_FromException_TisIl2CppFullySharedGenericAny_m5424F2AE940D86E928CD58A721AA25BDAF2A7229_fshared)(___0_exception, method);
}
inline void ValueTaskSourceAsTask__ctor_m3BE8717538FBF453B0CCD935964EF68F6862FB77 (ValueTaskSourceAsTask_t237F990EF6E1CF9ECBF8EE2A9D5AB8804FF2B03D* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method)
{
	((  void (*) (ValueTaskSourceAsTask_t237F990EF6E1CF9ECBF8EE2A9D5AB8804FF2B03D*, RuntimeObject*, int16_t, const RuntimeMethod*))ValueTaskSourceAsTask__ctor_m3BE8717538FBF453B0CCD935964EF68F6862FB77_fshared)(__this, ___0_source, ___1_token, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompletedSuccessfully_m8A0797317734CF69DA5DB2CC2E87AA8F5D43154C (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_ValidateEnd_m6BB967A466C17A106BC547009EDE196266651751 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, const RuntimeMethod* method) ;
inline void Task_1_get_ResultOnSuccess_m3011E88558BA75C4AFAFF5208B29744561BCECAC_inline (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Task_1_get_ResultOnSuccess_m3011E88558BA75C4AFAFF5208B29744561BCECAC_fshared_inline)((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)__this, il2cppRetVal, method);
}
inline void ValueTaskAwaiter_1__ctor_m7A5127CE080DF8BE37A788EFDE4C6EBED02FEA93_inline (ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C* __this, ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C*, ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7, const RuntimeMethod*))ValueTaskAwaiter_1__ctor_m7A5127CE080DF8BE37A788EFDE4C6EBED02FEA93_fshared_inline)((ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C*)__this, ___0_value, method);
}
inline bool ValueTask_1_get_IsCompletedSuccessfully_m951AC7136DB7D58F31DC79344D3C51412D4744DA_inline (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7*, const RuntimeMethod*))ValueTask_1_get_IsCompletedSuccessfully_m951AC7136DB7D58F31DC79344D3C51412D4744DA_fshared_inline)(__this, method);
}
inline String_t* ValueTask_1_ToString_m4F52C632CA8530BBCAD18F1CE53FAF04011A4436 (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7*, const RuntimeMethod*))ValueTask_1_ToString_m4F52C632CA8530BBCAD18F1CE53FAF04011A4436_fshared)(__this, method);
}
inline bool ValueTuple_1_Equals_m744EA4C6D7198DA2A95179DB68116437BBC453E7 (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*, ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF, const RuntimeMethod*))ValueTuple_1_Equals_m744EA4C6D7198DA2A95179DB68116437BBC453E7_fshared)((ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*)__this, ___0_other, method);
}
inline bool ValueTuple_1_Equals_mE31990E0876A75374263FD30DDB89A7D8B1E2D91 (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*, RuntimeObject*, const RuntimeMethod*))ValueTuple_1_Equals_mE31990E0876A75374263FD30DDB89A7D8B1E2D91_fshared)(__this, ___0_obj, method);
}
inline bool ValueTuple_1_System_Collections_IStructuralEquatable_Equals_m478C9A5F2E5423A54F1B0A1D451BD86F90DD4EEE (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_1_System_Collections_IStructuralEquatable_Equals_m478C9A5F2E5423A54F1B0A1D451BD86F90DD4EEE_fshared)(__this, ___0_other, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
inline Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290 (const RuntimeMethod* method)
{
	return ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290_fshared)(method);
}
inline int32_t ValueTuple_1_System_IComparable_CompareTo_m27BCDCCC04DBC7C71F96F97D759F4F8BDC3EB7E4 (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*, RuntimeObject*, const RuntimeMethod*))ValueTuple_1_System_IComparable_CompareTo_m27BCDCCC04DBC7C71F96F97D759F4F8BDC3EB7E4_fshared)(__this, ___0_other, method);
}
inline int32_t ValueTuple_1_CompareTo_mFE3D3F1BBCCB23FF42959D2990AD177231EB7586 (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*, ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF, const RuntimeMethod*))ValueTuple_1_CompareTo_mFE3D3F1BBCCB23FF42959D2990AD177231EB7586_fshared)((ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*)__this, ___0_other, method);
}
inline int32_t ValueTuple_1_System_Collections_IStructuralComparable_CompareTo_m2D3994A0A1930ABFBC788A619697E6EDA6507AEE (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_1_System_Collections_IStructuralComparable_CompareTo_m2D3994A0A1930ABFBC788A619697E6EDA6507AEE_fshared)(__this, ___0_other, ___1_comparer, method);
}
inline int32_t ValueTuple_1_GetHashCode_m0C86BD1C67D66BCAEB44D777CE0885CE0EF76BA6 (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*, const RuntimeMethod*))ValueTuple_1_GetHashCode_m0C86BD1C67D66BCAEB44D777CE0885CE0EF76BA6_fshared)(__this, method);
}
inline int32_t ValueTuple_1_System_Collections_IStructuralEquatable_GetHashCode_mEF47D4B715325E8733A2797A2DC4D80939E18565 (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*, RuntimeObject*, const RuntimeMethod*))ValueTuple_1_System_Collections_IStructuralEquatable_GetHashCode_mEF47D4B715325E8733A2797A2DC4D80939E18565_fshared)(__this, ___0_comparer, method);
}
inline int32_t ValueTuple_1_System_IValueTupleInternal_GetHashCode_m8826B801A5B79BA75CBB3632593EF99E034E61B7 (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*, RuntimeObject*, const RuntimeMethod*))ValueTuple_1_System_IValueTupleInternal_GetHashCode_m8826B801A5B79BA75CBB3632593EF99E034E61B7_fshared)(__this, ___0_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
inline String_t* ValueTuple_1_ToString_m5D2A8965564621C5442CBAC724FAB374EB61379A (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*, const RuntimeMethod*))ValueTuple_1_ToString_m5D2A8965564621C5442CBAC724FAB374EB61379A_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
inline String_t* ValueTuple_1_System_IValueTupleInternal_ToStringEnd_mC9A89165D4A8F414E8FF4B40B30386AAE4544751 (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*, const RuntimeMethod*))ValueTuple_1_System_IValueTupleInternal_ToStringEnd_mC9A89165D4A8F414E8FF4B40B30386AAE4544751_fshared)(__this, method);
}
inline int32_t ValueTuple_1_System_Runtime_CompilerServices_ITuple_get_Length_mDC15DE3BB4C0C1F78ED4090E77EFD093761C0C49 (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*, const RuntimeMethod*))ValueTuple_1_System_Runtime_CompilerServices_ITuple_get_Length_mDC15DE3BB4C0C1F78ED4090E77EFD093761C0C49_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
inline void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
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
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = ___0_dictionary;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(1, NULL);
	}

IL_000f:
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_1 = ___0_dictionary;
		__this->____dictionary = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dictionary), (void*)L_1);
		return;
	}
}
// Method Definition Index: 11055
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_GetEnumerator_m22BB9C6494A679370661D0B6DA1FA7EF744281EA_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222 L_1 = alloca(SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = __this->____dictionary;
		memset(L_1, 0, SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432);
		Enumerator__ctor_m53208E6BE0322FB9D8336F1303586341867496CE((Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*)L_1, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432);
		return;
	}
}
// Method Definition Index: 11056
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m07B10CD2540C75750331E4ABF3792B35FAF94F99_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_1 = NULL;
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
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
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = ___1_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) <= ((int32_t)L_4)))
		{
			goto IL_0018;
		}
	}

IL_0013:
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0018:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		int32_t L_7 = ___1_index;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_8 = __this->____dictionary;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E(L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7))) >= ((int32_t)L_9)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0030:
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_10 = __this->____dictionary;
		NullCheck(L_10);
		int32_t L_11 = L_10->____count;
		V_0 = L_11;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_12 = __this->____dictionary;
		NullCheck(L_12);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_13 = L_12->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_0077;
	}

IL_004c:
	{
		CHECK_PAUSE_POINT;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0073;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___0_array;
		int32_t L_18 = ___1_index;
		int32_t L_19 = L_18;
		___1_index = ((int32_t)il2cpp_codegen_add(L_19, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 7)), SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90);
		NullCheck(L_17);
		il2cpp_codegen_memcpy((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)), L_22, SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), (void**)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)), (void*)L_22);
	}

IL_0073:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0077:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004c;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11057
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_m618DD0B95EF664954E8642E05340971E449BD496_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = __this->____dictionary;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return L_1;
	}
}
// Method Definition Index: 11058
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m4D5D70A7E71A521B0CC07AE728D6F7CE15BF634E_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)1;
	}
}
// Method Definition Index: 11059
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m60F2FC12A09222A69CE11D344E16D222797F549C_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)20), NULL);
		return;
	}
}
// Method Definition Index: 11060
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m96852B0B0BAD5C0A9E004972475EDE03D1B0FE90_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)20), NULL);
		return (bool)0;
	}
}
// Method Definition Index: 11061
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m00E492D453DE9F24B31D0ACB0048DE740B2C1EA0_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)20), NULL);
		return;
	}
}
// Method Definition Index: 11062
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m71121C077381FD3EB3CC58A97BA578BAD3A2EA3B_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = __this->____dictionary;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___0_item : &___0_item), SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90);
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsValue_m6DD06FB7A6641F460E175909EE58B3E7EF585F46(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? L_1: *(void**)L_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return L_2;
	}
}
// Method Definition Index: 11063
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m60447823261642EB057BDD5F8E420AD15158E1B7_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222 L_1 = alloca(SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = __this->____dictionary;
		memset(L_1, 0, SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432);
		Enumerator__ctor_m53208E6BE0322FB9D8336F1303586341867496CE((Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*)L_1, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11064
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_IEnumerable_GetEnumerator_mDE2A3F43BD41FDDE0DBE76E55B6F9A250F386C6D_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222 L_1 = alloca(SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = __this->____dictionary;
		memset(L_1, 0, SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432);
		Enumerator__ctor_m53208E6BE0322FB9D8336F1303586341867496CE((Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*)L_1, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11065
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_ICollection_CopyTo_mE4968D276FEE90B732476798DC51887BA807F953_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90);
	//<source_info:<no-source>:1>
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_3 = NULL;
	int32_t V_4 = 0;
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
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_11 = __this->____dictionary;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E(L_11, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_12)))
		{
			goto IL_0050;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0050:
	{
		RuntimeArray* L_13 = ___0_array;
		V_0 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)IsInst((RuntimeObject*)L_13, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = V_0;
		if (!L_14)
		{
			goto IL_0063;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = V_0;
		int32_t L_16 = ___1_index;
		ValueCollection_CopyTo_m07B10CD2540C75750331E4ABF3792B35FAF94F99(__this, L_15, L_16, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}

IL_0063:
	{
		RuntimeArray* L_17 = ___0_array;
		V_1 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_17, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = V_1;
		if (L_18)
		{
			goto IL_0072;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_0072:
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_19 = __this->____dictionary;
		NullCheck(L_19);
		int32_t L_20 = L_19->____count;
		V_2 = L_20;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_21 = __this->____dictionary;
		NullCheck(L_21);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_22 = L_21->____entries;
		V_3 = L_22;
	}
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			V_4 = 0;
			goto IL_00bf_1;
		}

IL_008f_1:
		{
			CHECK_PAUSE_POINT;
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_23 = V_3;
			int32_t L_24 = V_4;
			NullCheck(L_23);
			int32_t L_25 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
			if ((((int32_t)L_25) < ((int32_t)0)))
			{
				goto IL_00b9_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = V_1;
			int32_t L_27 = ___1_index;
			int32_t L_28 = L_27;
			___1_index = ((int32_t)il2cpp_codegen_add(L_28, 1));
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_29 = V_3;
			int32_t L_30 = V_4;
			NullCheck(L_29);
			il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 7)), SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90);
			RuntimeObject* L_32 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), L_31);
			NullCheck(L_26);
			ArrayElementTypeCheck (L_26, L_32);
			(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (RuntimeObject*)L_32);
		}

IL_00b9_1:
		{
			int32_t L_33 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		}

IL_00bf_1:
		{
			int32_t L_34 = V_4;
			int32_t L_35 = V_2;
			if ((((int32_t)L_34) < ((int32_t)L_35)))
			{
				goto IL_008f_1;
			}
		}
		{
			goto IL_00ce;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c6;
		}
		throw e;
	}

CATCH_00c6:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_36 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00ce;
	}

IL_00ce:
	{
		return;
	}
}
// Method Definition Index: 11066
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m2AFFF9C7D331AD34CD93C7FC70C559E2BB5F3E56_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)0;
	}
}
// Method Definition Index: 11067
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_ICollection_get_SyncRoot_m1ABB030E21FDC64810D0F5E25A73C14542878812_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = __this->____dictionary;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11054
// Method Definition Index: 11055
// Method Definition Index: 11056
// Method Definition Index: 11057
// Method Definition Index: 11058
// Method Definition Index: 11059
// Method Definition Index: 11060
// Method Definition Index: 11061
// Method Definition Index: 11062
// Method Definition Index: 11063
// Method Definition Index: 11064
// Method Definition Index: 11065
// Method Definition Index: 11066
// Method Definition Index: 11067
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 46580
// Method Definition Index: 46581
// Method Definition Index: 46582
// Method Definition Index: 46583
// Method Definition Index: 46584
// Method Definition Index: 46585
// Method Definition Index: 46586
// Method Definition Index: 46587
// Method Definition Index: 46588
// Method Definition Index: 46589
// Method Definition Index: 46590
// Method Definition Index: 46591
// Method Definition Index: 46592
// Method Definition Index: 46593
// Method Definition Index: 46594
// Method Definition Index: 46595
// Method Definition Index: 46596
// Method Definition Index: 46597
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 46580
// Method Definition Index: 46581
// Method Definition Index: 46582
// Method Definition Index: 46583
// Method Definition Index: 46584
// Method Definition Index: 46585
// Method Definition Index: 46586
// Method Definition Index: 46587
// Method Definition Index: 46588
// Method Definition Index: 46589
// Method Definition Index: 46590
// Method Definition Index: 46591
// Method Definition Index: 46592
// Method Definition Index: 46593
// Method Definition Index: 46594
// Method Definition Index: 46595
// Method Definition Index: 46596
// Method Definition Index: 46597
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 46580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList__ctor_m26B1A0136B33A5686D5093849B8E4C1CE9DA03DE_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ___0_dictionary, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_0 = ___0_dictionary;
		__this->____dict = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dict), (void*)L_0);
		return;
	}
}
// Method Definition Index: 46581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueList_get_Count_m216AE4CF83818E243253A02E03C101D1E6C0627A_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_0 = __this->____dict;
		NullCheck(L_0);
		int32_t L_1 = L_0->____size;
		return L_1;
	}
}
// Method Definition Index: 46582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueList_get_IsReadOnly_m11C29D7523381F622A906C14F1729A8A6AA778D9_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)1;
	}
}
// Method Definition Index: 46583
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueList_System_Collections_ICollection_get_IsSynchronized_m56913F0A1A5AD28AA85BB8093A07F87B83A7CE9D_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)0;
	}
}
// Method Definition Index: 46584
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueList_System_Collections_ICollection_get_SyncRoot_mEDA7A9CD7CAEBB231859FDBEB8287DFCF374ADC0_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_0 = __this->____dict;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 46585
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_Add_mB6DE9EC7238D9705FB7811BEB56BC65F30BCEFEE_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 46586
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_Clear_m390D6B082322A97FE65493CD1B8D3CB554DEFBC1_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 46587
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueList_Contains_mB8D21A13D9841ECD058BC7EBB11999821C259090_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tEB96A977159351D0F21BC37F853A4450F0186BAF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tEB96A977159351D0F21BC37F853A4450F0186BAF);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_0 = __this->____dict;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___0_value : &___0_value), SizeOf_TValue_tEB96A977159351D0F21BC37F853A4450F0186BAF);
		NullCheck(L_0);
		bool L_2;
		L_2 = SortedList_2_ContainsValue_mBD30F79C40790E44BBFD3705E1911303FC126DD1(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? L_1: *(void**)L_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return L_2;
	}
}
// Method Definition Index: 46588
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_CopyTo_mAFBC986D4F7C4C81729B343F07578556480E9188_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_0 = __this->____dict;
		NullCheck(L_0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = L_0->___values;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		int32_t L_3 = ___1_arrayIndex;
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_4 = __this->____dict;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_inline(L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_1, 0, (RuntimeArray*)L_2, L_3, L_5, NULL);
		return;
	}
}
// Method Definition Index: 46589
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_System_Collections_ICollection_CopyTo_m83B950FFE063F3042627070B8A2C22E716965EC1_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001c:
	{
	}
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_4 = __this->____dict;
		NullCheck(L_4);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = L_4->___values;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_8 = __this->____dict;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_inline(L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, L_6, L_7, L_9, NULL);
		goto IL_004e;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003d;
		}
		throw e;
	}

CATCH_003d:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_10 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_004e:
	{
		return;
	}
}
// Method Definition Index: 46590
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_Insert_mBC54A26C6F0E399B3F561C6DF8F3B9D1C98FE966_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 46591
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_get_Item_m5173E4BD7B02D382B2B32E0923229917AE3D9577_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tEB96A977159351D0F21BC37F853A4450F0186BAF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_tEB96A977159351D0F21BC37F853A4450F0186BAF);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_0 = __this->____dict;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		SortedList_2_GetByIndex_m8F670B827EDAA9EEFB55A297CA13A7AB2CFF88BE(L_0, L_1, (Il2CppFullySharedGenericAny*)L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_TValue_tEB96A977159351D0F21BC37F853A4450F0186BAF);
		return;
	}
}
// Method Definition Index: 46592
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_set_Item_m869CA78BA9EB57420157D5E679471E2EA6C47026_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 46593
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueList_GetEnumerator_m25BD80629D9760A9744D9B81158F18A85175C9E8_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_0 = __this->____dict;
		SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5* L_1 = (SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
		SortedListValueEnumerator__ctor_m49729BD3935CBB2BA5644074243E7BFD4FEF92D6(L_1, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 46594
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueList_System_Collections_IEnumerable_GetEnumerator_m523835E68A649318005301E09B00A414C6798C03_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_0 = __this->____dict;
		SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5* L_1 = (SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
		SortedListValueEnumerator__ctor_m49729BD3935CBB2BA5644074243E7BFD4FEF92D6(L_1, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 46595
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueList_IndexOf_mE41B2A247869F447F7293C38E26EF6E9F89FA2FE_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tEB96A977159351D0F21BC37F853A4450F0186BAF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_tEB96A977159351D0F21BC37F853A4450F0186BAF);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_tEB96A977159351D0F21BC37F853A4450F0186BAF);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_0 = __this->____dict;
		NullCheck(L_0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = L_0->___values;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? ___0_value : &___0_value), SizeOf_TValue_tEB96A977159351D0F21BC37F853A4450F0186BAF);
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_3 = __this->____dict;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_inline(L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		int32_t L_6;
		L_6 = Array_IndexOf_TisIl2CppFullySharedGenericAny_mA7F15146F50A93EE31005CC7C2C28B7DB0CE5708(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? il2cpp_codegen_memcpy(L_5, L_2, SizeOf_TValue_tEB96A977159351D0F21BC37F853A4450F0186BAF): *(void**)L_2), 0, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		return L_6;
	}
}
// Method Definition Index: 46596
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueList_Remove_mDBF6F9DC2C263661D737060644D556E089464BE7_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 46597
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_RemoveAt_m779395C83FBE56171C283BDCB5EDA8979C14295C_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 46431
// Method Definition Index: 46432
// Method Definition Index: 46433
// Method Definition Index: 46434
// Method Definition Index: 46435
// Method Definition Index: 46436
// Method Definition Index: 46437
// Method Definition Index: 46438
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11188
// Method Definition Index: 11189
// Method Definition Index: 11190
// Method Definition Index: 11191
// Method Definition Index: 11192
// Method Definition Index: 11193
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 46431
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1__ctor_mAFC9E903F63FD93D370EC5A4BE96A53F3778256B_fshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_initialSpan, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_0 = ___0_initialSpan;
		__this->____span = L_0;
		__this->____arrayFromPool = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
		__this->____pos = 0;
		return;
	}
}
// Method Definition Index: 46432
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueListBuilder_1_get_Length_mF8F23A327A1B4D211BFE3D5A78A31D5861B36BCF_fshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____pos;
		return L_0;
	}
}
// Method Definition Index: 46433
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* ValueListBuilder_1_get_Item_mA8603140DF41A28E02364AEE9AA9DCA424797BDD_fshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_0 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_1 = ___0_index;
		Il2CppFullySharedGenericAny* L_2;
		L_2 = Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_inline(L_0, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		return L_2;
	}
}
// Method Definition Index: 46434
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Append_m8E0893D16DEF47E8D8F9689662927E8C34597BFE_fshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____pos;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_2 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_3;
		L_3 = Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_inline(L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		ValueListBuilder_1_Grow_mFCD86126D0C9043BB696B8FF5219C4508DE2BA67(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	}

IL_001b:
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_4 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_5 = V_0;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_inline(L_4, L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)) ? ___0_item : &___0_item), SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_6, L_7, SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), (void**)(Il2CppFullySharedGenericAny*)L_6, (void*)L_7);
		int32_t L_8 = V_0;
		__this->____pos = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
// Method Definition Index: 46435
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ValueListBuilder_1_AsSpan_mF5CBC7C2E1B20F3A4ABC0DD44A535D30E70A9834_fshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_0 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_1 = __this->____pos;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2;
		L_2 = Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_inline(L_0, 0, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_3;
		L_3 = Span_1_op_Implicit_m704A5B9FD25EEA23756181A8EB40B875387A6C01(L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		return L_3;
	}
}
// Method Definition Index: 46436
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Dispose_m95D1F578E53DD38ABC79F6837BE0D50A1512F6B2_fshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArrayPool_1_t58F3AC60669102F215C83BF8491B2CFFADF20417_StaticInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____arrayFromPool;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_t58F3AC60669102F215C83BF8491B2CFFADF20417_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* L_1;
		L_1 = ArrayPool_1_get_Shared_mED246B652823A7EEE39710F52F14E8B0453C2C85_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____arrayFromPool;
		NullCheck(L_1);
		VirtualActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, bool >::Invoke(5, L_1, L_2, (bool)0);
		__this->____arrayFromPool = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
	}

IL_0020:
	{
		return;
	}
}
// Method Definition Index: 46437
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Grow_mFCD86126D0C9043BB696B8FF5219C4508DE2BA67_fshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArrayPool_1_t58F3AC60669102F215C83BF8491B2CFFADF20417_StaticInit);
	//<source_info:<no-source>:1>
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_t58F3AC60669102F215C83BF8491B2CFFADF20417_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* L_0;
		L_0 = ArrayPool_1_get_Shared_mED246B652823A7EEE39710F52F14E8B0453C2C85_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_1 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_2;
		L_2 = Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_inline(L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		NullCheck(L_0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3;
		L_3 = VirtualFuncInvoker1< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(4, L_0, ((int32_t)il2cpp_codegen_multiply(L_2, 2)));
		V_0 = L_3;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_4 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_0;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_6;
		L_6 = Span_1_op_Implicit_mEAE085B1C884F71E5CF01E09CD6F285B497BBDE8(L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		bool L_7;
		L_7 = Span_1_TryCopyTo_m464C81DB101113B73DCD3F43C757D672CD893B37(L_4, L_6, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____arrayFromPool;
		V_1 = L_8;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = L_9;
		V_2 = L_10;
		__this->____arrayFromPool = L_10;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_2;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_12;
		L_12 = Span_1_op_Implicit_mEAE085B1C884F71E5CF01E09CD6F285B497BBDE8(L_11, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		__this->____span = L_12;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = V_1;
		if (!L_13)
		{
			goto IL_0055;
		}
	}
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_t58F3AC60669102F215C83BF8491B2CFFADF20417_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* L_14;
		L_14 = ArrayPool_1_get_Shared_mED246B652823A7EEE39710F52F14E8B0453C2C85_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = V_1;
		NullCheck(L_14);
		VirtualActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, bool >::Invoke(5, L_14, L_15, (bool)0);
	}

IL_0055:
	{
		return;
	}
}
// Method Definition Index: 46438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Pop_mB67E702E623E6BACDF0BEB363EB6D323901B33FE_fshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____pos;
		__this->____pos = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_1 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_2 = __this->____pos;
		Il2CppFullySharedGenericAny* L_3;
		L_3 = Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_inline(L_1, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		il2cpp_codegen_memcpy(L_4, L_3, SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B);
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
// Method Definition Index: 11188
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1__ctor_mD40F35A1E8A77256DDB679DDB93D3C2AC5098311_fshared (ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_initialSpan, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_0 = ___0_initialSpan;
		__this->____span = L_0;
		__this->____arrayFromPool = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
		__this->____pos = 0;
		return;
	}
}
// Method Definition Index: 11189
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueListBuilder_1_get_Length_m2C33CA4B73AB5424991AF6FB060EC12451E41CE5_fshared (ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____pos;
		return L_0;
	}
}
// Method Definition Index: 11190
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Append_m33FE48C9A574ECCCA152F8839103014923723A5F_fshared (ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tB83FC5D3083B7C93055ECBAE4EF8D18837DBF538 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_tB83FC5D3083B7C93055ECBAE4EF8D18837DBF538);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____pos;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_2 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_3;
		L_3 = Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_inline(L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		ValueListBuilder_1_Grow_m4786BBA84ADC1CF9A21AF8073F017C958B3292E0(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	}

IL_001b:
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_4 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_5 = V_0;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_inline(L_4, L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)) ? ___0_item : &___0_item), SizeOf_T_tB83FC5D3083B7C93055ECBAE4EF8D18837DBF538);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_6, L_7, SizeOf_T_tB83FC5D3083B7C93055ECBAE4EF8D18837DBF538);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), (void**)(Il2CppFullySharedGenericAny*)L_6, (void*)L_7);
		int32_t L_8 = V_0;
		__this->____pos = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
// Method Definition Index: 11191
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ValueListBuilder_1_AsSpan_m3FA086A9E9029716DEEB2449B36D1BF768A27047_fshared (ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_0 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_1 = __this->____pos;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2;
		L_2 = Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_inline(L_0, 0, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_3;
		L_3 = Span_1_op_Implicit_m704A5B9FD25EEA23756181A8EB40B875387A6C01(L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		return L_3;
	}
}
// Method Definition Index: 11192
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Dispose_mB50AB010F3A50CC265634CED281E90DFBFBA04EC_fshared (ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArrayPool_1_t9B79E00CA232D419E87B553DAD20CC5DEFBB6F96_StaticInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____arrayFromPool;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_t9B79E00CA232D419E87B553DAD20CC5DEFBB6F96_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* L_1;
		L_1 = ArrayPool_1_get_Shared_mED246B652823A7EEE39710F52F14E8B0453C2C85_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____arrayFromPool;
		NullCheck(L_1);
		VirtualActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, bool >::Invoke(5, L_1, L_2, (bool)0);
		__this->____arrayFromPool = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
	}

IL_0020:
	{
		return;
	}
}
// Method Definition Index: 11193
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Grow_m4786BBA84ADC1CF9A21AF8073F017C958B3292E0_fshared (ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArrayPool_1_t9B79E00CA232D419E87B553DAD20CC5DEFBB6F96_StaticInit);
	//<source_info:<no-source>:1>
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_t9B79E00CA232D419E87B553DAD20CC5DEFBB6F96_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* L_0;
		L_0 = ArrayPool_1_get_Shared_mED246B652823A7EEE39710F52F14E8B0453C2C85_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_1 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_2;
		L_2 = Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_inline(L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		NullCheck(L_0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3;
		L_3 = VirtualFuncInvoker1< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(4, L_0, ((int32_t)il2cpp_codegen_multiply(L_2, 2)));
		V_0 = L_3;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_4 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_0;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_6;
		L_6 = Span_1_op_Implicit_mEAE085B1C884F71E5CF01E09CD6F285B497BBDE8(L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		bool L_7;
		L_7 = Span_1_TryCopyTo_m464C81DB101113B73DCD3F43C757D672CD893B37(L_4, L_6, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____arrayFromPool;
		V_1 = L_8;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = L_9;
		V_2 = L_10;
		__this->____arrayFromPool = L_10;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_2;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_12;
		L_12 = Span_1_op_Implicit_mEAE085B1C884F71E5CF01E09CD6F285B497BBDE8(L_11, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		__this->____span = L_12;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = V_1;
		if (!L_13)
		{
			goto IL_0055;
		}
	}
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_t9B79E00CA232D419E87B553DAD20CC5DEFBB6F96_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* L_14;
		L_14 = ArrayPool_1_get_Shared_mED246B652823A7EEE39710F52F14E8B0453C2C85_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = V_1;
		NullCheck(L_14);
		VirtualActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, bool >::Invoke(5, L_14, L_15, (bool)0);
	}

IL_0055:
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
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
// Method Definition Index: 19929
// Method Definition Index: 19930
// Method Definition Index: 19931
// Method Definition Index: 19932
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 19928
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueProperty_get_Name_mEE4543917989B189DBE0B37F2B2D318DDC659C06_fshared (ValueProperty_t4D9BB595BCCF981819A498C3E15E14DF3EC7B633* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 62539));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 62540));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Style/StyleValue.PropertyBag.cs:11>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 62541));
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 19929
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueProperty_get_IsReadOnly_m89A5C7ECCEF289CFD867DA302BB30478D4EB49FA_fshared (ValueProperty_t4D9BB595BCCF981819A498C3E15E14DF3EC7B633* __this, const RuntimeMethod* method) 
{
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 62542));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 62543));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Style/StyleValue.PropertyBag.cs:12>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 62544));
		bool L_0 = __this->___U3CIsReadOnlyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 19930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueProperty_GetValue_m832A396A16CFB367B33AE9BF37B2DD582AE2D85D_fshared (ValueProperty_t4D9BB595BCCF981819A498C3E15E14DF3EC7B633* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
	const uint32_t SizeOf_TValue_t3E6D7FA594FC1EB08E16B873D7EE967923E4E0EA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_t3E6D7FA594FC1EB08E16B873D7EE967923E4E0EA);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 62545));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 62546));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Style/StyleValue.PropertyBag.cs:13>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 62547));
		Il2CppFullySharedGenericAny* L_0 = ___0_container;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 62548));
		Il2CppConstrainedCallData L_2;
		Il2CppMethodPointer L_3 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0), (void*)L_0, &L_2, L_1);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(L_3, L_2.method,L_2.thisPtr,(Il2CppFullySharedGenericAny*)L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 62548));
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_TValue_t3E6D7FA594FC1EB08E16B873D7EE967923E4E0EA);
		return;
	}
}
// Method Definition Index: 19931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueProperty_SetValue_m38F027F0F44418852F03AAAC9FD9A393E4F76883_fshared (ValueProperty_t4D9BB595BCCF981819A498C3E15E14DF3EC7B633* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t3E6D7FA594FC1EB08E16B873D7EE967923E4E0EA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	void* L_2 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t3E6D7FA594FC1EB08E16B873D7EE967923E4E0EA);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_container), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? ___1_value : &___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 62549));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 62550));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Style/StyleValue.PropertyBag.cs:14>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 62551));
		Il2CppFullySharedGenericAny* L_0 = ___0_container;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? ___1_value : &___1_value), SizeOf_TValue_t3E6D7FA594FC1EB08E16B873D7EE967923E4E0EA);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 62552));
		Il2CppConstrainedCallData L_3;
		Il2CppMethodPointer L_4 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), (void*)L_0, &L_3, L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(L_4, L_3.method,L_3.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? L_1: *(void**)L_1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 62552));
		return;
	}
}
// Method Definition Index: 19932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueProperty__ctor_m468F22F1578564692A2E5570085DAC4D7AD2B69F_fshared (ValueProperty_t4D9BB595BCCF981819A498C3E15E14DF3EC7B633* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 62553));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 62554));
	{
		//<source_info:/home/bokken/build/output/unity/unity/Modules/UIElements/Core/Style/StyleValue.PropertyBag.cs:11>
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 62555));
		__this->___U3CNameU3Ek__BackingField = _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField), (void*)_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 62556));
		Property_2__ctor_m1B14349D578BF83C39983D2898529964F8906986((Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 62556));
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
// Method Definition Index: 8246
// Method Definition Index: 8247
// Method Definition Index: 8248
// Method Definition Index: 8249
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 8246
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTaskAwaiter_1__ctor_m7A5127CE080DF8BE37A788EFDE4C6EBED02FEA93_fshared (ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C* __this, ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7 ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTask_1_t5B6C1435DE66606FAB27271E78C1FFE429887EDF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7 L_0 = alloca(SizeOf_ValueTask_1_t5B6C1435DE66606FAB27271E78C1FFE429887EDF);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, ___0_value, SizeOf_ValueTask_1_t5B6C1435DE66606FAB27271E78C1FFE429887EDF);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0, SizeOf_ValueTask_1_t5B6C1435DE66606FAB27271E78C1FFE429887EDF);
		return;
	}
}
// Method Definition Index: 8247
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTaskAwaiter_1_get_IsCompleted_mA84942EAB1D2CE8ACE5BFA8378E9ED7E1D8971EB_fshared (ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0;
		L_0 = ValueTask_1_get_IsCompleted_m6FC365DA579395B0B09E0A33A77AF97D29DDE383_inline((((ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		return L_0;
	}
}
// Method Definition Index: 8248
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTaskAwaiter_1_GetResult_m8973CE2E1FCAD6916DD9B366CE71B5078BC019AF_fshared (ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TResult_t425206BAA7A9EFA9DC0D1FF84F6E9CAAAC75C5DE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t425206BAA7A9EFA9DC0D1FF84F6E9CAAAC75C5DE);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ValueTask_1_get_Result_m4C8284BCA2ADC4FF77D6594A1056775D523ACC82_inline((((ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))), (Il2CppFullySharedGenericAny*)L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TResult_t425206BAA7A9EFA9DC0D1FF84F6E9CAAAC75C5DE);
		return;
	}
}
// Method Definition Index: 8249
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTaskAwaiter_1_UnsafeOnCompleted_m80446D0C780C1396A45604E48D89DBE5BD3DA2AD_fshared (ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_StaticInit);
	CHECKED_LOCAL(ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_1 = NULL;
	TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer((((ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		V_1 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)));
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3 = V_1;
		NullCheck(L_3);
		TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 L_4;
		L_4 = Task_1_GetAwaiter_mADB36AF74C602F4C81E4752994696EA21CB0C0B6(L_3, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		V_2 = L_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ___0_continuation;
		TaskAwaiter_1_UnsafeOnCompleted_m8B9DC9D7FF95BB8129F4A5D5CF2DF0AE62E081E3((&V_2), L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return;
	}

IL_0026:
	{
		RuntimeObject* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		RuntimeObject* L_7 = V_0;
		RuntimeObject* L_8;
		L_8 = il2cpp_unsafe_as<RuntimeObject*>(L_7);
		CHECKED_LOCAL_INIT(ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_StaticInit,(ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_9 = ((ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_StaticFields*)il2cpp_codegen_static_fields_for(ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_il2cpp_TypeInfo_var))->___s_invokeActionDelegate;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = ___0_continuation;
		int16_t L_11 = *(int16_t*)il2cpp_codegen_get_field_data_pointer((((ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		NullCheck(L_8);
		InterfaceActionInvoker4< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t, int32_t >::Invoke(1, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11), L_8, L_9, L_10, L_11, 1);
		return;
	}

IL_0047:
	{
		CHECKED_LOCAL_INIT(ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F_StaticInit,(ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_12;
		L_12 = ValueTask_get_CompletedTask_m420F6BE3426808DE6345091B4A871BFABD0354DD(NULL);
		NullCheck(L_12);
		TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_13;
		L_13 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_12, NULL);
		V_3 = L_13;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = ___0_continuation;
		TaskAwaiter_UnsafeOnCompleted_mF1081A8F37EBEA02847BAE72365A1F65DAA932D7((&V_3), L_14, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTaskAwaiter_1_UnsafeOnCompleted_m80446D0C780C1396A45604E48D89DBE5BD3DA2AD_AdjustorThunk (RuntimeObject* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C>(__this);
	ValueTaskAwaiter_1_UnsafeOnCompleted_m80446D0C780C1396A45604E48D89DBE5BD3DA2AD(_thisAdjusted, ___0_continuation, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 4886
// Method Definition Index: 4887
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 4886
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTaskSourceAsTask__ctor_m3BE8717538FBF453B0CCD935964EF68F6862FB77_fshared (ValueTaskSourceAsTask_t237F990EF6E1CF9ECBF8EE2A9D5AB8804FF2B03D* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(ValueTaskSourceAsTask_tE92F11505E64F24ACC3D25BC0AD76C2A7BCE7431_StaticInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1__ctor_mDCE1AA2DD475DA25C27EEB18A9E46958ED5ECE74((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2), L_0);
		int16_t L_1 = ___1_token;
		il2cpp_codegen_write_field_data<int16_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_1);
		RuntimeObject* L_2 = ___0_source;
		CHECKED_LOCAL_INIT(ValueTaskSourceAsTask_tE92F11505E64F24ACC3D25BC0AD76C2A7BCE7431_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ValueTaskSourceAsTask_t237F990EF6E1CF9ECBF8EE2A9D5AB8804FF2B03D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)))->___s_completionAction;
		int16_t L_4 = ___1_token;
		NullCheck(L_2);
		InterfaceActionInvoker4< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t, int32_t >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 5), L_2, L_3, (RuntimeObject*)__this, L_4, 0);
		return;
	}
}
// Method Definition Index: 4887
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTaskSourceAsTask__cctor_mD4189D3A0B29C74D81D36ABBBA547DB2D95F35E0_fshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_t1619855A58FCADF0C4D9845273C210FF396A6827_StaticInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t1619855A58FCADF0C4D9845273C210FF396A6827_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t480A27B14DEE658FD5CD4792E8FDC35EFA01C8A7* L_0 = ((U3CU3Ec_t480A27B14DEE658FD5CD4792E8FDC35EFA01C8A7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), NULL);
		((ValueTaskSourceAsTask_t237F990EF6E1CF9ECBF8EE2A9D5AB8804FF2B03D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_completionAction = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ValueTaskSourceAsTask_t237F990EF6E1CF9ECBF8EE2A9D5AB8804FF2B03D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_completionAction), (void*)L_1);
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
// Method Definition Index: 4873
// Method Definition Index: 4874
// Method Definition Index: 4875
// Method Definition Index: 4876
// Method Definition Index: 4877
// Method Definition Index: 4878
// Method Definition Index: 4879
// Method Definition Index: 4880
// Method Definition Index: 4881
// Method Definition Index: 4882
// Method Definition Index: 4883
// Method Definition Index: 4884
// Method Definition Index: 4885
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 4873
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTask_1__ctor_m8346EDD752A97883147D3BC8685D3DA45F1CAD19_fshared (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? ___0_result : &___0_result), SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0, SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), NULL);
		il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),4), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), (bool)1);
		il2cpp_codegen_write_field_data<int16_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), (int16_t)0);
		return;
	}
}
// Method Definition Index: 4874
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTask_1__ctor_mB12720B6617FD51550F36A5DDA1FB5B905F8931A_fshared (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___0_task, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_0 = ___0_task;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)38), NULL);
	}

IL_000a:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_1 = ___0_task;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (RuntimeObject*)L_1);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))), SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
		il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),4), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), (bool)1);
		il2cpp_codegen_write_field_data<int16_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), (int16_t)0);
		return;
	}
}
// Method Definition Index: 4875
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTask_1__ctor_m6290E5FE79CCE71C6983D5D86933A41BFB4BDEE0_fshared (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(((int32_t)39), NULL);
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_source;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (RuntimeObject*)L_1);
		int16_t L_2 = ___1_token;
		il2cpp_codegen_write_field_data<int16_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_2);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))), SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
		il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),4), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), (bool)1);
		return;
	}
}
// Method Definition Index: 4876
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTask_1_GetHashCode_m8000CE1DEAB0FA01A6ECB8A08BE19213A970D73E_fshared (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	void* L_4 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
	const Il2CppFullySharedGenericAny L_3 = L_1;
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
	memset(V_0, 0, SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_1);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
		Il2CppConstrainedCallData L_5;
		Il2CppMethodPointer L_6 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), (void*)(Il2CppFullySharedGenericAny*)V_0, &L_5, L_4);
		typedef int32_t ( *func_L_7)(void*,const RuntimeMethod*);
		int32_t L_8 = ((func_L_7)L_6)(L_5.thisPtr,L_5.method);
		return L_8;
	}

IL_002c:
	{
		RuntimeObject* L_9 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_9);
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTask_1_GetHashCode_m8000CE1DEAB0FA01A6ECB8A08BE19213A970D73E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7>(__this);
	int32_t _returnValue;
	_returnValue = ValueTask_1_GetHashCode_m8000CE1DEAB0FA01A6ECB8A08BE19213A970D73E(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 4877
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTask_1_Equals_mABC4FB221AC4A671D4DFADEF992B569AD2C30A9D_fshared (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTask_1_t2C72A25627C2D2E0DAF97FE3951B2929CC7D476D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7 L_2 = alloca(SizeOf_ValueTask_1_t2C72A25627C2D2E0DAF97FE3951B2929CC7D476D);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_3;
		L_3 = ValueTask_1_Equals_mD5BF0BE72581594DA92F59B348593443F6DF6950(__this, il2cpp_codegen_memcpy(L_2, (((ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7)(ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTask_1_t2C72A25627C2D2E0DAF97FE3951B2929CC7D476D), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTask_1_Equals_mABC4FB221AC4A671D4DFADEF992B569AD2C30A9D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7>(__this);
	bool _returnValue;
	_returnValue = ValueTask_1_Equals_mABC4FB221AC4A671D4DFADEF992B569AD2C30A9D(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// Method Definition Index: 4878
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTask_1_Equals_mD5BF0BE72581594DA92F59B348593443F6DF6950_fshared (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTask_1_t2C72A25627C2D2E0DAF97FE3951B2929CC7D476D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
	const ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7 L_1 = alloca(SizeOf_ValueTask_1_t2C72A25627C2D2E0DAF97FE3951B2929CC7D476D);
	const ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7 L_5 = L_1;
	const ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7 L_9 = L_1;
	const ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7 L_12 = L_1;
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, ___0_other, SizeOf_ValueTask_1_t2C72A25627C2D2E0DAF97FE3951B2929CC7D476D);
		RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(L_1, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
		il2cpp_codegen_memcpy(L_5, ___0_other, SizeOf_ValueTask_1_t2C72A25627C2D2E0DAF97FE3951B2929CC7D476D);
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_field_data_pointer(L_5, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
		NullCheck(L_3);
		bool L_7;
		L_7 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_4: *(void**)L_4), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_6: *(void**)L_6));
		return L_7;
	}

IL_0027:
	{
		RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		il2cpp_codegen_memcpy(L_9, ___0_other, SizeOf_ValueTask_1_t2C72A25627C2D2E0DAF97FE3951B2929CC7D476D);
		RuntimeObject* L_10 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(L_9, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((!(((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)L_10))))
		{
			goto IL_0044;
		}
	}
	{
		int16_t L_11 = *(int16_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		il2cpp_codegen_memcpy(L_12, ___0_other, SizeOf_ValueTask_1_t2C72A25627C2D2E0DAF97FE3951B2929CC7D476D);
		int16_t L_13 = *(int16_t*)il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return (bool)((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
	}

IL_0044:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTask_1_Equals_mD5BF0BE72581594DA92F59B348593443F6DF6950_AdjustorThunk (RuntimeObject* __this, ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7 ___0_other, const RuntimeMethod* method)
{
	ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7>(__this);
	bool _returnValue;
	_returnValue = ValueTask_1_Equals_mD5BF0BE72581594DA92F59B348593443F6DF6950(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// Method Definition Index: 4879
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ValueTask_1_AsTask_m7982AD4E459905FB552E2E531A534C2F828B56E5_fshared (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t5A0EE3C0F498D5354E5B5E24D3DFBFA09DA93E5A_StaticInit);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t5A0EE3C0F498D5354E5B5E24D3DFBFA09DA93E5A_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_4;
		L_4 = AsyncTaskMethodBuilder_1_GetTaskForResult_m8210EDCCA4F113BD4377A4433475A9E6D39E6CFC((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? il2cpp_codegen_memcpy(L_3, L_2, SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989): *(void**)L_2), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		return L_4;
	}

IL_0016:
	{
		RuntimeObject* L_5 = V_0;
		V_1 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)IsInstClass((RuntimeObject*)L_5, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)));
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_7 = V_1;
		return L_7;
	}

IL_0022:
	{
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9;
		L_9 = il2cpp_unsafe_as<RuntimeObject*>(L_8);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_10;
		L_10 = ValueTask_1_GetTaskForValueTaskSource_mEAEF30AE4C3EF71CCAED02D41A6B9D9E88A74915(__this, L_9, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		return L_10;
	}
}
// Method Definition Index: 4880
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ValueTask_1_GetTaskForValueTaskSource_mEAEF30AE4C3EF71CCAED02D41A6B9D9E88A74915_fshared (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, RuntimeObject* ___0_t, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	CHECKED_LOCAL(AsyncTaskMethodBuilder_1_t5A0EE3C0F498D5354E5B5E24D3DFBFA09DA93E5A_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_1 = NULL;
	Exception_t* V_2 = NULL;
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_3 = NULL;
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_4 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_t;
		int16_t L_1 = *(int16_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_0076;
		}
	}
	try
	{
		STORE_TRY_ID(methodExecutionContext, 0);
		RuntimeObject* L_4 = ___0_t;
		int16_t L_5 = *(int16_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		NullCheck(L_4);
		InterfaceActionInvoker2Invoker< int16_t, Il2CppFullySharedGenericAny* >::Invoke(2, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_4, L_5, (Il2CppFullySharedGenericAny*)L_6);
		CHECKED_LOCAL_INIT(AsyncTaskMethodBuilder_1_t5A0EE3C0F498D5354E5B5E24D3DFBFA09DA93E5A_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_8;
		L_8 = AsyncTaskMethodBuilder_1_GetTaskForResult_m8210EDCCA4F113BD4377A4433475A9E6D39E6CFC((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? il2cpp_codegen_memcpy(L_7, L_6, SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989): *(void**)L_6), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		V_1 = L_8;
		goto IL_0083;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0024;
		}
		throw e;
	}

CATCH_0024:
	{
		STORE_TRY_ID(methodExecutionContext, -1);
		{
			Exception_t* L_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_2 = L_9;
			int32_t L_10 = V_0;
			if ((!(((uint32_t)L_10) == ((uint32_t)3))))
			{
				goto IL_006d;
			}
		}
		{
			Exception_t* L_11 = V_2;
			V_3 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_11, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))));
			OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_12 = V_3;
			if (!L_12)
			{
				goto IL_0049;
			}
		}
		{
			Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_13 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
			Task_1__ctor_mDCE1AA2DD475DA25C27EEB18A9E46958ED5ECE74(L_13, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18));
			Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_14 = L_13;
			OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_15 = V_3;
			NullCheck(L_15);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_16;
			L_16 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_15, NULL);
			OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_17 = V_3;
			NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_14);
			bool L_18;
			L_18 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_14, L_16, L_17, NULL);
			V_1 = L_14;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0083;
		}

IL_0049:
		{
			Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_19 = ((ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_canceledTask;
			V_4 = L_19;
			Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_20 = V_4;
			if (L_20)
			{
				goto IL_0068;
			}
		}
		{
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_21;
			memset((&L_21), 0, sizeof(L_21));
			CancellationToken__ctor_m5DAD339D4A9DEF9962B7EF1E30564BADC78E9BD6((&L_21), (bool)1, NULL);
			CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
			Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_22;
			L_22 = Task_FromCanceled_TisIl2CppFullySharedGenericAny_m6FA2A9DC4ECF7A21441B961F86A94873F5C015C9(L_21, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
			V_4 = L_22;
			Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_23 = V_4;
			((ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_canceledTask = L_23;
			Il2CppCodeGenWriteBarrier((void**)(&((ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_canceledTask), (void*)L_23);
		}

IL_0068:
		{
			Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_24 = V_4;
			V_1 = L_24;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0083;
		}

IL_006d:
		{
			Exception_t* L_25 = V_2;
			CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
			Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_26;
			L_26 = Task_FromException_TisIl2CppFullySharedGenericAny_m5424F2AE940D86E928CD58A721AA25BDAF2A7229(L_25, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20));
			V_1 = L_26;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0083;
		}
	}

IL_0076:
	{
		RuntimeObject* L_27 = ___0_t;
		int16_t L_28 = *(int16_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		ValueTaskSourceAsTask_t237F990EF6E1CF9ECBF8EE2A9D5AB8804FF2B03D* L_29 = (ValueTaskSourceAsTask_t237F990EF6E1CF9ECBF8EE2A9D5AB8804FF2B03D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21));
		ValueTaskSourceAsTask__ctor_m3BE8717538FBF453B0CCD935964EF68F6862FB77(L_29, L_27, L_28, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 22));
		return (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)L_29;
	}

IL_0083:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_30 = V_1;
		return L_30;
	}
}
// Method Definition Index: 4881
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTask_1_get_IsCompleted_m6FC365DA579395B0B09E0A33A77AF97D29DDE383_fshared (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		RuntimeObject* L_2 = V_0;
		V_1 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)));
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_4 = V_1;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_4);
		bool L_5;
		L_5 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_4, NULL);
		return L_5;
	}

IL_001d:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = il2cpp_unsafe_as<RuntimeObject*>(L_6);
		int16_t L_8 = *(int16_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_7, L_8);
		return (bool)((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
	}
}
// Method Definition Index: 4882
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTask_1_get_IsCompletedSuccessfully_m951AC7136DB7D58F31DC79344D3C51412D4744DA_fshared (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		RuntimeObject* L_2 = V_0;
		V_1 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)));
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_4 = V_1;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_4);
		bool L_5;
		L_5 = Task_get_IsCompletedSuccessfully_m8A0797317734CF69DA5DB2CC2E87AA8F5D43154C((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_4, NULL);
		return L_5;
	}

IL_001d:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = il2cpp_unsafe_as<RuntimeObject*>(L_6);
		int16_t L_8 = *(int16_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_7, L_8);
		return (bool)((((int32_t)L_9) == ((int32_t)1))? 1 : 0);
	}
}
// Method Definition Index: 4883
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTask_1_get_Result_m4C8284BCA2ADC4FF77D6594A1056775D523ACC82_fshared (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
	const Il2CppFullySharedGenericAny L_7 = L_2;
	const Il2CppFullySharedGenericAny L_11 = L_2;
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
		return;
	}

IL_0011:
	{
		RuntimeObject* L_3 = V_0;
		V_1 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)));
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_5 = V_1;
		TaskAwaiter_ValidateEnd_m6BB967A466C17A106BC547009EDE196266651751((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5, NULL);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_6 = V_1;
		NullCheck(L_6);
		Task_1_get_ResultOnSuccess_m3011E88558BA75C4AFAFF5208B29744561BCECAC_inline(L_6, (Il2CppFullySharedGenericAny*)L_7, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 23));
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
		return;
	}

IL_0028:
	{
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9;
		L_9 = il2cpp_unsafe_as<RuntimeObject*>(L_8);
		int16_t L_10 = *(int16_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		NullCheck(L_9);
		InterfaceActionInvoker2Invoker< int16_t, Il2CppFullySharedGenericAny* >::Invoke(2, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_9, L_10, (Il2CppFullySharedGenericAny*)L_11);
		il2cpp_codegen_memcpy(il2cppRetVal, L_11, SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
		return;
	}
}
// Method Definition Index: 4884
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTask_1_GetAwaiter_mEA7FB0067672E57AAD8A0299D0B90B4C32914B50_fshared (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTask_1_t2C72A25627C2D2E0DAF97FE3951B2929CC7D476D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_ValueTaskAwaiter_1_tDF83CC3203A3899BE80F878528185F6D8A1912D1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 24));
	const ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C L_2 = alloca(SizeOf_ValueTaskAwaiter_1_tDF83CC3203A3899BE80F878528185F6D8A1912D1);
	const ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7 L_0 = alloca(SizeOf_ValueTask_1_t2C72A25627C2D2E0DAF97FE3951B2929CC7D476D);
	const ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7 L_1 = alloca(SizeOf_ValueTask_1_t2C72A25627C2D2E0DAF97FE3951B2929CC7D476D);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, __this, SizeOf_ValueTask_1_t2C72A25627C2D2E0DAF97FE3951B2929CC7D476D);
		memset(L_2, 0, SizeOf_ValueTaskAwaiter_1_tDF83CC3203A3899BE80F878528185F6D8A1912D1);
		ValueTaskAwaiter_1__ctor_m7A5127CE080DF8BE37A788EFDE4C6EBED02FEA93_inline((ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C*)L_2, il2cpp_codegen_memcpy(L_1, L_0, SizeOf_ValueTask_1_t2C72A25627C2D2E0DAF97FE3951B2929CC7D476D), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 25));
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_ValueTaskAwaiter_1_tDF83CC3203A3899BE80F878528185F6D8A1912D1);
		return;
	}
}
// Method Definition Index: 4885
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTask_1_ToString_m4F52C632CA8530BBCAD18F1CE53FAF04011A4436_fshared (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	void* L_4 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
	memset(V_0, 0, SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0;
		L_0 = ValueTask_1_get_IsCompletedSuccessfully_m951AC7136DB7D58F31DC79344D3C51412D4744DA_inline(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 26));
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		ValueTask_1_get_Result_m4C8284BCA2ADC4FF77D6594A1056775D523ACC82_inline(__this, (Il2CppFullySharedGenericAny*)L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 27));
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_2);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		Il2CppConstrainedCallData L_5;
		Il2CppMethodPointer L_6 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 28), (void*)(Il2CppFullySharedGenericAny*)V_0, &L_5, L_4);
		typedef String_t* ( *func_L_7)(void*,const RuntimeMethod*);
		String_t* L_8 = ((func_L_7)L_6)(L_5.thisPtr,L_5.method);
		return L_8;
	}

IL_0025:
	{
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		return L_9;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTask_1_ToString_m4F52C632CA8530BBCAD18F1CE53FAF04011A4436_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7>(__this);
	String_t* _returnValue;
	_returnValue = ValueTask_1_ToString_m4F52C632CA8530BBCAD18F1CE53FAF04011A4436(_thisAdjusted, method);
	return _returnValue;
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
// Method Definition Index: 2911
// Method Definition Index: 2912
// Method Definition Index: 2913
// Method Definition Index: 2914
// Method Definition Index: 2915
// Method Definition Index: 2916
// Method Definition Index: 2917
// Method Definition Index: 2918
// Method Definition Index: 2919
// Method Definition Index: 2920
// Method Definition Index: 2921
// Method Definition Index: 2922
// Method Definition Index: 2923
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2911
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_1__ctor_m538A52BFBDA47CC5C05AEE670CAE9D0657D425CB_fshared (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, Il2CppFullySharedGenericAny ___0_item1, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0, SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		return;
	}
}
// Method Definition Index: 2912
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_1_Equals_mE31990E0876A75374263FD30DDB89A7D8B1E2D91_fshared (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF L_2 = alloca(SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_3;
		L_3 = ValueTuple_1_Equals_m744EA4C6D7198DA2A95179DB68116437BBC453E7(__this, il2cpp_codegen_memcpy(L_2, (((ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF)(ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_1_Equals_mE31990E0876A75374263FD30DDB89A7D8B1E2D91_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_1_Equals_mE31990E0876A75374263FD30DDB89A7D8B1E2D91(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// Method Definition Index: 2913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_1_Equals_m744EA4C6D7198DA2A95179DB68116437BBC453E7_fshared (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	const ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF L_2 = alloca(SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_3: *(void**)L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_1_Equals_m744EA4C6D7198DA2A95179DB68116437BBC453E7_AdjustorThunk (RuntimeObject* __this, ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF ___0_other, const RuntimeMethod* method)
{
	ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_1_Equals_m744EA4C6D7198DA2A95179DB68116437BBC453E7(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// Method Definition Index: 2914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_1_System_Collections_IStructuralEquatable_Equals_m478C9A5F2E5423A54F1B0A1D451BD86F90DD4EEE_fshared (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	const ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF L_6 = alloca(SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588);
	//<source_info:<no-source>:1>
	ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF V_0 = alloca(SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588);
	memset(V_0, 0, SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_other;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_other;
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF)(ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588);
		RuntimeObject* L_3 = ___1_comparer;
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_4);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_field_data_pointer(L_6, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_7);
		NullCheck(L_3);
		bool L_9;
		L_9 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_5, L_8);
		return L_9;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_1_System_Collections_IStructuralEquatable_Equals_m478C9A5F2E5423A54F1B0A1D451BD86F90DD4EEE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_1_System_Collections_IStructuralEquatable_Equals_m478C9A5F2E5423A54F1B0A1D451BD86F90DD4EEE(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
// Method Definition Index: 2915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_1_System_IComparable_CompareTo_m27BCDCCC04DBC7C71F96F97D759F4F8BDC3EB7E4_fshared (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	const ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF L_2 = alloca(SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588);
	const ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF L_11 = L_2;
	//<source_info:<no-source>:1>
	ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF V_0 = alloca(SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588);
	memset(V_0, 0, SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(L_3);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		RuntimeObject* L_8 = ___0_other;
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF)(ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*)UnBox(L_8, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588);
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_9;
		L_9 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588);
		il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_field_data_pointer(L_11, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		NullCheck(L_9);
		int32_t L_13;
		L_13 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_10: *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_12: *(void**)L_12));
		return L_13;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_1_System_IComparable_CompareTo_m27BCDCCC04DBC7C71F96F97D759F4F8BDC3EB7E4_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_1_System_IComparable_CompareTo_m27BCDCCC04DBC7C71F96F97D759F4F8BDC3EB7E4(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// Method Definition Index: 2916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_1_CompareTo_mFE3D3F1BBCCB23FF42959D2990AD177231EB7586_fshared (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	const ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF L_2 = alloca(SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_0;
		L_0 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_3: *(void**)L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_1_CompareTo_mFE3D3F1BBCCB23FF42959D2990AD177231EB7586_AdjustorThunk (RuntimeObject* __this, ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF ___0_other, const RuntimeMethod* method)
{
	ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_1_CompareTo_mFE3D3F1BBCCB23FF42959D2990AD177231EB7586(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// Method Definition Index: 2917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_1_System_Collections_IStructuralComparable_CompareTo_m2D3994A0A1930ABFBC788A619697E6EDA6507AEE_fshared (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	const ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF L_2 = alloca(SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588);
	const ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF L_12 = L_2;
	//<source_info:<no-source>:1>
	ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF V_0 = alloca(SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588);
	memset(V_0, 0, SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(L_3);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		RuntimeObject* L_8 = ___0_other;
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF)(ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF*)UnBox(L_8, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588);
		RuntimeObject* L_9 = ___1_comparer;
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_10);
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_ValueTuple_1_t37DEB467170FC2F7057DAF43C401031B17393588);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_13);
		NullCheck(L_9);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_9, L_11, L_14);
		return L_15;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_1_System_Collections_IStructuralComparable_CompareTo_m2D3994A0A1930ABFBC788A619697E6EDA6507AEE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_1_System_Collections_IStructuralComparable_CompareTo_m2D3994A0A1930ABFBC788A619697E6EDA6507AEE(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
// Method Definition Index: 2918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_1_GetHashCode_m0C86BD1C67D66BCAEB44D777CE0885CE0EF76BA6_fshared (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	memset(V_0, 0, SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	memset(G_B2_0, 0, SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_0);
		if (L_1)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
			goto IL_0029;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
	}
	{
		il2cpp_codegen_memcpy(L_2, G_B1_0, SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			goto IL_0029;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	}
	{
		return 0;
	}

IL_0029:
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), (void*)G_B3_0, &L_6, L_5);
		typedef int32_t ( *func_L_8)(void*,const RuntimeMethod*);
		int32_t L_9 = ((func_L_8)L_7)(L_6.thisPtr,L_6.method);
		return L_9;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_1_GetHashCode_m0C86BD1C67D66BCAEB44D777CE0885CE0EF76BA6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_1_GetHashCode_m0C86BD1C67D66BCAEB44D777CE0885CE0EF76BA6(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 2919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_1_System_Collections_IStructuralEquatable_GetHashCode_mEF47D4B715325E8733A2797A2DC4D80939E18565_fshared (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_comparer;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_1);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_1_System_Collections_IStructuralEquatable_GetHashCode_mEF47D4B715325E8733A2797A2DC4D80939E18565_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_1_System_Collections_IStructuralEquatable_GetHashCode_mEF47D4B715325E8733A2797A2DC4D80939E18565(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
// Method Definition Index: 2920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_1_System_IValueTupleInternal_GetHashCode_m8826B801A5B79BA75CBB3632593EF99E034E61B7_fshared (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___0_comparer;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_1);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_1_System_IValueTupleInternal_GetHashCode_m8826B801A5B79BA75CBB3632593EF99E034E61B7_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_1_System_IValueTupleInternal_GetHashCode_m8826B801A5B79BA75CBB3632593EF99E034E61B7(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
// Method Definition Index: 2921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_1_ToString_m5D2A8965564621C5442CBAC724FAB374EB61379A_fshared (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	memset(V_0, 0, SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	memset(G_B2_0, 0, SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	String_t* G_B2_1 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_0);
		if (L_1)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
			G_B3_1 = _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
			goto IL_002f;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
		G_B1_1 = _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
	}
	{
		il2cpp_codegen_memcpy(L_2, G_B1_0, SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			G_B3_1 = G_B1_1;
			goto IL_002f;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		G_B2_1 = G_B1_1;
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		goto IL_003a;
	}

IL_002f:
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), (void*)G_B3_0, &L_6, L_5);
		typedef String_t* ( *func_L_8)(void*,const RuntimeMethod*);
		String_t* L_9 = ((func_L_8)L_7)(L_6.thisPtr,L_6.method);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
	}

IL_003a:
	{
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B4_1, G_B4_0, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_1_ToString_m5D2A8965564621C5442CBAC724FAB374EB61379A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_1_ToString_m5D2A8965564621C5442CBAC724FAB374EB61379A(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 2922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_1_System_IValueTupleInternal_ToStringEnd_mC9A89165D4A8F414E8FF4B40B30386AAE4544751_fshared (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	memset(V_0, 0, SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	memset(G_B2_0, 0, SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	String_t* G_B4_0 = NULL;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_0);
		if (L_1)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
			goto IL_002a;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
	}
	{
		il2cpp_codegen_memcpy(L_2, G_B1_0, SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			goto IL_002a;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_t104843BD74F7E6ADD698448FBE261AF8CF0637AB);
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		goto IL_0035;
	}

IL_002a:
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), (void*)G_B3_0, &L_6, L_5);
		typedef String_t* ( *func_L_8)(void*,const RuntimeMethod*);
		String_t* L_9 = ((func_L_8)L_7)(L_6.thisPtr,L_6.method);
		G_B4_0 = L_9;
	}

IL_0035:
	{
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B4_0, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_1_System_IValueTupleInternal_ToStringEnd_mC9A89165D4A8F414E8FF4B40B30386AAE4544751_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_1_System_IValueTupleInternal_ToStringEnd_mC9A89165D4A8F414E8FF4B40B30386AAE4544751(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 2923
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_1_System_Runtime_CompilerServices_ITuple_get_Length_mDC15DE3BB4C0C1F78ED4090E77EFD093761C0C49_fshared (ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return 1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_1_System_Runtime_CompilerServices_ITuple_get_Length_mDC15DE3BB4C0C1F78ED4090E77EFD093761C0C49_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_1_System_Runtime_CompilerServices_ITuple_get_Length_mDC15DE3BB4C0C1F78ED4090E77EFD093761C0C49(_thisAdjusted, method);
	return _returnValue;
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
// Method Definition Index: 2924
// Method Definition Index: 2925
// Method Definition Index: 2926
// Method Definition Index: 2927
// Method Definition Index: 2928
// Method Definition Index: 2929
// Method Definition Index: 2930
// Method Definition Index: 2931
// Method Definition Index: 2932
// Method Definition Index: 2933
// Method Definition Index: 2934
// Method Definition Index: 2935
// Method Definition Index: 2936
// Method Definition Index: 2937
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2924
// Method Definition Index: 2925
// Method Definition Index: 2926
// Method Definition Index: 2927
// Method Definition Index: 2928
// Method Definition Index: 2929
// Method Definition Index: 2930
// Method Definition Index: 2931
// Method Definition Index: 2932
// Method Definition Index: 2933
// Method Definition Index: 2934
// Method Definition Index: 2935
// Method Definition Index: 2936
// Method Definition Index: 2937
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2924
// Method Definition Index: 2925
// Method Definition Index: 2926
// Method Definition Index: 2927
// Method Definition Index: 2928
// Method Definition Index: 2929
// Method Definition Index: 2930
// Method Definition Index: 2931
// Method Definition Index: 2932
// Method Definition Index: 2933
// Method Definition Index: 2934
// Method Definition Index: 2935
// Method Definition Index: 2936
// Method Definition Index: 2937
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 2272
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = __this->____cancellationToken;
		return L_0;
	}
}
// Method Definition Index: 46502
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_fshared_inline (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->____size;
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
// Method Definition Index: 11422
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* ArrayPool_1_get_Shared_mED246B652823A7EEE39710F52F14E8B0453C2C85_fshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArrayPool_1_tBCAECBD7E56D178C8C7A2FD7EB9C61B46E22C3C2_StaticInit);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_tBCAECBD7E56D178C8C7A2FD7EB9C61B46E22C3C2_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* L_0 = ((ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CSharedU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 4881
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTask_1_get_IsCompleted_m6FC365DA579395B0B09E0A33A77AF97D29DDE383_fshared_inline (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		RuntimeObject* L_2 = V_0;
		V_1 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)));
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_4 = V_1;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_4);
		bool L_5;
		L_5 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_4, NULL);
		return L_5;
	}

IL_001d:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = il2cpp_unsafe_as<RuntimeObject*>(L_6);
		int16_t L_8 = *(int16_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_7, L_8);
		return (bool)((!(((uint32_t)L_9) <= ((uint32_t)0)))? 1 : 0);
	}
}
// Method Definition Index: 4883
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTask_1_get_Result_m4C8284BCA2ADC4FF77D6594A1056775D523ACC82_fshared_inline (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
	const Il2CppFullySharedGenericAny L_7 = L_2;
	const Il2CppFullySharedGenericAny L_11 = L_2;
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
		return;
	}

IL_0011:
	{
		RuntimeObject* L_3 = V_0;
		V_1 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)));
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_5 = V_1;
		TaskAwaiter_ValidateEnd_m6BB967A466C17A106BC547009EDE196266651751((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5, NULL);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_6 = V_1;
		NullCheck(L_6);
		Task_1_get_ResultOnSuccess_m3011E88558BA75C4AFAFF5208B29744561BCECAC_inline(L_6, (Il2CppFullySharedGenericAny*)L_7, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 23));
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
		return;
	}

IL_0028:
	{
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9;
		L_9 = il2cpp_unsafe_as<RuntimeObject*>(L_8);
		int16_t L_10 = *(int16_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		NullCheck(L_9);
		InterfaceActionInvoker2Invoker< int16_t, Il2CppFullySharedGenericAny* >::Invoke(2, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_9, L_10, (Il2CppFullySharedGenericAny*)L_11);
		il2cpp_codegen_memcpy(il2cppRetVal, L_11, SizeOf_TResult_t9B46FC31F68BF50E83BC7F20855C5712FD925989);
		return;
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
// Method Definition Index: 4922
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Task_1_get_ResultOnSuccess_m3011E88558BA75C4AFAFF5208B29744561BCECAC_fshared_inline (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_t41C039D320FDB91B897BCFA3738010961AD7784C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t41C039D320FDB91B897BCFA3738010961AD7784C);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2)), SizeOf_TResult_t41C039D320FDB91B897BCFA3738010961AD7784C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TResult_t41C039D320FDB91B897BCFA3738010961AD7784C);
		return;
	}
}
// Method Definition Index: 8246
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueTaskAwaiter_1__ctor_m7A5127CE080DF8BE37A788EFDE4C6EBED02FEA93_fshared_inline (ValueTaskAwaiter_1_t6597E9523498E0248E24C991E4337AD999D5D05C* __this, ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7 ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTask_1_t5B6C1435DE66606FAB27271E78C1FFE429887EDF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7 L_0 = alloca(SizeOf_ValueTask_1_t5B6C1435DE66606FAB27271E78C1FFE429887EDF);
	//<source_info:<no-source>:1>
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		il2cpp_codegen_memcpy(L_0, ___0_value, SizeOf_ValueTask_1_t5B6C1435DE66606FAB27271E78C1FFE429887EDF);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0, SizeOf_ValueTask_1_t5B6C1435DE66606FAB27271E78C1FFE429887EDF);
		return;
	}
}
// Method Definition Index: 4882
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ValueTask_1_get_IsCompletedSuccessfully_m951AC7136DB7D58F31DC79344D3C51412D4744DA_fshared_inline (ValueTask_1_t0F0EE445D46F85FEC54EC1B5DD82D484EB19B4A7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		RuntimeObject* L_2 = V_0;
		V_1 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)IsInstClass((RuntimeObject*)L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)));
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_4 = V_1;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_4);
		bool L_5;
		L_5 = Task_get_IsCompletedSuccessfully_m8A0797317734CF69DA5DB2CC2E87AA8F5D43154C((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_4, NULL);
		return L_5;
	}

IL_001d:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = il2cpp_unsafe_as<RuntimeObject*>(L_6);
		int16_t L_8 = *(int16_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_7, L_8);
		return (bool)((((int32_t)L_9) == ((int32_t)1))? 1 : 0);
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
